/*
 * XREFs of PbmReportAppClosing @ 0x180021980
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x180021524 (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x1800248D4 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmReportAppClosing(void *a1, const unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // eax
  int v7; // ecx
  unsigned int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  result = 2147549183LL;
  if ( g_PlaybackManager )
  {
    v6 = RpcClientProcessSessionId(a1, v8, &v9);
    v7 = v6;
    if ( v6 )
    {
      result = (unsigned __int16)v6 | 0x80070000;
      if ( v7 <= 0 )
        return (unsigned int)v7;
    }
    else
    {
      return CPlaybackManager::OnAppClosed(0LL, a2, a3, v9);
    }
  }
  return result;
}
