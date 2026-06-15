/*
 * XREFs of ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x1800B826C
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180029750 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CEndpointCharacteristics::SharedAndExclusiveCanCoexist(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  bool v2; // bl
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    pvar = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
           v1,
           &PKEY_Endpoint_AllowConcurrentSharedExclusive,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v2 = (_DWORD)v5 != 0;
    }
    PropVariantClear(&pvar);
  }
  return v2;
}
