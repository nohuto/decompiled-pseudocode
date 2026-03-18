/*
 * XREFs of MmReserveViewInSystemCache @ 0x14062038C
 * Callers:
 *     CcInitializePartitionVacbs @ 0x140171318 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x140220A10 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x1400DDFF0 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  _QWORD *v1; // rax

  v1 = MiObtainSystemCacheView(*a1);
  if ( v1 )
    return (__int64)((_QWORD)v1 << 25) >> 16;
  ++dword_1403CCDE0;
  return 0LL;
}
