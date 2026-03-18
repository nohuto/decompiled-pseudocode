/*
 * XREFs of ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C00361A8
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00F4284 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C0103D64 (GreGetCharWidthW.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C0145118 (GreGetTextExtentExW.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vFixUpGlyphIndices(RFONTOBJ *this, unsigned __int16 *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int64 v5; // r9
  __int16 v6; // r10
  unsigned __int64 v7; // rax

  v3 = *(_QWORD *)(*(_QWORD *)this + 112LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 16) + 4LL) & 2) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 32);
    v5 = 0LL;
    v6 = *(unsigned __int8 *)(v4 + 108);
    if ( *(_BYTE *)(v4 + 108) )
    {
      v7 = (2 * (unsigned __int64)a3 + 1) >> 1;
      if ( a2 > &a2[a3] )
        v7 = 0LL;
      if ( v7 )
      {
        do
        {
          *a2 -= v6;
          ++v5;
          ++a2;
        }
        while ( v5 < v7 );
      }
    }
  }
}
