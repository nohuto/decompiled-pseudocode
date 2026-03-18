/*
 * XREFs of VfIrpAllocateCallDriverData @ 0x14076EB20
 * Callers:
 *     IovCallDriver @ 0x140762E58 (IovCallDriver.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IovpCheckIrpForCriticalTracking @ 0x14076DC5C (IovpCheckIrpForCriticalTracking.c)
 */

__int64 __fastcall VfIrpAllocateCallDriverData(__int64 a1, _QWORD *a2)
{
  PVOID v4; // rax
  unsigned int v5; // ebx

  v4 = ExAllocateFromNPagedLookasideList(&ViIrpCallDriverDataList);
  *a2 = v4;
  v5 = 0;
  if ( v4 )
  {
    memset(v4, 0, 0xC0uLL);
    return 1LL;
  }
  else
  {
    LOBYTE(v5) = !IovpCheckIrpForCriticalTracking(a1);
    return v5;
  }
}
