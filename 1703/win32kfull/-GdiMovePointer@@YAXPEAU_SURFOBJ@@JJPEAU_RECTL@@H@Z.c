/*
 * XREFs of ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C0257CEC
 * Callers:
 *     EngpMovePointer @ 0x1C024D92C (EngpMovePointer.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02582E0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7860 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025E95C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C025E9C0 (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02631B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0265F1C (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0266194 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02661D0 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall GdiMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, int a5)
{
  HDEV v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 i; // rax
  struct SPRITE *v17; // r8
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  struct _SPRITESTATE **v23; // rcx
  LONG v24; // r12d
  __int64 v25; // rsi
  HDEV v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  HDEV hdev; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTL v33; // [rsp+28h] [rbp-D8h] BYREF
  struct _RECTL v34; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v36[24]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v37[192]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v38[192]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v39[3]; // [rsp+290h] [rbp+190h] BYREF

  hdev = a1->hdev;
  v8 = hdev + 18;
  v9 = *((_QWORD *)hdev + 145);
  if ( v9 )
  {
    if ( *((_QWORD *)hdev + 146) != v9 )
    {
      v35 = ghsemSprite;
      GreAcquireSemaphore(ghsemSprite);
      v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v10 - *((_DWORD *)hdev + 295)) >= *((_DWORD *)hdev + 296) )
      {
        SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v36, (struct PDEVOBJ *)&hdev);
        v13 = *((_QWORD *)v8 + 137);
        v14 = *((_QWORD *)v8 + 136);
        v15 = v13;
        for ( i = *(_QWORD *)(v13 + 24); i != v14; i = *(_QWORD *)(i + 24) )
          v15 = i;
        if ( *(_DWORD *)(v15 + 80) == *(_DWORD *)(v14 + 80) && *(_DWORD *)(v15 + 84) == *(_DWORD *)(v14 + 84) )
        {
          while ( v13 != v14 )
          {
            if ( (*(_DWORD *)v13 & 0x20) != 0 )
            {
              bSpUpdatePosition((struct SPRITE *)v13, 0LL, 0, 0);
              break;
            }
            v13 = *(_QWORD *)(v13 + 24);
          }
        }
        else
        {
          bSpUpdatePosition(*((struct SPRITE **)v8 + 137), 0LL, 0, 0);
          v17 = (struct SPRITE *)*((_QWORD *)v8 + 136);
          *((_QWORD *)v8 + 137) = *(_QWORD *)(v13 + 24);
          vSpZorderSprite(a1->hdev, (struct SPRITE *)v13, v17);
          *((_QWORD *)v8 + 136) = v13;
        }
        *((_DWORD *)v8 + 277) = v10;
        SPRITEDDIACCESS::~SPRITEDDIACCESS(v36, v15, v11, v12);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v35);
    }
    v18 = a5;
    if ( !a5 )
      v18 = GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) != 0;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev) )
    {
      GreAcquireSemaphoreSharedStarveExclusiveInternal(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"ghsemSprite", ghsemSprite);
    }
    else
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    }
    if ( !v18 )
      GreIncNonRBLockCount(ghsemSprite);
    memset(v39, 0, sizeof(v39));
    if ( a2 == -1 )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v37, (struct PDEVOBJ *)&hdev);
      v22 = *((_QWORD *)v8 + 137);
      v33.x = 0x7FFFFFFF;
      v33.y = 0x7FFFFFFF;
      while ( v22 )
      {
        if ( !v18 )
        {
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 32));
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v39, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v22 + 80));
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v22 + 248));
          *((_QWORD *)v8 + 170) = v22;
        }
        if ( !v39[0] && !v18 || (bSpUpdatePosition((struct SPRITE *)v22, &v33, 0, 0), !v18) )
        {
          *((_QWORD *)v8 + 170) = 0LL;
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v22 + 248));
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v39);
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 32));
        }
        v22 = *(_QWORD *)(v22 + 24);
      }
      v23 = (struct _SPRITESTATE **)v37;
    }
    else
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v38, (struct PDEVOBJ *)&hdev);
      v24 = a3 - *((_DWORD *)v8 + 271);
      v25 = *((_QWORD *)v8 + 136);
      v33.x = a2 - *((_DWORD *)v8 + 270);
      v33.y = v24;
      if ( !v18 )
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 32));
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v39, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v25 + 80));
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v25 + 248));
        *((_QWORD *)v8 + 170) = v25;
      }
      bSpUpdatePosition((struct SPRITE *)v25, &v33, 0, 0);
      if ( !v18 )
      {
        *((_QWORD *)v8 + 170) = 0LL;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v25 + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v39);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 32));
      }
      v34 = *(struct _RECTL *)(v25 + 80);
      if ( !v18 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v39, (struct _SPRITESTATE *)v8, &v34);
      if ( !v39[0] && !v18 || (vSpRedrawSprite((struct SPRITE *)v25), !v18) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v39);
      v23 = (struct _SPRITESTATE **)v38;
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v23, v19, v20, v21);
    if ( !v18 )
      GreDecNonRBLockCount(ghsemSprite);
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
    v26 = hdev;
    if ( (*((_DWORD *)hdev + 536) & 0x80u) != 0 )
    {
      v27 = *((_QWORD *)hdev + 321);
      v28 = 0LL;
      v29 = v27 + 24;
      v30 = -v27;
      v31 = v29 & -(__int64)(v30 != 0);
      if ( v31 )
      {
        if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29 & -(__int64)(v30 != 0)) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v31) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v31) + 112) & 0x200) == 0 )
        {
          v28 = SURFOBJ_TO_SURFACE_NOT_NULL(v31);
          GreLockDisplayDevice(*(_QWORD *)(v28 + 48));
        }
        v26 = hdev;
      }
      PDEVOBJ::vSync(
        (PDEVOBJ *)&hdev,
        (struct _SURFOBJ *)((*((_QWORD *)v26 + 321) + 24LL) & -(__int64)(*((_QWORD *)v26 + 321) != 0LL)),
        0LL,
        1u);
      if ( v28 )
        GreUnlockDisplayDevice(*(_QWORD *)(v28 + 48));
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v39);
  }
}
