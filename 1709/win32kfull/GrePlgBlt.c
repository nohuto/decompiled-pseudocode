/*
 * XREFs of GrePlgBlt @ 0x1C0001CD0
 * Callers:
 *     NtGdiPlgBlt @ 0x1C0001B90 (NtGdiPlgBlt.c)
 * Callees:
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0002030 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C00020FC (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0002190 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C001B97C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C001BC08 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C001BC50 (-bEqualExtents@BLTRECORD@@QEAAHXZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C001BC9C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001C124 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001C7A8 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0021030 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BE10 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BE58 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0102874 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GrePlgBlt(
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
  int v14; // r9d
  BOOL v15; // edi
  int valid; // eax
  __int64 v17; // r9
  struct SURFACE *v18; // rax
  struct SURFACE *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // esi
  int v22; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  ULONG v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rbx
  unsigned __int8 v30; // r9
  _QWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v33[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v34[40]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C4h] [rbp-3Ch]
  char v38; // [rsp+D8h] [rbp-28h]
  __int64 v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  __int64 v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  _BYTE v43[16]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v44; // [rsp+150h] [rbp+50h] BYREF
  __int64 v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  __int64 v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  struct SURFACE *v49; // [rsp+180h] [rbp+80h]
  struct SURFACE *v50; // [rsp+188h] [rbp+88h]
  __int64 v51; // [rsp+190h] [rbp+90h]
  char v52[8]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v53; // [rsp+1A0h] [rbp+A0h]
  struct _POINTFIX v54; // [rsp+1B8h] [rbp+B8h] BYREF
  int v55; // [rsp+1C0h] [rbp+C0h]
  int v56; // [rsp+1C4h] [rbp+C4h]
  int v57; // [rsp+1C8h] [rbp+C8h]
  int v58; // [rsp+1CCh] [rbp+CCh]
  FIX v59; // [rsp+1D8h] [rbp+D8h]
  FIX v60; // [rsp+1DCh] [rbp+DCh]
  int v61; // [rsp+1E0h] [rbp+E0h]
  int v62; // [rsp+1E4h] [rbp+E4h]
  int v63; // [rsp+1F0h] [rbp+F0h]
  int v64; // [rsp+1F4h] [rbp+F4h]
  int v65; // [rsp+1F8h] [rbp+F8h]
  int v66; // [rsp+1FCh] [rbp+FCh]
  int v67; // [rsp+200h] [rbp+100h]
  int v68; // [rsp+204h] [rbp+104h]
  int v69; // [rsp+208h] [rbp+108h]
  int v70; // [rsp+20Ch] [rbp+10Ch]
  int v71; // [rsp+218h] [rbp+118h]
  int v72; // [rsp+21Ch] [rbp+11Ch]

  v51 = 0LL;
  v72 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v31, a1);
  DCOBJ::DCOBJ((DCOBJ *)v32, a3);
  if ( v31[0] && v32[0] && (*(_DWORD *)(v31[0] + 36LL) & 0x10000) == 0 )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v32, a4, a5, a6, a7);
    v35 = 0LL;
    v36 = 0;
    v37 = 0;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v34, (struct XDCOBJ *)v31, (struct XDCOBJ *)v32, v14);
    v15 = 1;
    if ( (v38 & 1) == 0 )
    {
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v31) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v32) )
        goto LABEL_19;
      goto LABEL_25;
    }
    valid = XDCOBJ::bValidSurf((XDCOBJ *)v31);
    v17 = v32[0];
    if ( !valid
      || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v32)
      || (*(_DWORD *)(*(_QWORD *)(v17 + 512) + 112LL) & 0x10000000) != 0 )
    {
      v24 = v31[0];
      v25 = *(_QWORD *)(v31[0] + 80LL);
      if ( (*(_DWORD *)(v25 + 8) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v31[0], *(_QWORD *)(v25 + 16));
        v24 = v31[0];
        v17 = v32[0];
      }
      v26 = *(_QWORD *)(v17 + 80);
      if ( (*(_DWORD *)(v26 + 8) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v17, *(_QWORD *)(v26 + 16));
        v24 = v31[0];
        v17 = v32[0];
      }
      if ( (*(_DWORD *)(v24 + 32) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v32))
        && (*(_DWORD *)(v24 + 36) & 0xE0) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)v43, (struct XDCOBJ *)v31, 0x204u, 0);
        if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v43, a2, &v54, 3uLL) )
          goto LABEL_40;
        BLTRECORD::vExtrema((BLTRECORD *)v43);
        BLTRECORD::vBound((BLTRECORD *)v43, (struct ERECTL *)v33);
        XDCOBJ::vAccumulate((XDCOBJ *)v31, (struct ERECTL *)v33);
        v24 = v31[0];
        v17 = v32[0];
      }
      if ( (*(_DWORD *)(v17 + 36) & 1) == 0 )
      {
        v15 = *(_QWORD *)(v24 + 512) == 0LL;
        goto LABEL_19;
      }
    }
    v18 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v18)
      || (v19 = XDCOBJ::pSurfaceEff((XDCOBJ *)v31), !(unsigned int)DestSurfaceAccessCheck(v19)) )
    {
      v27 = 5;
      goto LABEL_59;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v43, (struct XDCOBJ *)v31, 0x204u, 0);
    v49 = XDCOBJ::pSurfaceEff((XDCOBJ *)v31);
    v45 = *((_QWORD *)v49 + 16);
    v46 = *(_QWORD *)(v31[0] + 96LL);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v44, (struct XDCOBJ *)v32, 0x204u, 0);
    v50 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32);
    v47 = *((_QWORD *)v50 + 16);
    v48 = *(_QWORD *)(v32[0] + 96LL);
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          v52,
                          0LL,
                          *(unsigned int *)(v31[0] + 112LL),
                          v47,
                          v45,
                          v48,
                          v46,
                          *(_DWORD *)(*(_QWORD *)(v31[0] + 80LL) + 40LL),
                          *(_DWORD *)(*(_QWORD *)(v31[0] + 80LL) + 32LL),
                          a11,
                          0) )
      goto LABEL_25;
    v72 |= 2u;
    v53 = 0LL;
    if ( (*(_DWORD *)(v44 + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src((BLTRECORD *)v43, a4, a5, a6, a7) )
    {
      if ( !a8 )
      {
        v51 = 0LL;
        v21 = 4;
        v71 = 52428;
        goto LABEL_15;
      }
      LOBYTE(v20) = 5;
      v28 = HmgShareLockCheck(a8, v20);
      v29 = v28;
      if ( !v28 )
      {
        v27 = 6;
        goto LABEL_59;
      }
      INC_SHARE_REF_CNT(v28);
      v72 |= 0x30000u;
      v21 = 65540;
      v51 = v29;
      v71 = 43724;
      if ( !*(_WORD *)(v29 + 100) && *(_DWORD *)(v29 + 96) == 1 )
      {
        v67 = a9;
        v69 = a9 + v65 - v63;
        v68 = a10;
        v70 = a10 + v66 - v64;
        DEC_SHARE_REF_CNT(v29);
LABEL_15:
        if ( EXFORMOBJ::bXform((EXFORMOBJ *)v43, a2, &v54, 3uLL) )
        {
          if ( v56 != v54.y
            || v57 != v54.x
            || (v54.x & 0xF) != 0
            || (v54.y & 0xF) != 0
            || (v55 & 0xF) != 0
            || (v56 & 0xF) != 0
            || (v57 & 0xF) != 0
            || (v58 & 0xF) != 0 )
          {
            v22 = BLTRECORD::bRotate(
                    (BLTRECORD *)v43,
                    (struct DCOBJ *)v31,
                    (struct DCOBJ *)v32,
                    v21,
                    *(_BYTE *)(*(_QWORD *)(v31[0] + 80LL) + 75LL));
          }
          else
          {
            v62 = v58 >> 4;
            v59 = v54.x >> 4;
            v60 = v54.y >> 4;
            v61 = v55 >> 4;
            v30 = *(_BYTE *)(*(_QWORD *)(v31[0] + 80LL) + 75LL);
            if ( v30 == 4 || !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v43) )
              v22 = BLTRECORD::bStretch((BLTRECORD *)v43, (struct DCOBJ *)v31, (struct DCOBJ *)v32, v21, v30);
            else
              v22 = BLTRECORD::bBitBlt((BLTRECORD *)v43, (struct DCOBJ *)v31, (struct DCOBJ *)v32, v21);
          }
          v15 = v22;
          goto LABEL_19;
        }
        goto LABEL_40;
      }
      EngSetLastError(6u);
      DEC_SHARE_REF_CNT(v29);
LABEL_25:
      v15 = 0;
LABEL_19:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v34);
      goto LABEL_20;
    }
LABEL_40:
    v27 = 87;
LABEL_59:
    EngSetLastError(v27);
    goto LABEL_25;
  }
  EngSetLastError(6u);
  v15 = 0;
LABEL_20:
  if ( v32[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  if ( v31[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v31);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v43);
  return v15;
}
