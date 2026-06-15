/*
 * XREFs of WPP_SF_SD_guid_S @ 0x1800C7C64
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
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
  return EtwTraceMessage(a1, 43LL, &WPP_1108182ce8c13c0b5d2500d454403f98_Traceguids, 14LL, a4);
}
