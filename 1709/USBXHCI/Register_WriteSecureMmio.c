/*
 * XREFs of Register_WriteSecureMmio @ 0x1C005DDE8
 * Callers:
 *     Register_ControllerReset @ 0x1C0002420 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0002780 (Register_BiosHandoff.c)
 *     Register_ControllerStop @ 0x1C00028B4 (Register_ControllerStop.c)
 *     RootHub_D0Entry @ 0x1C0002A70 (RootHub_D0Entry.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0002D70 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0003260 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_D0Exit @ 0x1C00045D0 (RootHub_D0Exit.c)
 *     Controller_Start @ 0x1C0006440 (Controller_Start.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0006BC4 (XilCoreDeviceSlot_Initialize.c)
 *     XilRegister_WriteUlong64 @ 0x1C0006C4C (XilRegister_WriteUlong64.c)
 *     XilCoreCommand_Initialize @ 0x1C0006C98 (XilCoreCommand_Initialize.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memmove @ 0x1C0008700 (memmove.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_WriteSecureMmio(__int64 a1, __int64 a2, int a3, const void *a4)
{
  __int64 v8; // rbp
  unsigned int v9; // ebx
  int v10; // eax
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v13[8]; // [rsp+40h] [rbp-88h] BYREF

  if ( KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
      2366);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v10 = 2;
        break;
      case 2:
        v10 = 4;
        break;
      case 3:
        v10 = 8;
        break;
      default:
        v9 = 0;
        goto LABEL_13;
    }
  }
  else
  {
    v10 = 1;
  }
  v9 = v10;
LABEL_13:
  memset(v13, 0, sizeof(v13));
  v13[3] = *(_QWORD *)(a1 + 120);
  LODWORD(v13[4]) = 10;
  v13[5] = a2;
  LODWORD(v13[6]) = a3;
  memmove(&v13[7], a4, v9);
  result = SecureChannel_SendRequestSynchronously(v8, (unsigned int)v13, 64, (unsigned int)&v12, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v12;
    if ( v12 < 0 )
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
               2u,
               6u,
               0x49u,
               (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
               v12);
  }
  return result;
}
