/*
 * XREFs of xxxReceiverDied @ 0x1C00C675C
 * Callers:
 *     SendMsgCleanup @ 0x1C00C6700 (SendMsgCleanup.c)
 *     SuspendThreadQueue @ 0x1C00FAC40 (SuspendThreadQueue.c)
 *     zzzCancelJournalling @ 0x1C0110594 (zzzCancelJournalling.c)
 * Callees:
 *     UnlinkSendListSms @ 0x1C0049380 (UnlinkSendListSms.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 *v6; // rax
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  int CurrentThreadDpiAwarenessContext; // [rsp+28h] [rbp-80h]
  int v17; // [rsp+48h] [rbp-60h]
  __int64 v18; // [rsp+50h] [rbp-58h] BYREF
  __int64 v19; // [rsp+58h] [rbp-50h]
  int v20; // [rsp+68h] [rbp-40h] BYREF
  __int64 v21; // [rsp+70h] [rbp-38h]
  __int64 v22; // [rsp+78h] [rbp-30h]
  __int64 v23; // [rsp+80h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 84) |= 2u;
  result = *(unsigned int *)(v4 + 440);
  if ( (result & 1) != 0 )
  {
    *(_DWORD *)(a1 + 84) &= ~0x4000u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  else
  {
    v6 = (__int64 *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 16) )
    {
      --*(_DWORD *)(v4 + 488);
      a3 = *v6;
      a2 = *(_QWORD *)(a1 + 24);
      if ( *(__int64 **)(*v6 + 8) != v6 || *(__int64 **)a2 != v6 )
        __fastfail(3u);
      *(_QWORD *)a2 = a3;
      *(_QWORD *)(a3 + 8) = a2;
      *v6 = 0LL;
    }
    result = v4 + 472;
    if ( *(_QWORD *)result == result )
    {
      a2 = 65471LL;
      *(_WORD *)(*(_QWORD *)(v4 + 400) + 6LL) &= ~0x40u;
      result = *(_QWORD *)(v4 + 400);
      *(_WORD *)(result + 4) &= ~0x40u;
    }
  }
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    v14 = *(_DWORD *)(a1 + 84);
    if ( (v14 & 1) != 0 )
    {
      v15 = v14 & 0xFFFFFFF7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      v15 = v14 | 0x8001;
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    *(_DWORD *)(a1 + 84) = v15;
    SetWakeBit(v7, 0x200u);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 84);
    if ( (v8 & 4) == 0 )
    {
      result = v8 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        v9 = *(_QWORD *)(a1 + 112);
        v10 = v8 | 1;
        *(_DWORD *)(a1 + 84) = v10;
        v11 = 33;
        if ( (v10 & 0x400) != 0 )
          v11 = 289;
        v23 = 0LL;
        v20 = v11;
        v21 = *(_QWORD *)(a1 + 48);
        v22 = *(_QWORD *)(a1 + 56);
        v18 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v18;
        v19 = v9;
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        v17 = *(_DWORD *)(a1 + 84) & 0x10000;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
        xxxInterSendMsgEx(
          *(_QWORD *)(a1 + 112),
          *(unsigned int *)(a1 + 104),
          0LL,
          0LL,
          0LL,
          CurrentThreadDpiAwarenessContext,
          *(_QWORD *)(a1 + 64),
          &v20,
          1,
          v17,
          v18,
          v19);
        result = ThreadUnlock1(v13, v12);
      }
    }
    if ( (*(_DWORD *)(a1 + 84) & 0x4000) == 0 )
      return UnlinkSendListSms((__int64 *)a1, a2, a3);
  }
  return result;
}
