/*
 * XREFs of ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18006313C
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006E2EC (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18006E594 (--1CDrawingContext@@EEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1801403B0 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned __int64 v8; // rax
  SIZE_T v9; // r8
  LPVOID v10; // rsi
  int v11; // r9d

  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 80LL);
  *((_DWORD *)this + 516) = 0;
  v3 = 8LL;
  v4 = *((_DWORD *)this + 518);
  if ( v4 != 8 )
  {
    v5 = v4 + 1;
    goto LABEL_3;
  }
  v7 = *((_DWORD *)this + 522);
  v2 = 0xFFFFFFFFLL;
  if ( v7 > 8 )
    v3 = v7;
  v8 = 3 * v3;
  if ( (unsigned __int64)(3 * v3) <= 0xFFFFFFFF )
    v2 = (unsigned int)v8;
  if ( v8 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( (unsigned int)v2 <= *((_DWORD *)this + 517) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 <= 0x10 )
    {
      v11 = -2147024809;
    }
    else
    {
      v9 = 16LL * (unsigned int)v3;
      if ( !v9 )
        v9 = 1LL;
      v10 = HeapAlloc(WPF::g_processHeap, 0, v9);
      if ( v10 )
      {
        operator delete(*((void **)this + 260));
        *((_QWORD *)this + 260) = v10;
        *((_DWORD *)this + 517) = v3;
        goto LABEL_11;
      }
      v11 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x100u);
  }
LABEL_11:
  *((_DWORD *)this + 522) = 0;
  v5 = 0;
LABEL_3:
  v6 = 0;
  for ( *((_DWORD *)this + 518) = v5; v6 < *((_DWORD *)this + 214); ++v6 )
    CScopedClipStack::FreeCpuClipStackState(
      (CScopedClipStack *)v2,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 104) + 120LL * v6));
  *((_DWORD *)this + 214) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 832, 120LL);
}
