/*
 * XREFs of ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800139FC
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800122DC (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800C6210 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 */

void __fastcall CGraphWalker<CVisual>::EndWalk(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  SIZE_T v5; // r8
  LPVOID v6; // rsi
  int v7; // r9d

  if ( a2 )
    CThreadContext::UnregisterGraphWalkRoot();
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v3 = *(_DWORD *)(a1 + 40);
  if ( v3 != 10 )
  {
    *(_DWORD *)(a1 + 40) = v3 + 1;
    return;
  }
  v4 = 64LL;
  if ( *(_DWORD *)(a1 + 56) > 0x40u )
    v4 = *(unsigned int *)(a1 + 56);
  if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v4) <= *(_DWORD *)(a1 + 36) )
  {
    if ( (_DWORD)v4 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 > 0x10 )
    {
      v5 = 16LL * (unsigned int)v4;
      if ( !v5 )
        v5 = 1LL;
      v6 = HeapAlloc(WPF::g_processHeap, 0, v5);
      if ( v6 )
      {
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v6;
        *(_DWORD *)(a1 + 36) = v4;
        goto LABEL_9;
      }
      v7 = -2147024882;
    }
    else
    {
      v7 = -2147024809;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xF3u);
  }
LABEL_9:
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 40) = 0;
}
