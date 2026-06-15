/*
 * XREFs of WPP_SF_s @ 0x18009ED40
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18005BF90 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
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
  return EtwTraceMessage(a1, 43LL, &WPP_50e5db73954a39d05dfaedbce4ea5db2_Traceguids, 33LL, a4);
}
