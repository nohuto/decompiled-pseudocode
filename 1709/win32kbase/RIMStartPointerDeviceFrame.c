/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1C010D6D4
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00AA4DC (RIMSuppressAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01041C0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0110514 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0110618 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C011098C (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     rimFindHoldingFrame @ 0x1C001B01C (rimFindHoldingFrame.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _QWORD *HoldingFrame; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned int v12; // [rsp+28h] [rbp-10h]

  v6 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x31u,
    (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( HoldingFrame )
  {
LABEL_6:
    HoldingFrame[4] = a3;
    *((_DWORD *)HoldingFrame + 4) = 1;
    v6 = 1;
    goto LABEL_7;
  }
  v8 = Win32AllocPoolZInit(0x58uLL, 1718121298LL);
  HoldingFrame = v8;
  if ( v8 )
  {
    v8[3] = *(_QWORD *)(a2 + 16);
    v9 = (_QWORD *)(a1 + 664);
    v10 = *(_QWORD *)(a1 + 664);
    if ( *(_QWORD *)(v10 + 8) != a1 + 664 )
      __fastfail(3u);
    *HoldingFrame = v10;
    HoldingFrame[1] = v9;
    *(_QWORD *)(v10 + 8) = HoldingFrame;
    *v9 = HoldingFrame;
    goto LABEL_6;
  }
LABEL_7:
  v12 = v6;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x32u,
    (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids,
    v12);
  return v6;
}
