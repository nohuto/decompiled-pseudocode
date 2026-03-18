/*
 * XREFs of NtGdiExtFloodFill @ 0x1C012BE60
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA14 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA54 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074B8C (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0074C40 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009556C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00E7034 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     EngPaint @ 0x1C0122BC0 (EngPaint.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C01248C4 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C0124964 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C01272AC (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C012C4BC (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C012C5A8 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C012C9A4 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C012CB30 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C012CE24 (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C012CF20 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C0296F98 (-bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  DC *v8; // rbx
  unsigned int v9; // r14d
  char v10; // dl
  DC *v11; // rax
  __int64 v12; // rdx
  int v13; // ebx
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  __int64 v15; // r13
  int v16; // r15d
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v22; // rdx
  ULONG v23; // r12d
  BRUSHOBJ *v24; // r10
  __int64 v25; // r8
  bool v26; // cf
  int v27; // ecx
  __int64 v28; // rcx
  struct _RECTL v29; // xmm6
  __int64 v30; // rcx
  int v31; // edi
  int v32; // edx
  LONG y; // ebx
  LONG x; // r10d
  __int64 v35; // rax
  unsigned __int8 *v36; // rsi
  int v37; // ecx
  unsigned int v38; // eax
  int v39; // r10d
  int v40; // r11d
  int v41; // r12d
  int v42; // ebx
  int v43; // r12d
  __int64 v44; // rsi
  BRUSHOBJ *v45; // rdi
  MIX v46; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v48; // rdx
  POINTL *v49; // r9
  __int64 v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdx
  int v55; // r15d
  DCVISRGNSHARELOCK *v56; // rcx
  int v57; // eax
  bool v58; // zf
  int v59; // eax
  LONG left; // r10d
  LONG top; // r11d
  BOOL v62; // esi
  LONG v63; // r8d
  LONG v64; // r9d
  int v65; // eax
  SURFOBJ *v66; // rcx
  struct ECLIPOBJ *v67; // rdx
  int v68; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v69; // [rsp+70h] [rbp-98h] BYREF
  int v70[2]; // [rsp+78h] [rbp-90h] BYREF
  DC *v71[2]; // [rsp+80h] [rbp-88h] BYREF
  int v72; // [rsp+90h] [rbp-78h] BYREF
  struct _POINTL v73; // [rsp+98h] [rbp-70h] BYREF
  int v74; // [rsp+A0h] [rbp-68h]
  struct REGION *v75; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v76[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-48h]
  BRUSHOBJ *pbo; // [rsp+C8h] [rbp-40h] BYREF
  struct REGION *v79[2]; // [rsp+D0h] [rbp-38h] BYREF
  struct REGION *v80[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-18h] BYREF
  char v82; // [rsp+F8h] [rbp-10h]
  int v83; // [rsp+FCh] [rbp-Ch]
  _BYTE v84[4]; // [rsp+100h] [rbp-8h] BYREF
  int v85; // [rsp+104h] [rbp-4h]
  __int64 v86; // [rsp+108h] [rbp+0h]
  __int64 v87; // [rsp+120h] [rbp+18h]
  _QWORD v88[4]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v89[4]; // [rsp+148h] [rbp+40h] BYREF
  int v90; // [rsp+14Ch] [rbp+44h]
  __int64 v91; // [rsp+150h] [rbp+48h]
  __int64 v92; // [rsp+168h] [rbp+60h]
  int v93; // [rsp+170h] [rbp+68h] BYREF
  struct _RECTL v94; // [rsp+174h] [rbp+6Ch]
  ULONG v95; // [rsp+184h] [rbp+7Ch]
  int v96; // [rsp+188h] [rbp+80h]
  unsigned __int8 *v97; // [rsp+190h] [rbp+88h]
  int v98; // [rsp+198h] [rbp+90h]
  _BYTE v99[24]; // [rsp+1A0h] [rbp+98h] BYREF
  BRUSHOBJ v100; // [rsp+1B8h] [rbp+B0h] BYREF
  int v101; // [rsp+1D0h] [rbp+C8h]
  int v102; // [rsp+1D4h] [rbp+CCh]
  __int64 v103; // [rsp+1D8h] [rbp+D0h]
  __int64 v104; // [rsp+1E0h] [rbp+D8h]
  __int64 v105; // [rsp+210h] [rbp+108h]
  __int128 v106; // [rsp+218h] [rbp+110h]
  int v107; // [rsp+238h] [rbp+130h]
  _BYTE v108[32]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v109; // [rsp+268h] [rbp+160h]
  __int64 v110; // [rsp+270h] [rbp+168h]
  struct _RECTL v111; // [rsp+298h] [rbp+190h] BYREF
  __int64 v112; // [rsp+2A8h] [rbp+1A0h] BYREF
  int v113; // [rsp+2B0h] [rbp+1A8h]
  int v114; // [rsp+2B4h] [rbp+1ACh]
  CLIPOBJ pco; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v116; // [rsp+308h] [rbp+200h]
  int v117; // [rsp+310h] [rbp+208h]
  int v118; // [rsp+338h] [rbp+230h]
  __int64 v119; // [rsp+348h] [rbp+240h]

  LODWORD(v77) = a4;
  DCOBJ::DCOBJ((DCOBJ *)v71, a1);
  v8 = v71[0];
  v9 = 0;
  if ( !v71[0] || (*((_DWORD *)v71[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v55 = 0;
LABEL_115:
    v9 = v55;
    goto LABEL_57;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v71) )
  {
    if ( (v10 & 0xE0) != 0 )
    {
      v51 = *((_QWORD *)v8 + 6);
      GreAcquireSemaphore(*(_QWORD *)(v51 + 40));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v51 + 40), 11LL);
      v52 = *(_QWORD *)(v51 + 2568);
      if ( v52 )
        v53 = *(_QWORD *)(v52 + 56);
      else
        v53 = *((_QWORD *)v71[0] + 66);
      v54 = *(_QWORD *)(v51 + 40);
      *(_QWORD *)v70 = v53;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v54);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v51 + 40));
      v76[0] = 0LL;
      v76[1] = v53;
      XDCOBJ::vAccumulate((XDCOBJ *)v71, (struct ERECTL *)v76);
    }
    v55 = 1;
    goto LABEL_115;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v68);
  v11 = v71[0];
  v12 = *((_QWORD *)v71[0] + 10);
  v13 = *(_DWORD *)(v12 + 8);
  if ( (v13 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v71[0], *(_QWORD *)(v12 + 16));
    v11 = v71[0];
  }
  if ( (v13 & 0x2000) != 0 )
  {
    GreDCSelectPen(v11, *(_QWORD *)(*((_QWORD *)v11 + 10) + 24LL));
    v11 = v71[0];
  }
  v14 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)v11 + 64);
  if ( v14 && *((_WORD *)v14 + 50) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v70, (struct XDCOBJ *)v71);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v68);
    pbo = (BRUSHOBJ *)ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    bConvertDfbDcToDib((struct XDCOBJ *)v71);
    SEMOBJ::vUnlock((SEMOBJ *)&pbo);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v56);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v70);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
  v109 = 0LL;
  v110 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v108, (struct XDCOBJ *)v71, 0);
  v15 = *((_QWORD *)v71[0] + 64);
  v69.x = a2;
  v69.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v99, (struct XDCOBJ *)v71, 516);
  v16 = 1;
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v99, &v69, 1LL) )
    goto LABEL_56;
  v17 = *(_QWORD *)(v15 + 48);
  v18 = *(_QWORD *)(v15 + 128);
  v19 = *((_QWORD *)v71[0] + 12);
  if ( (*(_DWORD *)(*((_QWORD *)v71[0] + 6) + 32LL) & 0x80u) != 0
    || (unsigned int)DC::bIsCMYKColor(v71[0])
    || (*(_DWORD *)(v20 + 112) & 2) != 0 )
  {
    EngSetLastError(0x57u);
    v16 = 0;
    goto LABEL_58;
  }
  NearestIndexFromColorref = ulGetNearestIndexFromColorref(v18, v19, a4, 1LL);
  v22 = v71[0];
  v23 = NearestIndexFromColorref;
  v24 = (BRUSHOBJ *)((char *)v71[0] + 1600);
  v25 = *((_QWORD *)v71[0] + 10);
  v26 = (*((_DWORD *)v71[0] + 28) & 5) != 0;
  pbo = (BRUSHOBJ *)((char *)v71[0] + 1600);
  v27 = *(_DWORD *)(v25 + 8);
  v72 = v26 ? 2 : 0;
  if ( (v27 & 1) != 0 || (*((_DWORD *)v71[0] + 83) & 1) != 0 )
  {
    *(_DWORD *)(v25 + 8) = v27 & 0xFFFFFFFE;
    *((_DWORD *)v71[0] + 83) &= ~1u;
    EBRUSHOBJ::vInitBrush(v24, v71[0], *((_QWORD *)v71[0] + 18), v19, v18, v15, 1);
    v22 = v71[0];
    v24 = pbo;
  }
  if ( ((__int64)v24[5].pvRbrush & 0x100) != 0 )
    goto LABEL_58;
  if ( (v108[24] & 1) == 0 )
  {
    v16 = XDCOBJ::bFullScreen((XDCOBJ *)v71);
LABEL_58:
    v9 = v16;
    goto LABEL_56;
  }
  v28 = (*((_BYTE *)v22 + 40) & 1) != 0 ? 8 : 0;
  v69.x += *(_DWORD *)((char *)v22 + v28 + 1432);
  v69.y += *(_DWORD *)((char *)v22 + v28 + 1436);
  v75 = XDCOBJ::prgnEffRao(v71);
  if ( RGNOBJ::bInside((RGNOBJ *)&v75, &v69) == 2 )
  {
    memset(v88, 0, sizeof(v88));
    v81 = 0LL;
    v82 = 0;
    v83 = 0;
    *(_QWORD *)v70 = *(_QWORD *)(v15 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)v70, (struct _SURFOBJ *)(v15 + 24), 0LL, 0);
    v74 = 0;
    v29 = *(struct _RECTL *)((char *)v75 + 88);
    v111 = v29;
    if ( !*(_WORD *)(v15 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v75) != 3 )
    {
      v30 = *(_QWORD *)(v15 + 80);
      v31 = *(_DWORD *)(v15 + 88);
      v32 = *(_DWORD *)(v15 + 96);
      y = v69.y;
      x = v69.x;
      goto LABEL_23;
    }
    LODWORD(v88[0]) = *(_DWORD *)(v15 + 96);
    v70[0] = v88[0];
    HIDWORD(v88[0]) = v111.right - v111.left;
    LODWORD(v88[1]) = v111.bottom - v111.top;
    v57 = 1;
    LODWORD(v88[3]) = 1;
    v88[2] = 0LL;
    if ( (*(_DWORD *)(v15 + 112) & 0x40000) != 0 )
      v57 = 262145;
    LODWORD(v88[3]) = v57;
    SURFMEM::bCreateDIB((SURFMEM *)&v81, (struct _DEVBITMAPINFO *)v88, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v81 )
    {
      EngSetLastError(8u);
      goto LABEL_55;
    }
    v58 = (*(_DWORD *)(v15 + 112) & 0x400) == 0;
    v113 = HIDWORD(v88[0]);
    v114 = v88[1];
    v112 = 0LL;
    if ( v58 )
      v59 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, __int64 *, struct _RECTL *))EngCopyBits)(
              v81 + 24,
              v15 + 24,
              0LL,
              xloIdent,
              &v112,
              &v111);
    else
      v59 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, __int64 *, struct _RECTL *))(v17 + 2856))(
              v81 + 24,
              v15 + 24,
              0LL,
              xloIdent,
              &v112,
              &v111);
    left = v111.left;
    top = v111.top;
    v62 = v59;
    v63 = -v111.left;
    v64 = -v111.top;
    v73.x = -v111.left;
    v73.y = -v111.top;
    if ( !v59 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v75) != 3 )
    {
      v111.right += v63;
      v111.left = v63 + left;
      v111.bottom += v64;
      v111.top = v64 + top;
      goto LABEL_94;
    }
    v62 = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v76);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v76);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v80);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v80);
    if ( !v76[0]
      || !v80[0]
      || (RGNOBJ::vSet((RGNOBJ *)v76, &v111),
          !RGNOBJ::bMerge((RGNOBJ *)v80, (struct RGNOBJ *)v76, (struct RGNOBJ *)&v75, BYTE4(gafjRgnOp))) )
    {
LABEL_91:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v80);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v76);
      v64 = v73.y;
      v63 = v73.x;
LABEL_94:
      if ( !v62 )
        goto LABEL_55;
      x = v63 + v69.x;
      v29 = v111;
      v32 = v70[0];
      y = v64 + v69.y;
      v69.x += v63;
      v73.y = -v64;
      v69.y += v64;
      v73.x = -v63;
      v31 = *(_DWORD *)(v81 + 88);
      v30 = *(_QWORD *)(v81 + 80);
      v74 = 1;
LABEL_23:
      v98 = -1;
      v77 = v30;
      v93 = v32;
      v94 = v29;
      v95 = v23;
      v35 = *(_QWORD *)(v15 + 128);
      v36 = (unsigned __int8 *)(v30 + y * v31);
      v96 = a5;
      v97 = v36;
      if ( v35 )
      {
        v37 = *(_DWORD *)(v35 + 24);
        if ( (v37 & 0xC) != 0 )
        {
          v98 = 0xFFFFFF;
        }
        else if ( (v37 & 2) != 0 )
        {
          v98 = **(_DWORD **)(v35 + 120) | *(_DWORD *)(*(_QWORD *)(v35 + 120) + 4LL) | *(_DWORD *)(*(_QWORD *)(v35 + 120)
                                                                                                 + 8LL);
        }
      }
      v38 = FLOODBM::iColorGet((FLOODBM *)&v93, x);
      if ( !v40 && v38 == v23 || v38 != v23 && v40 == 1 )
        goto LABEL_55;
      FLOODBM::vFindExtent((FLOODBM *)&v93, v39, &v72, v70);
      v41 = v70[0];
      STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v89, 0x1B8u, 1u, y, v72, v70[0]);
      if ( !v92 )
      {
        EngSetLastError(8u);
        goto LABEL_54;
      }
      STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v84, 0xF8u, 0, v69.y, v72, v41);
      if ( !v87 )
      {
        EngSetLastError(8u);
        goto LABEL_53;
      }
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v79, 0x1348u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v79);
      if ( v79[0] )
      {
        v42 = 1;
        v43 = v111.bottom - 1;
        v70[0] = v111.top;
        if ( v69.y >= v111.bottom - 1 )
        {
          v85 -= *(_DWORD *)(v86 + 8);
          v86 = *(_QWORD *)(v86 + 16);
        }
        else
        {
          v42 = FLOODBM::bExtendScanline(
                  (FLOODBM *)&v93,
                  (struct STACKOBJ *)v84,
                  (struct STACKOBJ *)v89,
                  v69.y + 1,
                  v36,
                  &v36[v31]) & 1;
        }
        if ( v42 )
        {
          v44 = v77;
          do
          {
            while ( 1 )
            {
              while ( v85 )
              {
                if ( !RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v79, (struct STACKOBJ *)v84) )
                  goto LABEL_111;
                if ( *(_DWORD *)v86 >= v43 )
                {
                  v85 -= *(_DWORD *)(v86 + 8);
                  v86 = *(_QWORD *)(v86 + 16);
                }
                else if ( !(unsigned int)FLOODBM::bExtendScanline(
                                           (FLOODBM *)&v93,
                                           (struct STACKOBJ *)v84,
                                           (struct STACKOBJ *)v89,
                                           *(_DWORD *)v86 + 1,
                                           (unsigned __int8 *)(v44 + v31 * *(_DWORD *)v86),
                                           (unsigned __int8 *)(v44 + v31 * *(_DWORD *)v86 + v31)) )
                {
LABEL_111:
                  v42 = 0;
                  goto LABEL_112;
                }
              }
              if ( !v90 )
                goto LABEL_44;
              v42 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v79, (struct STACKOBJ *)v89);
              if ( *(_DWORD *)v91 > v70[0] )
                break;
              v90 -= *(_DWORD *)(v91 + 8);
              v91 = *(_QWORD *)(v91 + 16);
            }
          }
          while ( (unsigned int)FLOODBM::bExtendScanline(
                                  (FLOODBM *)&v93,
                                  (struct STACKOBJ *)v89,
                                  (struct STACKOBJ *)v84,
                                  *(_DWORD *)v91 - 1,
                                  (unsigned __int8 *)(v44 + v31 * *(_DWORD *)v91),
                                  (unsigned __int8 *)(v44 + v31 * *(_DWORD *)v91 - v31)) );
          v42 = 0;
LABEL_44:
          if ( !v42 )
            goto LABEL_112;
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v79) != 1 )
          {
            if ( v74
              && (!RGNOBJ::bOffset((RGNOBJ *)v79, &v73) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v111, &v73)) )
            {
              goto LABEL_52;
            }
            v45 = pbo;
            v46 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)pbo,
                    *(_BYTE *)(*((_QWORD *)v71[0] + 10) + 72LL),
                    *(_BYTE *)(*((_QWORD *)v71[0] + 10) + 73LL));
            ++*(_DWORD *)(v15 + 92);
            v116 = 0LL;
            mix = v46;
            v117 = 0;
            v118 = 1;
            v119 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v79[0], (struct ERECTL *)&v111, 0);
            v49 = (POINTL *)v71[0];
            if ( (*((_DWORD *)v71[0] + 9) & 0xE0) != 0 )
            {
              XDCOBJ::vAccumulate((XDCOBJ *)v71, v48, (__m128i *)&v111);
              XDCOBJ::vAccumulateTight((XDCOBJ *)v71, v67, (__m128i *)&v111);
              v49 = (POINTL *)v71[0];
            }
            v42 = EngPaint((SURFOBJ *)(v15 + 24), &pco, v45, v49 + 199, mix);
          }
          if ( !v42 )
            goto LABEL_112;
        }
        else
        {
LABEL_112:
          EngSetLastError(8u);
        }
        v9 = v42;
      }
      else
      {
        EngSetLastError(8u);
      }
LABEL_52:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v79);
LABEL_53:
      STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v84);
LABEL_54:
      STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v89);
LABEL_55:
      SURFMEM::~SURFMEM((SURFMEM *)&v81);
      goto LABEL_56;
    }
    if ( !RGNOBJ::bOffset((RGNOBJ *)v80, &v73) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v111, &v73) )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v80);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v76);
      goto LABEL_55;
    }
    v116 = 0LL;
    v117 = 0;
    v118 = 1;
    v119 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v80[0], (struct ERECTL *)&v111, 0);
    v102 = -1;
    v100.flColorType = v72;
    v106 = 0LL;
    v105 = 0LL;
    v100.pvRbrush = 0LL;
    v103 = 0LL;
    v104 = 0LL;
    v107 = 0;
    if ( a5 )
    {
      v100.iSolidColor = (v23 & 1) == 0;
      if ( gbMultiMonMismatchColor )
      {
        v65 = ulIndexToRGB(v18, v19, (v23 & 1) == 0);
        goto LABEL_87;
      }
    }
    else
    {
      v100.iSolidColor = v23;
      if ( gbMultiMonMismatchColor )
      {
        v65 = v77;
LABEL_87:
        v102 = v65;
        v101 = v65;
      }
    }
    v66 = 0LL;
    if ( v81 )
      v66 = (SURFOBJ *)(v81 + 24);
    v62 = EngPaint(v66, &pco, &v100, 0LL, 0xD0Du);
    EBRUSHOBJ::vDelete((EBRUSHOBJ *)&v100);
    goto LABEL_91;
  }
LABEL_56:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v108);
LABEL_57:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v71);
  return v9;
}
