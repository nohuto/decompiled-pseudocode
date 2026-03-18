/*
 * XREFs of ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C008A800
 * Callers:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00E1F64 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C00F5BE4 (GreGetCharWidthW.c)
 *     GreGetTextExtentExW @ 0x1C013F8F0 (GreGetTextExtentExW.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vFixUpGlyphIndices(RFONTOBJ *this, unsigned __int16 *a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int16 v4; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax

  v3 = *(_QWORD *)(*(_QWORD *)this + 112LL);
  v4 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 32) + 108LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 16) + 4LL) & 2) != 0 )
  {
    v5 = 0LL;
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 32) + 108LL) )
    {
      v6 = (2 * (unsigned __int64)a3 + 1) >> 1;
      if ( a2 > &a2[a3] )
        v6 = 0LL;
      if ( v6 )
      {
        do
        {
          *a2 -= v4;
          ++v5;
          ++a2;
        }
        while ( v5 < v6 );
      }
    }
  }
}
