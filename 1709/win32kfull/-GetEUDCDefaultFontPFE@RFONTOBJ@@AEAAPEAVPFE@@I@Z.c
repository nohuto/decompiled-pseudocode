/*
 * XREFs of ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0034B38
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0032348 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00346C8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct PFE *__fastcall RFONTOBJ::GetEUDCDefaultFontPFE(RFONTOBJ *this, BOOL a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  char v4; // cl
  unsigned int v5; // r8d
  __int64 v7; // rcx

  v2 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL);
  v4 = *(_BYTE *)(v3 + 44);
  v5 = *(unsigned __int8 *)(v3 + 45) >> 4;
  if ( (!v4 || v4 == 2 || v4 == -1) && ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v4 + 2) & 0xF) != 0 )
  {
    if ( v5 >= 7 || !*((_DWORD *)&FontAssocDefaultTable + 166 * v5) )
      v5 = 6;
    if ( a2 )
    {
      v7 = 664LL * v5;
      if ( !*(_QWORD *)((char *)&FontAssocDefaultTable + v7 + 656) )
        a2 = *(_QWORD *)((char *)&FontAssocDefaultTable + v7 + 648) == 0LL;
    }
    return (struct PFE *)*((_QWORD *)&FontAssocDefaultTable + 83 * v5 + a2 + 81);
  }
  return (struct PFE *)v2;
}
