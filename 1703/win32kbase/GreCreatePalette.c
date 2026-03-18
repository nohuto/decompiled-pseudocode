/*
 * XREFs of GreCreatePalette @ 0x1C00FB180
 * Callers:
 *     <none>
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0040B50 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C009FAA0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 */

__int64 __fastcall GreCreatePalette(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rbx
  __int64 *v4; // [rsp+50h] [rbp-18h] BYREF
  int v5; // [rsp+58h] [rbp-10h]

  v1 = *(unsigned __int16 *)(a1 + 2);
  v2 = 0LL;
  if ( *(_WORD *)a1 == 768 && *(_WORD *)(a1 + 2) )
  {
    v5 = 0;
    v4 = 0LL;
    if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v4, 1, v1, (unsigned int *)(a1 + 4), 0, 0, 0, 0x500u, 0) )
    {
      v5 = 1;
      v2 = *v4;
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v4);
  }
  return v2;
}
