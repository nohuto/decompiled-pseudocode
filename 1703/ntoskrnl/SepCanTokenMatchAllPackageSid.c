/*
 * XREFs of SepCanTokenMatchAllPackageSid @ 0x140089630
 * Callers:
 *     SepMatchPackage @ 0x1400895A0 (SepMatchPackage.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14008A590 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquireFastResourceShared @ 0x14014E540 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14014EA10 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall SepCanTokenMatchAllPackageSid(__int64 a1)
{
  struct _KTHREAD *v2; // rdx
  char v3; // bl
  bool v4; // si
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  __int16 v7; // ax
  unsigned __int8 CurrentIrql; // r8
  void *OwnerEntryForLegacyShim; // rbp
  __int128 v11; // [rsp+30h] [rbp-78h]
  _OWORD v12[5]; // [rsp+40h] [rbp-68h] BYREF

  LODWORD(v12[0]) = 0;
  memset((char *)v12 + 8, 0, 0x40uLL);
  LODWORD(v11) = 2359330;
  *((_QWORD *)&v11 + 1) = L"WIN://NOALLAPPPKG";
  v3 = 0;
  v4 = 1;
  *((_QWORD *)&v12[0] + 1) = *(_QWORD *)(a1 + 776);
  v12[1] = v11;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = *(_QWORD *)(a1 + 48);
    if ( (*(_WORD *)(v6 + 26) & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v6, 0LL, 0LL);
    v7 = *(_WORD *)(v6 + 26) & 1;
    if ( v7 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v2 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v2->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !CurrentIrql && (v2->MiscFlags & 0x400) == 0 && !v2->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    if ( v7 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v6, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      LOBYTE(v2) = 1;
      ExpAcquireResourceSharedLite(*(_QWORD *)(a1 + 48), v2);
    }
    v3 = 1;
  }
  if ( (int)AuthzBasepQuerySecurityAttributeAndValues(v12) >= 0 )
    v4 = **(_QWORD **)&v12[3] == 0LL;
  if ( v3 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v4;
}
