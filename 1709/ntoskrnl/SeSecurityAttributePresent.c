/*
 * XREFs of SeSecurityAttributePresent @ 0x140018280
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x14025E908 (SepVerifyDesktopAppxPackageName.c)
 *     PsQueryProcessAttributesByToken @ 0x140483CF0 (PsQueryProcessAttributesByToken.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140018C50 (AuthzBasepEqualUnicodeString.c)
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140127E8C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14013FB78 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceShared @ 0x14013FBD0 (ExAcquireFastResourceShared.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 */

_BOOL8 __fastcall SeSecurityAttributePresent(__int64 a1, const UNICODE_STRING *CurrentIrql)
{
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rbx
  __int16 v6; // ax
  __int64 *v7; // rdi
  char v8; // r12
  __int64 v9; // r13
  _QWORD *v10; // rbx
  __int64 *v11; // r15
  const UNICODE_STRING *v12; // rcx
  __int64 *v14; // r14
  struct _KTHREAD *v16; // r8
  void *OwnerEntryForLegacyShim; // rdi
  PCUNICODE_STRING String2; // [rsp+68h] [rbp+10h]

  String2 = CurrentIrql;
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
      CurrentIrql = (const UNICODE_STRING *)KeGetCurrentIrql();
      v16 = KeGetCurrentThread();
      if ( (unsigned __int8)CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
      if ( (v16->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !(_BYTE)CurrentIrql && (v16->MiscFlags & 0x400) == 0 && !v16->WaitBlock[3].SpareLong )
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
      LOBYTE(CurrentIrql) = 1;
      ExpAcquireResourceSharedLite(v5, CurrentIrql);
    }
    CurrentIrql = String2;
    v3 = 1;
  }
  v7 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 776);
  v10 = *(_QWORD **)(v9 + 8);
  v11 = 0LL;
  if ( v10 == (_QWORD *)(v9 + 8) )
  {
LABEL_12:
    v14 = *(__int64 **)(v9 + 32);
    if ( v14 == (__int64 *)(v9 + 32) )
      goto LABEL_13;
    while ( 1 )
    {
      v11 = v14 - 2;
      if ( (v14[5] & 1) == 0 )
      {
        if ( (unsigned __int8)AuthzBasepEqualUnicodeString(v11 + 4, String2) )
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
      v12 = (const UNICODE_STRING *)(v10 + 4);
      if ( KeGetCurrentIrql() >= 2u
         ? AuthzBasepEqualUnicodeStringCaseSensitive(v12, CurrentIrql)
         : RtlEqualUnicodeString(v12, CurrentIrql, 1u) )
      {
        break;
      }
      v10 = (_QWORD *)*v10;
      CurrentIrql = String2;
      if ( v10 == (_QWORD *)(v9 + 8) )
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
