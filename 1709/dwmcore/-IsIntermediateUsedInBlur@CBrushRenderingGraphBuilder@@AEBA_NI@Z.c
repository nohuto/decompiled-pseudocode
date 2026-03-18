/*
 * XREFs of ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x18006BDD4
 * Callers:
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x18006BDD4 (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ @ 0x18006C750 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ.c)
 * Callees:
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x18006BDD4 (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x18006DEAC (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 */

bool __fastcall CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(CBrushRenderingGraphBuilder *this, int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  bool v4; // r8
  int v5; // r10d
  unsigned int v6; // ebp
  __int64 v7; // rsi
  unsigned int v8; // edx
  CRenderingTechnique *v9; // rcx
  unsigned int v10; // r9d
  _DWORD *v11; // rax

  v2 = *(_QWORD *)this;
  v3 = a2 + 1;
  v4 = 0;
  v5 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)this + 328LL);
  if ( a2 + 1 < v6 )
  {
    v7 = 8LL * v3;
    do
    {
      if ( v4 )
        break;
      v8 = 0;
      v9 = *(CRenderingTechnique **)(v7 + *(_QWORD *)(v2 + 304));
      v10 = *((_DWORD *)v9 + 23);
      if ( v10 )
      {
        v11 = (_DWORD *)((char *)v9 + 100);
        do
        {
          if ( *((_BYTE *)v11 + 4) && *v11 == v5 )
            break;
          ++v8;
          v11 += 8;
        }
        while ( v8 < v10 );
      }
      if ( v8 < v10 )
      {
        v4 = CRenderingTechnique::IsExternallyImplementedSubgraph(v9, 0LL)
          || CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(this, v3);
        v5 = a2;
      }
      ++v3;
      v7 += 8LL;
    }
    while ( v3 < v6 );
  }
  return v4;
}
