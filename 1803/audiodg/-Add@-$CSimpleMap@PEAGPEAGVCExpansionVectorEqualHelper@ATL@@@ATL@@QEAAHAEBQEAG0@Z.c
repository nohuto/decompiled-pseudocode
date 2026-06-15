/*
 * XREFs of ?Add@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z @ 0x140050474
 * Callers:
 *     ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x140050514 (-Add@CExpansionVector@ATL@@QEAAHPEBG0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // r8
  _QWORD *v13; // rdx

  v6 = _o__recalloc(*(_QWORD *)a1, *(_DWORD *)(a1 + 16) + 1, 8LL);
  if ( !v6 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = _o__recalloc(v8, *(_DWORD *)(a1 + 16) + 1, 8LL);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v12 = (_QWORD *)(*(_QWORD *)a1 + 8 * v11);
  if ( v12 )
  {
    *v12 = *a2;
    v10 = *(_QWORD *)(a1 + 8);
  }
  v13 = (_QWORD *)(v10 + 8 * v11);
  if ( v13 )
    *v13 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
