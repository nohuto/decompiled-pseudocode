/*
 * XREFs of ApiSetSetManipulationInputTargetTransform @ 0x1C013DCB0
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetSetManipulationInputTargetTransform(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v7; // rbp
  unsigned int v9; // edi
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
  _OWORD v23[12]; // [rsp+30h] [rbp-D8h] BYREF

  v7 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      122,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  v9 = 0;
  if ( (int)IsSetManipulationInputTargetTransformSupported() >= 0 )
  {
    v11 = a1[1];
    v23[0] = *a1;
    v12 = a1[2];
    v23[1] = v11;
    v13 = a1[3];
    v23[2] = v12;
    v14 = a1[4];
    v23[3] = v13;
    v15 = a1[5];
    v23[4] = v14;
    v16 = a1[6];
    v23[5] = v15;
    v23[6] = v16;
    v17 = a1[7];
    v18 = a1 + 8;
    v23[7] = v17;
    v19 = v18[1];
    v23[8] = *v18;
    v20 = v18[2];
    v23[9] = v19;
    v21 = v18[3];
    v23[10] = v20;
    v23[11] = v21;
    v9 = ((__int64 (__fastcall *)(_OWORD *, __int64, __int64, _QWORD, __int64, int))SetManipulationInputTargetTransform)(
           v23,
           v7,
           a3,
           0LL,
           a5,
           a6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      14,
      123,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v9;
}
