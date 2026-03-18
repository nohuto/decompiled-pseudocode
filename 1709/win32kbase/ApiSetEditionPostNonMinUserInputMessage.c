/*
 * XREFs of ApiSetEditionPostNonMinUserInputMessage @ 0x1C013B248
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostNonMinUserInputMessage(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  int (__high *v6)(int, struct tagINPUTDEST, struct tagPOSTINPUTINFO *); // rbp
  unsigned int v7; // edi
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

  v6 = CBaseProcessor::_spfnNonMinUserCallback;
  v7 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x84u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionPostNonMinUserInputMessageSupported() >= 0 )
  {
    v10 = a3[1];
    v22[0] = *a3;
    v11 = a3[2];
    v22[1] = v10;
    v12 = a3[3];
    v22[2] = v11;
    v13 = a3[4];
    v22[3] = v12;
    v14 = a3[5];
    v22[4] = v13;
    v15 = a3[6];
    v22[5] = v14;
    v22[6] = v15;
    v16 = a3[7];
    v17 = a3 + 8;
    v22[7] = v16;
    v18 = v17[1];
    v22[8] = *v17;
    v19 = v17[2];
    v22[9] = v18;
    v20 = v17[3];
    v22[10] = v19;
    v22[11] = v20;
    v7 = ((__int64 (__fastcall *)(int (__high *)(int, struct tagINPUTDEST, struct tagPOSTINPUTINFO *), _QWORD, _OWORD *, _QWORD, __int64, __int64))EditionPostNonMinUserInputMessage)(
           v6,
           0LL,
           v22,
           a4,
           a5,
           a6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x85u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v7;
}
