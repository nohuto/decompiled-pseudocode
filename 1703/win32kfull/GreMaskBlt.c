/*
 * XREFs of GreMaskBlt @ 0x1C00F1F6C
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0077C10 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0092270 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiMaskBlt @ 0x1C00F1F60 (NtGdiMaskBlt.c)
 * Callees:
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071CC8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0072C4C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0074B50 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0074BF8 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0074C40 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0093064 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00954C4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009559C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C00955FC (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0095824 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0095864 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C0095CE8 (-bEqualExtents@BLTRECORD@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0095D34 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00F23E8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026BB04 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C026FE6C (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0273AF4 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  HDC v14; // r12
  unsigned int v15; // edi
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // r14d
  DC *v23; // r8
  __int64 v24; // rdx
  struct SURFACE *v25; // rax
  int v26; // ebx
  unsigned int v27; // eax
  int v29; // ecx
  ULONG v30; // ecx
  ULONG v31; // ecx
  struct SURFACE *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // r9d
  ULONG v36; // ecx
  int v37; // edx
  __int64 v38; // rdx
  int v39; // ecx
  DC *v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+70h] [rbp-90h]
  DC *v42[2]; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  int v45; // [rsp+90h] [rbp-70h]
  _BYTE v46[24]; // [rsp+98h] [rbp-68h] BYREF
  HDC v47[9]; // [rsp+B0h] [rbp-50h] BYREF
  char v48; // [rsp+F8h] [rbp-8h]
  HDC v49; // [rsp+160h] [rbp+60h] BYREF
  int v50; // [rsp+168h] [rbp+68h]
  int v51; // [rsp+16Ch] [rbp+6Ch]
  struct _POINTL v52[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v53[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  __int64 v56; // [rsp+1A0h] [rbp+A0h]
  __int64 v57; // [rsp+1A8h] [rbp+A8h]
  __int64 v58; // [rsp+1B0h] [rbp+B0h]
  struct SURFACE *v59; // [rsp+1B8h] [rbp+B8h]
  __int64 v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h] BYREF
  char *v62; // [rsp+1D0h] [rbp+D0h]
  int v63; // [rsp+220h] [rbp+120h]
  int v64; // [rsp+224h] [rbp+124h]
  int v65; // [rsp+228h] [rbp+128h]
  int v66; // [rsp+22Ch] [rbp+12Ch]
  int v67; // [rsp+230h] [rbp+130h]
  int v68; // [rsp+234h] [rbp+134h]
  int v69; // [rsp+238h] [rbp+138h]
  int v70; // [rsp+23Ch] [rbp+13Ch]
  __int64 v71; // [rsp+240h] [rbp+140h]
  unsigned int v72; // [rsp+248h] [rbp+148h]
  int v73; // [rsp+24Ch] [rbp+14Ch]

  v14 = a6;
  v15 = 0;
  v44 = a2;
  v49 = a1;
  v43 = a3;
  v41 = a5;
  v60 = 0LL;
  v73 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v40, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v40) )
  {
    if ( v40[0] )
    {
      v29 = *((_DWORD *)v40[0] + 9);
      if ( (v29 & 0x10000) == 0 )
      {
        if ( (v29 & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v40, 516);
          v50 = a2 + a4;
          v49 = (HDC)__PAIR64__(v43, a2);
          v51 = a5 + v43;
          if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v46, (struct _POINTL *)&v49) )
            goto LABEL_35;
          ERECTL::vOrder((ERECTL *)&v49);
          XDCOBJ::vAccumulate((XDCOBJ *)v40, (struct ERECTL *)&v49);
        }
        v15 = 1;
        goto LABEL_35;
      }
    }
    goto LABEL_42;
  }
  if ( (*((_DWORD *)v40[0] + 9) & 0x10000) != 0 )
  {
LABEL_42:
    v30 = 87;
LABEL_44:
    EngSetLastError(v30);
    goto LABEL_35;
  }
  v17 = 1;
  if ( !a9 || (v18 = BYTE2(a12), BYTE2(a12) == HIBYTE(a12)) )
  {
    v60 = 0LL;
    v22 = (unsigned __int8)gajRop3[BYTE2(a12)];
    v72 = BYTE2(a12) | (BYTE2(a12) << 8);
    goto LABEL_9;
  }
  LOBYTE(v18) = 5;
  v19 = HmgShareLockCheck(a9, v18);
  v21 = v19;
  if ( !v19 )
  {
    v30 = 6;
    goto LABEL_44;
  }
  v60 = v19;
  if ( *(_WORD *)(v19 + 100) || *(_DWORD *)(v19 + 96) != 1 )
  {
    EngSetLastError(6u);
    DEC_SHARE_REF_CNT(v21);
    goto LABEL_35;
  }
  INC_SHARE_REF_CNT(v19, v20);
  v73 |= 0x30000u;
  v72 = HIWORD(a12);
  v22 = (unsigned __int8)gajRop3[BYTE2(a12)] | (unsigned __int8)gajRop3[HIBYTE(a12)] | 0x10000;
  DEC_SHARE_REF_CNT(v21);
LABEL_9:
  v42[1] = 0LL;
  v42[0] = 0LL;
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v47);
  v45 = v22 & 0xD4;
  if ( (v22 & 0xD4) != 0 && (XDCOBJ::vLock(v42, a6), v42[0]) )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v42, a7, a8, a4, v41);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v47, (struct XDCOBJ *)v40, (struct XDCOBJ *)v42);
  }
  else
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v47, v40);
  }
  if ( (v48 & 1) != 0 )
  {
    v58 = *((_QWORD *)v40[0] + 64);
    EXFORMOBJ::vInit((EXFORMOBJ *)v52, (struct XDCOBJ *)v40, 0x204u, 0);
    v23 = v40[0];
    v54 = *(_QWORD *)(v58 + 128);
    v55 = *((_QWORD *)v40[0] + 12);
    if ( !v45 )
    {
      v59 = 0LL;
      if ( (v22 & 0x10000) == 0 )
      {
        v26 = v41;
LABEL_25:
        if ( (v22 & 0xE8) != 0 )
        {
          v37 = *(_DWORD *)(*((_QWORD *)v23 + 10) + 8LL);
          v62 = (char *)v23 + 1600;
          if ( (v37 & 0x1000) != 0 )
          {
            GreDCSelectBrush(v23, *(_QWORD *)(*((_QWORD *)v23 + 10) + 16LL));
            v23 = v40[0];
          }
          v38 = *((_QWORD *)v23 + 10);
          v39 = *(_DWORD *)(v38 + 8);
          if ( (v39 & 1) != 0 || (*((_DWORD *)v23 + 83) & 1) != 0 )
          {
            *(_DWORD *)(v38 + 8) = v39 & 0xFFFFFFFE;
            *((_DWORD *)v40[0] + 83) &= ~1u;
            EBRUSHOBJ::vInitBrush(v62, v40[0], *((_QWORD *)v40[0] + 18), v55, v54, v58, 1);
            v23 = v40[0];
          }
          v71 = *((_QWORD *)v23 + 199);
        }
        else
        {
          v62 = 0LL;
        }
        if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)v23 + 64)) )
        {
          v31 = 5;
          goto LABEL_51;
        }
        if ( (*(_DWORD *)(*(_QWORD *)v52 + 32LL) & 1) != 0 )
        {
          if ( (unsigned int)BLTRECORD::Trg(v52, v44, v43, a4, v26) )
          {
            if ( v45 && !BLTRECORD::bEqualExtents((BLTRECORD *)v52) )
              v27 = BLTRECORD::bStretch(
                      (BLTRECORD *)v52,
                      (struct DCOBJ *)v40,
                      (struct DCOBJ *)v42,
                      v22,
                      *(_BYTE *)(*((_QWORD *)v40[0] + 10) + 75LL));
            else
              v27 = BLTRECORD::bBitBlt((BLTRECORD *)v52, v40, (struct DCOBJ *)v42, v22);
            goto LABEL_33;
          }
          goto LABEL_49;
        }
        if ( (unsigned int)BLTRECORD::TrgPlg((BLTRECORD *)v52, v44, v43, a4, v26) )
        {
          v27 = BLTRECORD::bRotate(
                  (BLTRECORD *)v52,
                  (struct DCOBJ *)v40,
                  (struct DCOBJ *)v42,
                  v22,
                  *(_BYTE *)(*((_QWORD *)v40[0] + 10) + 75LL));
          goto LABEL_33;
        }
LABEL_49:
        v31 = 87;
LABEL_51:
        EngSetLastError(v31);
        goto LABEL_34;
      }
      if ( !a6 )
        v14 = v49;
      XDCOBJ::vLock(v42, v14);
      if ( !v42[0] )
      {
        v31 = 6;
        goto LABEL_51;
      }
      EXFORMOBJ::vInit((EXFORMOBJ *)v53, (struct XDCOBJ *)v42, 0x204u, 0);
      if ( (*(_BYTE *)(v53[0] + 32LL) & 1) == 0 )
        goto LABEL_49;
      v26 = v41;
      if ( !(unsigned int)BLTRECORD::Msk((BLTRECORD *)v52, a10, a11, a4, v41) )
        goto LABEL_49;
LABEL_24:
      v23 = v40[0];
      goto LABEL_25;
    }
    if ( !v42[0] )
      goto LABEL_49;
    if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v42)
      && (*(_DWORD *)(*(_QWORD *)(v24 + 512) + 112LL) & 0x10000000) == 0 )
    {
      goto LABEL_17;
    }
    v32 = XDCOBJ::pSurfaceEff((XDCOBJ *)v42);
    if ( (v35 & *((_DWORD *)v32 + 28)) != 0 && *(_DWORD *)(v34 + 32) == 2 && (*(_DWORD *)(v34 + 36) & 0xE0) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v40, 516);
      v49 = (HDC)__PAIR64__(v43, v44);
      v50 = v44 + a4;
      v51 = v43 + v41;
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v46, (struct _POINTL *)&v49) )
      {
        ERECTL::vOrder((ERECTL *)&v49);
        XDCOBJ::vAccumulate((XDCOBJ *)v40, (struct ERECTL *)&v49);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v40, (struct ERECTL *)&v49);
      }
      goto LABEL_63;
    }
    if ( (*(_DWORD *)(v33 + 36) & 1) != 0 )
    {
LABEL_17:
      v25 = XDCOBJ::pSurfaceEff((XDCOBJ *)v42);
      if ( (unsigned int)SrcSurfaceAccessCheck(v25) )
      {
        v59 = XDCOBJ::pSurfaceEff((XDCOBJ *)v42);
        v56 = *((_QWORD *)v59 + 16);
        v57 = *((_QWORD *)v42[0] + 12);
        EXFORMOBJ::vInit((EXFORMOBJ *)v53, (struct XDCOBJ *)v42, 0x204u, 0);
        if ( (*(_BYTE *)(v53[0] + 32LL) & 1) != 0 )
        {
          v26 = v41;
          if ( (unsigned int)BLTRECORD::Src(v52, a7, a8, a4, v41) )
          {
            if ( (v22 & 0x10000) != 0 )
            {
              v67 = a10;
              v69 = a10 + v65 - v63;
              v68 = a11;
              v70 = a11 + v66 - v64;
            }
            if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  &v61,
                                  0LL,
                                  *((_DWORD *)v40[0] + 28),
                                  v56,
                                  v54,
                                  v57,
                                  v55,
                                  *(_DWORD *)(*((_QWORD *)v40[0] + 10) + 40LL),
                                  *(_DWORD *)(*((_QWORD *)v40[0] + 10) + 32LL),
                                  a13,
                                  0) )
              goto LABEL_34;
            v73 |= 2u;
            goto LABEL_24;
          }
        }
        v36 = 87;
      }
      else
      {
        v36 = 5;
      }
      EngSetLastError(v36);
    }
    v17 = 0;
LABEL_63:
    v15 = v17;
    goto LABEL_34;
  }
  v27 = XDCOBJ::bFullScreen((XDCOBJ *)v40);
LABEL_33:
  v15 = v27;
LABEL_34:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v47);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v42);
LABEL_35:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v40);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v52);
  return v15;
}
