/*
 * XREFs of ??0Pool@CEndpointResourcePool@Sarm@@QEAA@II_J@Z @ 0x1800C3F14
 * Callers:
 *     ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x1800C3E7C (--$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA-AV-$shared_ptr@UPool@CEnd.c)
 * Callees:
 *     <none>
 */

Sarm::CEndpointResourcePool::Pool *__fastcall Sarm::CEndpointResourcePool::Pool::Pool(
        Sarm::CEndpointResourcePool::Pool *this,
        int a2,
        int a3,
        __int64 a4)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = 1500000LL;
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a3;
  if ( a4 > 0 )
    *((_QWORD *)this + 1) = 100000
                          * (((__int64)((unsigned __int128)((a4 + 99999) * (__int128)0x29F16B11C6D1E109LL) >> 64) >> 14)
                           + ((unsigned __int64)((unsigned __int128)((a4 + 99999) * (__int128)0x29F16B11C6D1E109LL) >> 64) >> 63)
                           + 1);
  return this;
}
