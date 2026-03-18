/*
 * XREFs of HmgSetOwner @ 0x1C00433A0
 * Callers:
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0038F70 (SetOrCreateRectRgnIndirectPublic.c)
 *     CreateEmptyRgnPublic @ 0x1C00425D0 (CreateEmptyRgnPublic.c)
 *     GreCreateBitmap @ 0x1C0042610 (GreCreateBitmap.c)
 *     GreSetBitmapOwner @ 0x1C00432D0 (GreSetBitmapOwner.c)
 *     GreSetRegionOwner @ 0x1C0043350 (GreSetRegionOwner.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0059630 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMakeBitmapNonStock @ 0x1C0078230 (GreMakeBitmapNonStock.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C0078BB4 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     GreSetPaletteOwner @ 0x1C008C910 (GreSetPaletteOwner.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00EC4A8 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     bInitBMOBJ @ 0x1C01D7858 (bInitBMOBJ.c)
 *     bInitICM @ 0x1C01D78AC (bInitICM.c)
 *     bInitPALOBJ @ 0x1C01D7B18 (bInitPALOBJ.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C002F18C (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C00311DC (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0032EC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     HmgIncProcessHandleCount @ 0x1C0076CF8 (HmgIncProcessHandleCount.c)
 */

__int64 __fastcall HmgSetOwner(__int64 a1, int a2, char a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  int v7; // esi
  __int64 v8; // rcx
  struct OBJECT *EntryObject; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int16 v14; // ax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+28h] [rbp-30h]

  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v16 = 0LL;
  v17 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v16, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v16) )
  {
    if ( *(_BYTE *)(v16 + 14) == a3 && *(_WORD *)(v16 + 12) == HIWORD(v5) )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v16 & 0xFFFFFF);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v12 = *(_QWORD *)(ThreadWin32Thread + 72);
      else
        v12 = 0LL;
      if ( v12 && v4 )
        v7 = 1;
      if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() || v7 )
      {
        v6 = 1;
        v13 = *(_DWORD *)(v16 + 8) & 0xFFFFFFFE;
        if ( v7 )
          v4 = *(_DWORD *)(v12 + 8);
        if ( v13 != v4 )
        {
          v6 = HmgIncProcessHandleCount(v4, 1LL, v11);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v13);
            HANDLELOCK::Pid((HANDLELOCK *)&v16, v4);
            if ( v4 )
            {
              if ( v4 != -2147483630 && (*((_WORD *)EntryObject + 6) || *((_DWORD *)EntryObject + 2)) )
              {
                v14 = *((_WORD *)EntryObject + 7);
                if ( (v14 & 0x4000) == 0 )
                  *((_WORD *)EntryObject + 7) = v14 | 0x4000;
              }
            }
          }
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v16);
  }
  if ( v17 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v16);
  GreReleaseHmgrSemaphore(v8);
  return v6;
}
