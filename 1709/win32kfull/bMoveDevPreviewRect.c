/*
 * XREFs of bMoveDevPreviewRect @ 0x1C026598C
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     bSetDevPreviewRect @ 0x1C0265B44 (bSetDevPreviewRect.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00898B0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreUpdateSprite @ 0x1C0092518 (GreUpdateSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C024D844 (DwmAsyncSendWindowArrangingData.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C025B358 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 */

__int64 __fastcall bMoveDevPreviewRect(HDEV a1, struct _RECTL *a2, char a3, __int64 a4, __int64 a5)
{
  int v8; // r15d
  __int64 v9; // r8
  HDEV v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  LONG v14; // r10d
  __int64 v15; // r9
  void *v16; // rax
  int v17; // edx
  unsigned int updated; // eax
  HDEV v20; // [rsp+80h] [rbp-21h] BYREF
  struct tagSIZE v21; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v22[8]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v23; // [rsp+98h] [rbp-9h] BYREF
  _BYTE v24[8]; // [rsp+A0h] [rbp-1h] BYREF
  struct tagPOINT v25[2]; // [rsp+A8h] [rbp+7h] BYREF

  v20 = a1;
  v8 = a3 & 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v24, ghsemDynamicModeChange);
  v23 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v22, (struct PDEVOBJ *)&v20);
  v10 = v20;
  v11 = 0;
  if ( *((_QWORD *)v20 + 155) )
  {
    v12 = (unsigned int)(*((_DWORD *)v20 + 319) - *((_DWORD *)v20 + 317));
    v13 = (unsigned int)(*((_DWORD *)v20 + 320) - *((_DWORD *)v20 + 318));
    v14 = a2->right - a2->left;
    v15 = (unsigned int)(a2->bottom - a2->top);
    v21.cx = v14;
    v21.cy = v15;
    if ( *((_DWORD *)v20 + 300) )
    {
      if ( (_DWORD)v12 || (_DWORD)v13 )
      {
        v16 = (void *)UserReferenceDwmApiPort(v13, v12, v9, v15);
        v17 = 1;
      }
      else
      {
        v16 = (void *)UserReferenceDwmApiPort(v13, v12, v9, v15);
        v17 = 0;
      }
      updated = (int)DwmAsyncSendWindowArrangingData(v16, v17, a4, (__int128 *)&a2->left, a5) >= 0;
    }
    else if ( v14 == (_DWORD)v12 && (_DWORD)v15 == (_DWORD)v13 )
    {
      *(struct _RECTL *)&v25[0].x = *a2;
      updated = GreUpdateSprite(
                  a1,
                  0LL,
                  *((SFMLOGICALSURFACE **)v20 + 155),
                  0LL,
                  v25,
                  &v21,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  v8,
                  0);
    }
    else
    {
      updated = bSetPreviewRectContent((SFMLOGICALSURFACE **)v20 + 9, a2);
    }
    if ( updated )
      *(struct _RECTL *)(v10 + 317) = *a2;
    v11 = updated;
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v22);
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v24);
  return v11;
}
