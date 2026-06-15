/*
 * XREFs of WPP_SF_SSg @ 0x1800B0BF8
 * Callers:
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800AF7C0 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSg(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // rax

  v6 = -1LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(a5 + 2 * v7) );
  }
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids, 27LL, a4);
}
