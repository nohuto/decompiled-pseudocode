/*
 * XREFs of ?Insert@?$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z @ 0x18019E838
 * Callers:
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18019DC50 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CQueue<CBufferedInteractionOutput *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD v5; // edi
  DWORD v6; // r9d
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( *(_BYTE *)(a1 + 20) )
  {
    v6 = -2147023781;
    v10 = 152;
LABEL_3:
    v5 = v6;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, v10);
    goto LABEL_12;
  }
  v7 = operator new(0x18uLL);
  if ( v7 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v6 = -2147024882;
    v10 = 155;
    goto LABEL_3;
  }
  v7[2] = a3;
  v8 = *(_QWORD **)(a1 + 8);
  if ( *v8 != a1 )
    __fastfail(3u);
  *v7 = a1;
  v7[1] = v8;
  *v8 = v7;
  *(_QWORD *)(a1 + 8) = v7;
  ++*(_DWORD *)(a1 + 16);
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return v5;
}
