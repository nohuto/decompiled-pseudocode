/*
 * XREFs of NtGdiFrameRgn @ 0x1C012A6A0
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C012B3D4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001731C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00182BC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00289C8 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E93EC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E9480 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C00EA21C (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00F98A8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00F98EC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012C2AC (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C012CA5C (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     EngPaint @ 0x1C012CA90 (EngPaint.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C012CB44 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C012CB94 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C012CCF4 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v8; // esi
  int v9; // r12d
  int v10; // ebx
  int v11; // edi
  EPATHOBJ *v12; // rcx
  struct _RECTL v13; // xmm0
  __int64 v14; // r8
  __int64 v15; // rcx
  DC *v16; // rax
  DC *v17; // rax
  __int64 v18; // r15
  __int64 v19; // rcx
  struct REGION *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  struct ECLIPOBJ *v23; // rdx
  struct BRUSH *v24; // r14
  DC *v25; // rax
  DC *v26; // rcx
  MIX mix; // eax
  DC *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  DC *v34; // rax
  __int64 v35; // rax
  DC *v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  _XFORMOBJ v40[2]; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+7Ch] [rbp-84h]
  struct BRUSH *v42[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v43[4]; // [rsp+90h] [rbp-70h] BYREF
  _LINEATTRS v44; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-28h]
  _BYTE v46[16]; // [rsp+100h] [rbp+0h] BYREF
  __m128i rclBounds; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+120h] [rbp+20h] BYREF
  int v49; // [rsp+13Ch] [rbp+3Ch]
  __int64 v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  char *v52; // [rsp+158h] [rbp+58h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  __int128 v54; // [rsp+180h] [rbp+80h]
  int v55; // [rsp+1A0h] [rbp+A0h]
  __m128i *v56[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v57[8]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v58; // [rsp+238h] [rbp+138h]
  struct _RECTL v59; // [rsp+2B0h] [rbp+1B0h] BYREF
  CLIPOBJ pco; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v61; // [rsp+310h] [rbp+210h]
  int v62; // [rsp+318h] [rbp+218h]
  int v63; // [rsp+340h] [rbp+240h]
  __int64 v64; // [rsp+350h] [rbp+250h]
  char v65; // [rsp+360h] [rbp+260h] BYREF

  v8 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v43, a2, 1);
  v10 = abs32(a4);
  v11 = abs32(a5);
  if ( !v36[0] || (*((_DWORD *)v36[0] + 9) & 0x10000) != 0 || !v43[0] || v10 <= 0 || v11 <= 0 )
    goto LABEL_38;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v43) == 1 )
  {
    v8 = 1;
    goto LABEL_38;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v56);
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v57);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v36, -2147483132);
  if ( v56[1] )
  {
    if ( v58 )
    {
      if ( RGNOBJ::bCreate((RGNOBJ *)v43, (struct EPATHOBJ *)v56, (struct EXFORMOBJ *)v46) )
      {
        v41 = 0;
        *(_QWORD *)&v40[0].ulReserved = &v65;
        EPATHOBJ::vWidenSetupForFrameRgn(v12, (struct XDCOBJ *)v36, v10, v11, (struct EXFORMOBJ *)v40, &v44);
        if ( (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v57, (struct EPATHOBJ *)v56, v40, &v44) )
        {
          if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v57, v56, v40, &v44) )
          {
            v39 = 0;
            RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v38, (struct EPATHOBJ *)v57, 2u, 0LL);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v37);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v37);
            if ( !v38 || !v37[0] )
              goto LABEL_35;
            if ( (*(_DWORD *)(*((_QWORD *)v36[0] + 10) + 352LL) & 0x802) == 0x802 )
            {
              v8 = RGNOBJ::bMerge((RGNOBJ *)v37, (struct RGNOBJ *)&v38, (struct RGNOBJ *)v43, BYTE1(gafjRgnOp));
            }
            else
            {
              v59.right = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v59, (struct EPATHOBJ *)v56, 1u, 0LL);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v59);
              if ( *(_QWORD *)&v59.left )
                v8 = RGNOBJ::bMerge((RGNOBJ *)v37, (struct RGNOBJ *)&v38, (struct RGNOBJ *)&v59, BYTE1(gafjRgnOp)) != 0;
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v59);
            }
            if ( !v8 )
              goto LABEL_35;
            v59 = 0LL;
            v13 = *(struct _RECTL *)(v37[0] + 88LL);
            v44.pstyle = (PFLOAT_LONG)v36;
            v59 = v13;
            if ( !ERECTL::bEmpty((ERECTL *)&v59) )
              v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v44, &v59);
            if ( (*((_DWORD *)v36[0] + 9) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)v36, (struct ERECTL *)&v59);
            if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v36) || !*(_QWORD *)(v14 + 512) )
              goto LABEL_35;
            *(_QWORD *)&v44.elStyleState.e = 0LL;
            v45 = 0LL;
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v44, (struct XDCOBJ *)v36, 0);
            v15 = v37[0];
            v16 = v36[0];
            if ( !v37[0] )
              *((_DWORD *)v36[0] + 9) |= 0x10u;
            *((_QWORD *)v16 + 191) = v15;
            v17 = v36[0];
            v18 = *((_QWORD *)v36[0] + 64);
            if ( ((__int64)v44.pstyle & 1) != 0 )
            {
              if ( (unsigned int)DC::bTightenRao(v36[0]) )
              {
                v19 = *((_DWORD *)v36[0] + 10) & 1;
                v59.left += *((_DWORD *)v36[0] + 2 * v19 + 358);
                v59.right += *((_DWORD *)v36[0] + 2 * v19 + 358);
                v59.top += *((_DWORD *)v36[0] + 2 * v19 + 359);
                v59.bottom += *((_DWORD *)v36[0] + 2 * v19 + 359);
                GreScaleValuesInternal((struct XDCOBJ *)v36, &v59.left, 4u);
                v20 = XDCOBJ::prgnEffRao(v36);
                v61 = 0LL;
                v62 = 0;
                v63 = 1;
                v64 = 0LL;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v20, (struct ERECTL *)&v59, 0);
                if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
                {
                  v34 = v36[0];
                  *((_DWORD *)v36[0] + 9) |= 0x10u;
                  *((_QWORD *)v34 + 191) = 0LL;
                }
                else
                {
                  v21 = *(_QWORD *)(v18 + 128);
                  v22 = *((_QWORD *)v36[0] + 12);
                  v49 = -1;
                  v53 = 0LL;
                  v54 = 0LL;
                  pbo.pvRbrush = 0LL;
                  pbo.flColorType = 0;
                  v50 = 0LL;
                  v51 = 0LL;
                  v55 = 0;
                  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v42, a3);
                  v24 = v42[0];
                  v8 = 0;
                  v25 = v36[0];
                  if ( v42[0] )
                  {
                    if ( (*((_DWORD *)v36[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v42[0] + 12) & 0x100) == 0 )
                    {
                      rclBounds = (__m128i)pco.rclBounds;
                      XDCOBJ::vAccumulateTight((XDCOBJ *)v36, v23, &rclBounds);
                    }
                    bSyncBrushObj(v24);
                    EBRUSHOBJ::vInitBrush(&pbo, v36[0], v24, v22, v21, v18, 1);
                    v26 = v36[0];
                    v52 = (char *)v36[0] + 240;
                    if ( (*((_DWORD *)v24 + 12) & 0x100) != 0 )
                    {
                      *((_DWORD *)v36[0] + 9) |= 0x10u;
                      *((_QWORD *)v26 + 191) = 0LL;
                    }
                    else
                    {
                      mix = EBRUSHOBJ::mixBest(
                              (EBRUSHOBJ *)&pbo,
                              *(_BYTE *)(*((_QWORD *)v36[0] + 10) + 72LL),
                              *(_BYTE *)(*((_QWORD *)v36[0] + 10) + 73LL));
                      ++*(_DWORD *)(v18 + 92);
                      EngPaint((SURFOBJ *)(v18 + 24), &pco, &pbo, (POINTL *)v36[0] + 199, mix);
                      v28 = v36[0];
                      v8 = 1;
                      *((_DWORD *)v36[0] + 9) |= 0x10u;
                      *((_QWORD *)v28 + 191) = 0LL;
                    }
                    BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v42);
                  }
                  else
                  {
                    *((_DWORD *)v36[0] + 9) |= 0x10u;
                    *((_QWORD *)v25 + 191) = 0LL;
                  }
                  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v42);
                  EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
                }
                goto LABEL_34;
              }
              v17 = v36[0];
            }
            *((_DWORD *)v17 + 9) |= 0x10u;
            *((_QWORD *)v17 + 191) = 0LL;
            v8 = XDCOBJ::bFullScreen((XDCOBJ *)v36);
LABEL_34:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v44);
LABEL_35:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v37);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
          }
        }
      }
    }
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v57);
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v56);
  if ( v9 )
  {
    v35 = UserReferenceDwmApiPort(v30, v29, v31, v32);
    DwmSyncFlushAndWaitForBatch(v35);
  }
LABEL_38:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v43);
  if ( v36[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v36);
  return v8;
}
