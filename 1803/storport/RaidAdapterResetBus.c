/*
 * XREFs of RaidAdapterResetBus @ 0x1C00277B8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007A30 (RaidAdapterDeviceControlIrp.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C0011A40 (RaidUnitPendingDpcRoutine.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C003B374 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C003C39C (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C003CCD0 (RaidUnitHierarchicalReset.c)
 *     RaidUnitRequestTimeout @ 0x1C003D4D0 (RaidUnitRequestTimeout.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C0007C70 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0007C9C (RaidAdapterAcquireStartIoLock.c)
 *     RaidPauseAdapterQueue @ 0x1C000F520 (RaidPauseAdapterQueue.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0028C1C (RaidAdapterSetPauseTimer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002BB14 (RaidResumeAndRestartAdapterQueues.c)
 */

__int64 __fastcall RaidAdapterResetBus(__int64 a1, unsigned __int8 a2)
{
  int v5; // r14d
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // r15
  struct _SLIST_ENTRY *v9; // rax
  int v10; // r13d
  ULONGLONG UnbiasedInterruptTime; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  unsigned int v15; // r14d
  ULONGLONG v16; // rax
  int v17; // esi
  ULONGLONG v18; // r15
  int v19; // esi
  unsigned int v20; // ebx
  PSLIST_ENTRY v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // r9
  const struct _TlgProvider_t *v24; // rcx
  KIRQL v25; // bl
  const struct _TlgProvider_t *v26; // rcx
  const GUID *v27; // r8
  const GUID *v28; // r9
  unsigned __int8 v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh]
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-B4h] BYREF
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h]
  ULONGLONG v36; // [rsp+60h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+68h] [rbp-98h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  int *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  char *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  unsigned int *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  ULONGLONG *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  int *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]

  if ( a2 >= *(_BYTE *)(a1 + 376) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 252), 1, 0) == 1 )
    return 3221226614LL;
  RaidPauseAdapterQueue(a1);
  if ( *(int *)(a1 + 4744) > 1 )
  {
    v5 = 0;
    v6 = KeQueryHighestNodeNumber() + 1;
    InitializeSListHead(&SListHead);
    do
    {
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + *(_QWORD *)(a1 + 4752)));
          if ( v9 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v9);
            ++v5;
          }
          else
          {
            _mm_pause();
          }
          v7 += 64LL;
          --v8;
        }
        while ( v8 );
      }
    }
    while ( v5 < *(_DWORD *)(a1 + 4744) );
  }
  RaidAdapterAcquireStartIoLock(a1, &v37);
  *(_DWORD *)(a1 + 5208) = 0;
  v10 = *(_DWORD *)(a1 + 960);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v35 = 0LL;
  if ( (qword_1C0056210 & 0x400) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 296),
      11,
      *(_QWORD *)(a1 + 296),
      *(unsigned int *)(*(_QWORD *)(a1 + 296) + 56LL),
      a2,
      0LL,
      v35);
  v12 = *(_QWORD *)(a1 + 528);
  v13 = *(_QWORD *)(a1 + 536);
  *(_BYTE *)(a1 + 544) |= 2u;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v12 + 40))(v13 + 16, a2);
  *(_BYTE *)(a1 + 544) &= ~2u;
  v15 = v14 == 0 ? 0xC0000001 : 0;
  v16 = KeQueryUnbiasedInterruptTime();
  v17 = *(_DWORD *)(a1 + 5208);
  v18 = v16 - UnbiasedInterruptTime;
  v30 = v17;
  if ( *(int *)(a1 + 4744) > 1 )
  {
    v19 = 0;
    v20 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v21 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v21 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4752) + ((unsigned __int64)(HIDWORD(v21[1].Next) % v20) << 6)),
          v21);
        ++v19;
      }
    }
    while ( v19 < *(_DWORD *)(a1 + 4744) );
    v17 = v30;
  }
  RaidAdapterReleaseStartIoLock(a1, &v37);
  v22 = *(_DWORD *)(a1 + 520);
  if ( v22 )
  {
    v23 = v22 / 0xF4240 + 1;
    if ( v22 == 1000000 * (v22 / 0xF4240) )
      v23 = v22 / 0xF4240;
    RaidAdapterSetPauseTimer(a1, a1 + 4216, a1 + 4280, v23);
  }
  else
  {
    v25 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(a1);
    KeLowerIrql(v25);
  }
  if ( (unsigned int)dword_1C0056060 > 5 )
  {
    if ( TlgKeywordOn(v24, 0x400000000000uLL) )
    {
      v31 = *(_DWORD *)(a1 + 56);
      v40 = a1 + 5192;
      v42 = &v31;
      v44 = (char *)&v29;
      v46 = &v32;
      v48 = &v36;
      v50 = &v33;
      v52 = &v34;
      v29 = a2;
      v32 = v15;
      v36 = v18;
      v33 = v10;
      v34 = v17;
      v41 = 16LL;
      v43 = 4LL;
      v45 = 1LL;
      v47 = 4LL;
      v49 = 8LL;
      v51 = 4LL;
      v53 = 4LL;
      TlgWrite(v26, &unk_1C004BD4C, v27, v28, 9u, &pData);
    }
  }
  *(_DWORD *)(a1 + 252) = 0;
  return v15;
}
