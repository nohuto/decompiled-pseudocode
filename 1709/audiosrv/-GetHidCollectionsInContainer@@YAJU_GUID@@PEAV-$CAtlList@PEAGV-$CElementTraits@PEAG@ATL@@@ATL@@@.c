/*
 * XREFs of ?GetHidCollectionsInContainer@@YAJU_GUID@@PEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@@Z @ 0x180064F98
 * Callers:
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x180065220 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 */

__int64 __fastcall GetHidCollectionsInContainer(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+50h] [rbp-59h] BYREF
  __int64 v7; // [rsp+58h] [rbp-51h] BYREF
  int v8; // [rsp+60h] [rbp-49h]
  GUID HidGuid; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v10[112]; // [rsp+80h] [rbp-29h] BYREF

  v6 = 0LL;
  HidD_GetHidGuid(&HidGuid);
  v8 = 0;
  v7 = a2;
  memset(v10, 0, sizeof(v10));
  *(_QWORD *)&v10[32] = 0LL;
  *(PROPERTYKEY *)&v10[8] = PKEY_Device_ContainerId;
  *(DEVPROPKEY *)&v10[64] = DEVPKEY_DeviceInterface_ClassGuid;
  *(_QWORD *)&v10[104] = &HidGuid;
  *(_QWORD *)&v10[40] = 0x100000000DLL;
  *(_QWORD *)&v10[96] = 0x100000000DLL;
  *(_DWORD *)v10 = 2;
  *(_DWORD *)&v10[56] = 2;
  *(_QWORD *)&v10[48] = a1;
  v4 = DevCreateObjectQuery(1LL, 0LL, 0LL, 0LL, 2, v10, DevQueryResultCallback, &v7, &v6);
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
