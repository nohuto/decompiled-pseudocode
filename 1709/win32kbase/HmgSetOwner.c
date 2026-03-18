/*
 * XREFs of HmgSetOwner @ 0x1C0042A50
 * Callers:
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001E1D8 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMakeBitmapNonStock @ 0x1C001EBA0 (GreMakeBitmapNonStock.c)
 *     GreSetBitmapOwnerEx @ 0x1C003FC78 (GreSetBitmapOwnerEx.c)
 *     GreSetRegionOwner @ 0x1C0042A00 (GreSetRegionOwner.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00430C0 (SetOrCreateRectRgnIndirectPublic.c)
 *     CreateEmptyRgnPublic @ 0x1C0056A80 (CreateEmptyRgnPublic.c)
 *     GreSetPaletteOwner @ 0x1C0093480 (GreSetPaletteOwner.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00F0408 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     bInitICM @ 0x1C01DF194 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C01DF3FC (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1C01DFBA4 (bInitBMOBJ.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004DBC0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C004DCF0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E060 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0051618 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C0053EA4 (HmgIncProcessHandleCount.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

__int64 __fastcall HmgSetOwner(unsigned int a1, int a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v6; // r14d
  int v7; // esi
  struct OBJECT *EntryObject; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rcx
  unsigned int v14; // ebp
  __int16 v15; // ax
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+38h] [rbp-30h]

  LODWORD(v4) = a2;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v17 = 0LL;
  v18 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v17, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v18 )
  {
    if ( *(_BYTE *)(v17 + 14) == a3 && *(_WORD *)(v17 + 12) == HIWORD(a1) )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v17 & 0xFFFFFF);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v9, v10, v11);
      if ( ThreadWin32Thread )
        v13 = *(_QWORD *)(ThreadWin32Thread + 72);
      else
        v13 = 0LL;
      if ( v13 && (_DWORD)v4 )
        v7 = 1;
      if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() || v7 )
      {
        v6 = 1;
        v14 = *(_DWORD *)(v17 + 8) & 0xFFFFFFFE;
        if ( v7 )
          LODWORD(v4) = *(_DWORD *)(v13 + 8);
        if ( v14 != (_DWORD)v4 )
        {
          v6 = HmgIncProcessHandleCount((unsigned int)v4, 1LL);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v14);
            HANDLELOCK::Pid((HANDLELOCK *)&v17, v4);
            if ( (_DWORD)v4 )
            {
              if ( (_DWORD)v4 != -2147483630 && (*((_WORD *)EntryObject + 6) || *((_DWORD *)EntryObject + 2)) )
              {
                v15 = *((_WORD *)EntryObject + 7);
                if ( (v15 & 0x4000) == 0 )
                  *((_WORD *)EntryObject + 7) = v15 | 0x4000;
              }
            }
          }
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v17);
  GreReleaseHmgrSemaphore();
  return v6;
}
