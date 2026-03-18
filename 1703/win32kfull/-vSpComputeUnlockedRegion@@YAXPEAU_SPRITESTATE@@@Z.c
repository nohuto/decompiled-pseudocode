/*
 * XREFs of ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A80C4
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C002483C (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A7DF4 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C025BA68 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0260F10 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02616A0 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0266BB0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0026EC0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074420 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A843C (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C024FC94 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     DxDdEnumLockedSurfaceRect @ 0x1C024FCC0 (DxDdEnumLockedSurfaceRect.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C0256D9C (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C0256F00 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpComputeUnlockedRegion(struct _SPRITESTATE *a1)
{
  __int64 v1; // rbx
  REGION *v3; // rcx
  int v4; // edi
  BOOL v5; // eax
  int v6; // r14d
  __int64 i; // rdx
  __int64 locked; // rdi
  TRACKOBJ *j; // rdi
  __int64 k; // rbx
  REGION *v11; // rdx
  REGION *v12; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D8h]
  _QWORD v14[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v19[24]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v20[80]; // [rsp+98h] [rbp-70h] BYREF
  struct _RECTL v21; // [rsp+E8h] [rbp-20h] BYREF
  struct _RECTL v22; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = (REGION *)*((_QWORD *)a1 + 130);
  v15 = v1;
  if ( v3 )
  {
    REGION::vDeleteREGION(v3);
    *((_QWORD *)a1 + 130) = 0LL;
  }
  SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5));
  if ( gpto || *((_QWORD *)a1 + 131) )
  {
    v5 = 1;
  }
  else
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20, (struct PDEVOBJ *)&v15);
    v4 = *(_DWORD *)(v1 + 2656);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
    v5 = v4 != 0;
  }
  if ( v5 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12, 0, 1);
    if ( v12 )
    {
      v6 = 0;
      v21.left = 0;
      v21.top = 0;
      v21.right = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v15).cx;
      v21.bottom = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v15) + 4LL);
      RGNOBJ::vSet((RGNOBJ *)&v12, &v21);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v14);
      if ( !v16[0] || !v14[0] )
        goto LABEL_33;
      GreLockDisplayDevice(v1);
      for ( i = 0LL; ; i = locked )
      {
        locked = DxDdEnumLockedSurfaceRect(v1, i, &v22);
        if ( !locked )
          break;
        RGNOBJ::vSet((RGNOBJ *)v16, &v22);
        RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)v14, (struct RGNOBJ *)v16, BYTE4(gafjRgnOp)) )
          v6 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v12);
      }
      GreUnlockDisplayDevice(v1);
      v18 = ghsemWndobj;
      GreAcquireSemaphore(ghsemWndobj);
      for ( j = gpto; j; j = (TRACKOBJ *)*((_QWORD *)j + 1) )
      {
        for ( k = *((_QWORD *)j + 3); k; k = *(_QWORD *)(k + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v19, (struct EWNDOBJ *)k, a1);
          if ( (*(_DWORD *)(k + 184) & 0x1000000) != 0 )
          {
            RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
            if ( RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)v14, (struct RGNOBJ *)(k + 56), BYTE4(gafjRgnOp)) )
              v6 = 1;
            else
              RGNOBJ::vSet((RGNOBJ *)&v12);
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v19);
        }
      }
      if ( *((_QWORD *)a1 + 131) )
      {
        v17 = *((_QWORD *)a1 + 131);
        RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)v14, (struct RGNOBJ *)&v17, BYTE1(gafjRgnOp)) )
          v6 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v12);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      if ( v6 == 1 )
      {
        v11 = v12;
        *((_DWORD *)v11 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
        *((_QWORD *)a1 + 130) = v12;
      }
      else
      {
LABEL_33:
        REGION::vDeleteREGION(v12);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
    }
    if ( (_DWORD)v13 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
  }
  *((_DWORD *)a1 + 31) = 0;
  vSpComputeSpriteRanges(a1);
  ++giSpriteUniqueness;
}
