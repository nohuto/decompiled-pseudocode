/*
 * XREFs of _DestroyCursor @ 0x1C0098338
 * Callers:
 *     xxxSetMonitorIcoCurIndex @ 0x1C0051864 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0051988 (zzzSetSystemImage.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00538FC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     DestroyWindowSmIcon @ 0x1C005D7C8 (DestroyWindowSmIcon.c)
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 *     NtUserDestroyCursor @ 0x1C009ADE0 (NtUserDestroyCursor.c)
 *     DestroyClassSmIcon @ 0x1C00F238C (DestroyClassSmIcon.c)
 *     xxxEnsureMonitorCursors @ 0x1C01122D0 (xxxEnsureMonitorCursors.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0116C28 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1C0119240 (DestroyUnlockedCursor.c)
 *     _DuplicateCursor @ 0x1C01409BC (_DuplicateCursor.c)
 *     _SetCursorContents @ 0x1C01C73C4 (_SetCursorContents.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetCurrentLogicalCursorThread @ 0x1C0098230 (_GetCurrentLogicalCursorThread.c)
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0099668 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0109BD0 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyCursor(struct tagCURSOR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct tagCURSOR *v11; // rax
  struct tagCURSOR *v12; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagCURSOR *v17; // rax
  __int64 v18; // rcx
  struct tagCURSOR *v19; // rax
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  struct tagCURSOR *v22; // [rsp+30h] [rbp-38h]
  unsigned int v23; // [rsp+78h] [rbp+10h]
  __int64 v24; // [rsp+88h] [rbp+20h]

  v23 = a2;
  v22 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v21 = *(_QWORD *)(GetCurrentLogicalCursorThread((__int64)a1, a2, a3, a4) + 400);
  v20 = *((_QWORD *)a1 + 3);
  v8 = 0LL;
  v24 = 0LL;
  do
  {
    if ( *(struct tagCURSOR **)(v8 + gcachedCaptions[0]) == a1 )
    {
      if ( !HMAssignmentUnlock(&gcachedCaptions[3 * v7]) )
        return 1LL;
      v8 = v24;
    }
    v8 += 24LL;
    v7 = (unsigned int)(v7 + 1);
    v24 = v8;
  }
  while ( (unsigned int)v7 < 5 );
  if ( !v23 )
  {
    v14 = 3LL * (unsigned __int16)*(_DWORD *)a1;
    if ( *(_QWORD *)(gpKernelHandleTable + 8 * v14 + 8) == PsGetProcessWin32Process(gpepCSRSS)
      && PsGetCurrentProcess(v16, v15) == gpepCSRSS )
    {
      FixupGlobalCursor(a1, v21);
    }
    v6 = 0;
    goto LABEL_10;
  }
  if ( v23 != 1 )
  {
    if ( v23 == 2 )
    {
      v9 = v20;
      goto LABEL_9;
    }
LABEL_10:
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      v10 = 1;
      *((_DWORD *)a1 + 20) |= 0x2000u;
      goto LABEL_12;
    }
    goto LABEL_39;
  }
  v9 = v20;
  if ( !v20 )
  {
    v5 = 1;
    v10 = *((_DWORD *)a1 + 20) & 1;
    goto LABEL_12;
  }
  if ( (*((_DWORD *)a1 + 20) & 0x84) != 0 )
    goto LABEL_31;
  if ( v20 == v21 )
  {
LABEL_9:
    if ( v9 )
      goto LABEL_10;
LABEL_31:
    v10 = 1;
    v5 = 1;
    goto LABEL_12;
  }
  UserSetLastError(1435LL, v23);
LABEL_39:
  v10 = 0;
  v5 = 1;
LABEL_12:
  v11 = v22;
  if ( v22 != a1 )
  {
    v11 = v22;
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
      v6 = 1;
  }
  if ( v5 )
  {
    if ( v6 )
    {
      v17 = a1;
      do
      {
        *((_QWORD *)v17 + 6) = a1;
        v17 = (struct tagCURSOR *)*((_QWORD *)v17 + 5);
      }
      while ( v17 );
    }
  }
  else
  {
    if ( v11 == a1 || v6 )
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
      v18 = *((_QWORD *)a1 + 6);
      if ( v18 )
      {
        do
        {
          v19 = *(struct tagCURSOR **)(v18 + 40);
          if ( v19 == a1 )
            break;
          v18 = *(_QWORD *)(v18 + 40);
        }
        while ( v19 );
        if ( v18 )
          *(_QWORD *)(v18 + 40) = *((_QWORD *)a1 + 5);
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
  return v10;
}
