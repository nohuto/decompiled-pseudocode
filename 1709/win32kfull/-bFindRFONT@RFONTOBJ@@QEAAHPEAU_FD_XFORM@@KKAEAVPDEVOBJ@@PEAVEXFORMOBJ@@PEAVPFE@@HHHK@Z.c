/*
 * XREFs of ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0007C34
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0007E00 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C028366C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0007A08 (-bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00354E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0035590 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7B8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C003D7F8 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE70 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE98 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bFindRFONT(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        int a3,
        int a4,
        struct PDEVOBJ *a5,
        struct EXFORMOBJ *a6,
        struct PFE *a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  PDEVOBJ *v15; // rsi
  struct RFONT *v16; // rax
  unsigned int v17; // r13d
  unsigned int v18; // ebx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rcx
  struct RFONT *v22; // rax
  __int64 v23; // rcx
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  struct RFONT *v29; // [rsp+90h] [rbp+30h] BYREF

  v28 = ghsemRFONTList;
  GreAcquireSemaphore();
  v15 = a5;
  v16 = PDEVOBJ::prfntActive(a5);
  v17 = a11;
  v18 = 0;
  *(_QWORD *)this = v16;
  if ( v16 )
  {
    while ( 1 )
    {
      v19 = (unsigned int)RFONTOBJ::bMatchRealization(this, a2, a3, a4, a6, a7, a8, a9, a10, v17) == 0;
      v20 = *(_QWORD *)this;
      if ( !v19 )
        break;
      v21 = *(_QWORD *)(v20 + 504);
      *(_QWORD *)this = v21;
      if ( !v21 )
        goto LABEL_4;
    }
    v18 = 1;
    ++*(_DWORD *)(v20 + 492);
    v29 = PDEVOBJ::prfntActive(v15);
    if ( v29 != *(struct RFONT **)this )
    {
      RFONTOBJ::vRemove(this, &v29, 1LL);
      RFONTOBJ::vInsert(this, &v29, 1LL);
      PDEVOBJ::prfntActive(v15, v29);
    }
  }
  else
  {
LABEL_4:
    v22 = PDEVOBJ::prfntInactive(v15);
    *(_QWORD *)this = v22;
    if ( v22 )
    {
      while ( !(unsigned int)RFONTOBJ::bMatchRealization(this, a2, a3, a4, a6, a7, a8, a9, a10, v17) )
      {
        v23 = *(_QWORD *)(*(_QWORD *)this + 504LL);
        *(_QWORD *)this = v23;
        if ( !v23 )
          goto LABEL_7;
      }
      v18 = 1;
      v29 = PDEVOBJ::prfntInactive(v15);
      RFONTOBJ::vRemove(this, &v29, 1LL);
      PDEVOBJ::prfntInactive(v15, v29);
      v25 = PDEVOBJ::cInactive(v15);
      v26 = *(_QWORD *)v15;
      v27 = v25 - 1;
      if ( (*(_DWORD *)(*(_QWORD *)v15 + 32LL) & 0x800000) != 0 )
        *(_DWORD *)(*(_QWORD *)(v26 + 3536) + 1544LL) = v27;
      else
        *(_DWORD *)(v26 + 1544) = v27;
      v29 = PDEVOBJ::prfntActive(v15);
      RFONTOBJ::vInsert(this, &v29, 1LL);
      PDEVOBJ::prfntActive(v15, v29);
      *(_DWORD *)(*(_QWORD *)this + 492LL) = 1;
    }
    else
    {
LABEL_7:
      *(_QWORD *)this = 0LL;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v28);
  return v18;
}
