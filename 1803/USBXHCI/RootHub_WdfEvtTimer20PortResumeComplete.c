/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001EF70
 * Callers:
 *     RootHub_WdfEvtTimer20PortResumeCompleteDpc @ 0x1C001F1D0 (RootHub_WdfEvtTimer20PortResumeCompleteDpc.c)
 *     RootHub_WdfEvtTimer20PortResumeCompleteWorker @ 0x1C001F2D0 (RootHub_WdfEvtTimer20PortResumeCompleteWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_WdfEvtTimer20PortResumeComplete(_QWORD *a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 result; // rax
  unsigned __int64 v7; // r15
  __int64 v8; // r13
  unsigned int *v9; // rdi
  int Ulong; // ebx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // ebx
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+28h] [rbp-30h]

  v4 = a1[1];
  if ( *(_BYTE *)(v4 + 441) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      4321);
    v4 = a1[1];
  }
  v5 = *(_QWORD *)(v4 + 88);
  if ( !Controller_IsControllerAccessible(v4) )
    return WPP_RECORDER_SF_(
             *(_QWORD *)(a1[1] + 72LL),
             4u,
             0xBu,
             0xD1u,
             (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
  v7 = (unsigned __int64)(unsigned int)(a2 - 1) << 6;
  DynamicLock_Acquire(*(_QWORD *)(v7 + a1[6] + 16));
  v8 = 16LL * (unsigned int)(a2 - 1);
  v9 = (unsigned int *)(v8 + a1[5]);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xD2u,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    a2);
  Ulong = XilRegister_ReadUlong(v5, v9);
  LODWORD(v15) = Ulong;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xD3u,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    v15);
  v11 = Ulong & 0xE00C200 | 0x410000;
  LODWORD(v16) = v11;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xD4u,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    v16);
  XilRegister_WriteUlong(v5, v9, v11);
  DynamicLock_Release(*(_QWORD *)(v7 + a1[6] + 16));
  LODWORD(v17) = XilRegister_ReadUlong(v5, v9);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xD5u,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    v17);
  result = *(_QWORD *)(a1[1] + 272LL);
  if ( (result & 0x8000000) != 0 )
  {
    v12 = a1[6];
    if ( *(_BYTE *)(v7 + v12 + 11) )
    {
      v13 = a1[5];
      DynamicLock_Acquire(*(_QWORD *)(v7 + v12 + 16));
      v14 = XilRegister_ReadUlong(v5, (unsigned int *)(v8 + v13 + 4));
      LODWORD(v18) = v14;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xD6u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v18);
      v14 |= 0x10000u;
      LODWORD(v19) = v14;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xD7u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v19);
      XilRegister_WriteUlong(v5, (_DWORD *)(v8 + v13 + 4), v14);
      return DynamicLock_Release(*(_QWORD *)(v7 + a1[6] + 16));
    }
  }
  return result;
}
