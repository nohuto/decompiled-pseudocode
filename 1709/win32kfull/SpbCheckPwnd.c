/*
 * XREFs of SpbCheckPwnd @ 0x1C01EFFBC
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0111C44 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C0144124 (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     FreeSpb @ 0x1C01EFB8C (FreeSpb.c)
 *     SpbCheckRect @ 0x1C01F0058 (SpbCheckRect.c)
 */

__int64 __fastcall SpbCheckPwnd(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  struct tagSPB **v5; // rdi
  struct tagSPB *v6; // rsi
  struct tagSPB *i; // rbx
  __int64 result; // rax

  while ( 1 )
  {
    v4 = gpDispInfo;
    v5 = *(struct tagSPB ***)(gpDispInfo + 24LL);
    if ( !v5 )
      break;
    while ( 1 )
    {
      v6 = *v5;
      for ( i = v5[1]; i; i = (struct tagSPB *)*((_QWORD *)i + 13) )
      {
        if ( a1 == i )
          FreeSpb((__int64)v5, v4, a3);
      }
      if ( !IsSpbPresentOrNull(v6) )
        break;
      v5 = (struct tagSPB **)v6;
      if ( !v6 )
        goto LABEL_9;
    }
  }
LABEL_9:
  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 24LL) )
    return SpbCheckRect(a1, (struct tagRECT *)a1 + 8, 0);
  return result;
}
