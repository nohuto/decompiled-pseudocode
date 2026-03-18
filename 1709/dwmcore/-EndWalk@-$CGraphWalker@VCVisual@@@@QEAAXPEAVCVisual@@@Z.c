/*
 * XREFs of ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800B31C8
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18005C264 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800B3330 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 */

void __fastcall CGraphWalker<CVisual>::EndWalk(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  SIZE_T v7; // r8
  LPVOID v8; // rsi
  DWORD v9; // r9d

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
  v5 = -1;
  if ( *(_DWORD *)(a1 + 56) > 0x40u )
    v4 = *(unsigned int *)(a1 + 56);
  v6 = 3 * v4;
  if ( (unsigned __int64)(3 * v4) <= 0xFFFFFFFF )
    v5 = 3 * v4;
  if ( v6 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v5 <= *(_DWORD *)(a1 + 36) )
  {
    if ( (_DWORD)v4 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 > 0x10 )
    {
      v7 = 16LL * (unsigned int)v4;
      if ( !v7 )
        v7 = 1LL;
      v8 = HeapAlloc(WPF::g_processHeap, 0, v7);
      if ( v8 )
      {
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v8;
        *(_DWORD *)(a1 + 36) = v4;
        goto LABEL_11;
      }
      v9 = -2147024882;
    }
    else
    {
      v9 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x100u);
  }
LABEL_11:
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 40) = 0;
}
