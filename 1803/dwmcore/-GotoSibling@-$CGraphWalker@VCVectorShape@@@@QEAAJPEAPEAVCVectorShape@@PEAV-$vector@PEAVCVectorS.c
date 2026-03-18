/*
 * XREFs of ?GotoSibling@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x1802105A8
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x18020FC8C (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x18020FDB0 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGraphWalker<CVectorShape>::GotoSibling(__int64 a1, __int64 *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rcx
  int v6; // ebx
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax

  v2 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  if ( !v4 )
    return 1;
  if ( *(_DWORD *)(a1 + 28) != 1
    || (v6 = *(_DWORD *)(a1 + 24), v6 == -1)
    || v6 + 1 >= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 272LL))(v4) )
  {
    v7 = *(_DWORD *)(a1 + 28);
    if ( !v7 )
    {
      v6 = *(_DWORD *)(a1 + 24);
      if ( v6 )
        goto LABEL_8;
    }
    return 1;
  }
  v7 = *(_DWORD *)(a1 + 28);
LABEL_8:
  v8 = v6 - 1;
  v9 = v6 + 1;
  if ( v7 != 1 )
    v9 = v8;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 280LL))(*(_QWORD *)(a1 + 16), v9);
  *(_QWORD *)(a1 + 8) = v10;
  *(_DWORD *)(a1 + 24) = v9;
  *a2 = v10;
  return v2;
}
