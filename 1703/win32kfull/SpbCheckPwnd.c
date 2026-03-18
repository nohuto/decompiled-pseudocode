/*
 * XREFs of SpbCheckPwnd @ 0x1C01E3FA4
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C00B6C84 (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107FCC (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C013DFBC (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     FreeSpb @ 0x1C01E3B70 (FreeSpb.c)
 *     SpbCheckRect @ 0x1C01E4040 (SpbCheckRect.c)
 */

__int64 __fastcall SpbCheckPwnd(struct tagWND *a1)
{
  __int64 v2; // rdx
  struct tagSPB **v3; // rdi
  struct tagSPB *v4; // rsi
  struct tagSPB *i; // rbx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = gpDispInfo;
    v3 = *(struct tagSPB ***)(gpDispInfo + 24LL);
    if ( !v3 )
      break;
    while ( 1 )
    {
      v4 = *v3;
      for ( i = v3[1]; i; i = (struct tagSPB *)*((_QWORD *)i + 13) )
      {
        if ( a1 == i )
          FreeSpb((__int64)v3);
      }
      if ( !IsSpbPresentOrNull(v4) )
        break;
      v3 = (struct tagSPB **)v4;
      if ( !v4 )
      {
        v2 = gpDispInfo;
        goto LABEL_10;
      }
    }
  }
LABEL_10:
  result = *(_QWORD *)v2;
  if ( *(_QWORD *)(*(_QWORD *)v2 + 24LL) )
    return SpbCheckRect(a1, (struct tagRECT *)a1 + 8, 0);
  return result;
}
