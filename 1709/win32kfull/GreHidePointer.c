/*
 * XREFs of GreHidePointer @ 0x1C0046DE0
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C0046DAC (SetPointerMetaVisibility.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01BC1B8 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01BC4E0 (-xxxSwitchCursors@@YAXH@Z.c)
 *     NtUserShowSystemCursor @ 0x1C01EC870 (NtUserShowSystemCursor.c)
 * Callees:
 *     GreSetPointer @ 0x1C0089688 (GreSetPointer.c)
 *     GreMovePointer @ 0x1C008AF20 (GreMovePointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C010E710 (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall GreHidePointer(int a1)
{
  unsigned int v2; // esi
  __int64 HDEV; // rax
  HDEV v4; // rbp
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v10; // eax
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  unsigned int v13; // edx
  struct _CURSINFO *v14; // rcx
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = 1;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v4 = (HDEV)HDEV;
  if ( HDEV )
  {
    v15 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) )
      GreAcquireSemaphore(ghsemGreLock);
    v16 = *(_QWORD *)(v15 + 48);
    GreAcquireSemaphore(v16);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v7 = CurrentProcessWin32Process;
    if ( a1 )
    {
      if ( CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000000) == 0
        && gulCachedPointerRefs != -1 )
      {
        if ( !gulCachedPointerRefs )
          GreHidePointerInternal(v4);
        ++gulCachedPointerRefs;
        *(_DWORD *)(v7 + 12) |= 0x40000000u;
      }
    }
    else if ( CurrentProcessWin32Process )
    {
      v8 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v8 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v7 + 12) = v8 & 0xBFFFFFFF;
        v10 = gulCachedPointerRefs;
        if ( gulCachedPointerRefs )
        {
          --gulCachedPointerRefs;
          if ( v10 == 1 )
          {
            if ( bCachedSetPointerRefs )
            {
              if ( byte_1C0326EBC )
              {
                v11 = dword_1C0326EB8;
                v12 = dword_1C0326EB4;
                v13 = dword_1C0326EB0;
                v14 = gCachedSetPointerState;
              }
              else
              {
                v11 = 0;
                v12 = 0;
                v13 = 0;
                v14 = 0LL;
              }
              GreSetPointer(v14, v13, v12, v11);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(v4, dword_1C032F948, dword_1C032F94C, dword_1C032F950);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) )
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
