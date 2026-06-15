/*
 * XREFs of ?GetHidCollectionsInContainer@@YAJU_GUID@@PEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@@Z @ 0x18009F168
 * Callers:
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x18009FC40 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

__int64 __fastcall GetHidCollectionsInContainer(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+50h] [rbp-59h] BYREF
  __int64 v7; // [rsp+58h] [rbp-51h] BYREF
  int v8; // [rsp+60h] [rbp-49h]
  GUID HidGuid; // [rsp+68h] [rbp-41h] BYREF
  int v10; // [rsp+80h] [rbp-29h] BYREF
  DEVPROPKEY v11; // [rsp+88h] [rbp-21h]
  int v12; // [rsp+9Ch] [rbp-Dh]
  __int64 v13; // [rsp+A0h] [rbp-9h]
  int v14; // [rsp+A8h] [rbp-1h]
  int v15; // [rsp+ACh] [rbp+3h]
  __int64 v16; // [rsp+B0h] [rbp+7h]
  int v17; // [rsp+B8h] [rbp+Fh]
  DEVPROPKEY v18; // [rsp+C0h] [rbp+17h]
  int v19; // [rsp+D4h] [rbp+2Bh]
  __int64 v20; // [rsp+D8h] [rbp+2Fh]
  int v21; // [rsp+E0h] [rbp+37h]
  int v22; // [rsp+E4h] [rbp+3Bh]
  GUID *p_HidGuid; // [rsp+E8h] [rbp+3Fh]

  v6 = 0LL;
  HidD_GetHidGuid(&HidGuid);
  v8 = 0;
  v7 = a2;
  memset_0(&v10, 0, 0x70uLL);
  v12 = 0;
  v13 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v11 = DEVPKEY_Device_ContainerId;
  v18 = DEVPKEY_DeviceInterface_ClassGuid;
  p_HidGuid = &HidGuid;
  v14 = 13;
  v21 = 13;
  v10 = 2;
  v15 = 16;
  v17 = 2;
  v22 = 16;
  v16 = a1;
  v4 = DevCreateObjectQuery(1LL, 0LL, 0LL, 0LL, 2, &v10, DevQueryResultCallback, &v7, &v6);
  if ( v4 >= 0 )
  {
    while ( !v8 )
      Sleep(0x64u);
    v4 = 0;
  }
  if ( v6 )
    DevCloseObjectQuery();
  return (unsigned int)v4;
}
