/*
 * XREFs of ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F44F8
 * Callers:
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 * Callees:
 *     xxxCallShellWindowSizeStartingHandler @ 0x1C01B5C00 (xxxCallShellWindowSizeStartingHandler.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C01F5B84 (IsWindowSubjectToShellSizingPolicy.c)
 */

void __fastcall xxxQueryShellForSizeCooperation(struct _MOVESIZEDATA *a1)
{
  int v1; // edi
  _QWORD *v3; // rsi

  v1 = *((_DWORD *)a1 + 40);
  if ( (unsigned int)(v1 - 1) <= 1 && (*((_DWORD *)a1 + 45) & 2) == 0 )
  {
    v3 = *(_QWORD **)a1;
    if ( (unsigned int)IsWindowSubjectToShellSizingPolicy(*(_QWORD *)a1) )
    {
      if ( (unsigned int)xxxCallShellWindowSizeStartingHandler(v3, v1 + 9) )
        *((_DWORD *)a1 + 66) |= 4u;
    }
  }
}
