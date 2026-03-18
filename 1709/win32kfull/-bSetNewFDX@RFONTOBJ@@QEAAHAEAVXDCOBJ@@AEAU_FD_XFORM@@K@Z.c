/*
 * XREFs of ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C028366C
 * Callers:
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C00B25A8 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 * Callees:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0007C34 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0035490 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00391A8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00AF3B4 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bSetNewFDX(RFONTOBJ *this, struct XDCOBJ *a2, struct _FD_XFORM *a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r10
  int v11; // r12d
  __int64 v12; // rax
  unsigned int v13; // esi
  int v14; // r14d
  struct LFONT *v15; // rbx
  __int64 v16; // rcx
  struct PFE *v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h] BYREF
  struct _POINTL v20; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v21[16]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v22; // [rsp+88h] [rbp+Fh] BYREF
  int v23; // [rsp+98h] [rbp+1Fh]
  unsigned int v24; // [rsp+E0h] [rbp+67h]
  __int64 v25; // [rsp+E8h] [rbp+6Fh] BYREF
  struct _FD_XFORM *v26; // [rsp+F0h] [rbp+77h]

  v26 = a3;
  v25 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v21, a2, 516);
  v10 = *(_QWORD *)this;
  v24 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  v11 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x3001E000;
  v20 = *(struct _POINTL *)(*(_QWORD *)this + 672LL);
  v18 = *(struct PFE **)(v10 + 112);
  if ( v10 )
    RFONTOBJ::vReleaseCache(this, v8, v9);
  v19 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v12 = *(_QWORD *)this;
  v13 = 1;
  v14 = 0;
  v23 = 0;
  v22 = *(_QWORD *)(v12 + 120);
  ++*(_DWORD *)(v22 + 68);
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  *(_QWORD *)this = 0LL;
  if ( (unsigned int)RFONTOBJ::bFindRFONT(
                       this,
                       a3,
                       v11,
                       v24,
                       (struct PDEVOBJ *)&v25,
                       (struct EXFORMOBJ *)v21,
                       v18,
                       0,
                       *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL),
                       0,
                       a4) )
  {
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
LABEL_12:
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v22);
    return v13;
  }
  LFONTOBJ::LFONTOBJ(
    (LFONTOBJ *)&v19,
    *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 176LL),
    (struct PDEVOBJ *)&v25);
  v15 = (struct LFONT *)v19;
  if ( v19
    && (unsigned int)RFONTOBJ::bRealizeFont(
                       (struct _FD_XFORM **)this,
                       a2,
                       (struct PDEVOBJ *)&v25,
                       (struct tagENUMLOGFONTEXDVW *)(v19 + 276),
                       (FLOATL *)v18,
                       v26,
                       &v20,
                       v11,
                       v24,
                       0.0,
                       0,
                       a4) )
  {
    v16 = *(_QWORD *)this;
    v14 = 1;
    v23 = 1;
    GreAcquireSemaphore(*(_QWORD *)(v16 + 528));
  }
  else
  {
    *(_QWORD *)this = 0LL;
    v13 = 0;
  }
  if ( v15 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v15);
  if ( !v14 )
    goto LABEL_12;
  return v13;
}
