/*
 * XREFs of WPP_SF_SD_guid_S @ 0x1800CD6B8
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800CB9CC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SD_guid_S(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rcx
  __int64 v9; // rax

  v8 = -1LL;
  if ( a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a7 + 2 * v9) );
  }
  if ( a4 )
  {
    do
      ++v8;
    while ( a4[v8] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_c60d31e5227a3b60c341af8111bf1f82_Traceguids, 15LL, a4);
}
