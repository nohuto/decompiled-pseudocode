/*
 * XREFs of ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0124B58
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C011D088 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C0124F20 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C011A408 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122080 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0123AE0 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01277C0 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

void __fastcall CTouchProcessor::ProcessQFrameNode(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4)
{
  CPointerInfoNode *v8; // rcx
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x40u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  if ( !CPointerInfoNode::IsForManipulationThread(a4) || (v9 = 1, (*((_DWORD *)a4 + 1) & 0x200) != 0) )
    v9 = 0;
  if ( ((*(_DWORD *)a4 & 4) == 0 && a3 || CPointerInfoNode::IsForManipulationThread(v8)) && !v9 )
    CTouchProcessor::ProcessEnterLeave(this, a3, a4);
  v10 = *((_DWORD *)a2 + 55);
  if ( (v10 & 1) != 0 && v9 )
  {
    *((_DWORD *)a2 + 56) = 22;
    *((_DWORD *)a2 + 55) = v10 & 0xFFFFFFFE;
  }
  if ( (*((_DWORD *)a2 + 55) & 1) != 0 && (*(_DWORD *)a4 & 1) == 0 )
  {
    CTouchProcessor::TrackCoalesceOnArrival(this, a2, 2LL);
    *((_DWORD *)a2 + 55) &= ~1u;
  }
  if ( (*((_DWORD *)a2 + 55) & 1) != 0 )
  {
    v11 = *(_DWORD *)a4;
    if ( (*(_DWORD *)a4 & 8) != 0 || (v11 & 0x10) != 0 || (v11 & 0x40) != 0 || (v11 & 0x20) != 0 )
    {
      CTouchProcessor::TrackCoalesceOnArrival(this, a2, 16LL);
      *((_DWORD *)a2 + 55) &= ~1u;
    }
  }
  if ( (*((_DWORD *)a2 + 55) & 8) == 0 && (*(_DWORD *)a4 & 0x100000) != 0 && !v9 )
  {
    CTouchProcessor::TrackCoalesceOnArrival(this, a2, 9LL);
    *((_DWORD *)a2 + 55) |= 8u;
  }
  v12 = *((_DWORD *)a2 + 55);
  if ( (v12 & 1) == 0 || (v12 & 8) != 0 )
    *((_DWORD *)a2 + 55) = v12 & 0xFFFFFFFD;
  if ( (*((_DWORD *)a2 + 55) & 2) != 0 )
  {
    v13 = 1;
    *((_DWORD *)a2 + 55) ^= (*((_DWORD *)a2 + 55) ^ (2
                                                   * CTouchProcessor::CanCoalesceNodeWithPrevious(
                                                       this,
                                                       a3,
                                                       a4,
                                                       0LL,
                                                       a2,
                                                       (enum CPointerCoalesce *)&v13))) & 2;
    if ( (*((_DWORD *)a2 + 55) & 2) == 0 )
      CTouchProcessor::TrackCoalesceOnArrival(this, a2, v13);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x41u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
}
