/*
 * XREFs of FindOpcodeTerm @ 0x1C00286A8
 * Callers:
 *     ParseOpcode @ 0x1C0016890 (ParseOpcode.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     RegOpcodeHandler @ 0x1C005DD34 (RegOpcodeHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindOpcodeTerm(int a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax

  v1 = 0LL;
  v2 = &ExOpcodeTable;
  if ( &atMutex )
  {
    while ( a1 != *(_DWORD *)v2 )
    {
      v2 += 2;
      if ( !v2[1] )
        return v1;
    }
    return v2[1];
  }
  return v1;
}
