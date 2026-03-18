/*
 * XREFs of ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00F6DB8
 * Callers:
 *     GetInheritedMonitor @ 0x1C0060FE8 (GetInheritedMonitor.c)
 * Callees:
 *     UnionRect @ 0x1C0020BD4 (UnionRect.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     IsTitleWindow @ 0x1C00F6F04 (IsTitleWindow.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C00F6F58 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

_BOOL8 __fastcall IsCandidateTransformOwner(struct tagWND *a1, struct tagWND *a2)
{
  int v4; // r14d
  int v5; // edi
  __int64 v6; // r10
  __int64 v7; // r11
  struct tagRECT *v9; // rsi
  struct tagRECT *v10; // rbx
  int v11; // ebp
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *((_BYTE *)a2 + 67) & 8;
  v5 = (*((_BYTE *)a2 + 66) >> 3) & (unsigned __int8)~(*((_BYTE *)a2 + 67) >> 5) & 1;
  if ( !(unsigned int)IsTitleWindow(a1, 1LL)
    || *(_QWORD *)(v6 + 384) != *(_QWORD *)(v7 + 384) && *(_QWORD *)(v6 + 376) != *(_QWORD *)(v7 + 376) )
  {
    return 0LL;
  }
  if ( ((*((_BYTE *)a1 + 368) ^ *((_BYTE *)a2 + 368)) & 0xF) != 0 )
    return 0LL;
  if ( !v4 && !v5 )
    return 1LL;
  v9 = (struct tagRECT *)((char *)a1 + 128);
  v10 = (struct tagRECT *)((char *)a2 + 128);
  v11 = IsAdjacentRect(v10, v9);
  if ( v4 )
  {
    if ( !v11 && !(unsigned int)IntersectRect((int *)v13, &v10->left, &v9->left) )
      return 0LL;
  }
  if ( !v5 || v11 )
    return 1LL;
  if ( !(unsigned int)UnionRect(v13, v10, v9) )
    return 0LL;
  v12 = v13[0] - *(_QWORD *)&v10->left;
  if ( v13[0] == *(_QWORD *)&v10->left )
    v12 = v13[1] - *(_QWORD *)&v10->right;
  return !v12;
}
