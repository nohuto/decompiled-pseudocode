/*
 * XREFs of MmReserveViewInSystemCache @ 0x1405BD89C
 * Callers:
 *     CcBuildUpHighPriorityMappings @ 0x14015E4F4 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x1400A9C20 (MiObtainSystemCacheView.c)
 */

__int64 MmReserveViewInSystemCache()
{
  _QWORD *v0; // rax

  v0 = MiObtainSystemCacheView(*(_QWORD *)qword_14036C8F8);
  if ( v0 )
    return (__int64)((_QWORD)v0 << 25) >> 16;
  ++dword_14036D560;
  return 0LL;
}
