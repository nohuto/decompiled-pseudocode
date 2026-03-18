/*
 * XREFs of NtGdiFillRgn @ 0x1C0122720
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C011F2B4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0026EC0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C007AE9C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007F920 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00EC988 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00EC9CC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C0122B84 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     EngPaint @ 0x1C0122BC0 (EngPaint.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C0124964 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C0124A6C (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0124ABC (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v4; // esi
  int v6; // r14d
  int v7; // r12d
  REGION *v8; // rcx
  DC *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rcx
  struct REGION *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  struct ECLIPOBJ *v15; // rdx
  struct BRUSH *v16; // r15
  MIX mix; // eax
  DC *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rax
  DC *v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  REGION *v27[3]; // [rsp+58h] [rbp-A8h] BYREF
  REGION *v28; // [rsp+70h] [rbp-90h]
  struct BRUSH *v29[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v30[2]; // [rsp+88h] [rbp-78h] BYREF
  __m128i rclBounds; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v32[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-48h]
  DC **v34; // [rsp+C8h] [rbp-38h]
  __int64 v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  BRUSHOBJ pbo; // [rsp+130h] [rbp+30h] BYREF
  int v38; // [rsp+14Ch] [rbp+4Ch]
  __int64 v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  char *v41; // [rsp+168h] [rbp+68h]
  __int64 v42; // [rsp+188h] [rbp+88h]
  __int128 v43; // [rsp+190h] [rbp+90h]
  int v44; // [rsp+1B0h] [rbp+B0h]
  struct _RECTL v45; // [rsp+1C0h] [rbp+C0h] BYREF
  CLIPOBJ pco; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v47; // [rsp+220h] [rbp+120h]
  int v48; // [rsp+228h] [rbp+128h]
  int v49; // [rsp+250h] [rbp+150h]
  __int64 v50; // [rsp+260h] [rbp+160h]

  v4 = 0;
  v26 = 0;
  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  v28 = 0LL;
  if ( v25[0] && (*((_DWORD *)v25[0] + 9) & 0x10000) == 0 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v30, (struct XDCOBJ *)v25, 516);
    v7 = *(_DWORD *)(*((_QWORD *)v25[0] + 10) + 352LL) & 0x802;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v27, a2, 0);
    if ( !v27[0] )
    {
LABEL_34:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v27);
      if ( v26 )
      {
        v24 = UserReferenceDwmApiPort(v20, v19, v21, v22);
        DwmSyncFlushAndWaitForBatch(v24);
      }
      goto LABEL_36;
    }
    if ( v7 != 2050 )
    {
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v32);
      if ( v33 )
      {
        if ( v30[0] && RGNOBJ::bCreate((RGNOBJ *)v27, (struct EPATHOBJ *)v32, (struct EXFORMOBJ *)v30) )
        {
          v45.right = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v45, (struct EPATHOBJ *)v32, 1u, 0LL);
          if ( *(_QWORD *)&v45.left )
          {
            v28 = v27[0];
            v27[0] = *(REGION **)&v45.left;
            if ( v45.right == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v32);
            goto LABEL_12;
          }
          EngSetLastError(8u);
          if ( v45.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v32);
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v27);
      goto LABEL_37;
    }
LABEL_12:
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v27) == 1 )
      goto LABEL_38;
    v45 = 0LL;
    v45 = *(struct _RECTL *)((char *)v27[0] + 88);
    if ( (*((_DWORD *)v25[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v25, (struct ERECTL *)&v45);
    v34 = v25;
    if ( !ERECTL::bEmpty((ERECTL *)&v45) )
      v26 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v32, &v45);
    if ( !*((_QWORD *)v25[0] + 64) )
    {
LABEL_38:
      v6 = 1;
LABEL_32:
      if ( v7 != 2050 )
      {
        REGION::vDeleteREGION(v27[0]);
        v27[0] = v28;
      }
      goto LABEL_34;
    }
    v35 = 0LL;
    v36 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v32, (struct XDCOBJ *)v25, 0);
    v8 = v27[0];
    v9 = v25[0];
    if ( !v27[0] )
      *((_DWORD *)v25[0] + 9) |= 0x10u;
    *((_QWORD *)v9 + 191) = v8;
    v10 = *((_QWORD *)v25[0] + 64);
    if ( ((unsigned __int8)v34 & 1) == 0 || !(unsigned int)DC::bTightenRao(v25[0]) )
    {
      v6 = XDCOBJ::bFullScreen((XDCOBJ *)v25);
      goto LABEL_31;
    }
    v11 = (*((_BYTE *)v25[0] + 40) & 1) != 0 ? 8 : 0;
    v45.left += *(_DWORD *)((char *)v25[0] + v11 + 1432);
    v45.right += *(_DWORD *)((char *)v25[0] + v11 + 1432);
    v45.top += *(_DWORD *)((char *)v25[0] + v11 + 1436);
    v45.bottom += *(_DWORD *)((char *)v25[0] + v11 + 1436);
    v12 = XDCOBJ::prgnEffRao(v25);
    v47 = 0LL;
    v48 = 0;
    v49 = 1;
    v50 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v12, (struct ERECTL *)&v45, 0);
    if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
    {
      v18 = v25[0];
      v6 = 1;
      goto LABEL_31;
    }
    v13 = *(_QWORD *)(v10 + 128);
    v14 = *((_QWORD *)v25[0] + 12);
    v38 = -1;
    v42 = 0LL;
    v43 = 0LL;
    pbo.pvRbrush = 0LL;
    pbo.flColorType = 0;
    v39 = 0LL;
    v40 = 0LL;
    v44 = 0;
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v29, a3);
    v16 = 0LL;
    if ( v29[0] )
      v16 = v29[0];
    if ( (*((_DWORD *)v25[0] + 9) & 0xE0) != 0 )
    {
      if ( !v16 )
      {
LABEL_30:
        BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v29);
        EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        v18 = v25[0];
LABEL_31:
        *((_DWORD *)v18 + 9) |= 0x10u;
        *((_QWORD *)v18 + 191) = 0LL;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v32);
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
      v41 = (char *)v25[0] + 240;
      if ( (*((_DWORD *)v16 + 12) & 0x100) == 0 )
      {
        mix = EBRUSHOBJ::mixBest(
                (EBRUSHOBJ *)&pbo,
                *(_BYTE *)(*((_QWORD *)v25[0] + 10) + 72LL),
                *(_BYTE *)(*((_QWORD *)v25[0] + 10) + 73LL));
        ++*(_DWORD *)(v10 + 92);
        EngPaint((SURFOBJ *)(v10 + 24), &pco, &pbo, (POINTL *)v25[0] + 199, mix);
        v6 = 1;
      }
      BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v29);
    }
    goto LABEL_30;
  }
LABEL_36:
  v4 = v6;
LABEL_37:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v25);
  return v4;
}
