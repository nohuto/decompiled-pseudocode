/*
 * XREFs of WPP_SF_Ss @ 0x180011E64
 * Callers:
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x180015640 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001642C (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180016750 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_Ss(TRACEHANDLE LoggerHandle, USHORT a2, __int64 a3, const wchar_t *a4, const char *a5)
{
  __int64 v6; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rcx
  const char *v11; // rdx
  const wchar_t *v12; // rax

  v6 = -1LL;
  if ( a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a5[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5LL;
  }
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v10 = v6 + 1;
  }
  else
  {
    v10 = 5LL;
  }
  v11 = "NULL";
  if ( a5 )
    v11 = a5;
  v12 = L"NULL";
  if ( a4 )
    v12 = a4;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids,
           a2,
           v12,
           2 * v10,
           v11,
           v9,
           0LL);
}
