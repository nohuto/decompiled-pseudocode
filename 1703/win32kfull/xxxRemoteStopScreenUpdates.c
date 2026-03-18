/*
 * XREFs of xxxRemoteStopScreenUpdates @ 0x1C00FE41C
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00FE0C0 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 *     NtUserRemoteStopScreenUpdates @ 0x1C01DEA60 (NtUserRemoteStopScreenUpdates.c)
 *     xxxRemotePassthruEnable @ 0x1C01EEED0 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C01EEFF0 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C01EF050 (xxxRemoteShadowStop.c)
 * Callees:
 *     RemoteDisableScreen @ 0x1C00FE5BC (RemoteDisableScreen.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxMouseKeyButton @ 0x1C01A1D50 (xxxMouseKeyButton.c)
 */

__int64 xxxRemoteStopScreenUpdates()
{
  _BYTE *v0; // rdx
  __int16 v1; // bx
  unsigned int v2; // ebx
  __int64 v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+44h] [rbp-BCh]
  __int64 v7; // [rsp+4Ch] [rbp-B4h]
  __int64 v8; // [rsp+54h] [rbp-ACh]
  int v9; // [rsp+5Ch] [rbp-A4h]
  int v10; // [rsp+60h] [rbp-A0h]
  __int64 v11; // [rsp+64h] [rbp-9Ch]
  __int64 v12; // [rsp+6Ch] [rbp-94h]
  __int64 v13; // [rsp+74h] [rbp-8Ch]
  int v14; // [rsp+7Ch] [rbp-84h]
  int v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+84h] [rbp-7Ch]
  __int64 v17; // [rsp+8Ch] [rbp-74h]
  __int64 v18; // [rsp+94h] [rbp-6Ch]
  int v19; // [rsp+9Ch] [rbp-64h]
  int v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A4h] [rbp-5Ch]
  __int64 v22; // [rsp+ACh] [rbp-54h]
  __int64 v23; // [rsp+B4h] [rbp-4Ch]
  int v24; // [rsp+BCh] [rbp-44h]
  int v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C4h] [rbp-3Ch]
  __int64 v27; // [rsp+CCh] [rbp-34h]
  __int64 v28; // [rsp+D4h] [rbp-2Ch]
  int v29; // [rsp+DCh] [rbp-24h]
  int v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E4h] [rbp-1Ch]
  __int64 v32; // [rsp+ECh] [rbp-14h]
  __int64 v33; // [rsp+F4h] [rbp-Ch]
  int v34; // [rsp+FCh] [rbp-4h]

  if ( !gbFreezeScreenUpdates )
  {
    KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    if ( gspdeskDisconnect )
    {
      SetUnavailableInputSource(&v4);
      v0 = (_BYTE *)gwMKButtonState;
      v1 = gwMKButtonState & ~gwMKCurrentButton;
      if ( (((unsigned __int8)v1 ^ gwMKButtonState) & 1) != 0 )
      {
        xxxMouseKeyButton(1u, 1u);
        v0 = (_BYTE *)gwMKButtonState;
      }
      if ( (((unsigned __int8)v1 ^ *v0) & 2) != 0 )
      {
        xxxMouseKeyButton(2u, 1u);
        v0 = (_BYTE *)gwMKButtonState;
      }
      *(_WORD *)v0 = v1;
      v6 = 0LL;
      v2 = 0;
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0;
      v5 = -2136735560;
      v10 = -2119892808;
      v15 = -2136866659;
      v20 = -2120023907;
      v25 = -2136997718;
      v30 = -2120154954;
      do
        xxxProcessKeyEvent(&v5 + 8 * (int)v2++, 0LL, 1LL, 0LL, 0LL);
      while ( v2 < 6 );
      UpdateKeyLights(1LL);
      RemoteDisableScreen(grpdeskRitInput);
      gbFreezeScreenUpdates = 1;
    }
  }
  return 0LL;
}
