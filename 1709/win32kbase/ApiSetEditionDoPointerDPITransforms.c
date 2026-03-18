/*
 * XREFs of ApiSetEditionDoPointerDPITransforms @ 0x1C013980C
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C01288A0 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionDoPointerDPITransforms(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  _OWORD *v14; // rbx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _OWORD v18[12]; // [rsp+30h] [rbp-C8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x8Au,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsEditionDoPointerDPITransformsSupported();
  if ( (int)result >= 0 )
  {
    v7 = a1[1];
    v18[0] = *a1;
    v8 = a1[2];
    v18[1] = v7;
    v9 = a1[3];
    v18[2] = v8;
    v10 = a1[4];
    v18[3] = v9;
    v11 = a1[5];
    v18[4] = v10;
    v12 = a1[6];
    v18[5] = v11;
    v18[6] = v12;
    v13 = a1[7];
    v14 = a1 + 8;
    v18[7] = v13;
    v15 = v14[1];
    v18[8] = *v14;
    v16 = v14[2];
    v18[9] = v15;
    v17 = v14[3];
    v18[10] = v16;
    v18[11] = v17;
    result = EditionDoPointerDPITransforms(v18, a2, a3);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0x8Bu,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}
