/*
 * XREFs of RaidAdapterResetBus @ 0x1C002D15C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0005500 (RaidAdapterDeviceControlIrp.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C001AE20 (RaidUnitPendingDpcRoutine.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C003B010 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C003C444 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C003D818 (RaidUnitHierarchicalReset.c)
 *     RaidUnitRequestTimeout @ 0x1C003E02C (RaidUnitRequestTimeout.c)
 * Callees:
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C000629C (RaidAdapterReleaseInterruptLock.c)
 *     DbgLogRequest @ 0x1C000D264 (DbgLogRequest.c)
 *     RaidPauseAdapterQueue @ 0x1C0011DCC (RaidPauseAdapterQueue.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C001E314 (RaidAdapterAcquireStartIoLock.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002E734 (RaidAdapterSetPauseTimer.c)
 */

__int64 __fastcall RaidAdapterResetBus(__int64 a1, unsigned __int8 a2)
{
  __int64 v5; // rsi
  int v6; // r14d
  unsigned int v7; // edi
  __int64 v8; // r15
  struct _SLIST_ENTRY *v9; // rax
  int v10; // r13d
  ULONGLONG UnbiasedInterruptTime; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  unsigned int v15; // r14d
  ULONGLONG v16; // r15
  int v17; // edi
  bool v18; // cc
  unsigned int v19; // edi
  PSLIST_ENTRY v20; // rax
  const struct _TlgProvider_t *v21; // rcx
  const struct _TlgProvider_t *v22; // rcx
  const GUID *v23; // r8
  const GUID *v24; // r9
  unsigned __int8 v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh]
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h]
  ULONGLONG v32; // [rsp+60h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-98h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  int *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  char *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  unsigned int *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  ULONGLONG *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  int *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]

  if ( a2 >= *(_BYTE *)(a1 + 376) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 252), 1, 0) == 1 )
    return 3221226614LL;
  RaidPauseAdapterQueue(a1);
  v5 = 0LL;
  if ( *(int *)(a1 + 4744) > 1 )
  {
    v6 = 0;
    v7 = KeQueryHighestNodeNumber() + 1;
    InitializeSListHead(&SListHead);
    do
    {
      if ( v7 )
      {
        v8 = v7;
        do
        {
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + *(_QWORD *)(a1 + 4752)));
          if ( v9 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v9);
            ++v6;
          }
          else
          {
            _mm_pause();
          }
          v5 += 64LL;
          --v8;
        }
        while ( v8 );
        v5 = 0LL;
      }
    }
    while ( v6 < *(_DWORD *)(a1 + 4744) );
  }
  RaidAdapterAcquireStartIoLock(a1, &LockHandle);
  v10 = *(_DWORD *)(a1 + 960);
  *(_DWORD *)(a1 + 5208) = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v31 = 0LL;
  if ( (qword_1C00551F8 & 0x400) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 296),
      11,
      *(_QWORD *)(a1 + 296),
      *(unsigned int *)(*(_QWORD *)(a1 + 296) + 56LL),
      a2,
      0LL,
      v31);
  v12 = *(_QWORD *)(a1 + 528);
  v13 = *(_QWORD *)(a1 + 536);
  *(_BYTE *)(a1 + 544) |= 2u;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v12 + 40))(v13 + 16, a2);
  *(_BYTE *)(a1 + 544) &= ~2u;
  v15 = v14 == 0 ? 0xC0000001 : 0;
  v16 = KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime;
  v17 = *(_DWORD *)(a1 + 5208);
  v18 = *(_DWORD *)(a1 + 4744) <= 1;
  v26 = v17;
  if ( !v18 )
  {
    v19 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v20 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v20 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4752) + ((unsigned __int64)(HIDWORD(v20[1].Next) % v19) << 6)),
          v20);
        LODWORD(v5) = v5 + 1;
      }
    }
    while ( (int)v5 < *(_DWORD *)(a1 + 4744) );
    v17 = v26;
  }
  if ( *(_DWORD *)(a1 + 688) )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    RaidAdapterReleaseInterruptLock(a1, (KIRQL)LockHandle.LockQueue.Next);
  RaidAdapterSetPauseTimer(a1, a1 + 4216, a1 + 4280, 4LL);
  if ( (unsigned int)dword_1C0055010 > 5 )
  {
    if ( TlgKeywordOn(v21, 0x400000000000uLL) )
    {
      v27 = *(_DWORD *)(a1 + 56);
      v36 = a1 + 5192;
      v38 = &v27;
      v40 = (char *)&v25;
      v42 = &v28;
      v44 = &v32;
      v46 = &v29;
      v48 = &v30;
      v25 = a2;
      v28 = v15;
      v32 = v16;
      v29 = v10;
      v30 = v17;
      v37 = 16LL;
      v39 = 4LL;
      v41 = 1LL;
      v43 = 4LL;
      v45 = 8LL;
      v47 = 4LL;
      v49 = 4LL;
      TlgWrite(v22, &unk_1C004B340, v23, v24, 9u, &pData);
    }
  }
  *(_DWORD *)(a1 + 252) = 0;
  return v15;
}
