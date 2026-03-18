/*
 * XREFs of TtmiUpdateActiveTerminalCount @ 0x14070FB00
 * Callers:
 *     TtmiCreateTerminal @ 0x14070E208 (TtmiCreateTerminal.c)
 *     TtmiSessionTerminalListWorker @ 0x14070E5D8 (TtmiSessionTerminalListWorker.c)
 *     TtmInitCurrentSession @ 0x14070F2CC (TtmInitCurrentSession.c)
 * Callees:
 *     <none>
 */

char __fastcall TtmiUpdateActiveTerminalCount(_DWORD *a1, char a2, int a3)
{
  char v3; // r9
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax

  v3 = 0;
  if ( a2 )
  {
    if ( ++a1[19] == 1 )
    {
      v7 = a1[1] & 0xFFFFFFDF;
      a1[3] = a3;
      v6 = v7 | 0x10;
      goto LABEL_6;
    }
  }
  else if ( a1[19]-- == 1 )
  {
    v5 = a1[1] & 0xFFFFFFEF;
    a1[4] = a3;
    v6 = v5 | 0x20;
LABEL_6:
    v3 = 1;
    a1[1] = v6;
  }
  return v3;
}
