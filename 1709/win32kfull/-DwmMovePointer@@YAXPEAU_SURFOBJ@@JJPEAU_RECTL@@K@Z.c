/*
 * XREFs of ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00E4468
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00E4100 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     EngpMovePointer @ 0x1C024F39C (EngpMovePointer.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0092094 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     GreUpdateSprite @ 0x1C0092518 (GreUpdateSprite.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00926CC (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00E4670 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00E7898 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C01083FC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

void __fastcall DwmMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  HDEV hdev; // r14
  int v6; // ebx
  int v7; // esi
  struct DwmState *v9; // rax
  __int64 v10; // rcx
  struct DwmState **v11; // rdx
  struct DwmState **v12; // rdx
  SFMLOGICALSURFACE *v13; // rdi
  struct DWMSPRITE *v14; // rbx
  unsigned __int64 v15; // r15
  HSPRITE v16; // rdx
  HSPRITE NeighborSprite; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  HSPRITE v20; // rsi
  struct DWMSPRITE *v21; // rbx
  HSPRITE v22; // r12
  struct DWMSPRITE *v23; // rsi
  struct DwmState *v24; // r14
  __int64 v25; // rcx
  struct DwmState **v26; // rax
  struct DwmState **v27; // rcx
  HSPRITE v28; // rdi
  struct DWMSPRITE *v29; // rbx
  HSPRITE v30; // rax
  HDEV v31; // rcx
  __int64 v32; // [rsp+88h] [rbp-31h] BYREF
  struct DWMSPRITE *v33; // [rsp+90h] [rbp-29h] BYREF
  struct DWMSPRITE *v34; // [rsp+98h] [rbp-21h] BYREF
  struct DWMSPRITE *v35; // [rsp+A0h] [rbp-19h] BYREF
  struct tagPOINT v36; // [rsp+A8h] [rbp-11h] BYREF
  struct DWMSPRITE *v37; // [rsp+B0h] [rbp-9h] BYREF
  _BYTE v38[80]; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v39; // [rsp+118h] [rbp+5Fh] BYREF
  int v40; // [rsp+120h] [rbp+67h]
  int v41; // [rsp+128h] [rbp+6Fh]
  struct _RECTL *v42; // [rsp+130h] [rbp+77h] BYREF

  v42 = a4;
  v41 = a3;
  v40 = a2;
  hdev = a1->hdev;
  v6 = a3;
  v7 = a2;
  if ( !*((_DWORD *)g_pDwmState + 25) || !*((_QWORD *)g_pDwmState + 17) )
    return;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( *((_QWORD *)g_pDwmState + 18) != *((_QWORD *)g_pDwmState + 17) )
  {
    v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)(v15 - *((_DWORD *)g_pDwmState + 41)) >= *((_DWORD *)g_pDwmState + 42) )
    {
      v16 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
      v32 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v32, v16);
      NeighborSprite = hspGetNeighborSprite(*((HSPRITE *)g_pDwmState + 17), 0, 0);
      v39 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v39, NeighborSprite);
      v18 = v32;
      v19 = v39;
      if ( !v32 )
        goto LABEL_33;
      if ( !v39 )
      {
LABEL_35:
        v6 = v41;
        if ( v18 )
          _InterlockedDecrement((volatile signed __int32 *)(v18 + 12));
        goto LABEL_4;
      }
      if ( *(_DWORD *)(v39 + 56) == *(_DWORD *)(v32 + 56) && *(_DWORD *)(v39 + 60) == *(_DWORD *)(v32 + 60) )
      {
        v20 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        if ( v20 == *((HSPRITE *)g_pDwmState + 17) )
        {
LABEL_32:
          v7 = v40;
          *((_DWORD *)g_pDwmState + 41) = v15;
LABEL_33:
          if ( v19 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v19 + 12));
            v18 = v32;
          }
          goto LABEL_35;
        }
        while ( 1 )
        {
          v33 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v33, v20);
          v21 = v33;
          if ( v33 )
          {
            if ( (*((_DWORD *)v33 + 50) & 1) != 0 )
              break;
          }
          v20 = hspGetNeighborSprite(v20, 1, 0);
          if ( v21 )
            _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
          if ( v20 == *((HSPRITE *)g_pDwmState + 17) )
            goto LABEL_31;
        }
        vSpDwmUpdateSpriteVisibility(v33, 0);
        _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
      }
      else
      {
        v34 = 0LL;
        v22 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v34, v22);
        v23 = v34;
        if ( v34 )
          vSpDwmUpdateSpriteVisibility(v34, 0);
        *((_QWORD *)g_pDwmState + 18) = hspGetNeighborSprite(v22, 1, 0);
        vSpDwmZorderSprite(v22, *((HSPRITE *)g_pDwmState + 17));
        *((_QWORD *)g_pDwmState + 17) = v22;
        if ( !v23 )
          goto LABEL_32;
        _InterlockedDecrement((volatile signed __int32 *)v23 + 3);
      }
LABEL_31:
      v18 = v32;
      v19 = v39;
      goto LABEL_32;
    }
  }
LABEL_4:
  if ( v7 == -1 )
  {
    v24 = (struct DwmState *)(hdev + 888);
    v25 = *(_QWORD *)v24;
    if ( *(struct DwmState **)(*(_QWORD *)v24 + 8LL) != v24
      || (v26 = (struct DwmState **)*((_QWORD *)v24 + 1), *v26 != v24) )
    {
      __fastfail(3u);
    }
    *v26 = (struct DwmState *)v25;
    *(_QWORD *)(v25 + 8) = v26;
    v27 = (struct DwmState **)*((_QWORD *)g_pDwmState + 14);
    if ( *v27 != (struct DwmState *)((char *)g_pDwmState + 104) )
      __fastfail(3u);
    *(_QWORD *)v24 = (char *)g_pDwmState + 104;
    *((_QWORD *)v24 + 1) = v27;
    *v27 = v24;
    *((_QWORD *)g_pDwmState + 14) = v24;
    if ( *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 120) )
    {
      v28 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
      if ( v28 )
      {
        do
        {
          v35 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v35, v28);
          v29 = v35;
          if ( v35 )
            vSpDwmUpdateSpriteVisibility(v35, 0);
          v30 = hspGetNeighborSprite(v28, 1, 0);
          v28 = v30;
          if ( v29 )
            _InterlockedDecrement((volatile signed __int32 *)v29 + 3);
        }
        while ( v30 );
      }
    }
  }
  else
  {
    v9 = (struct DwmState *)(hdev + 888);
    v10 = *((_QWORD *)hdev + 444);
    if ( *(HDEV *)(v10 + 8) != hdev + 888 || (v11 = (struct DwmState **)*((_QWORD *)hdev + 445), *v11 != v9) )
      __fastfail(3u);
    *v11 = (struct DwmState *)v10;
    *(_QWORD *)(v10 + 8) = v11;
    v12 = (struct DwmState **)*((_QWORD *)g_pDwmState + 16);
    if ( *v12 != (struct DwmState *)((char *)g_pDwmState + 120) )
      __fastfail(3u);
    *(_QWORD *)v9 = (char *)g_pDwmState + 120;
    *((_QWORD *)hdev + 445) = v12;
    *v12 = v9;
    *((_QWORD *)g_pDwmState + 16) = v9;
    v36.x = v7 + *((_DWORD *)hdev + 650) - *((_DWORD *)g_pDwmState + 38);
    v36.y = v6 + *((_DWORD *)hdev + 651) - *((_DWORD *)g_pDwmState + 39);
    v13 = (SFMLOGICALSURFACE *)*((_QWORD *)g_pDwmState + 17);
    GreUpdateSprite(a1->hdev, 0LL, v13, 0LL, &v36, 0LL, 0LL, 0LL, 0, 0LL, 0x40200000u, 0LL, 0LL, 1, 0);
    v37 = 0LL;
    DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v37, (HSPRITE)v13);
    v14 = v37;
    if ( v37 )
    {
      if ( (a5 & 4) != 0 )
      {
        v31 = a1->hdev;
        LODWORD(v42) = 0x1000000;
        GreUpdateSprite(
          v31,
          0LL,
          v13,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0,
          (struct _BLENDFUNCTION *)&v42,
          0x21200002u,
          0LL,
          0LL,
          1,
          0);
      }
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v38, (struct DWMSPRITE *)((char *)v14 + 120));
      vSpDwmUpdateSpriteVisibility(v14, 1);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v38);
      DEC_SHARE_REF_CNT(v14);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
}
