/*
 * XREFs of ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800932E0
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800A96E0 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800A9A7C (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1801348DC (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  int v4; // eax
  unsigned int i; // edi
  unsigned int v6; // eax
  SIZE_T v7; // r8
  LPVOID v8; // rsi
  int v9; // r9d

  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this, 0x50u);
  *((_DWORD *)this + 516) = 0;
  v3 = 8LL;
  v4 = *((_DWORD *)this + 518);
  if ( v4 != 8 )
  {
    *((_DWORD *)this + 518) = v4 + 1;
    goto LABEL_3;
  }
  v6 = *((_DWORD *)this + 522);
  v2 = 0xFFFFFFFFLL;
  if ( v6 > 8 )
    v3 = v6;
  if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 517) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 <= 0x10 )
    {
      v9 = -2147024809;
    }
    else
    {
      v7 = 16LL * (unsigned int)v3;
      if ( !v7 )
        v7 = 1LL;
      v8 = HeapAlloc(WPF::g_processHeap, 0, v7);
      if ( v8 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 260));
        *((_QWORD *)this + 260) = v8;
        *((_DWORD *)this + 517) = v3;
        goto LABEL_9;
      }
      v9 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xF3u);
  }
LABEL_9:
  *((_DWORD *)this + 522) = 0;
  *((_DWORD *)this + 518) = 0;
LABEL_3:
  for ( i = 0; i < *((_DWORD *)this + 214); ++i )
    CScopedClipStack::FreeCpuClipStackState(
      (CScopedClipStack *)v2,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 104) + 120LL * i));
  *((_DWORD *)this + 214) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 832, 0x78u);
}
