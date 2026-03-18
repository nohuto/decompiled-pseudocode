/*
 * XREFs of ?ParseBits@@YAXKPEAK00K@Z @ 0x1C0076C00
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C009FAA0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ParseBits(unsigned int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v6; // r10d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx

  v6 = 0;
  while ( (a1 & 1) == 0 )
  {
    a1 >>= 1;
    ++v6;
  }
  v7 = v6;
  do
  {
    ++v7;
    a1 >>= 1;
    v8 = v7;
  }
  while ( (a1 & 1) != 0 );
  v9 = v7 - v6;
  *a4 = v9;
  if ( v9 > 8 )
    v6 = v8 - 8;
  v10 = a5;
  *a2 = v6;
  if ( v9 <= 8 )
    v10 = a5 - v9 + 8;
  *a3 = v10;
}
