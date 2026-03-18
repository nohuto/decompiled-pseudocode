/*
 * XREFs of ?Insert@?$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z @ 0x1801D7648
 * Callers:
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801D6938 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CQueue<CBufferedInteractionOutput *>::Insert(__int64 a1, __int64 a2, __int64 a3)
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
