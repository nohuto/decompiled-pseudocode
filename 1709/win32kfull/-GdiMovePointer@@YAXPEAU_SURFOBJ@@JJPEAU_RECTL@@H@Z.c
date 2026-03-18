/*
 * XREFs of ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C025921C
 * Callers:
 *     EngpMovePointer @ 0x1C024F39C (EngpMovePointer.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0259810 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C000AA44 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000AB4C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBB4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0142694 (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C01426B8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025E6E0 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C02653DC (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

void __fastcall GdiMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, int a5)
{
  HDEV v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 i; // rax
  struct SPRITE *v19; // r8
  int v20; // edi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 **v27; // rcx
  LONG v28; // r12d
  __int64 v29; // rsi
  HDEV v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  HDEV hdev; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTL v37; // [rsp+28h] [rbp-D8h] BYREF
  struct _RECTL v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v40[24]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v41[192]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v42[192]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v43[3]; // [rsp+290h] [rbp+190h] BYREF

  hdev = a1->hdev;
  v8 = hdev + 18;
  v9 = *((_QWORD *)hdev + 145);
  if ( v9 )
  {
    if ( *((_QWORD *)hdev + 146) != v9 )
    {
      v39 = ghsemSprite;
      GreAcquireSemaphore(ghsemSprite);
      v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v12 - *((_DWORD *)hdev + 295)) >= *((_DWORD *)hdev + 296) )
      {
        SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v40, (struct PDEVOBJ *)&hdev, v10, v11);
        v15 = *((_QWORD *)v8 + 137);
        v16 = *((_QWORD *)v8 + 136);
        v17 = v15;
        for ( i = *(_QWORD *)(v15 + 24); i != v16; i = *(_QWORD *)(i + 24) )
          v17 = i;
        if ( *(_DWORD *)(v17 + 80) == *(_DWORD *)(v16 + 80) && *(_DWORD *)(v17 + 84) == *(_DWORD *)(v16 + 84) )
        {
          while ( v15 != v16 )
          {
            if ( (*(_DWORD *)v15 & 0x20) != 0 )
            {
              bSpUpdatePosition((struct SPRITE *)v15, 0LL, 0, 0);
              break;
            }
            v15 = *(_QWORD *)(v15 + 24);
          }
        }
        else
        {
          bSpUpdatePosition(*((struct SPRITE **)v8 + 137), 0LL, 0, 0);
          v19 = (struct SPRITE *)*((_QWORD *)v8 + 136);
          *((_QWORD *)v8 + 137) = *(_QWORD *)(v15 + 24);
          vSpZorderSprite(a1->hdev, (struct SPRITE *)v15, v19);
          *((_QWORD *)v8 + 136) = v15;
        }
        *((_DWORD *)v8 + 277) = v12;
        SPRITEDDIACCESS::~SPRITEDDIACCESS(v40, v17, v13, v14);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v39);
    }
    v20 = a5;
    if ( !a5 )
      v20 = GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) != 0;
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
    if ( !v20 )
      GreIncNonRBLockCount(ghsemSprite);
    memset(v43, 0, sizeof(v43));
    if ( a2 == -1 )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v41, (struct PDEVOBJ *)&hdev, v21, v22);
      v26 = *((_QWORD *)v8 + 137);
      v37.x = 0x7FFFFFFF;
      v37.y = 0x7FFFFFFF;
      while ( v26 )
      {
        if ( !v20 )
        {
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 32));
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v43, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v26 + 80));
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v26 + 248));
          *((_QWORD *)v8 + 170) = v26;
        }
        if ( !v43[0] && !v20 || (bSpUpdatePosition((struct SPRITE *)v26, &v37, 0, 0), !v20) )
        {
          *((_QWORD *)v8 + 170) = 0LL;
          SINGLEREADERLOCK::vUnlock((struct _KMUTANT **)(v26 + 248));
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v43);
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 32));
        }
        v26 = *(_QWORD *)(v26 + 24);
      }
      v27 = (__int64 **)v41;
    }
    else
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v42, (struct PDEVOBJ *)&hdev, v21, v22);
      v28 = a3 - *((_DWORD *)v8 + 271);
      v29 = *((_QWORD *)v8 + 136);
      v37.x = a2 - *((_DWORD *)v8 + 270);
      v37.y = v28;
      if ( !v20 )
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 32));
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v43, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v29 + 80));
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v29 + 248));
        *((_QWORD *)v8 + 170) = v29;
      }
      bSpUpdatePosition((struct SPRITE *)v29, &v37, 0, 0);
      if ( !v20 )
      {
        *((_QWORD *)v8 + 170) = 0LL;
        SINGLEREADERLOCK::vUnlock((struct _KMUTANT **)(v29 + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v43);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 32));
      }
      v38 = *(struct _RECTL *)(v29 + 80);
      if ( !v20 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v43, (struct _SPRITESTATE *)v8, &v38);
      if ( !v43[0] && !v20 || (vSpRedrawSprite((struct SPRITE *)v29), !v20) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v43);
      v27 = (__int64 **)v42;
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v27, v23, v24, v25);
    if ( !v20 )
      GreDecNonRBLockCount(ghsemSprite);
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
    v30 = hdev;
    if ( (*((_DWORD *)hdev + 536) & 0x80u) != 0 )
    {
      v31 = *((_QWORD *)hdev + 321);
      v32 = 0LL;
      v33 = v31 + 24;
      v34 = -v31;
      v35 = v33 & -(__int64)(v34 != 0);
      if ( v35 )
      {
        if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v33 & -(__int64)(v34 != 0)) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v35) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v35) + 112) & 0x200) == 0 )
        {
          v32 = SURFOBJ_TO_SURFACE_NOT_NULL(v35);
          GreLockDisplayDevice(*(_QWORD *)(v32 + 48));
        }
        v30 = hdev;
      }
      PDEVOBJ::vSync(
        (PDEVOBJ *)&hdev,
        (struct _SURFOBJ *)((*((_QWORD *)v30 + 321) + 24LL) & -(__int64)(*((_QWORD *)v30 + 321) != 0LL)),
        0LL,
        1u);
      if ( v32 )
        GreUnlockDisplayDevice(*(_QWORD *)(v32 + 48));
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v43);
  }
}
