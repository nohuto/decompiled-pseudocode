/*
 * XREFs of ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C0030060
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C002DD70 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C002E9A8 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C0297DDC (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFEOBJ::bFilteredOut(PFEOBJ *this, struct _EFFILTER_INFO *a2)
{
  int v4; // eax
  _DWORD *v5; // r8
  int v6; // edx
  unsigned int v7; // edi
  __int64 v8; // rdx
  unsigned __int8 v9; // bl
  struct tagPvtData *v11; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  v5 = *(_DWORD **)(*(_QWORD *)this + 32LL);
  if ( (v4 & 2) != 0 )
    return 1;
  v6 = v5[12];
  if ( (v6 & 0x800000) != 0 )
    return 1;
  if ( (v4 & 8) != 0 )
    return 1;
  v7 = 0;
  if ( *((_DWORD *)a2 + 6) )
  {
    if ( (v6 & 2) != 0 )
      return 1;
  }
  if ( *((_DWORD *)a2 + 3) && (v6 & 1) != 0
    || *((_DWORD *)a2 + 4) && (v6 & 1) == 0
    || *(_DWORD *)a2
    && (v6 & 2) != 0
    && (v4 & 1) == 0
    && (*((_DWORD *)a2 + 1) != v5[32] || *((_DWORD *)a2 + 2) != v5[33])
    || *((_DWORD *)a2 + 7) && *((_DWORD *)a2 + 8) && (v6 & 2) != 0 )
  {
    return 1;
  }
  v8 = **(_QWORD **)this;
  v12[0] = v8;
  if ( *(struct PFT **const *)(v8 + 128) == gpPFTPrivate )
  {
    v11 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v12);
    if ( v11 && !*((_DWORD *)v11 + 1) )
      goto LABEL_11;
    return 1;
  }
  if ( !*(_DWORD *)(v8 + 56) )
    return 1;
LABEL_11:
  if ( *((_DWORD *)a2 + 5) && (*(_DWORD *)(*(_QWORD *)this + 12LL) & 1) == 0 )
    return 1;
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x44) != 0 )
    return 1;
  if ( *((_DWORD *)a2 + 9) != 1 )
  {
    v9 = *((_BYTE *)a2 + 36);
    if ( jMapCharset(v9, this) != v9 )
      return 1;
  }
  return v7;
}
