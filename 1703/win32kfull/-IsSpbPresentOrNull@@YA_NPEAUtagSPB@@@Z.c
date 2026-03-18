/*
 * XREFs of ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C013DFBC
 * Callers:
 *     SpbCheckPwnd @ 0x1C01E3FA4 (SpbCheckPwnd.c)
 *     SpbCheckRect @ 0x1C01E4040 (SpbCheckRect.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSpbPresentOrNull(struct tagSPB *a1)
{
  struct tagSPB *i; // rax

  if ( a1 )
  {
    for ( i = *(struct tagSPB **)(gpDispInfo + 24LL); i; i = *(struct tagSPB **)i )
    {
      if ( i == a1 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    LOBYTE(i) = 1;
  }
  return (char)i;
}
