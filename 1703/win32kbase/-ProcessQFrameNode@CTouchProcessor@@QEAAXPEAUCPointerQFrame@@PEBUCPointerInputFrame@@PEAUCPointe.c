/*
 * XREFs of ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C012557C
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C011E2A0 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C012594C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C011B678 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A28 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0124488 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0127F60 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

void __fastcall CTouchProcessor::ProcessQFrameNode(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4)
{
  struct CPointerQFrame *v6; // rbx
  int v8; // edx
  CPointerInfoNode *v9; // rcx
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      64,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  if ( !CPointerInfoNode::IsForManipulationThread(a4) || (v10 = 1, (*((_DWORD *)a4 + 1) & 0x200) != 0) )
    v10 = 0;
  if ( ((*(_DWORD *)a4 & 4) == 0 && a3 || CPointerInfoNode::IsForManipulationThread(v9)) && !v10 )
    CTouchProcessor::ProcessEnterLeave(this, a3, a4);
  v11 = *((_DWORD *)v6 + 55);
  if ( (v11 & 1) != 0 && v10 )
  {
    *((_DWORD *)v6 + 56) = 22;
    *((_DWORD *)v6 + 55) = v11 & 0xFFFFFFFE;
  }
  if ( (*((_DWORD *)v6 + 55) & 1) != 0 && (*(_DWORD *)a4 & 1) == 0 )
  {
    CTouchProcessor::TrackCoalesceOnArrival(this, v6, 2LL);
    *((_DWORD *)v6 + 55) &= ~1u;
  }
  if ( (*((_DWORD *)v6 + 55) & 1) != 0 )
  {
    v12 = *(_DWORD *)a4;
    if ( (*(_DWORD *)a4 & 8) != 0 || (v12 & 0x10) != 0 || (v12 & 0x40) != 0 || (v12 & 0x20) != 0 )
    {
      CTouchProcessor::TrackCoalesceOnArrival(this, v6, 16LL);
      *((_DWORD *)v6 + 55) &= ~1u;
    }
  }
  if ( (*((_DWORD *)v6 + 55) & 8) == 0 && (*(_DWORD *)a4 & 0x100000) != 0 && !v10 )
  {
    CTouchProcessor::TrackCoalesceOnArrival(this, v6, 9LL);
    *((_DWORD *)v6 + 55) |= 8u;
  }
  v13 = *((_DWORD *)v6 + 55);
  if ( (v13 & 1) == 0 || (v13 & 8) != 0 )
    *((_DWORD *)v6 + 55) = v13 & 0xFFFFFFFD;
  if ( (*((_DWORD *)v6 + 55) & 2) != 0 )
  {
    v14 = 1;
    *((_DWORD *)v6 + 55) ^= (*((_DWORD *)v6 + 55) ^ (2
                                                   * CTouchProcessor::CanCoalesceNodeWithPrevious(
                                                       this,
                                                       a3,
                                                       a4,
                                                       0LL,
                                                       v6,
                                                       (enum CPointerCoalesce *)&v14))) & 2;
    if ( (*((_DWORD *)v6 + 55) & 2) == 0 )
      CTouchProcessor::TrackCoalesceOnArrival(this, v6, v14);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      11,
      65,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
}
