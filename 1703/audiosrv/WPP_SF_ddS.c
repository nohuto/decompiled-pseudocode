/*
 * XREFs of WPP_SF_DDS @ 0x1800C77EC
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_DDS(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, char a5, __int64 a6)
{
  __int64 v6; // rax
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  if ( a6 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a6 + 2 * v6) );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_1108182ce8c13c0b5d2500d454403f98_Traceguids, a2, &v8);
}
