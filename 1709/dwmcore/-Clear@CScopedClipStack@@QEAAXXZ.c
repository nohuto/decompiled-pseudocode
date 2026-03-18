/*
 * XREFs of ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180031C44
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800405DC (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18004096C (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x18011D88C (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  int v4; // eax
  unsigned int i; // edi
  unsigned int v6; // eax
  unsigned __int64 v7; // rax
  SIZE_T v8; // r8
  LPVOID v9; // rsi
  int v10; // r9d

  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 80LL);
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
  v7 = 3 * v3;
  if ( (unsigned __int64)(3 * v3) <= 0xFFFFFFFF )
    v2 = (unsigned int)v7;
  if ( v7 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( (unsigned int)v2 <= *((_DWORD *)this + 517) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 <= 0x10 )
    {
      v10 = -2147024809;
    }
    else
    {
      v8 = 16LL * (unsigned int)v3;
      if ( !v8 )
        v8 = 1LL;
      v9 = HeapAlloc(WPF::g_processHeap, 0, v8);
      if ( v9 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 260));
        *((_QWORD *)this + 260) = v9;
        *((_DWORD *)this + 517) = v3;
        goto LABEL_11;
      }
      v10 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x100u);
  }
LABEL_11:
  *((_DWORD *)this + 522) = 0;
  *((_DWORD *)this + 518) = 0;
LABEL_3:
  for ( i = 0; i < *((_DWORD *)this + 214); ++i )
    CScopedClipStack::FreeCpuClipStackState(
      (CScopedClipStack *)v2,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 104) + 120LL * i));
  *((_DWORD *)this + 214) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 832, 120LL);
}
