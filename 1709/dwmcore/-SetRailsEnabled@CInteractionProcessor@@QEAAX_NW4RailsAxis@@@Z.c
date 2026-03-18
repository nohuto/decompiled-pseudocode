/*
 * XREFs of ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x180091C1C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180009FF8 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionProcessor::SetRailsEnabled(_BYTE *a1, char a2, int a3)
{
  char v3; // r10
  char v4; // al
  char v5; // r10
  char v6; // al
  char result; // al
  char v8; // r8
  char v9; // dl
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( a3 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( ((a1[148] & 0x20) != 0) != a2 )
    {
      v3 = a1[148] & 0xDF;
      v4 = 32 * a2;
LABEL_5:
      a1[148] = v4 | v3 | 1;
    }
  }
  else if ( ((a1[148] & 0x10) != 0) != a2 )
  {
    v3 = a1[148] & 0xEF;
    v4 = 16 * a2;
    goto LABEL_5;
  }
  if ( a3 )
  {
    if ( ((a1[308] & 0x20) != 0) == a2 )
      goto LABEL_10;
    v5 = a1[308] & 0xDF;
    v6 = 32 * a2;
    goto LABEL_9;
  }
  if ( ((a1[308] & 0x10) != 0) != a2 )
  {
    v5 = a1[308] & 0xEF;
    v6 = 16 * a2;
LABEL_9:
    a1[308] = v6 | v5 | 1;
  }
LABEL_10:
  if ( a3 )
  {
    result = (a1[468] & 0x20) != 0;
    if ( result == a2 )
      return result;
    v8 = a1[468] & 0xDF;
    v9 = 32 * a2;
    goto LABEL_13;
  }
  result = (a1[468] & 0x10) != 0;
  if ( result != a2 )
  {
    v8 = a1[468] & 0xEF;
    v9 = 16 * a2;
LABEL_13:
    a1[468] = v9 | v8 | 1;
  }
  return result;
}
