/*
 * XREFs of ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000312C
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008E7C0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C028606C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028630C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0002F64 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C002C974 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C002FEF4 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C008DD00 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C0133E70 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall RFONTOBJ::vInit(RFONTOBJ *this, struct XDCOBJ *a2, struct PFE *a3, struct _EUDCLOGFONT *a4)
{
  __int64 v5; // rdx
  __int64 v9; // rdi
  int v10; // eax
  struct HLFONT__ *v11; // rdx
  struct _POINTL v12; // rbx
  int v13; // r9d
  __int64 v14; // r13
  int v15; // r8d
  unsigned int v16; // esi
  int v17; // ecx
  int v18; // eax
  size_t v19; // rdi
  unsigned int v20; // eax
  PFEOBJ *v21; // rcx
  FLOATL v22; // xmm2_4
  struct PFE *v23; // r15
  __int64 v24; // rcx
  int v25; // edi
  unsigned int v26; // r10d
  unsigned int v27; // [rsp+28h] [rbp-D8h]
  struct _POINTL v28; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v31[2]; // [rsp+78h] [rbp-88h] BYREF
  struct PFE *v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  int v34; // [rsp+9Ch] [rbp-64h]
  __int64 v35; // [rsp+A0h] [rbp-60h] BYREF
  int v36; // [rsp+B0h] [rbp-50h]
  _FD_XFORM v37; // [rsp+B8h] [rbp-48h] BYREF
  struct tagENUMLOGFONTEXDVW v38; // [rsp+D0h] [rbp-30h] BYREF

  v32 = a3;
  v5 = *(_QWORD *)a2;
  v9 = *(_QWORD *)(v5 + 48);
  v10 = *(_DWORD *)(v5 + 176) & 1;
  v11 = *(struct HLFONT__ **)(v5 + 2176);
  v29 = v10;
  v30 = v9;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v28, v11, (struct PDEVOBJ *)&v30);
  v12 = v28;
  v13 = 0;
  if ( v28 )
  {
    v14 = *((_QWORD *)a3 + 4);
    v15 = *((_DWORD *)a4 + 1);
    v16 = 0;
    v31[0] = v14;
    if ( ((v15 & 0x4000) != 0 || (*(_DWORD *)a4 & 1) != 0)
      && (*(_BYTE *)(v14 + 52) & 1) == 0
      && *(_BYTE *)(*(_QWORD *)&v28 + 296LL)
      && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v31) )
    {
      v16 = v26;
    }
    if ( ((*(_DWORD *)(v9 + 32) & 1) != 0 || *((_DWORD *)a4 + 6) != v13)
      && ((v15 & 0x2000) != 0 || (*(_BYTE *)a4 & 0x20) != 0) )
    {
      v17 = 400;
      if ( *(_DWORD *)(*(_QWORD *)&v12 + 292LL) )
        v17 = *(_DWORD *)(*(_QWORD *)&v12 + 292LL);
      v16 |= ((*(unsigned __int16 *)(v14 + 46) - v17) >> 31) & 0x2000;
    }
    v18 = *(_DWORD *)(v14 + 48);
    if ( (v18 & 1) != 0 && *(_DWORD *)(*(_QWORD *)&v12 + 276LL) <= v13 )
      v16 |= 0x8000u;
    if ( (v15 & 0x10000) != 0 && (v18 & 0x40) != 0 )
      v16 |= v15 & 0x10010000;
    v19 = 420LL;
    memset(&v38, 0, sizeof(v38));
    v20 = *(_DWORD *)(*(_QWORD *)&v12 + 272LL);
    if ( v20 < 0x1A4 )
      v19 = v20;
    memmove(&v38, (const void *)(*(_QWORD *)&v12 + 276LL), v19);
    v38.elfEnumLogfontEx.elfLogFont.lfHeight = *((_DWORD *)a4 + 3);
    v38.elfEnumLogfontEx.elfLogFont.lfWidth = *((_DWORD *)a4 + 2);
    v38.elfEnumLogfontEx.elfLogFont.lfOrientation = *((_DWORD *)a4 + 5);
    v38.elfEnumLogfontEx.elfLogFont.lfEscapement = *((_DWORD *)a4 + 4);
    if ( (*(_DWORD *)(v14 + 48) & 0x3000010) == 0
      || (v28.x = 1,
          v28.y = 1,
          !PFEOBJ::bSetFontXform(v21, a2, &v38.elfEnumLogfontEx.elfLogFont, &v37, 0, v27, &v28, (struct IFIOBJ *)v31, 1)) )
    {
      *(_QWORD *)this = 0LL;
      goto LABEL_22;
    }
    v22 = v37.eXY * *((float *)a4 + 7);
    v37.eXX = v37.eXX * *((float *)a4 + 7);
    v31[0] = ghsemPublicPFT;
    v37.eXY = v22;
    ((void (*)(void))GreAcquireSemaphore)();
    v23 = v32;
    v36 = 0;
    v35 = *(_QWORD *)v32;
    ++*(_DWORD *)(v35 + 68);
    SEMOBJ::vUnlock((SEMOBJ *)v31);
    v24 = *(_QWORD *)a2;
    v25 = v29;
    v34 = 0;
    v33 = v24 + 336;
    if ( (unsigned int)RFONTOBJ::bFindRFONT(
                         this,
                         &v37,
                         v16,
                         0,
                         (struct PDEVOBJ *)&v30,
                         (struct EXFORMOBJ *)&v33,
                         v23,
                         v29,
                         *(_DWORD *)(*(_QWORD *)(v24 + 80) + 68LL),
                         0,
                         2u) )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
      *(_DWORD *)(*(_QWORD *)a2 + 264LL) &= ~1u;
    }
    else
    {
      if ( (unsigned int)RFONTOBJ::bRealizeFont(
                           this,
                           a2,
                           (struct PDEVOBJ *)&v30,
                           &v38,
                           v23,
                           &v37,
                           &v28,
                           v16,
                           0,
                           v25,
                           0,
                           2u) )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
        *(_DWORD *)(*(_QWORD *)a2 + 264LL) &= ~1u;
        goto LABEL_22;
      }
      *(_QWORD *)this = 0LL;
    }
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v35);
LABEL_22:
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)&v12);
    return;
  }
  *(_QWORD *)this = 0LL;
}
