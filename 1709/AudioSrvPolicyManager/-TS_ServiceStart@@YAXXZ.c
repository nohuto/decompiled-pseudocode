/*
 * XREFs of ?TS_ServiceStart@@YAXXZ @ 0x18001E3F4
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x180004EB4 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     WPP_SF_ @ 0x180006B5C (WPP_SF_.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C164 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

void TS_ServiceStart(void)
{
  DWORD LastError; // eax
  char v1; // [rsp+40h] [rbp+8h] BYREF
  struct TSSession *v2; // [rsp+48h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, &WPP_20b02ace39a33070fb42b5dc2503046a_Traceguids);
  }
  if ( !(unsigned __int8)WinStationQueryEnforcementCore(0LL, 0LL, 1LL, &g_MaxSessions, 4, &v1) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LastError = GetLastError();
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, &WPP_20b02ace39a33070fb42b5dc2503046a_Traceguids, LastError);
    }
    g_MaxSessions = 1;
  }
  TsSessionCreate(0, 0LL, &v2);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x36u,
      &WPP_20b02ace39a33070fb42b5dc2503046a_Traceguids,
      g_MaxSessions);
  }
}
