/*
 * XREFs of ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C013A5A8
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C011A408 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsPointerQueuedMessageCoalescable(
        _OWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  unsigned int v10; // edi
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

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x98u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  v10 = 0;
  if ( (int)IsEditionIsPointerQueuedMessageCoalescableSupported() >= 0 )
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
    v10 = ((__int64 (__fastcall *)(_OWORD *, __int64, _QWORD, _QWORD, __int64, int))EditionIsPointerQueuedMessageCoalescable)(
            v23,
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x99u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v10;
}
