/*
 * XREFs of zzzDestroyQueue @ 0x1C00DE6A0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0017630 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0017C2C (ApiSetEditionUpdateRawMouseMode.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0054EB0 (Win32FreeToPagedLookasideList.c)
 *     RecalculateQueueInfo @ 0x1C0073E00 (RecalculateQueueInfo.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C0091CB0 (ApiSetEditionSystemGenerateMove.c)
 */

unsigned __int64 __fastcall zzzDestroyQueue(__int64 a1, __int64 a2)
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
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 384))-- == 1 )
  {
    if ( gpqForeground == a1 )
    {
      v15 = *(_QWORD *)(a1 + 112);
      if ( v15 )
      {
        v16 = 49;
        if ( gdwDeferWinEvent )
          v16 = 51;
        xxxWindowEvent(2147483651LL, v15, 0LL, 6LL, v16);
      }
    }
    if ( (int)IsUnlockCaptureWindowSupported() >= 0 )
      UnlockCaptureWindow(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 112));
    HMAssignmentUnlock((__int64 *)(a1 + 120));
    HMAssignmentUnlock((__int64 *)(a1 + 128));
    if ( (int)IsClearDelegationCaptureSupported() >= 0 )
      ClearDelegationCapture(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 288));
    v17 = (unsigned __int64)(a1 + 368);
    HMAssignmentLock((__int64 **)&v17);
    if ( (int)IsFreeMessageListSupported() >= 0 )
      FreeMessageList(a1 + 24);
    result = IsSetNewForegroundQueueSupported();
    if ( (result & 0x80000000) == 0LL && gpqForeground == a1 )
      result = SetNewForegroundQueue(0LL);
    if ( gpqForegroundPrev == a1 )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == (struct tagQ *)a1 )
    {
      gpqCursor = 0LL;
      v2 = 1;
    }
    if ( *(_DWORD *)(a1 + 388) )
      *(_DWORD *)(a1 + 380) |= 0x4000000u;
    else
      result = Win32FreeToPagedLookasideList((__int64)QLookaside, a1);
    if ( v2 )
      return ApiSetEditionSystemGenerateMove(2u);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 64) == a2 )
      *(_QWORD *)(a1 + 64) = 0LL;
    if ( *(_QWORD *)(a1 + 96) == a2 || *(_QWORD *)(a1 + 88) == a2 )
    {
      v6 = 0LL;
      v7 = (_QWORD **)(*(_QWORD *)(a2 + 432) + 168LL);
      v8 = 0LL;
      v9 = 0LL;
      v10 = *v7;
      if ( *v7 == v7 )
        goto LABEL_20;
      do
      {
        v11 = v10 - 89;
        if ( (*(_DWORD *)(v10 - 31) & 1) == 0 && v11[51] == a1 )
        {
          v12 = *(_QWORD *)(a2 + 424);
          v6 = v10 - 89;
          v13 = *(_WORD *)(v12 + 6);
          if ( (v13 & 6) != 0 && (*(_BYTE *)(v11[53] + 10LL) & 6) != 0 )
            v8 = v10 - 89;
          if ( (v13 & 1) != 0 && (*(_BYTE *)(v11[53] + 10LL) & 1) != 0 )
            v9 = v10 - 89;
          if ( (*(_WORD *)(v12 + 10) & 0x400) != 0 && (*(_WORD *)(v11[53] + 10LL) & 0x400) != 0 )
            v9 = v10 - 89;
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
          SetWakeBit(v8, *(_WORD *)(*(_QWORD *)(a2 + 424) + 6LL) & 6);
        if ( v9 )
        {
          SetWakeBit(v9, *(_WORD *)(*(_QWORD *)(a2 + 424) + 6LL) & 1);
          SetWakeBit(v9, *(_WORD *)(*(_QWORD *)(a2 + 424) + 6LL) & 0x400);
        }
      }
      if ( *(_QWORD *)(a1 + 96) == a2 )
        *(_QWORD *)(a1 + 96) = v9;
      if ( *(_QWORD *)(a1 + 88) == a2 )
      {
        *(_QWORD *)(a1 + 88) = v8;
        ApiSetEditionUpdateRawMouseMode(a1);
      }
    }
    return RecalculateQueueInfo();
  }
  return result;
}
