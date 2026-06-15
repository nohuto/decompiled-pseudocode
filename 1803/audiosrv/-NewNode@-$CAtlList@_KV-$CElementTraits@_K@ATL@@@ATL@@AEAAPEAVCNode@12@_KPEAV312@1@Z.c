/*
 * XREFs of ?NewNode@?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@AEAAPEAVCNode@12@_KPEAV312@1@Z @ 0x1800D97B0
 * Callers:
 *     ?AddTail@?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAAPEAU__POSITION@@_K@Z @ 0x1800D8600 (-AddTail@-$CAtlList@_KV-$CElementTraits@_K@ATL@@@ATL@@QEAAPEAU__POSITION@@_K@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1800188D0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::NewNode(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  struct ATL::CAtlPlex *v6; // r8
  int v7; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v10; // rcx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v6 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    v7 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v6 + 16 * (v7 - 1) + 8 * (unsigned int)(v7 - 1) + 8); --v7 >= 0; i -= 3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v10 = *result;
  result[2] = a2;
  *(_QWORD *)(a1 + 32) = v10;
  *result = 0LL;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
