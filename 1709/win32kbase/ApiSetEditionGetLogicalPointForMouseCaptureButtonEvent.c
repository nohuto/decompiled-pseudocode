/*
 * XREFs of ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C0091868
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 */

void __fastcall ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v9; // rsi
  char v10; // [rsp+70h] [rbp+18h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xBCu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  v9 = a5;
  *a5 = a3;
  if ( (int)IsEditionGetLogicalPointForMouseCaptureButtonEventSupported() >= 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
    EditionGetLogicalPointForMouseCaptureButtonEvent(a1, a2, a3, a4, &a5);
    *v9 = a5;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xBDu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
}
