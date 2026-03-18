/*
 * XREFs of PopPromoteActionFlag @ 0x1406FD6D4
 * Callers:
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 * Callees:
 *     <none>
 */

void __fastcall PopPromoteActionFlag(_BYTE *a1, char a2, int a3, char a4, int a5)
{
  if ( a4 )
  {
    if ( (a3 & a5) != 0 && (dword_1403657EC & a5) == 0 )
    {
      dword_1403657EC |= a5;
LABEL_8:
      *a1 |= a2;
    }
  }
  else if ( (a3 & a5) == 0 && (dword_1403657EC & a5) != 0 )
  {
    dword_1403657EC &= ~a5;
    goto LABEL_8;
  }
}
