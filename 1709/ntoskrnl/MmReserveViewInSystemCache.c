/*
 * XREFs of MmReserveViewInSystemCache @ 0x1405CB5E4
 * Callers:
 *     CcInitializePartitionVacbs @ 0x140147F2C (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x1401E14D0 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  _QWORD *v1; // rax

  v1 = MiObtainSystemCacheView(*a1);
  if ( v1 )
    return (__int64)((_QWORD)v1 << 25) >> 16;
  ++dword_140389820;
  return 0LL;
}
