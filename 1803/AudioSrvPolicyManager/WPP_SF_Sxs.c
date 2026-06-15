/*
 * XREFs of WPP_SF_Sxs @ 0x18001A0E8
 * Callers:
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001E180 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001EF6C (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_Sxs(
        TRACEHANDLE LoggerHandle,
        USHORT a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        const char *a6)
{
  __int64 v7; // rdx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rdx
  const char *v12; // rcx
  __int64 v13; // rdx
  const wchar_t *v14; // rax

  v7 = -1LL;
  if ( a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a6[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5LL;
  }
  if ( a4 )
  {
    do
      ++v7;
    while ( a4[v7] );
    v11 = v7 + 1;
  }
  else
  {
    v11 = 5LL;
  }
  v12 = "NULL";
  if ( a6 )
    v12 = a6;
  v13 = 2 * v11;
  v14 = L"NULL";
  if ( a4 )
    v14 = a4;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids,
           a2,
           v14,
           v13,
           &a5,
           8LL,
           v12,
           v10,
           0LL);
}
