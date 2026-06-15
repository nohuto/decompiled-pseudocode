/*
 * XREFs of AudioServerNotifyStreamSuspensionState @ 0x180001FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x180002040 (-NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800025F0 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerNotifyStreamSuspensionState(unsigned int *a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD v9[14]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v10[16]; // [rsp+90h] [rbp+17h] BYREF
  _BYTE v11[16]; // [rsp+A0h] [rbp+27h] BYREF

  v4 = a3;
  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v10, a1);
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v9, 0, 0x40uLL);
    v9[6] = 0LL;
    LODWORD(v9[7]) = 0;
    v9[12] = 0LL;
    LOWORD(v9[0]) = 104;
    v9[9] = a1[16];
    HIDWORD(v9[5]) = 0x20000;
    *(_OWORD *)&v9[3] = AEWMIGUID_AUDIOSRV;
    WORD2(v9[0]) = 1025;
    v9[8] = a1;
    v9[10] = a2;
    v9[11] = v4;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v9);
  }
  v6 = CVADServer::NotifyStreamSuspensionStateChanged((CVADServer *)a1, a2, (_DWORD)v4 != 0);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerNotifyStreamSuspensionState", 0xC5Cu, v6);
  EtwEventActivityIdControl(4LL, v11);
  return v7;
}
