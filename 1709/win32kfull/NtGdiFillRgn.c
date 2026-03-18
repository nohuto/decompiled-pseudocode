/*
 * XREFs of NtGdiFillRgn @ 0x1C012C5F0
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
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008F1D0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C00EA21C (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00F98A8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00F98EC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C012CA5C (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     EngPaint @ 0x1C012CA90 (EngPaint.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C012CB44 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C012CB94 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C012CCF4 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v4; // esi
  REGION *v6; // r13
  int v7; // r12d
  REGION *v8; // rcx
  DC *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rcx
  struct REGION *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  struct ECLIPOBJ *v15; // rdx
  struct BRUSH *v16; // r14
  MIX mix; // eax
  DC *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rax
  DC *v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  REGION *v27[3]; // [rsp+58h] [rbp-A8h] BYREF
  struct BRUSH *v28[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i rclBounds; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v31[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-58h]
  DC **v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  BRUSHOBJ pbo; // [rsp+120h] [rbp+20h] BYREF
  int v37; // [rsp+13Ch] [rbp+3Ch]
  __int64 v38; // [rsp+140h] [rbp+40h]
  __int64 v39; // [rsp+148h] [rbp+48h]
  char *v40; // [rsp+158h] [rbp+58h]
  __int64 v41; // [rsp+178h] [rbp+78h]
  __int128 v42; // [rsp+180h] [rbp+80h]
  int v43; // [rsp+1A0h] [rbp+A0h]
  struct _RECTL v44; // [rsp+1B0h] [rbp+B0h] BYREF
  CLIPOBJ pco; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v46; // [rsp+210h] [rbp+110h]
  int v47; // [rsp+218h] [rbp+118h]
  int v48; // [rsp+240h] [rbp+140h]
  __int64 v49; // [rsp+250h] [rbp+150h]

  v4 = 0;
  v26 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  v6 = 0LL;
  if ( !v25[0] || (*((_DWORD *)v25[0] + 9) & 0x10000) != 0 )
    goto LABEL_36;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v29, (struct XDCOBJ *)v25, -2147483132);
  v7 = *(_DWORD *)(*((_QWORD *)v25[0] + 10) + 352LL) & 0x802;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v27, a2, 0);
  if ( v27[0] )
  {
    if ( v7 == 2050 )
      goto LABEL_12;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v31);
    if ( v32 )
    {
      if ( v29[0] && RGNOBJ::bCreate((RGNOBJ *)v27, (struct EPATHOBJ *)v31, (struct EXFORMOBJ *)v29) )
      {
        v44.right = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v44, (struct EPATHOBJ *)v31, 1u, 0LL);
        if ( *(_QWORD *)&v44.left )
        {
          v6 = v27[0];
          v27[0] = *(REGION **)&v44.left;
          if ( v44.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v31);
LABEL_12:
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v27) == 1 )
            goto LABEL_39;
          v44 = 0LL;
          v44 = *(struct _RECTL *)((char *)v27[0] + 88);
          if ( (*((_DWORD *)v25[0] + 9) & 0xE0) != 0 )
            XDCOBJ::vAccumulate((XDCOBJ *)v25, (struct ERECTL *)&v44);
          v33 = v25;
          if ( !ERECTL::bEmpty((ERECTL *)&v44) )
            v26 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v31, &v44);
          if ( !*((_QWORD *)v25[0] + 64) )
          {
LABEL_39:
            v4 = 1;
LABEL_32:
            if ( v7 != 2050 )
            {
              REGION::vDeleteREGION(v27[0]);
              v27[0] = v6;
            }
            goto LABEL_34;
          }
          v35 = 0LL;
          v34 = 0LL;
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v31, (struct XDCOBJ *)v25, 0);
          v8 = v27[0];
          v9 = v25[0];
          if ( !v27[0] )
            *((_DWORD *)v25[0] + 9) |= 0x10u;
          *((_QWORD *)v9 + 191) = v8;
          v10 = *((_QWORD *)v25[0] + 64);
          if ( ((unsigned __int8)v33 & 1) == 0 || !(unsigned int)DC::bTightenRao(v25[0]) )
          {
            v4 = XDCOBJ::bFullScreen((XDCOBJ *)v25);
            goto LABEL_31;
          }
          v11 = *((_DWORD *)v25[0] + 10) & 1;
          v44.left += *((_DWORD *)v25[0] + 2 * v11 + 358);
          v44.right += *((_DWORD *)v25[0] + 2 * v11 + 358);
          v44.top += *((_DWORD *)v25[0] + 2 * v11 + 359);
          v44.bottom += *((_DWORD *)v25[0] + 2 * v11 + 359);
          GreScaleValuesInternal((struct XDCOBJ *)v25, &v44.left, 4u);
          v12 = XDCOBJ::prgnEffRao(v25);
          v46 = 0LL;
          v47 = 0;
          v48 = 1;
          v49 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v12, (struct ERECTL *)&v44, 0);
          if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
          {
            v18 = v25[0];
            v4 = 1;
            goto LABEL_31;
          }
          v13 = *(_QWORD *)(v10 + 128);
          v14 = *((_QWORD *)v25[0] + 12);
          v37 = -1;
          v39 = 0LL;
          v41 = 0LL;
          v42 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v38 = 0LL;
          v43 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v28, a3);
          v16 = 0LL;
          if ( v28[0] )
            v16 = v28[0];
          if ( (*((_DWORD *)v25[0] + 9) & 0xE0) != 0 )
          {
            if ( !v16 )
            {
LABEL_30:
              BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v28);
              EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
              v18 = v25[0];
LABEL_31:
              *((_DWORD *)v18 + 9) |= 0x10u;
              *((_QWORD *)v18 + 191) = 0LL;
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v31);
              goto LABEL_32;
            }
            if ( (*((_DWORD *)v16 + 12) & 0x100) == 0 )
            {
              rclBounds = (__m128i)pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v25, v15, &rclBounds);
            }
          }
          if ( v16 )
          {
            bSyncBrushObj(v16);
            EBRUSHOBJ::vInitBrush(&pbo, v25[0], v16, v14, v13, v10, 1);
            v40 = (char *)v25[0] + 240;
            if ( (*((_DWORD *)v16 + 12) & 0x100) == 0 )
            {
              mix = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)&pbo,
                      *(_BYTE *)(*((_QWORD *)v25[0] + 10) + 72LL),
                      *(_BYTE *)(*((_QWORD *)v25[0] + 10) + 73LL));
              ++*(_DWORD *)(v10 + 92);
              EngPaint((SURFOBJ *)(v10 + 24), &pco, &pbo, (POINTL *)v25[0] + 199, mix);
              v4 = 1;
            }
            BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v28);
          }
          goto LABEL_30;
        }
        EngSetLastError(8u);
        if ( v44.right == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v31);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v27);
    goto LABEL_36;
  }
LABEL_34:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v27);
  if ( v26 )
  {
    v24 = UserReferenceDwmApiPort(v20, v19, v21, v22);
    DwmSyncFlushAndWaitForBatch(v24);
  }
LABEL_36:
  if ( v25[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v25);
  return v4;
}
