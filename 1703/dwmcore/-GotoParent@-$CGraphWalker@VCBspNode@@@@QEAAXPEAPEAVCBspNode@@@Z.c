/*
 * XREFs of ?GotoParent@?$CGraphWalker@VCBspNode@@@@QEAAXPEAPEAVCBspNode@@@Z @ 0x1801B43A0
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1801B4160 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     <none>
 */

void __fastcall CGraphWalker<CBspNode>::GotoParent(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // rax

  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 4) )
  {
    v4 = *(_DWORD *)(a1 + 32);
    v5 = 0;
    if ( v4 )
    {
      v6 = (unsigned int)(v4 - 1);
      *(_DWORD *)(a1 + 32) = v6;
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v6 + 8);
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v6);
    }
    v7 = *(_QWORD *)(a1 + 16);
    --*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 8) = v7;
    *a2 = v7;
    *(_QWORD *)(a1 + 16) = v3;
    *(_DWORD *)(a1 + 24) = v5;
  }
  else
  {
    *a2 = 0LL;
  }
}
