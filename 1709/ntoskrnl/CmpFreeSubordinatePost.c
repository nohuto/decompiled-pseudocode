/*
 * XREFs of CmpFreeSubordinatePost @ 0x14046FB14
 * Callers:
 *     CmpPostApc @ 0x14046F720 (CmpPostApc.c)
 *     CmpPostNotify @ 0x14047BFBC (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1404D66B0 (CmNotifyRunDown.c)
 *     CmpPostApcRunDown @ 0x140697900 (CmpPostApcRunDown.c)
 * Callees:
 *     CmpFreePostBlock @ 0x14046FAD4 (CmpFreePostBlock.c)
 */

void __fastcall CmpFreeSubordinatePost(__int64 a1)
{
  _QWORD **v1; // rcx
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rdx

  v1 = (_QWORD **)(a1 + 32);
  v2 = *v1;
  if ( *v1 != v1 )
  {
    v3 = v2 - 4;
    v4 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v5 = (_QWORD *)v2[1], (_QWORD *)*v5 != v2) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = v3[2];
    if ( *(_QWORD **)(v6 + 8) != v3 + 2 || (v7 = (_QWORD *)v3[3], (_QWORD *)*v7 != v3 + 2) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    CmpFreePostBlock(v3);
  }
}
