/*
 * XREFs of SepCanTokenMatchAllPackageSid @ 0x1400180F0
 * Callers:
 *     SepNormalAccessCheck @ 0x14007DC40 (SepNormalAccessCheck.c)
 *     SepMatchPackage @ 0x14011E91C (SepMatchPackage.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140018500 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14013FB78 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceShared @ 0x14013FBD0 (ExAcquireFastResourceShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall SepCanTokenMatchAllPackageSid(__int64 a1)
{
  __int64 CurrentIrql; // rdx
  char v3; // bl
  bool v4; // si
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  __int16 v7; // ax
  struct _KTHREAD *v9; // r8
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
      v9 = KeGetCurrentThread();
      if ( (unsigned __int8)CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
      if ( (v9->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !(_BYTE)CurrentIrql && (v9->MiscFlags & 0x400) == 0 && !v9->WaitBlock[3].SpareLong )
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
      LOBYTE(CurrentIrql) = 1;
      ExpAcquireResourceSharedLite(*(_QWORD *)(a1 + 48), CurrentIrql);
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
