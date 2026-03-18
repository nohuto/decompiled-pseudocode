/*
 * XREFs of ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C00B4214
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00B45BC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02941B0 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 */

__int64 __fastcall PFFMEMOBJ::bAllocPFEData(PFFMEMOBJ *this, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  unsigned int v5; // ecx

  v3 = 0;
  *(_DWORD *)(*(_QWORD *)this + 216LL) = gcfsCharSetTable + 144;
  *(_DWORD *)(*(_QWORD *)this + 216LL) = (*(_DWORD *)(*(_QWORD *)this + 216LL) + 7) & 0xFFFFFFF8;
  v4 = *(_QWORD *)this;
  v5 = *(_DWORD *)(*(_QWORD *)this + 216LL);
  if ( a2 > 0xFFFFFFFF / v5 )
    *(_QWORD *)(v4 + 224) = 0LL;
  else
    *(_QWORD *)(*(_QWORD *)this + 224LL) = PALLOCMEM2(a2 * v5, 1701212231LL, 1);
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)this + 224LL) != 0LL;
  return v3;
}
