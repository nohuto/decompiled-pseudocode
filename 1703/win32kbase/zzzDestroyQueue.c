/*
 * XREFs of zzzDestroyQueue @ 0x1C004A190
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C0037D40 (Win32FreeToPagedLookasideList.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C00452F8 (ApiSetEditionUpdateRawMouseMode.c)
 *     HMAssignmentUnlock @ 0x1C0049000 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     RecalculateQueueInfo @ 0x1C007B720 (RecalculateQueueInfo.c)
 */

__int64 __fastcall zzzDestroyQueue(__int64 a1, __int64 a2)
{
  int v2; // r14d
  _QWORD *v6; // r10
  _QWORD **v7; // r8
  _QWORD *v8; // rbp
  _QWORD *v9; // rsi
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  __int64 v12; // r15
  __int16 v13; // r11
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int128 v21; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 344))-- == 1 )
  {
    if ( gpqForeground == a1 )
    {
      v15 = *(_QWORD *)(a1 + 80);
      if ( v15 )
        xxxWindowEvent(2147483651LL, v15, 0LL);
    }
    if ( (int)IsUnlockCaptureWindowSupported(a1) >= 0 )
      UnlockCaptureWindow(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 80));
    HMAssignmentUnlock((__int64 *)(a1 + 88));
    HMAssignmentUnlock((__int64 *)(a1 + 96));
    if ( (int)IsClearDelegationCaptureSupported(v16) >= 0 )
      ClearDelegationCapture(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 256));
    v21 = (unsigned __int64)(a1 + 328);
    HMAssignmentLock((__int64)&v21);
    if ( (int)IsFreeMessageListSupported(v17) >= 0 )
      FreeMessageList(a1);
    result = IsSetNewForegroundQueueSupported(v18);
    if ( (int)result >= 0 && gpqForeground == a1 )
      result = SetNewForegroundQueue(0LL);
    if ( gpqForegroundPrev == a1 )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == (struct tagQ *)a1 )
    {
      gpqCursor = 0LL;
      v2 = 1;
    }
    if ( *(_DWORD *)(a1 + 348) )
      *(_DWORD *)(a1 + 340) |= 0x4000000u;
    else
      result = Win32FreeToPagedLookasideList((__int64)QLookaside, a1);
    if ( v2 )
    {
      result = IszzzSetFMouseMovedSupported(v19);
      if ( (int)result >= 0 )
        return zzzSetFMouseMoved(v20);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 32) == a2 )
      *(_QWORD *)(a1 + 32) = 0LL;
    if ( *(_QWORD *)(a1 + 64) == a2 || *(_QWORD *)(a1 + 56) == a2 )
    {
      v6 = 0LL;
      v7 = (_QWORD **)(*(_QWORD *)(a2 + 408) + 168LL);
      v8 = 0LL;
      v9 = 0LL;
      v10 = *v7;
      if ( *v7 == v7 )
        goto LABEL_20;
      do
      {
        v11 = v10 - 82;
        if ( (*(_DWORD *)(v10 - 27) & 1) == 0 && v11[48] == a1 )
        {
          v12 = *(_QWORD *)(a2 + 400);
          v6 = v10 - 82;
          v13 = *(_WORD *)(v12 + 6);
          if ( (v13 & 6) != 0 && (*(_BYTE *)(v11[50] + 10LL) & 6) != 0 )
            v8 = v10 - 82;
          if ( (v13 & 1) != 0 && (*(_BYTE *)(v11[50] + 10LL) & 1) != 0 )
            v9 = v10 - 82;
          if ( (*(_WORD *)(v12 + 10) & 0x400) != 0 && (*(_WORD *)(v11[50] + 10LL) & 0x400) != 0 )
            v9 = v10 - 82;
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v7 );
      if ( !v8 )
LABEL_20:
        v8 = v6;
      if ( !v9 )
        v9 = v6;
      if ( (int)IsSetWakeBitSupported() >= 0 )
      {
        if ( v8 )
          SetWakeBit(v8, *(_WORD *)(*(_QWORD *)(a2 + 400) + 6LL) & 6);
        if ( v9 )
        {
          SetWakeBit(v9, *(_WORD *)(*(_QWORD *)(a2 + 400) + 6LL) & 1);
          SetWakeBit(v9, *(_WORD *)(*(_QWORD *)(a2 + 400) + 6LL) & 0x400);
        }
      }
      if ( *(_QWORD *)(a1 + 64) == a2 )
        *(_QWORD *)(a1 + 64) = v9;
      if ( *(_QWORD *)(a1 + 56) == a2 )
      {
        *(_QWORD *)(a1 + 56) = v8;
        ApiSetEditionUpdateRawMouseMode(a1);
      }
    }
    return RecalculateQueueInfo();
  }
  return result;
}
