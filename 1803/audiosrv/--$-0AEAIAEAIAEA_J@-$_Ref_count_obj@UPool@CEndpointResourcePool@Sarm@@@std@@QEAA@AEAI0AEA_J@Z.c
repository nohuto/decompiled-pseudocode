/*
 * XREFs of ??$?0AEAIAEAIAEA_J@?$_Ref_count_obj@UPool@CEndpointResourcePool@Sarm@@@std@@QEAA@AEAI0AEA_J@Z @ 0x1800F6380
 * Callers:
 *     ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x1800F63F4 (--$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA-AV-$shared_ptr@UPool@CEnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj<Sarm::CEndpointResourcePool::Pool>::_Ref_count_obj<Sarm::CEndpointResourcePool::Pool>(
        __int64 a1,
        int *a2,
        int *a3,
        __int64 *a4)
{
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // eax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Sarm::CEndpointResourcePool::Pool>::`vftable';
  v5 = *a4;
  v6 = *a3;
  v7 = *a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 16) = 1500000LL;
  *(_DWORD *)(a1 + 32) = v7;
  *(_DWORD *)(a1 + 36) = v6;
  if ( v5 > 0 )
    *(_QWORD *)(a1 + 24) = 100000
                         * (((__int64)((unsigned __int128)((v5 + 99999) * (__int128)0x29F16B11C6D1E109LL) >> 64) >> 14)
                          + ((unsigned __int64)((unsigned __int128)((v5 + 99999) * (__int128)0x29F16B11C6D1E109LL) >> 64) >> 63)
                          + 1);
  return a1;
}
