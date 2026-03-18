/*
 * XREFs of ApiSetEditionPointerActivate @ 0x1C013AA5C
 * Callers:
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C011CEC0 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0121A10 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPointerActivate(
        _OWORD *a1,
        unsigned int a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  _OWORD *v17; // rbx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _OWORD v21[12]; // [rsp+30h] [rbp-D8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x24u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsEditionPointerActivateSupported();
  if ( (int)result >= 0 )
  {
    v10 = a1[1];
    v21[0] = *a1;
    v11 = a1[2];
    v21[1] = v10;
    v12 = a1[3];
    v21[2] = v11;
    v13 = a1[4];
    v21[3] = v12;
    v14 = a1[5];
    v21[4] = v13;
    v15 = a1[6];
    v21[5] = v14;
    v21[6] = v15;
    v16 = a1[7];
    v17 = a1 + 8;
    v21[7] = v16;
    v18 = v17[1];
    v21[8] = *v17;
    v19 = v17[2];
    v21[9] = v18;
    v20 = v17[3];
    v21[10] = v19;
    v21[11] = v20;
    result = ((__int64 (__fastcall *)(_OWORD *, _QWORD, _QWORD, __int64, __int64, _DWORD))EditionPointerActivate)(
               v21,
               a2,
               a3,
               a4,
               a5,
               0);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0x25u,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}
