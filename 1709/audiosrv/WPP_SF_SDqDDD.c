/*
 * XREFs of WPP_SF_SDqDDD @ 0x1800CD78C
 * Callers:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x1800CB530 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SDqDDD(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_c60d31e5227a3b60c341af8111bf1f82_Traceguids, 13LL, a4);
}
