/*
 * XREFs of ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x1800BC258
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180041F34 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z @ 0x1800BD130 (-GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z.c)
 */

void __fastcall CEndpointCharacteristics::CacheUnsupportedConnectorFormats(
        CEndpointCharacteristics *this,
        struct CUnsupportedConnectorFormats *a2)
{
  int v3; // eax
  PROPVARIANT pvar; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int8 *v6; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+38h] [rbp-30h] BYREF
  int v8; // [rsp+48h] [rbp-20h]

  pvar = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v3 = 200 * *(_DWORD *)a2;
  v7 = PKEY_AudioEngine_Connector_UnsupportedFormats;
  v8 = v3 + 2;
  LOWORD(pvar) = 65;
  if ( (int)CUnsupportedConnectorFormats::GetBlob(a2, &v6, (unsigned int *)&v5) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 4) + 48LL))(
      *((_QWORD *)this + 4),
      &v7,
      &pvar);
    PropVariantClear(&pvar);
  }
}
