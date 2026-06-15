/*
 * XREFs of WPP_SF_SqD @ 0x1800CDBF8
 * Callers:
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z @ 0x1800C9420 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SqD(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
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
  return EtwTraceMessage(a1, 43LL, &WPP_c60d31e5227a3b60c341af8111bf1f82_Traceguids, 12LL, a4);
}
