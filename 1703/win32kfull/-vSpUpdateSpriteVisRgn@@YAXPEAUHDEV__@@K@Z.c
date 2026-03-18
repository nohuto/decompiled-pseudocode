/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C006CF98
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C006D400 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0075F90 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007F920 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A7DF4 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     UserVisrgnFromHwnd @ 0x1C01C2388 (UserVisrgnFromHwnd.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C025F5B4 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C0261C50 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02631B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02647DC (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
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
  int v15; // r12d
  unsigned int v16; // r14d
  int v17; // r15d
  int v18; // eax
  int v19; // eax
  int v20; // edx
  struct _POINTL *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct REGION *v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+40h] [rbp-C8h]
  struct _POINTL v26; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v27; // [rsp+50h] [rbp-B8h]
  struct REGION *v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v31[3]; // [rsp+70h] [rbp-98h] BYREF
  struct _SPRITESTATE *v32[24]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v33[4]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v34[4]; // [rsp+158h] [rbp+50h] BYREF
  char v35[16]; // [rsp+15Ch] [rbp+54h] BYREF
  char v36; // [rsp+16Ch] [rbp+64h]
  __int64 v37; // [rsp+190h] [rbp+88h]
  __int64 v38; // [rsp+1A8h] [rbp+A0h]
  int v39; // [rsp+1B0h] [rbp+A8h]
  int v40; // [rsp+1D8h] [rbp+D0h]
  __int64 v41; // [rsp+1E8h] [rbp+E0h]
  _BYTE v42[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v43[16]; // [rsp+1FCh] [rbp+F4h] BYREF
  char v44; // [rsp+20Ch] [rbp+104h]
  __int64 v45; // [rsp+230h] [rbp+128h]
  __int64 v46; // [rsp+248h] [rbp+140h]
  int v47; // [rsp+250h] [rbp+148h]
  int v48; // [rsp+278h] [rbp+170h]
  __int64 v49; // [rsp+288h] [rbp+180h]
  _DWORD v50[84]; // [rsp+298h] [rbp+190h] BYREF
  _DWORD v51[84]; // [rsp+3E8h] [rbp+2E0h] BYREF

  v2 = a1 + 18;
  v27 = a1;
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
LABEL_45:
      ;
    }
    UserVisrgnFromHwnd(v2 + 266, v6, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v31, *((HRGN *)v2 + 133), 0);
    if ( !v31[0] || !v24 || !RGNOBJ::bCopy((RGNOBJ *)&v24, (struct RGNOBJ *)v31) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
LABEL_43:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v31);
      if ( v25 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
      goto LABEL_45;
    }
    v26.x = -*((_DWORD *)v3 + 650);
    v26.y = -*((_DWORD *)v3 + 651);
    RGNOBJ::bOffset((RGNOBJ *)&v24, &v26);
    v7 = *(struct REGION **)(i + 184);
    v8 = 1;
    v9 = v24;
    v28 = v24;
    if ( v7 )
    {
      v10 = *(_DWORD *)(i + 116);
      v11 = *(_DWORD *)(i + 112) + *(_DWORD *)(i + 104) - *(_DWORD *)(i + 96);
      v33[0] = *(_DWORD *)(i + 112);
      v33[2] = v11;
      v12 = v10 + *(_DWORD *)(i + 108) - *(_DWORD *)(i + 100);
      v33[1] = v10;
      v33[3] = v12;
      v38 = 0LL;
      v39 = 0;
      v40 = 1;
      v41 = 0LL;
      v37 = 0LL;
      v46 = 0LL;
      v47 = 0;
      v48 = 1;
      v49 = 0LL;
      v45 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v34, v7, (struct ERECTL *)v33, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v42, v9, (struct ERECTL *)v33, 0);
      ERECTL::bEmpty((ERECTL *)v35);
      v13 = ERECTL::bEmpty((ERECTL *)v43);
      if ( v13 == v14 )
      {
        if ( !v36 && !v44 )
          goto LABEL_32;
        if ( v36 == v44 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v34, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v42, 0, 0, 4u, 0x64u);
          v15 = 1;
          while ( 1 )
          {
            v16 = 0;
            v17 = 0;
            v50[0] = 0;
            v51[0] = 0;
            if ( v15 )
            {
              v18 = XCLIPOBJ::bEnum((XCLIPOBJ *)v34, 0x144u, v50, 0LL);
              v16 = v50[0];
              v15 = v18;
            }
            if ( v4 )
            {
              v19 = XCLIPOBJ::bEnum((XCLIPOBJ *)v42, 0x144u, v51, 0LL);
              v17 = v51[0];
              v4 = v19;
            }
            if ( v16 != v17 )
              break;
            v20 = 0;
            if ( v16 )
            {
              while ( v51[4 * v20 + 1] == v50[4 * v20 + 1]
                   && v51[4 * v20 + 2] == v50[4 * v20 + 2]
                   && v51[4 * v20 + 3] == v50[4 * v20 + 3]
                   && v51[4 * v20 + 4] == v50[4 * v20 + 4] )
              {
                if ( ++v20 >= v16 )
                  goto LABEL_29;
              }
              v8 = 0;
              v15 = 0;
              v4 = 0;
            }
LABEL_29:
            if ( !v15 && !v4 )
              goto LABEL_31;
          }
          v8 = 0;
LABEL_31:
          v9 = v28;
          v4 = 1;
          v3 = v27;
          goto LABEL_32;
        }
      }
    }
    v8 = 0;
LABEL_32:
    vSpFreeClipResources((struct SPRITE *)i);
    *(_QWORD *)(i + 184) = v9;
    *((_DWORD *)v9 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
    v29 = *(_QWORD *)v2;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v30, (struct PDEVOBJ *)&v29);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v32, (struct PDEVOBJ *)&v29);
    *(_DWORD *)i &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)&v24, (struct _RECTL *)v2 + 3) != 2 )
      *(_DWORD *)i |= 1u;
    bSpUpdatePosition((struct SPRITE *)i, (struct _POINTL *)(i + 112), 0, 0);
    if ( gpto )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v2, (struct _RECTL *)(i + 80), (struct _RECTL *)(i + 80));
    if ( !v8 )
    {
      if ( *((_QWORD *)v2 + 130) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v21, (struct _RECTL *)(i + 80), 0LL, 1);
      vSpRedrawSprite((struct SPRITE *)i);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v32, (__int64)v21, v22, v23);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v30);
    goto LABEL_43;
  }
}
