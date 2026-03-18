/*
 * XREFs of BgpGxFillRectangle @ 0x140165AAC
 * Callers:
 *     BgpClearScreen @ 0x140165060 (BgpClearScreen.c)
 *     BgpTxtDisplayCharacter @ 0x1401736FC (BgpTxtDisplayCharacter.c)
 *     RaspAntiAlias @ 0x140173E20 (RaspAntiAlias.c)
 *     BgpTxtAdjustStaticRegion @ 0x1402C62F8 (BgpTxtAdjustStaticRegion.c)
 *     BgpTxtCreateRegion @ 0x14083C0D0 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140841398 (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BgpGxFillRectangle(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // rax

  result = (unsigned int)(*(_DWORD *)a1 * *(_DWORD *)(a1 + 4));
  v3 = *(_QWORD *)(a1 + 24);
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)result;
    do
    {
      *(_WORD *)(v3 + 1) = a2 >> 8;
      *(_BYTE *)v3 = a2;
      v5 = *(unsigned int *)(a1 + 8);
      if ( (_DWORD)v5 == 32 )
      {
        *(_BYTE *)(v3 + 3) = HIBYTE(a2);
        v5 = *(unsigned int *)(a1 + 8);
      }
      result = v5 >> 3;
      v3 += result;
      --v4;
    }
    while ( v4 );
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  return result;
}
