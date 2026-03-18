/*
 * XREFs of ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00AA140
 * Callers:
 *     EngDeletePalette @ 0x1C00F01B0 (EngDeletePalette.c)
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C006EEF8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C006EF24 (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall EngDeletePaletteInternal(struct HOBJ__ *a1, __int16 a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // ecx
  struct OBJECT *v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2 & 0x8000;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  if ( v6 )
  {
    v4 = *((_DWORD *)v6 + 6);
    if ( (v4 & 0x100) == 0 && (!v3 || (v4 & 0x2000000) != 0) )
    {
      *((_DWORD *)v6 + 6) = v4 & 0xFEFFFFFF;
      XEPALOBJ::vUnrefPalette(&v6);
      v2 = 1;
    }
  }
  EPALOBJ::~EPALOBJ(&v6);
  return v2;
}
