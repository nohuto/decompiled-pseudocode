/*
 * XREFs of rimAnySecondaryRimUsagesMatchingUsages @ 0x1C000C854
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0108550 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimAnySecondaryRimUsagesMatchingUsages(_WORD *a1)
{
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int v3; // r8d
  __int64 v4; // rcx
  struct _LIST_ENTRY *Blink; // r10
  struct _LIST_ENTRY *v6; // rax

  Flink = gObRimList.Flink;
  while ( 1 )
  {
LABEL_8:
    if ( Flink == &gObRimList )
      return 0LL;
    v6 = Flink - 1;
    Flink = Flink->Flink;
    if ( HIDWORD(v6[61].Flink) )
    {
      if ( !BYTE1(v6[4].Blink) && !LOBYTE(v6[4].Blink) )
      {
        v3 = (unsigned int)v6[5].Flink;
        v4 = 0LL;
        if ( v3 )
          break;
      }
    }
  }
  Blink = v6[5].Blink;
  while ( *((_WORD *)&Blink->Flink + 2 * v4) != *a1 || *((_WORD *)&Blink->Flink + 2 * v4 + 1) != a1[1] )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v3 )
      goto LABEL_8;
  }
  return 1LL;
}
