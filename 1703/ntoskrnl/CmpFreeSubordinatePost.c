/*
 * XREFs of CmpFreeSubordinatePost @ 0x1404CE104
 * Callers:
 *     CmpPostNotify @ 0x14048C118 (CmpPostNotify.c)
 *     CmpPostApc @ 0x1404CDCF0 (CmpPostApc.c)
 *     CmNotifyRunDown @ 0x14053F248 (CmNotifyRunDown.c)
 *     CmpPostApcRunDown @ 0x14066D290 (CmpPostApcRunDown.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpFreeSubordinatePost(__int64 a1)
{
  _QWORD **v1; // rcx
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rax

  v1 = (_QWORD **)(a1 + 32);
  v2 = *v1;
  if ( *v1 != v1 )
  {
    v3 = (__int64)(v2 - 4);
    v4 = *v2;
    v5 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v5 != v2 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = *(_QWORD *)(v3 + 16);
    v7 = *(_QWORD **)(v3 + 24);
    if ( *(_QWORD *)(v6 + 8) != v3 + 16 || *v7 != v3 + 16 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    CmpFreePostBlock(v3);
  }
}
