/*
 * XREFs of ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800BECE0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A7C80 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800BEDE4 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 */

void __fastcall CGraphWalker<CVisual>::EndWalk(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v4; // eax
  __int64 v5; // rsi
  unsigned int v6; // ecx
  unsigned __int64 v7; // rax
  SIZE_T v8; // r8
  LPVOID v9; // rbp
  int v10; // r9d

  v2 = 0;
  if ( a2 )
    CThreadContext::UnregisterGraphWalkRoot();
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v4 = *(_DWORD *)(a1 + 40);
  if ( v4 == 10 )
  {
    v5 = 64LL;
    v6 = -1;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v5 = *(unsigned int *)(a1 + 56);
    v7 = 3 * v5;
    if ( (unsigned __int64)(3 * v5) <= 0xFFFFFFFF )
      v6 = 3 * v5;
    if ( v7 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
    }
    else if ( v6 <= *(_DWORD *)(a1 + 36) )
    {
      if ( (_DWORD)v5 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v5 > 0x10 )
      {
        v8 = 16LL * (unsigned int)v5;
        if ( !v8 )
          v8 = 1LL;
        v9 = HeapAlloc(WPF::g_processHeap, 0, v8);
        if ( v9 )
        {
          operator delete(*(void **)(a1 + 48));
          *(_QWORD *)(a1 + 48) = v9;
          *(_DWORD *)(a1 + 36) = v5;
          goto LABEL_12;
        }
        v10 = -2147024882;
      }
      else
      {
        v10 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x100u);
    }
LABEL_12:
    *(_DWORD *)(a1 + 56) = 0;
    goto LABEL_5;
  }
  v2 = v4 + 1;
LABEL_5:
  *(_DWORD *)(a1 + 40) = v2;
}
