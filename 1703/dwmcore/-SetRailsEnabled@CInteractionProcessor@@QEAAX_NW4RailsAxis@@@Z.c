/*
 * XREFs of ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x1800B276C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18004DA9C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionProcessor::SetRailsEnabled(__int64 a1, char a2, int a3)
{
  char v4; // cl
  char v5; // al
  char result; // al
  char v7; // cl
  char v8; // dl
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( a3 != 1 )
    {
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
      __debugbreak();
    }
    if ( ((*(_BYTE *)(a1 + 148) & 0x20) != 0) != a2 )
    {
      v4 = *(_BYTE *)(a1 + 148) & 0xDF;
      v5 = 32 * a2;
LABEL_5:
      *(_BYTE *)(a1 + 148) = v5 | v4 | 1;
    }
  }
  else if ( ((*(_BYTE *)(a1 + 148) & 0x10) != 0) != a2 )
  {
    v4 = *(_BYTE *)(a1 + 148) & 0xEF;
    v5 = 16 * a2;
    goto LABEL_5;
  }
  if ( a3 )
  {
    result = (*(_BYTE *)(a1 + 308) & 0x20) != 0;
    if ( result == a2 )
      return result;
    v7 = *(_BYTE *)(a1 + 308) & 0xDF;
    v8 = 32 * a2;
    goto LABEL_9;
  }
  result = (*(_BYTE *)(a1 + 308) & 0x10) != 0;
  if ( result != a2 )
  {
    v7 = *(_BYTE *)(a1 + 308) & 0xEF;
    v8 = 16 * a2;
LABEL_9:
    *(_BYTE *)(a1 + 308) = v8 | v7 | 1;
  }
  return result;
}
