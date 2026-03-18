/*
 * XREFs of ?Optimize@?$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ @ 0x1800BF8E0
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800A96E0 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWatermarkStack<float,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdi
  SIZE_T v4; // r8
  LPVOID v5; // rsi
  int v6; // r9d

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 != 10 )
  {
    *(_DWORD *)(a1 + 8) = v1 + 1;
    return;
  }
  v3 = 64LL;
  if ( *(_DWORD *)(a1 + 24) > 0x40u )
    v3 = *(unsigned int *)(a1 + 24);
  if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v3) <= *(_DWORD *)(a1 + 4) )
  {
    if ( (_DWORD)v3 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 > 4 )
    {
      v4 = 4LL * (unsigned int)v3;
      if ( !v4 )
        v4 = 1LL;
      v5 = HeapAlloc(WPF::g_processHeap, 0, v4);
      if ( v5 )
      {
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 16));
        *(_QWORD *)(a1 + 16) = v5;
        *(_DWORD *)(a1 + 4) = v3;
        goto LABEL_7;
      }
      v6 = -2147024882;
    }
    else
    {
      v6 = -2147024809;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF3u);
  }
LABEL_7:
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}
