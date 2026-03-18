/*
 * XREFs of ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C002FFD0
 * Callers:
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x1C002E218 (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z @ 0x1C002E5FC (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0056630 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C008DD00 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     NtGdiGetETM @ 0x1C012A0D0 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::flFontType(PFEOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // edx
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // edx
  int v9; // ecx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 32LL);
  v3 = *(_DWORD *)(v2 + 48);
  if ( (v3 & 1) != 0 )
    v4 = 4;
  else
    v4 = (v3 >> 1) & 1;
  v5 = *(_DWORD *)(v1 + 12);
  v6 = *(_DWORD *)(v2 + 48);
  v7 = (2 * (v5 & 1)) | v4;
  if ( v6 < 0 )
  {
    v9 = v7 | 0x200000;
    v7 |= 0x600000u;
    if ( (v6 & 0x4000) == 0 )
      v7 = v9;
    if ( (v6 & 0x4000000) != 0 )
      v7 |= 0x100000u;
  }
  if ( (v5 & 0x80u) != 0 )
  {
    v7 |= 0x1000000u;
    if ( (v5 & 0x100) != 0 )
      v7 |= 0x800000u;
  }
  return v7;
}
