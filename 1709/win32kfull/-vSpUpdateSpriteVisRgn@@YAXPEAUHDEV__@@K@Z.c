/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0072798
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C00721C0 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C000A194 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000AB4C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     UserVisrgnFromHwnd @ 0x1C000BFB0 (UserVisrgnFromHwnd.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00182BC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED218 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C025F2F4 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0263B84 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpUpdateSpriteVisRgn(HDEV a1, char a2)
{
  HDEV v2; // rsi
  HDEV v3; // r14
  int v4; // r13d
  __int64 i; // rdi
  __int64 v6; // rdx
  struct REGION *v7; // rdx
  int v8; // ebx
  struct REGION *v9; // r15
  int v10; // r9d
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _POINTL *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r12d
  unsigned int v21; // r14d
  int v22; // r15d
  int v23; // eax
  int v24; // eax
  int v25; // edx
  struct REGION *v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+40h] [rbp-C8h]
  struct _POINTL v28; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v29; // [rsp+50h] [rbp-B8h]
  struct REGION *v30; // [rsp+58h] [rbp-B0h]
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v33[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 *v34[24]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v35[4]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v36[4]; // [rsp+158h] [rbp+50h] BYREF
  char v37[16]; // [rsp+15Ch] [rbp+54h] BYREF
  char v38; // [rsp+16Ch] [rbp+64h]
  __int64 v39; // [rsp+190h] [rbp+88h]
  __int64 v40; // [rsp+1A8h] [rbp+A0h]
  int v41; // [rsp+1B0h] [rbp+A8h]
  int v42; // [rsp+1D8h] [rbp+D0h]
  __int64 v43; // [rsp+1E8h] [rbp+E0h]
  _BYTE v44[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v45[16]; // [rsp+1FCh] [rbp+F4h] BYREF
  char v46; // [rsp+20Ch] [rbp+104h]
  __int64 v47; // [rsp+230h] [rbp+128h]
  __int64 v48; // [rsp+248h] [rbp+140h]
  int v49; // [rsp+250h] [rbp+148h]
  int v50; // [rsp+278h] [rbp+170h]
  __int64 v51; // [rsp+288h] [rbp+180h]
  _DWORD v52[84]; // [rsp+298h] [rbp+190h] BYREF
  _DWORD v53[84]; // [rsp+3E8h] [rbp+2E0h] BYREF

  v2 = a1 + 18;
  v29 = a1;
  v3 = a1;
  if ( *((_QWORD *)a1 + 11) )
  {
    v4 = 1;
    if ( (a2 & 4) != 0 )
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(a1 + 18), 1);
    for ( i = *((_QWORD *)v2 + 2); ; i = *(_QWORD *)(i + 24) )
    {
      if ( !i )
        return;
      v6 = *(_QWORD *)(i + 72);
      if ( v6 )
        break;
LABEL_23:
      ;
    }
    UserVisrgnFromHwnd((__int64)(v2 + 266), v6, 0);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v26);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v33, *((HRGN *)v2 + 133), 0);
    if ( !v33[0] || !v26 || !RGNOBJ::bCopy((RGNOBJ *)&v26, (struct RGNOBJ *)v33) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
LABEL_21:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v33);
      if ( v27 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
      goto LABEL_23;
    }
    v28.x = -*((_DWORD *)v3 + 650);
    v28.y = -*((_DWORD *)v3 + 651);
    RGNOBJ::bOffset((RGNOBJ *)&v26, &v28);
    v7 = *(struct REGION **)(i + 184);
    v8 = 1;
    v9 = v26;
    v30 = v26;
    if ( v7 )
    {
      v10 = *(_DWORD *)(i + 116);
      v11 = *(_DWORD *)(i + 112) + *(_DWORD *)(i + 104) - *(_DWORD *)(i + 96);
      v35[0] = *(_DWORD *)(i + 112);
      v35[2] = v11;
      v12 = v10 + *(_DWORD *)(i + 108) - *(_DWORD *)(i + 100);
      v35[1] = v10;
      v35[3] = v12;
      v40 = 0LL;
      v41 = 0;
      v42 = 1;
      v43 = 0LL;
      v39 = 0LL;
      v48 = 0LL;
      v49 = 0;
      v50 = 1;
      v51 = 0LL;
      v47 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v36, v7, (struct ERECTL *)v35, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v44, v9, (struct ERECTL *)v35, 0);
      ERECTL::bEmpty((ERECTL *)v37);
      v13 = ERECTL::bEmpty((ERECTL *)v45);
      if ( v13 == v14 )
      {
        if ( !v38 && !v46 )
          goto LABEL_15;
        if ( v38 == v46 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v36, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v44, 0, 0, 4u, 0x64u);
          v20 = 1;
          while ( 1 )
          {
            v21 = 0;
            v22 = 0;
            v52[0] = 0;
            v53[0] = 0;
            if ( v20 )
            {
              v23 = XCLIPOBJ::bEnum((XCLIPOBJ *)v36, 0x144u, (char *)v52, 0LL);
              v21 = v52[0];
              v20 = v23;
            }
            if ( v4 )
            {
              v24 = XCLIPOBJ::bEnum((XCLIPOBJ *)v44, 0x144u, (char *)v53, 0LL);
              v22 = v53[0];
              v4 = v24;
            }
            if ( v21 != v22 )
              break;
            v25 = 0;
            if ( v21 )
            {
              while ( v53[4 * v25 + 1] == v52[4 * v25 + 1]
                   && v53[4 * v25 + 2] == v52[4 * v25 + 2]
                   && v53[4 * v25 + 3] == v52[4 * v25 + 3]
                   && v53[4 * v25 + 4] == v52[4 * v25 + 4] )
              {
                if ( ++v25 >= v21 )
                  goto LABEL_43;
              }
              v8 = 0;
              v20 = 0;
              v4 = 0;
            }
LABEL_43:
            if ( !v20 && !v4 )
              goto LABEL_47;
          }
          v8 = 0;
LABEL_47:
          v9 = v30;
          v4 = 1;
          v3 = v29;
          goto LABEL_15;
        }
      }
    }
    v8 = 0;
LABEL_15:
    vSpFreeClipResources((struct SPRITE *)i);
    *(_QWORD *)(i + 184) = v9;
    *((_DWORD *)v9 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
    v31 = *(_QWORD *)v2;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v32, (struct PDEVOBJ *)&v31);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v34, (struct PDEVOBJ *)&v31, v15, v16);
    *(_DWORD *)i &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)&v26, (struct _RECTL *)v2 + 3) != 2 )
      *(_DWORD *)i |= 1u;
    bSpUpdatePosition((struct SPRITE *)i, (struct _POINTL *)(i + 112), 0, 0);
    if ( gpto )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v2, (struct _RECTL *)(i + 80), (struct _RECTL *)(i + 80));
    if ( !v8 )
    {
      if ( *((_QWORD *)v2 + 130) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v17, (struct _RECTL *)(i + 80), 0LL, 1);
      vSpRedrawSprite((struct SPRITE *)i);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v34, (__int64)v17, v18, v19);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v32);
    goto LABEL_21;
  }
}
