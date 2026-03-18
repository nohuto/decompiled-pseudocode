/*
 * XREFs of ?ShiftLeft@?$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z @ 0x180163104
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CD2DLayer *,0>::ShiftLeft(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  unsigned int v5; // edi

  v2 = 0;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( a2 > v4 )
    {
      v2 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x23Du);
    }
    else
    {
      v5 = v4 - a2;
      if ( v5 )
        memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + 8LL * a2), 8LL * v5);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v2;
}
