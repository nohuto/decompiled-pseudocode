/*
 * XREFs of ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A7DF4
 * Callers:
 *     GreDeleteSpriteOverlapPresent @ 0x1C005D454 (GreDeleteSpriteOverlapPresent.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C006CF98 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00A7D70 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0258B5C (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0026EC0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007F920 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A80C4 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     UserGetClientRgn @ 0x1C01C2CA0 (UserGetClientRgn.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C024FC94 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

void __fastcall vSpComputeNoPresentRegion(struct _SPRITESTATE *a1, int a2)
{
  __int64 v2; // rbx
  REGION *v4; // rcx
  REGION *v6; // rcx
  _QWORD *v7; // rsi
  HRGN ClientRgn; // rax
  int v9; // eax
  struct RGNOBJ *v10; // r8
  __int64 v11; // rdx
  struct _POINTL v12; // [rsp+28h] [rbp-59h] BYREF
  __int64 v13; // [rsp+30h] [rbp-51h] BYREF
  int v14; // [rsp+38h] [rbp-49h]
  __int64 v15; // [rsp+40h] [rbp-41h] BYREF
  __int64 v16; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v18[3]; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v19[2]; // [rsp+78h] [rbp-9h] BYREF
  struct _RECTL v20; // [rsp+98h] [rbp+17h] BYREF
  struct _RECTL v21; // [rsp+A8h] [rbp+27h] BYREF

  v2 = *(_QWORD *)a1;
  v4 = (REGION *)*((_QWORD *)a1 + 132);
  v16 = v2;
  if ( v4 )
  {
    REGION::vDeleteREGION(v4);
    *((_QWORD *)a1 + 132) = 0LL;
  }
  if ( !a2 )
  {
    v6 = (REGION *)*((_QWORD *)a1 + 131);
    if ( v6 )
    {
      REGION::vDeleteREGION(v6);
      *((_QWORD *)a1 + 131) = 0LL;
    }
  }
  SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5));
  v7 = (_QWORD *)*((_QWORD *)a1 + 11);
  if ( v7 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13, 0, 1);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19, 0, 1);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
    if ( v13 && v19[0] )
    {
      v20.left = 0;
      v20.top = 0;
      v20.right = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v16).cx;
      v20.bottom = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v16) + 4LL);
      RGNOBJ::vSet((RGNOBJ *)&v13, &v20);
      RGNOBJ::vSet((RGNOBJ *)v19, &v20);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
      if ( v17[0] )
      {
        do
        {
          ClientRgn = (HRGN)UserGetClientRgn(*v7, &v21, 0LL);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, ClientRgn, 0);
          if ( v18[0] )
          {
            v12.x = -*(_DWORD *)(v2 + 2600);
            v12.y = -*(_DWORD *)(v2 + 2604);
            RGNOBJ::bOffset((RGNOBJ *)v18, &v12);
            v15 = *((_QWORD *)a1 + 89);
            RGNOBJ::vSet((RGNOBJ *)&v15, &v21);
            v12.x = -*(_DWORD *)(v2 + 2600);
            v12.y = -*(_DWORD *)(v2 + 2604);
            RGNOBJ::bOffset((RGNOBJ *)v18, &v12);
            RGNOBJ::bOffset((RGNOBJ *)&v15, &v12);
            v9 = RGNOBJ::iComplexity((RGNOBJ *)v18);
            v10 = (struct RGNOBJ *)&v15;
            if ( v9 != 1 )
              v10 = (struct RGNOBJ *)v18;
            if ( RGNOBJ::bMerge((RGNOBJ *)v17, (struct RGNOBJ *)&v13, v10, BYTE4(gafjRgnOp)) )
              RGNOBJ::vSwap((RGNOBJ *)v17, (struct RGNOBJ *)&v13);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v18);
          }
          v7 = (_QWORD *)v7[1];
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
        }
        while ( v7 );
      }
      v11 = v13;
      *(_DWORD *)(v11 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
      if ( a2 )
        *((_QWORD *)a1 + 132) = v13;
      else
        *((_QWORD *)a1 + 131) = v13;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
    }
    else
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
    if ( v14 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
  }
  if ( !a2 )
    vSpComputeUnlockedRegion(a1);
}
