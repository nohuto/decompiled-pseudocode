/*
 * XREFs of ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00A0800
 * Callers:
 *     EngSetPointerShape @ 0x1C00A0710 (EngSetPointerShape.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0020DE4 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHHPEAG@Z @ 0x1C0020FA4 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C009CED4 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C009EE10 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00A0C2C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00A1144 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C00A145C (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00FC7FC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

__int64 __fastcall DwmSetPointerShape(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct tagRECT *a9,
        unsigned int a10)
{
  HDEV hdev; // rbx
  unsigned int v12; // r14d
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char v16; // si
  unsigned int v17; // edi
  unsigned int v18; // ebp
  struct tagRECT *v19; // r12
  int v20; // eax
  unsigned __int16 *SpriteInternal; // rax
  struct DwmState *v22; // rcx
  HSPRITE v23; // rbx
  __int64 v24; // rax
  struct DwmState *v25; // r8
  HSPRITE v26; // rcx
  HSPRITE v27; // rdi
  HSPRITE NeighborSprite; // rax
  HSPRITE v29; // rbp
  struct DWMSPRITE *v30; // rbx
  HSPRITE v31; // rbx
  struct _SURFOBJ *v32; // rbp
  HSPRITE v33; // rdi
  struct _XLATEOBJ *v34; // r9
  int v35; // edx
  struct _RECTL *v36; // r9
  _BYTE v38[88]; // [rsp+50h] [rbp-58h] BYREF
  struct DWMSPRITE *v39; // [rsp+B0h] [rbp+8h] BYREF
  struct _SURFOBJ *v40; // [rsp+B8h] [rbp+10h]
  struct _SURFOBJ *v41; // [rsp+C0h] [rbp+18h]
  struct _XLATEOBJ *v42; // [rsp+C8h] [rbp+20h] BYREF

  v42 = a4;
  v41 = a3;
  v40 = a2;
  hdev = a1->hdev;
  v12 = 2;
  if ( *((_DWORD *)g_pDwmState + 25) )
  {
    if ( a2 || a3 )
    {
      v16 = a10;
      v17 = ((a10 >> 8) & 0xF) + 1;
      if ( (unsigned __int8)(a10 >> 12) )
        v18 = 0x3E8u / (unsigned __int8)(a10 >> 12);
      else
        v18 = 0;
      LODWORD(v42) = 0x1000000;
      GreAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      v19 = a9;
      while ( 1 )
      {
        v22 = g_pDwmState;
        if ( *((_DWORD *)g_pDwmState + 40) >= v17 )
          break;
        if ( a7 == -1 && a8 == -1 || (v20 = 1, (v16 & 0x40) != 0) )
          v20 = 0;
        SpriteInternal = GreCreateSpriteInternal(a1->hdev, 0LL, v19, 0LL, 1, v20, 0, 0, 0, 0LL);
        v22 = g_pDwmState;
        if ( !SpriteInternal )
          break;
        if ( !*((_QWORD *)g_pDwmState + 17) )
        {
          *((_QWORD *)g_pDwmState + 17) = SpriteInternal;
          v22 = g_pDwmState;
        }
        *(_QWORD *)(*(_QWORD *)v22 + 144LL) = SpriteInternal;
        ++*((_DWORD *)g_pDwmState + 40);
      }
      while ( 1 )
      {
        v24 = *(_QWORD *)v22;
        if ( *(_DWORD *)(*(_QWORD *)v22 + 160LL) <= v17 )
          break;
        v23 = *(HSPRITE *)(v24 + 144);
        *((_QWORD *)g_pDwmState + 18) = hspGetNeighborSprite(v23, 1, 0);
        GreDeleteSpriteInternal(a1->hdev, 0LL, v23, 1);
        --*((_DWORD *)g_pDwmState + 40);
        v22 = g_pDwmState;
      }
      *(_DWORD *)(v24 + 168) = v18;
      v25 = g_pDwmState;
      v26 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
      if ( v26 )
      {
        v27 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        if ( v27 != v26 )
        {
          do
          {
            NeighborSprite = hspGetNeighborSprite(v27, 1, 0);
            v39 = 0LL;
            v29 = NeighborSprite;
            DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v39, v27);
            v30 = v39;
            if ( v39 )
            {
              CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v38, (struct DWMSPRITE *)((char *)v39 + 120));
              vSpDwmUpdateSpriteVisibility(v30, 0);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v38);
              v27 = v29;
              DEC_SHARE_REF_CNT(v30);
            }
            else
            {
              v27 = v29;
            }
            v25 = g_pDwmState;
          }
          while ( v29 != *((HSPRITE *)g_pDwmState + 17) );
        }
        v31 = *(HSPRITE *)(*(_QWORD *)v25 + 144LL);
        if ( v31 )
        {
          v32 = v41;
          while ( 1 )
          {
            v33 = hspGetNeighborSprite(v31, 1, 0);
            if ( !(unsigned int)bSpDwmUpdateCursor(
                                  v31,
                                  v40,
                                  v32,
                                  v34,
                                  (struct _RECTL *)v19,
                                  (struct _BLENDFUNCTION *)((unsigned __int64)&v42 & -(__int64)((v16 & 0x40) != 0))) )
              break;
            v31 = v33;
            if ( !v33 )
              goto LABEL_39;
          }
          v12 = 0;
LABEL_39:
          v25 = g_pDwmState;
        }
        v35 = a6;
        *(_DWORD *)(*(_QWORD *)v25 + 152LL) = a5 - v19->left;
        *((_DWORD *)g_pDwmState + 39) = v35 - v19->top;
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DwmMovePointer(a1, a7, a8, v36, (v16 & 0x60) != 0 ? 4 : 0);
    }
    else
    {
      GreAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      v13 = hdev + 888;
      v14 = *v13;
      v15 = (_QWORD *)v13[1];
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v13[1] = v13;
      *v13 = v13;
      if ( *((struct DwmState **)g_pDwmState + 13) == (struct DwmState *)((char *)g_pDwmState + 104)
        && *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 120) )
      {
        vSpDwmDestroyCursorSprites(a1->hdev);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
    }
  }
  return v12;
}
