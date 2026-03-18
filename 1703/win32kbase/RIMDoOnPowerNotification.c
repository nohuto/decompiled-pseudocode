/*
 * XREFs of RIMDoOnPowerNotification @ 0x1C009AC10
 * Callers:
 *     RIMOnPowerNotification @ 0x1C009AAC0 (RIMOnPowerNotification.c)
 * Callees:
 *     RIMFindInputDeviceForConfig @ 0x1C00077B0 (RIMFindInputDeviceForConfig.c)
 *     RIMDeliverConfigRequest @ 0x1C0007C54 (RIMDeliverConfigRequest.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00582E8 (RIMSendLatencyMgtDeviceRequest.c)
 */

__int64 __fastcall RIMDoOnPowerNotification(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  BOOL v9; // esi
  BOOL v10; // eax
  int v11; // ebp
  int v12; // eax
  __int64 v14; // rdx
  int v15; // eax
  int v17; // edx
  int v18; // eax
  __int64 v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    10,
    (__int64)&WPP_a16ed08ebbdb32b7feb08771ce29ed7a_Traceguids);
  v6 = 0;
  v7 = -__CFSHR__(*(_DWORD *)(v4 + 200), 8);
  v8 = 0LL;
  if ( __CFSHR__(*(_DWORD *)(v4 + 200), 8) )
    v8 = v4;
  v22 = v8;
  v9 = v7 != 0;
  v10 = v9;
  v11 = a3 & 1;
  if ( !v11
    || *(_BYTE *)(v4 + 48) != 3
    || (v14 = *(_QWORD *)(v4 + 456), *(_WORD *)(v14 + 42) != 13)
    || *(_WORD *)(v14 + 40) != 14 )
  {
LABEL_5:
    if ( !v10 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v21 = 0;
  v20 = 0;
  v15 = *(_DWORD *)(v4 + 184);
  if ( (v15 & 0x400) != 0 )
  {
    v6 = 2;
  }
  else if ( (v15 & 0x800) != 0 )
  {
    v6 = 3;
  }
  else
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      17,
      11,
      (__int64)&WPP_a16ed08ebbdb32b7feb08771ce29ed7a_Traceguids);
  }
  v6 = RIMDeliverConfigRequest(v4, *(_QWORD *)(v4 + 456), 0x52u, v6);
  if ( v6 >= 0 && !((int)IsIsPrecisionTouchPadEnabledSupported() < 0 ? 1 : IsPrecisionTouchPadEnabled()) )
  {
    v18 = RIMDeliverConfigRequest(v4, *(_QWORD *)(v4 + 456), 0x57u, 0);
    v6 = v18;
    if ( v18 < 0 )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0xCu,
        (__int64)&WPP_a16ed08ebbdb32b7feb08771ce29ed7a_Traceguids,
        v18);
  }
  if ( !(unsigned int)RIMFindInputDeviceForConfig(*(_QWORD *)(v4 + 456), a1, v4, &v21, &v20, &v22) )
  {
    LOBYTE(v17) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      18,
      13,
      (__int64)&WPP_a16ed08ebbdb32b7feb08771ce29ed7a_Traceguids);
    v8 = v22;
    v10 = v9;
    goto LABEL_5;
  }
  v8 = v22;
LABEL_6:
  v12 = RIMSendLatencyMgtDeviceRequest((struct _UNICODE_STRING *)v8, *(_QWORD *)(v8 + 456), v11 ^ 1u);
  if ( v12 < 0 )
  {
    LODWORD(v19) = v12;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0xEu,
      (__int64)&WPP_a16ed08ebbdb32b7feb08771ce29ed7a_Traceguids,
      v19);
  }
LABEL_8:
  LODWORD(v19) = v6;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xFu,
    (__int64)&WPP_a16ed08ebbdb32b7feb08771ce29ed7a_Traceguids,
    v19);
  return (unsigned int)v6;
}
