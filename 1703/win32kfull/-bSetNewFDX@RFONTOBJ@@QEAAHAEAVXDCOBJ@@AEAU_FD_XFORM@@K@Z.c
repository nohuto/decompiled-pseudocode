/*
 * XREFs of ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C0286B1C
 * Callers:
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C00E615C (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 * Callees:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0002F64 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C002C974 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C008DD00 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C008F4D8 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall RFONTOBJ::bSetNewFDX(RFONTOBJ *this, struct XDCOBJ *a2, struct _FD_XFORM *a3, unsigned int a4)
{
  __int64 v8; // r10
  int v9; // r12d
  __int64 v10; // rax
  unsigned int v11; // esi
  int v12; // r14d
  struct LFONT *v13; // rbx
  __int64 v14; // rcx
  struct PFE *v16; // [rsp+60h] [rbp-19h]
  __int64 v17; // [rsp+68h] [rbp-11h] BYREF
  struct _POINTL v18; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v19[16]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v20; // [rsp+88h] [rbp+Fh] BYREF
  int v21; // [rsp+98h] [rbp+1Fh]
  unsigned int v22; // [rsp+E0h] [rbp+67h]
  __int64 v23; // [rsp+E8h] [rbp+6Fh] BYREF
  struct _FD_XFORM *v24; // [rsp+F0h] [rbp+77h]

  v24 = a3;
  v23 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, a2, 516);
  v8 = *(_QWORD *)this;
  v22 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  v9 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x3001E000;
  v18 = *(struct _POINTL *)(*(_QWORD *)this + 672LL);
  v16 = *(struct PFE **)(v8 + 112);
  if ( v8 )
    RFONTOBJ::vReleaseCache(this);
  v17 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v10 = *(_QWORD *)this;
  v11 = 1;
  v12 = 0;
  v21 = 0;
  v20 = *(_QWORD *)(v10 + 120);
  ++*(_DWORD *)(v20 + 68);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  *(_QWORD *)this = 0LL;
  if ( (unsigned int)RFONTOBJ::bFindRFONT(
                       this,
                       a3,
                       v9,
                       v22,
                       (struct PDEVOBJ *)&v23,
                       (struct EXFORMOBJ *)v19,
                       v16,
                       0,
                       *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL),
                       0,
                       a4) )
  {
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
LABEL_12:
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v20);
    return v11;
  }
  LFONTOBJ::LFONTOBJ(
    (LFONTOBJ *)&v17,
    *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 176LL),
    (struct PDEVOBJ *)&v23);
  v13 = (struct LFONT *)v17;
  if ( v17
    && (unsigned int)RFONTOBJ::bRealizeFont(
                       (struct _FD_XFORM **)this,
                       a2,
                       (struct PDEVOBJ *)&v23,
                       (struct tagENUMLOGFONTEXDVW *)(v17 + 276),
                       v16,
                       v24,
                       &v18,
                       v9,
                       v22,
                       0.0,
                       0,
                       a4) )
  {
    v14 = *(_QWORD *)this;
    v12 = 1;
    v21 = 1;
    GreAcquireSemaphore(*(_QWORD *)(v14 + 528));
  }
  else
  {
    *(_QWORD *)this = 0LL;
    v11 = 0;
  }
  if ( v13 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v13);
  if ( !v12 )
    goto LABEL_12;
  return v11;
}
