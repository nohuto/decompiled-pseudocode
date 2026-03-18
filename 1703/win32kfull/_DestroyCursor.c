/*
 * XREFs of _DestroyCursor @ 0x1C0044EE0
 * Callers:
 *     DestroyClassSmIcon @ 0x1C003949C (DestroyClassSmIcon.c)
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 *     NtUserDestroyCursor @ 0x1C0045210 (NtUserDestroyCursor.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C00C1534 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C00C1638 (zzzSetSystemImage.c)
 *     DestroyWindowSmIcon @ 0x1C00C1AA4 (DestroyWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00C352C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxEnsureMonitorCursors @ 0x1C010A23C (xxxEnsureMonitorCursors.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C010CEF0 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1C010F490 (DestroyUnlockedCursor.c)
 *     _DuplicateCursor @ 0x1C0139CE0 (_DuplicateCursor.c)
 *     _SetCursorContents @ 0x1C01C50C4 (_SetCursorContents.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00450D4 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C00FD87C (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyCursor(struct tagCURSOR *a1, __int64 a2)
{
  int v2; // esi
  int v4; // ebx
  unsigned int v5; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct tagCURSOR *v11; // rax
  struct tagCURSOR *v12; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  struct tagCURSOR *v16; // rax
  __int64 v17; // rcx
  struct tagCURSOR *v18; // rax
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]
  struct tagCURSOR *v21; // [rsp+30h] [rbp-38h]
  int v22; // [rsp+78h] [rbp+10h]
  int v23; // [rsp+80h] [rbp+18h]
  __int64 v24; // [rsp+88h] [rbp+20h]

  v22 = a2;
  v2 = 0;
  v21 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v4 = 0;
  v5 = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v7 = gcachedCaptions[0];
  v20 = CurrentProcessWin32Process;
  v19 = *((_QWORD *)a1 + 3);
  v8 = 0LL;
  v9 = 0LL;
  v23 = 0;
  v24 = 0LL;
  do
  {
    if ( *(struct tagCURSOR **)(v9 + v7) == a1 )
    {
      if ( !HMAssignmentUnlock(v7 + 24 * v8) )
        return v5;
      v7 = gcachedCaptions[0];
      LODWORD(v8) = v23;
      v9 = v24;
    }
    v8 = (unsigned int)(v8 + 1);
    v9 += 24LL;
    v23 = v8;
    v24 = v9;
  }
  while ( (unsigned int)v8 < 5 );
  if ( !v22 )
  {
    v14 = gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)a1;
    if ( *(_QWORD *)(v14 + 8) == PsGetProcessWin32Process(gpepCSRSS) && PsGetCurrentProcess(v15) == gpepCSRSS )
      FixupGlobalCursor(a1, v20);
    v4 = 0;
    goto LABEL_10;
  }
  if ( v22 != 1 )
  {
    if ( v22 == 2 )
    {
      v10 = v19;
      goto LABEL_9;
    }
LABEL_10:
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      *((_DWORD *)a1 + 20) |= 0x2000u;
      goto LABEL_12;
    }
    goto LABEL_38;
  }
  v10 = v19;
  if ( !v19 )
  {
    v2 = 1;
    v5 = *((_DWORD *)a1 + 20) & 1;
    goto LABEL_12;
  }
  if ( (*((_DWORD *)a1 + 20) & 0x84) != 0 )
    goto LABEL_31;
  if ( v19 == v20 )
  {
LABEL_9:
    if ( v10 )
      goto LABEL_10;
LABEL_31:
    v2 = 1;
    goto LABEL_12;
  }
  UserSetLastError(1435LL);
LABEL_38:
  v2 = 1;
  v5 = 0;
LABEL_12:
  v11 = v21;
  if ( v21 != a1 )
  {
    v11 = v21;
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
      v4 = 1;
  }
  if ( v2 )
  {
    if ( v4 )
    {
      v16 = a1;
      do
      {
        *((_QWORD *)v16 + 6) = a1;
        v16 = (struct tagCURSOR *)*((_QWORD *)v16 + 5);
      }
      while ( v16 );
    }
  }
  else
  {
    if ( v11 == a1 || v4 )
    {
      v12 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
      if ( v12 )
      {
        *((_QWORD *)a1 + 5) = 0LL;
        DestroyCursor(v12);
      }
    }
    else
    {
      v17 = *((_QWORD *)a1 + 6);
      if ( v17 )
      {
        do
        {
          v18 = *(struct tagCURSOR **)(v17 + 40);
          if ( v18 == a1 )
            break;
          v17 = *(_QWORD *)(v17 + 40);
        }
        while ( v18 );
        if ( v17 )
          *(_QWORD *)(v17 + 40) = *((_QWORD *)a1 + 5);
      }
      *((_QWORD *)a1 + 5) = 0LL;
      *((_QWORD *)a1 + 6) = a1;
    }
    if ( a1 == (struct tagCURSOR *)gpcurLogCurrent )
      gpcurLogCurrent = 0LL;
    if ( a1 == (struct tagCURSOR *)gpcurPhysCurrent )
      gpcurPhysCurrent = 0LL;
    CleanupCursorObject(a1);
    if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 )
      UnlinkCursor(a1);
    HMFreeObject(a1);
  }
  return v5;
}
