/*
 * XREFs of SeSecurityAttributePresent @ 0x14008A320
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1402471D0 (SepVerifyDesktopAppxPackageName.c)
 *     PsQueryProcessAttributesByToken @ 0x1404F77A0 (PsQueryProcessAttributesByToken.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140031888 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepEqualUnicodeString @ 0x140089584 (AuthzBasepEqualUnicodeString.c)
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquireFastResourceShared @ 0x14014E540 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14014EA10 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

_BOOL8 __fastcall SeSecurityAttributePresent(__int64 a1, struct _KTHREAD *a2)
{
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rbx
  __int16 v6; // ax
  const void **v7; // rdi
  char v8; // r12
  __int64 v9; // r13
  const void **v10; // rbx
  const void **v11; // r15
  const void **v12; // rcx
  char v13; // al
  __int64 *v14; // r14
  unsigned __int8 CurrentIrql; // r8
  void *OwnerEntryForLegacyShim; // rdi
  const UNICODE_STRING *String2; // [rsp+68h] [rbp+10h]

  String2 = (const UNICODE_STRING *)a2;
  v3 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = *(_QWORD *)(a1 + 48);
    if ( (*(_WORD *)(v5 + 26) & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, *(_QWORD *)(a1 + 48), 0LL, 0LL);
    v6 = *(_WORD *)(v5 + 26) & 1;
    if ( v6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      a2 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (a2->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !CurrentIrql && (a2->MiscFlags & 0x400) == 0 && !a2->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    if ( v6 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v5, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      LOBYTE(a2) = 1;
      ExpAcquireResourceSharedLite(v5, a2);
    }
    a2 = (struct _KTHREAD *)String2;
    v3 = 1;
  }
  v7 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 776);
  v10 = *(const void ***)(v9 + 8);
  v11 = 0LL;
  if ( v10 == (const void **)(v9 + 8) )
  {
LABEL_12:
    v14 = *(__int64 **)(v9 + 32);
    if ( v14 == (__int64 *)(v9 + 32) )
      goto LABEL_13;
    while ( 1 )
    {
      v11 = (const void **)(v14 - 2);
      if ( (v14[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v11 + 4, String2) )
          break;
      }
      v14 = (__int64 *)*v14;
      if ( v14 == (__int64 *)(v9 + 32) )
        goto LABEL_13;
    }
  }
  else
  {
    while ( 1 )
    {
      v11 = v10;
      v12 = v10 + 4;
      v13 = KeGetCurrentIrql() >= 2u
          ? AuthzBasepEqualUnicodeStringCaseSensitive(v12, (__int64)a2)
          : RtlEqualUnicodeString((PCUNICODE_STRING)v12, (PCUNICODE_STRING)a2, 1u);
      if ( v13 )
        break;
      v10 = (const void **)*v10;
      a2 = (struct _KTHREAD *)String2;
      if ( v10 == (const void **)(v9 + 8) )
        goto LABEL_12;
    }
  }
  v8 = 1;
LABEL_13:
  if ( v8 )
    v7 = v11;
  if ( v3 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v7 != 0LL;
}
