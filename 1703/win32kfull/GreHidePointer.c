/*
 * XREFs of GreHidePointer @ 0x1C00F0EC0
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C00F0E8C (SetPointerMetaVisibility.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01B6E5C (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01B7184 (-xxxSwitchCursors@@YAXH@Z.c)
 *     NtUserShowSystemCursor @ 0x1C01E0720 (NtUserShowSystemCursor.c)
 * Callees:
 *     GreSetPointer @ 0x1C00471C8 (GreSetPointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreMovePointer @ 0x1C00BC9F0 (GreMovePointer.c)
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C00F1140 (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall GreHidePointer(int a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  __int64 HDEV; // rax
  HDEV v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v12; // eax
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  struct _CURSINFO *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v2 = 1;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  HDEV = UserGetHDEV(v3);
  v5 = (HDEV)HDEV;
  if ( HDEV )
  {
    v18 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v18) )
      GreAcquireSemaphore(ghsemGreLock);
    v19 = *(_QWORD *)(v18 + 48);
    GreAcquireSemaphore(v19);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6);
    v9 = CurrentProcessWin32Process;
    if ( a1 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000000) == 0 )
        {
          v17 = gulCachedPointerRefs;
          if ( gulCachedPointerRefs != -1 )
          {
            if ( !gulCachedPointerRefs )
            {
              GreHidePointerInternal(v5);
              v17 = gulCachedPointerRefs;
            }
            *(_DWORD *)(v9 + 12) |= 0x40000000u;
            gulCachedPointerRefs = v17 + 1;
          }
        }
      }
    }
    else if ( CurrentProcessWin32Process )
    {
      v10 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v10 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v9 + 12) = v10 & 0xBFFFFFFF;
        v12 = gulCachedPointerRefs;
        if ( gulCachedPointerRefs )
        {
          --gulCachedPointerRefs;
          if ( v12 == 1 )
          {
            if ( bCachedSetPointerRefs )
            {
              if ( byte_1C032B32C )
              {
                v13 = dword_1C032B328;
                v14 = dword_1C032B324;
                v15 = dword_1C032B320;
                v16 = gCachedSetPointerState;
              }
              else
              {
                v13 = 0LL;
                v14 = 0LL;
                v15 = 0LL;
                v16 = 0LL;
              }
              GreSetPointer(v16, v15, v14, v13);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(v5, dword_1C03343F8, dword_1C03343FC, dword_1C0334400);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v18) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
  }
  else
  {
    v2 = 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return v2;
}
