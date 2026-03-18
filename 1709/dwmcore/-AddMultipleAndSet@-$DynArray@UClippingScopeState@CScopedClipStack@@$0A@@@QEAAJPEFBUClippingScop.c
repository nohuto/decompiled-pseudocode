/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x1800B3CAC
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet(
        __int64 a1,
        _OWORD *a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  DWORD v6; // ebx
  _OWORD *v7; // rcx
  signed int v9; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( a3 > *(_DWORD *)(a1 + 20) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x50u, 1, a2);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    v7 = (_OWORD *)(*(_QWORD *)a1 + 80 * v4);
    *v7 = *a2;
    v7[1] = a2[1];
    v7[2] = a2[2];
    v7[3] = a2[3];
    v7[4] = a2[4];
    *(_DWORD *)(a1 + 24) = a3;
  }
  return v6;
}
