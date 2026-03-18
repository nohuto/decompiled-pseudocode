/*
 * XREFs of ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x1800BB108
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180009FF8 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A3AE4 (-RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CQueue<CResource *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  DWORD v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( *(_BYTE *)(a1 + 20) )
  {
    v9 = -2147023781;
    v10 = 152;
LABEL_11:
    v5 = v9;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, v10);
    goto LABEL_7;
  }
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
  if ( !v6 )
  {
    v9 = -2147024882;
    v10 = 155;
    goto LABEL_11;
  }
  v6[2] = a3;
  v7 = *(_QWORD **)(a1 + 8);
  if ( *v7 != a1 )
    __fastfail(3u);
  *v6 = a1;
  v6[1] = v7;
  *v7 = v6;
  *(_QWORD *)(a1 + 8) = v6;
  ++*(_DWORD *)(a1 + 16);
LABEL_7:
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return v5;
}
