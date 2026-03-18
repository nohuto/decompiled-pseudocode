/*
 * XREFs of ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C0124964
 * Callers:
 *     NtGdiFrameRgn @ 0x1C011E410 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0122720 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiExtFloodFill @ 0x1C012BE60 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EBRUSHOBJ::mixBest(EBRUSHOBJ *this, char a2, char a3)
{
  unsigned __int8 v3; // dl

  v3 = ((a2 - 1) & 0xF) + 1;
  if ( a3 == 1 && (*((_DWORD *)this + 32) & 0x8000) != 0 )
    return v3 | 0xB00u;
  else
    return v3 | (v3 << 8);
}
