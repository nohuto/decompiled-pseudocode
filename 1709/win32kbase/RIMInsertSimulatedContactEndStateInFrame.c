/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x1C010F7F8
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00AA4DC (RIMSuppressAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01041C0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104504 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C011098C (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0106BE0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C010D7C8 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     RIMSetContactEndState @ 0x1C010FA20 (RIMSetContactEndState.c)
 */

__int64 __fastcall RIMInsertSimulatedContactEndStateInFrame(__int64 a1, __int64 a2, _DWORD *a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  int v10; // ecx
  __int64 v11; // r11
  int v12; // eax
  __int64 v13; // [rsp+28h] [rbp-10h]
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF
  char *v15; // [rsp+50h] [rbp+18h] BYREF

  a3[580] |= 1u;
  v15 = 0LL;
  v14 = 0;
  result = RIMSetContactEndState(a1, (_DWORD)a3, a4, a5, a6);
  if ( (a3[8] & 4) == 0 )
  {
    v12 = RIMAddSimulatedPointerDeviceData(v10, v11, (__int64)a3, (__int64)(a3 + 596), &v15, &v14);
    if ( v12 < 0 )
    {
      LODWORD(v13) = v12;
      result = WPP_RECORDER_SF_d(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 3u,
                 0x14u,
                 0x2Au,
                 (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
                 v13);
    }
    else
    {
      result = (__int64)RIMStoreRawDataInPointerDeviceFrame(a1, a2, (__int64)v15, v14, a3 + 594);
    }
    if ( v15 )
      return Win32FreePool((__int64)v15);
  }
  return result;
}
