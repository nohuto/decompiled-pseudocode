/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1C010E78C
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0104130 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0105DA0 (RIMEndAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0111A34 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0111B38 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0111EAC (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     rimFindHoldingFrame @ 0x1C0095120 (rimFindHoldingFrame.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v6; // ebx
  _QWORD *HoldingFrame; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned int v12; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v6 = 0;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    49,
    (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, v4);
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
    v8[3] = *(_QWORD *)(v4 + 16);
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
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x32u,
    (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids,
    v12);
  return v6;
}
