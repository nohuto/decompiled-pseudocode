/*
 * XREFs of WPP_SF_s @ 0x180082670
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800352E0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_s(__int64 a1, __int64 a2, __int64 a3, const char *a4)
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
    a4 = "NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids, 33LL, a4);
}
