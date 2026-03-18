/*
 * XREFs of ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x1800259EC
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180025BC0 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801DC65C (-RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CQueue<CResource *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v5 = 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    v5 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147023781, 0x98u);
  }
  else
  {
    v6 = operator new(0x18uLL);
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      v6[2] = a3;
      v7 = *(_QWORD **)(a1 + 8);
      if ( *v7 != a1 )
        __fastfail(3u);
      *v6 = a1;
      v6[1] = v7;
      *v7 = v6;
      *(_QWORD *)(a1 + 8) = v6;
      ++*(_DWORD *)(a1 + 16);
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x9Bu);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return v5;
}
