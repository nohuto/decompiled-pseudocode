/*
 * XREFs of AudioServerGetBufferSizeLimits @ 0x1800A1BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180003FCC (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetBufferSizeLimits(
        __int64 a1,
        const unsigned __int16 *a2,
        const struct tWAVEFORMATEX *a3,
        int a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 v6; // rbx
  int AliasedEndpointCharacteristics; // edi
  int KSFormatFromWFXFormat; // eax
  void *v11; // rsi
  struct CEndpointCharacteristics *v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]
  LPVOID pv; // [rsp+48h] [rbp-8h] BYREF

  v6 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  pv = 0LL;
  v13 = 0LL;
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v13);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_11;
  v6 = *((_QWORD *)v13 + 2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v6 + 24LL))(
                                     v6,
                                     &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                                     1LL);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_11;
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 64LL))(v15, &v14);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_11;
  KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a3, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
  v11 = pv;
  AliasedEndpointCharacteristics = KSFormatFromWFXFormat;
  if ( KSFormatFromWFXFormat >= 0 )
  {
    AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *, __int64 *))(*(_QWORD *)v14 + 80LL))(
                                       v14,
                                       pv,
                                       a5,
                                       a6);
    if ( AliasedEndpointCharacteristics >= 0 )
    {
      if ( a4 )
      {
        *a5 /= 2LL;
        *a6 /= 2LL;
      }
    }
  }
  if ( v11 )
    CoTaskMemFree(v11);
  if ( AliasedEndpointCharacteristics < 0 )
LABEL_11:
    AudSrvTraceLoggingErrorHelper("AudioServerGetBufferSizeLimits", 4452, AliasedEndpointCharacteristics);
  if ( v13 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)AliasedEndpointCharacteristics;
}
