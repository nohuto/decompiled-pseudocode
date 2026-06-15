/*
 * XREFs of ?IsPlugin@EndpointDevice@@AEAAJPEAH@Z @ 0x1800EA27C
 * Callers:
 *     ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x1800E96C8 (-InitAdapterInformation@EndpointDevice@@AEAAJXZ.c)
 *     ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x1800E9BE4 (-InitTopologyIdInfo@EndpointDevice@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointDevice::IsPlugin(EndpointDevice *this, int *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  PROPVARIANT pvar[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v7 = 0LL;
  memset(pvar, 0, 24);
  if ( a2 )
  {
    *a2 = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 4) + 32LL))(
           *((_QWORD *)this + 4),
           2LL,
           &v7);
    if ( v4 < 0
      || (v4 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
                 v7,
                 &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
                 pvar),
          v4 < 0) )
    {
      v3 = v4;
    }
    else if ( LOWORD(pvar[0]) == 72 )
    {
      *a2 = 1;
    }
  }
  else
  {
    v3 = -2147467261;
  }
  PropVariantClear(pvar);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v3;
}
