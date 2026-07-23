/*
 * XREFs of PopNotifyConsoleUserPresent @ 0x140575AAC
 * Callers:
 *     PopReleaseAdaptiveLock @ 0x14041FF90 (PopReleaseAdaptiveLock.c)
 *     NtSetThreadExecutionState @ 0x140459BC0 (NtSetThreadExecutionState.c)
 *     PopDispatchFullWake @ 0x14057A150 (PopDispatchFullWake.c)
 *     PopUserPresentSetWorker @ 0x140586600 (PopUserPresentSetWorker.c)
 *     PopSetSystemAwayMode @ 0x1406CA0E0 (PopSetSystemAwayMode.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140071260 (RtlGetActiveConsoleId.c)
 *     PopInvokeWin32Callout @ 0x1404C5D90 (PopInvokeWin32Callout.c)
 *     TtmNotifyConsoleUserPresent @ 0x1406D9168 (TtmNotifyConsoleUserPresent.c)
 */

void __fastcall PopNotifyConsoleUserPresent(char a1, char a2, unsigned int a3)
{
  ULONG ActiveConsoleId; // eax
  int v6; // [rsp+20h] [rbp-30h] BYREF
  char v7; // [rsp+24h] [rbp-2Ch]
  int v8; // [rsp+28h] [rbp-28h]
  char *v9; // [rsp+30h] [rbp-20h]
  int v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  ULONG v12; // [rsp+68h] [rbp+18h] BYREF
  char v13; // [rsp+78h] [rbp+28h] BYREF
  char v14; // [rsp+79h] [rbp+29h]
  unsigned int v15; // [rsp+7Ch] [rbp+2Ch]

  LOBYTE(v12) = a2;
  if ( PsWin32CalloutsEstablished )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    v12 = ActiveConsoleId;
    if ( ActiveConsoleId != -1 )
    {
      if ( TtmpEnabled == 1 )
      {
        TtmNotifyConsoleUserPresent(ActiveConsoleId, a3);
      }
      else
      {
        v10 = 0;
        v11 = 0LL;
        v9 = &v13;
        v13 = a1;
        v14 = 0;
        v15 = a3;
        v6 = 1;
        v7 = 0;
        v8 = 8;
        PopInvokeWin32Callout(5u, (__int64)&v6, 1u, (int *)&v12);
      }
    }
  }
}
