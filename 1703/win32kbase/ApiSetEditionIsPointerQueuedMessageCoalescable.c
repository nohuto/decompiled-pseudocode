/*
 * XREFs of ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C013B2E4
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C011B678 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsPointerQueuedMessageCoalescable(
        _OWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  __int64 v8; // r14
  unsigned int v10; // edi
  int v11; // edx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  _OWORD *v19; // rbx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  _OWORD v24[12]; // [rsp+30h] [rbp-D8h] BYREF

  v8 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      144,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  v10 = 0;
  if ( (int)IsEditionIsPointerQueuedMessageCoalescableSupported() >= 0 )
  {
    v12 = a1[1];
    v24[0] = *a1;
    v13 = a1[2];
    v24[1] = v12;
    v14 = a1[3];
    v24[2] = v13;
    v15 = a1[4];
    v24[3] = v14;
    v16 = a1[5];
    v24[4] = v15;
    v17 = a1[6];
    v24[5] = v16;
    v24[6] = v17;
    v18 = a1[7];
    v19 = a1 + 8;
    v24[7] = v18;
    v20 = v19[1];
    v24[8] = *v19;
    v21 = v19[2];
    v24[9] = v20;
    v22 = v19[3];
    v24[10] = v21;
    v24[11] = v22;
    v10 = ((__int64 (__fastcall *)(_OWORD *, __int64, _QWORD, _QWORD, __int64, int))EditionIsPointerQueuedMessageCoalescable)(
            v24,
            v8,
            a3,
            a4,
            a5,
            a6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      14,
      145,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v10;
}
