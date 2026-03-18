/*
 * XREFs of ApiSetSetManipulationInputTargetTransform @ 0x1C013D0AC
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetSetManipulationInputTargetTransform(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned int v9; // edi
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
  _OWORD v22[12]; // [rsp+30h] [rbp-D8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x82u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  v9 = 0;
  if ( (int)IsSetManipulationInputTargetTransformSupported() >= 0 )
  {
    v10 = a1[1];
    v22[0] = *a1;
    v11 = a1[2];
    v22[1] = v10;
    v12 = a1[3];
    v22[2] = v11;
    v13 = a1[4];
    v22[3] = v12;
    v14 = a1[5];
    v22[4] = v13;
    v15 = a1[6];
    v22[5] = v14;
    v22[6] = v15;
    v16 = a1[7];
    v17 = a1 + 8;
    v22[7] = v16;
    v18 = v17[1];
    v22[8] = *v17;
    v19 = v17[2];
    v22[9] = v18;
    v20 = v17[3];
    v22[10] = v19;
    v22[11] = v20;
    v9 = ((__int64 (__fastcall *)(_OWORD *, __int64, __int64, _QWORD, __int64, int))SetManipulationInputTargetTransform)(
           v22,
           a2,
           a3,
           0LL,
           a5,
           a6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x83u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v9;
}
