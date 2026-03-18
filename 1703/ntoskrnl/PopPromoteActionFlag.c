/*
 * XREFs of PopPromoteActionFlag @ 0x140577374
 * Callers:
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 * Callees:
 *     <none>
 */

void __fastcall PopPromoteActionFlag(_BYTE *a1, char a2, int a3, char a4, int a5)
{
  if ( a4 )
  {
    if ( (a3 & a5) != 0 && (dword_14034B18C & a5) == 0 )
    {
      dword_14034B18C |= a5;
LABEL_8:
      *a1 |= a2;
    }
  }
  else if ( (a3 & a5) == 0 && (dword_14034B18C & a5) != 0 )
  {
    dword_14034B18C &= ~a5;
    goto LABEL_8;
  }
}
