/*
 * XREFs of ApiSetInputTransformOnInput @ 0x1C013C494
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0122D6C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetInputTransformOnInput(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edi
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
  _OWORD v20[12]; // [rsp+30h] [rbp-D8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x72u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  v7 = 0;
  if ( (int)IsInputTransformOnInputSupported() >= 0 )
  {
    v8 = a1[1];
    v20[0] = *a1;
    v9 = a1[2];
    v20[1] = v8;
    v10 = a1[3];
    v20[2] = v9;
    v11 = a1[4];
    v20[3] = v10;
    v12 = a1[5];
    v20[4] = v11;
    v13 = a1[6];
    v20[5] = v12;
    v20[6] = v13;
    v14 = a1[7];
    v15 = a1 + 8;
    v20[7] = v14;
    v16 = v15[1];
    v20[8] = *v15;
    v17 = v15[2];
    v20[9] = v16;
    v18 = v15[3];
    v20[10] = v17;
    v20[11] = v18;
    v7 = InputTransformOnInput(v20, a2, 0LL, a4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x73u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v7;
}
