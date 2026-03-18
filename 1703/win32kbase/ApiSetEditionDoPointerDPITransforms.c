/*
 * XREFs of ApiSetEditionDoPointerDPITransforms @ 0x1C013A534
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C0129000 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionDoPointerDPITransforms(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  int v7; // edx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  _OWORD *v15; // rbx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _OWORD v19[12]; // [rsp+30h] [rbp-C8h] BYREF

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      130,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  result = IsEditionDoPointerDPITransformsSupported();
  if ( (int)result >= 0 )
  {
    v8 = a1[1];
    v19[0] = *a1;
    v9 = a1[2];
    v19[1] = v8;
    v10 = a1[3];
    v19[2] = v9;
    v11 = a1[4];
    v19[3] = v10;
    v12 = a1[5];
    v19[4] = v11;
    v13 = a1[6];
    v19[5] = v12;
    v19[6] = v13;
    v14 = a1[7];
    v15 = a1 + 8;
    v19[7] = v14;
    v16 = v15[1];
    v19[8] = *v15;
    v17 = v15[2];
    v19[9] = v16;
    v18 = v15[3];
    v19[10] = v17;
    v19[11] = v18;
    result = EditionDoPointerDPITransforms(v19, v4, a3);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v7,
             14,
             131,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
