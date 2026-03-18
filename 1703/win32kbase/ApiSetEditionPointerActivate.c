/*
 * XREFs of ApiSetEditionPointerActivate @ 0x1C013B8EC
 * Callers:
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C011E0E0 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01223C0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPointerActivate(
        _OWORD *a1,
        unsigned int a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v7; // ebp
  __int64 result; // rax
  int v10; // edx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  _OWORD *v18; // rbx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _OWORD v22[12]; // [rsp+30h] [rbp-D8h] BYREF

  v7 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      32,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  result = IsEditionPointerActivateSupported();
  if ( (int)result >= 0 )
  {
    v11 = a1[1];
    v22[0] = *a1;
    v12 = a1[2];
    v22[1] = v11;
    v13 = a1[3];
    v22[2] = v12;
    v14 = a1[4];
    v22[3] = v13;
    v15 = a1[5];
    v22[4] = v14;
    v16 = a1[6];
    v22[5] = v15;
    v22[6] = v16;
    v17 = a1[7];
    v18 = a1 + 8;
    v22[7] = v17;
    v19 = v18[1];
    v22[8] = *v18;
    v20 = v18[2];
    v22[9] = v19;
    v21 = v18[3];
    v22[10] = v20;
    v22[11] = v21;
    result = ((__int64 (__fastcall *)(_OWORD *, _QWORD, _QWORD, __int64, __int64, _DWORD))EditionPointerActivate)(
               v22,
               v7,
               a3,
               a4,
               a5,
               0);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v10,
             14,
             33,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
