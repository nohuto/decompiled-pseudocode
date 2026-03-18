/*
 * XREFs of ApiSetInputTransformOnInput @ 0x1C013CFC0
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C012371C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetInputTransformOnInput(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned int v7; // edi
  int v8; // edx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  _OWORD *v16; // rbx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _OWORD v21[12]; // [rsp+30h] [rbp-D8h] BYREF

  v5 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      112,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  v7 = 0;
  if ( (int)IsInputTransformOnInputSupported() >= 0 )
  {
    v9 = a1[1];
    v21[0] = *a1;
    v10 = a1[2];
    v21[1] = v9;
    v11 = a1[3];
    v21[2] = v10;
    v12 = a1[4];
    v21[3] = v11;
    v13 = a1[5];
    v21[4] = v12;
    v14 = a1[6];
    v21[5] = v13;
    v21[6] = v14;
    v15 = a1[7];
    v16 = a1 + 8;
    v21[7] = v15;
    v17 = v16[1];
    v21[8] = *v16;
    v18 = v16[2];
    v21[9] = v17;
    v19 = v16[3];
    v21[10] = v18;
    v21[11] = v19;
    v7 = InputTransformOnInput(v21, v5, 0LL, a4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      14,
      113,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v7;
}
