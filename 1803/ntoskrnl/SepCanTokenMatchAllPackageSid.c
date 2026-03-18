/*
 * XREFs of SepCanTokenMatchAllPackageSid @ 0x14005F800
 * Callers:
 *     SepMatchPackage @ 0x14005F76C (SepMatchPackage.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14005FC10 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     ExpAcquireResourceSharedLite @ 0x140100220 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastResourceShared @ 0x140158E80 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140159678 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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

  memset(v12, 0, 0x48uLL);
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
      ExpAcquireResourceSharedLite(v6, v2);
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
