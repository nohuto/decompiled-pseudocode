/*
 * XREFs of ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C003BD8C
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x1C003A27C (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z @ 0x1C003A644 (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C00AC960 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     NtGdiGetETM @ 0x1C013A2A0 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::flFontType(PFEOBJ *this)
{
  int v1; // r8d
  int v2; // edx
  int v3; // r9d
  unsigned int v4; // edx
  int v6; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL);
  if ( (v1 & 1) != 0 )
    v2 = 4;
  else
    v2 = ((unsigned int)v1 >> 1) & 1;
  v3 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  v4 = (2 * (v3 & 1)) | v2;
  if ( v1 < 0 )
  {
    v6 = v4 | 0x200000;
    v4 |= 0x600000u;
    if ( (v1 & 0x4000) == 0 )
      v4 = v6;
    if ( (v1 & 0x4000000) != 0 )
      v4 |= 0x100000u;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    v4 |= 0x1000000u;
    if ( (v3 & 0x100) != 0 )
      v4 |= 0x800000u;
  }
  return v4;
}
