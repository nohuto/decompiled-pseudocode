/*
 * XREFs of ?GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z @ 0x1C0295E28
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0296098 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C029758C (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct RFONT *__fastcall ESTROBJ::GetLinkedRfontOnIndex(ESTROBJ *this, int a2, struct RFONTOBJ *a3)
{
  int v3; // r9d
  _QWORD *v4; // rax

  if ( (*((_DWORD *)this + 16) & 0x1400) == 0 )
    return *(struct RFONT **)a3;
  v3 = *(_DWORD *)(*((_QWORD *)this + 27) + 4LL * a2);
  if ( !v3 )
    return *(struct RFONT **)a3;
  v4 = *(_QWORD **)a3;
  switch ( v3 )
  {
    case 1:
      return (struct RFONT *)v4[91];
    case 2:
      return (struct RFONT *)v4[92];
    case 3:
      return (struct RFONT *)v4[93];
  }
  return *(struct RFONT **)(v4[94] + 8LL * (unsigned int)(v3 - 4));
}
