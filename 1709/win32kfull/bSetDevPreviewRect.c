/*
 * XREFs of bSetDevPreviewRect @ 0x1C0265B44
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00898B0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreDeleteSprite @ 0x1C008BA1C (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1C008BF64 (GreCreateSprite.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C00E3724 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C011F38C (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C024D844 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevPreviewRect @ 0x1C026598C (bMoveDevPreviewRect.c)
 */

__int64 __fastcall bSetDevPreviewRect(HDEV a1, struct _RECTL *a2, _OWORD *a3, char a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // edi
  BOOL v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  HWND v15; // rdx
  void *Sprite; // rax
  _OWORD *v17; // rax
  void *v18; // rax
  void *v19; // r8
  int v21; // [rsp+38h] [rbp-81h]
  int v22; // [rsp+40h] [rbp-79h]
  int v23; // [rsp+48h] [rbp-71h]
  __int64 v24; // [rsp+50h] [rbp-69h]
  HDEV v26; // [rsp+68h] [rbp-51h] BYREF
  _OWORD *v27; // [rsp+70h] [rbp-49h]
  char v28[8]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v29; // [rsp+80h] [rbp-39h] BYREF
  char v30[8]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v31[56]; // [rsp+90h] [rbp-29h] BYREF

  v8 = 1;
  v26 = a1;
  v27 = a3;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v30, ghsemDynamicModeChange);
  v29 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v28, (struct PDEVOBJ *)&v26);
  v9 = *((_DWORD *)a1 + 299) && *((_DWORD *)a1 + 300);
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)(a1 + 18));
  v14 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)a1 + 300) = v14;
    memset(v31, 0, sizeof(v31));
    vSpDwmGetMiniWinInfoForNonWindowSprite((__int64)v31, 0LL);
    Sprite = GreCreateSprite(
               a1,
               v15,
               0LL,
               (struct tagMINIWINDOWINFO *)v31,
               0x9900u,
               a4 & 1,
               1,
               (unsigned int)v15 & v21,
               (unsigned int)v15 & v22,
               (unsigned int)v15 & v23,
               (unsigned __int16 *)((unsigned __int64)v15 & v24));
    *((_QWORD *)a1 + 155) = Sprite;
    if ( Sprite )
    {
      v17 = v27;
      *((_DWORD *)a1 + 299) = 1;
      *((_DWORD *)a1 + 300) = v14;
      *(_OWORD *)(a1 + 313) = *v17;
      if ( (a4 & 4) == 0 )
        bMoveDevPreviewRect(a1, a2, 1, a5, a6);
    }
    else
    {
      v8 = 0;
    }
  }
  else if ( v9 )
  {
    v18 = (void *)UserReferenceDwmApiPort(v11, v10, v12, v13);
    DwmAsyncSendWindowArrangingData(v18, 2, a5, 0LL, a6);
  }
  if ( !*((_DWORD *)a1 + 299) )
  {
    v19 = (void *)*((_QWORD *)a1 + 155);
    if ( v19 )
    {
      GreDeleteSprite(a1, 0LL, v19, *((_DWORD *)a1 + 300));
      *((_QWORD *)a1 + 155) = 0LL;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v28);
  SEMOBJ::vUnlock((SEMOBJ *)&v29);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v30);
  return v8;
}
