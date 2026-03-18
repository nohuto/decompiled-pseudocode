/*
 * XREFs of xxxReceiverDied @ 0x1C004911C
 * Callers:
 *     SendMsgCleanup @ 0x1C00490C0 (SendMsgCleanup.c)
 *     SuspendThreadQueue @ 0x1C0105060 (SuspendThreadQueue.c)
 *     zzzCancelJournalling @ 0x1C011A924 (zzzCancelJournalling.c)
 * Callees:
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x1C00A17B0 (UnlinkSendListSms.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rdi
  int v11; // ecx
  int v12; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  _QWORD v18[3]; // [rsp+50h] [rbp-58h] BYREF
  int v19; // [rsp+68h] [rbp-40h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h]
  __int64 v21; // [rsp+78h] [rbp-30h]
  __int64 v22; // [rsp+80h] [rbp-28h]

  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 84) |= 2u;
  result = *(unsigned int *)(v5 + 464);
  if ( (result & 1) != 0 )
  {
    *(_DWORD *)(a1 + 84) &= ~0x4000u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  else
  {
    v7 = (__int64 *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 16) )
    {
      --*(_DWORD *)(v5 + 512);
      a3 = *v7;
      if ( *(__int64 **)(*v7 + 8) != v7 || (a2 = *(_QWORD *)(a1 + 24), *(__int64 **)a2 != v7) )
        __fastfail(3u);
      *(_QWORD *)a2 = a3;
      *(_QWORD *)(a3 + 8) = a2;
      *v7 = 0LL;
    }
    result = v5 + 496;
    if ( *(_QWORD *)result == result )
    {
      a2 = 65471LL;
      *(_WORD *)(*(_QWORD *)(v5 + 424) + 6LL) &= ~0x40u;
      result = *(_QWORD *)(v5 + 424);
      *(_WORD *)(result + 4) &= ~0x40u;
    }
  }
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    v16 = *(_DWORD *)(a1 + 84);
    if ( (v16 & 1) != 0 )
    {
      v17 = v16 & 0xFFFFFFF7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      v17 = v16 | 0x8001;
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    *(_DWORD *)(a1 + 84) = v17;
    SetWakeBit(v8, 512LL);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 84);
    if ( (v9 & 4) == 0 )
    {
      result = v9 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        v10 = *(_QWORD *)(a1 + 112);
        v11 = v9 | 1;
        *(_DWORD *)(a1 + 84) = v11;
        v12 = 33;
        if ( (v11 & 0x400) != 0 )
          v12 = 289;
        v22 = 0LL;
        v19 = v12;
        v20 = *(_QWORD *)(a1 + 48);
        v21 = *(_QWORD *)(a1 + 56);
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v18;
        v18[1] = v10;
        if ( v10 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        xxxInterSendMsgEx(
          *(_QWORD *)(a1 + 112),
          *(_DWORD *)(a1 + 104),
          0,
          0,
          0,
          *(_QWORD *)(a1 + 64),
          (__int64)&v19,
          1,
          *(_DWORD *)(a1 + 84) & 0x10000);
        result = ThreadUnlock1(v15, v14);
      }
    }
    if ( (*(_DWORD *)(a1 + 84) & 0x4000) == 0 )
      return UnlinkSendListSms(a1, a2, a3, a4);
  }
  return result;
}
