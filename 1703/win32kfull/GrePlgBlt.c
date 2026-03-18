/*
 * XREFs of GrePlgBlt @ 0x1C026DEAC
 * Callers:
 *     NtGdiPlgBlt @ 0x1C026E420 (NtGdiPlgBlt.c)
 * Callees:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0074BF8 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0074C40 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0093064 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009559C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0095824 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0095864 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C0095CE8 (-bEqualExtents@BLTRECORD@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0095D34 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00F23E8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026BB04 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotated@BLTRECORD@@QEAAHXZ @ 0x1C026C624 (-bRotated@BLTRECORD@@QEAAHXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C026C6A4 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C026C718 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 */

__int64 __fastcall GrePlgBlt(
        HDC a1,
        struct _POINTL *a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v12; // edi
  int valid; // eax
  __int64 v16; // r9
  DC *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  ULONG v20; // ecx
  struct SURFACE *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct SURFACE *v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned __int8 v34; // r9
  DC *v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[16]; // [rsp+80h] [rbp-80h] BYREF
  HDC v39[6]; // [rsp+90h] [rbp-70h] BYREF
  char v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C4h] [rbp-3Ch]
  char v42; // [rsp+D8h] [rbp-28h]
  __int64 v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int64 v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  struct _POINTL v47[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v48; // [rsp+150h] [rbp+50h] BYREF
  __int64 v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  __int64 v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  struct SURFACE *v53; // [rsp+180h] [rbp+80h]
  struct SURFACE *v54; // [rsp+188h] [rbp+88h]
  __int64 v55; // [rsp+190h] [rbp+90h]
  __int64 v56[4]; // [rsp+198h] [rbp+98h] BYREF
  struct _POINTFIX v57[7]; // [rsp+1B8h] [rbp+B8h] BYREF
  int v58; // [rsp+1F0h] [rbp+F0h]
  int v59; // [rsp+1F4h] [rbp+F4h]
  int v60; // [rsp+1F8h] [rbp+F8h]
  int v61; // [rsp+1FCh] [rbp+FCh]
  int v62; // [rsp+200h] [rbp+100h]
  int v63; // [rsp+204h] [rbp+104h]
  int v64; // [rsp+208h] [rbp+108h]
  int v65; // [rsp+20Ch] [rbp+10Ch]
  int v66; // [rsp+218h] [rbp+118h]
  int v67; // [rsp+21Ch] [rbp+11Ch]

  v12 = 0;
  v55 = 0LL;
  v67 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  DCOBJ::DCOBJ((DCOBJ *)v37, a3);
  if ( !v36[0] || !v37[0] || (*((_DWORD *)v36[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_48;
  }
  bSpDwmValidateSurface((struct XDCOBJ *)v37, a4, a5, a6, a7);
  v39[5] = 0LL;
  v40 = 0;
  v41 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v39, (struct XDCOBJ *)v36, (struct XDCOBJ *)v37);
  if ( (v42 & 1) == 0 )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v36) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v37) )
      v12 = 1;
    goto LABEL_46;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)v36);
  v16 = v37[0];
  if ( valid
    && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v37)
    && (*(_DWORD *)(*(_QWORD *)(v16 + 512) + 112LL) & 0x10000000) == 0 )
  {
    goto LABEL_23;
  }
  v17 = v36[0];
  v18 = *((_QWORD *)v36[0] + 10);
  if ( (*(_DWORD *)(v18 + 8) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v36[0], *(_QWORD *)(v18 + 16));
    v17 = v36[0];
    v16 = v37[0];
  }
  v19 = *(_QWORD *)(v16 + 80);
  if ( (*(_DWORD *)(v19 + 8) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v16, *(_QWORD *)(v19 + 16));
    v17 = v36[0];
    v16 = v37[0];
  }
  if ( (*((_DWORD *)v17 + 8) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v37))
    && (*((_DWORD *)v17 + 9) & 0xE0) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v36, 0x204u, 0);
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v47, a2, v57, 3uLL) )
    {
LABEL_19:
      v20 = 87;
LABEL_45:
      EngSetLastError(v20);
      goto LABEL_46;
    }
    BLTRECORD::vExtrema((BLTRECORD *)v47);
    BLTRECORD::vBound((BLTRECORD *)v47, (struct ERECTL *)v38);
    XDCOBJ::vAccumulate((XDCOBJ *)v36, (struct ERECTL *)v38);
    v17 = v36[0];
    v16 = v37[0];
  }
  if ( (*(_DWORD *)(v16 + 36) & 1) != 0 )
  {
LABEL_23:
    v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v21, v22, v23, v24)
      || (v25 = XDCOBJ::pSurfaceEff((XDCOBJ *)v36), !(unsigned int)DestSurfaceAccessCheck(v25)) )
    {
      v20 = 5;
      goto LABEL_45;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v36, 0x204u, 0);
    v53 = XDCOBJ::pSurfaceEff((XDCOBJ *)v36);
    v49 = *((_QWORD *)v53 + 16);
    v50 = *((_QWORD *)v36[0] + 12);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v48, (struct XDCOBJ *)v37, 0x204u, 0);
    v54 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37);
    v51 = *((_QWORD *)v54 + 16);
    v52 = *(_QWORD *)(v37[0] + 96LL);
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         v56,
                         0LL,
                         *((_DWORD *)v36[0] + 28),
                         v51,
                         v49,
                         v52,
                         v50,
                         *(_DWORD *)(*((_QWORD *)v36[0] + 10) + 40LL),
                         *(_DWORD *)(*((_QWORD *)v36[0] + 10) + 32LL),
                         a11,
                         0) )
    {
      v67 |= 2u;
      v56[1] = 0LL;
      if ( (*(_BYTE *)(v48 + 32) & 1) == 0 || !(unsigned int)BLTRECORD::Src(v47, a4, a5, a6, a7) )
        goto LABEL_19;
      if ( a8 )
      {
        LOBYTE(v26) = 5;
        v28 = HmgShareLockCheck(a8, v26);
        v30 = v28;
        if ( !v28 )
        {
          v20 = 6;
          goto LABEL_45;
        }
        INC_SHARE_REF_CNT(v28, v29);
        v67 |= 0x30000u;
        v27 = 65540;
        v55 = v30;
        v66 = 43724;
        if ( *(_WORD *)(v30 + 100) || *(_DWORD *)(v30 + 96) != 1 )
        {
          EngSetLastError(6u);
          DEC_SHARE_REF_CNT(v30);
          goto LABEL_46;
        }
        v62 = a9;
        v64 = a9 + v60 - v58;
        v63 = a10;
        v65 = a10 + v61 - v59;
        DEC_SHARE_REF_CNT(v30);
      }
      else
      {
        v55 = 0LL;
        v27 = 4;
        v66 = 52428;
      }
      if ( EXFORMOBJ::bXform((EXFORMOBJ *)v47, a2, v57, 3uLL) )
      {
        v31 = BLTRECORD::bRotated((BLTRECORD *)v47);
        v32 = *((_QWORD *)v36[0] + 10);
        if ( v31 )
        {
          v33 = BLTRECORD::bRotate(
                  (struct _POINTFIX *)v47,
                  (struct DCOBJ *)v36,
                  (struct DCOBJ *)v37,
                  v27,
                  *(_BYTE *)(v32 + 75));
        }
        else
        {
          v34 = *(_BYTE *)(v32 + 75);
          if ( v34 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v47) )
            v33 = BLTRECORD::bStretch((BLTRECORD *)v47, (struct DCOBJ *)v36, (struct DCOBJ *)v37, v27, v34);
          else
            v33 = BLTRECORD::bBitBlt((BLTRECORD *)v47, v36, (struct DCOBJ *)v37, v27);
        }
        v12 = v33;
        goto LABEL_46;
      }
      goto LABEL_19;
    }
  }
  else
  {
    LOBYTE(v12) = *((_QWORD *)v17 + 64) == 0LL;
  }
LABEL_46:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v39);
LABEL_48:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v37);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v36);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v47);
  return v12;
}
