/*
 * XREFs of VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C002BCF0
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x1C002F300 (VidSchSubmitCommandContextless.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0013330 (VidSchiSubmitPresentHistoryToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1C0056B50 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiRedirectedFlipWaitOnSyncObject(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  void (__fastcall *v12)(_QWORD); // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rax
  PSLIST_ENTRY v20; // r14
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(__int64, __int64, __int64, __int64); // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  struct _SLIST_ENTRY *Next; // rax
  __int64 v29; // rbp
  __int64 *v30; // r14
  __int64 **v31; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v9 = *(_QWORD *)(*(_DWORD *)(a2 + 500) * ((8 * *(_DWORD *)(a2 + 504) + 175) & 0xFFFFFFF8) + a2 + 544);
  if ( v9 )
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 32LL);
  else
    v10 = 0LL;
  v11 = *(unsigned int *)(a2 + 116);
  if ( (*(_DWORD *)a2 & 0x1000000) != 0
    && (_DWORD)v11 != -1
    && *(_DWORD *)(*(_QWORD *)(a1 + 8 * v11 + 3032) + 28128LL) != -1 )
  {
    v12 = *(void (__fastcall **)(_QWORD))(a1 + 2888);
    if ( v12 )
      v12(*(_QWORD *)(a1 + 2952));
  }
  if ( (*a4 & 0x1000) != 0 && (*a4 & 0xC00) != 0x400 && (_DWORD)v11 != -1 && (*(_DWORD *)a2 & 0x1040000) == 0x1040000 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 976), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v10 + 1212), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v10 + 4 * v11 + 1148), 1u);
    if ( (*(_DWORD *)(v10 + 48) & 2) != 0 || *(int *)(a2 + 120) >= 4 || *(_BYTE *)(a1 + 136) )
      VidSchIsVSyncEnabled(a1, (unsigned int)v11);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  v14 = *(_QWORD *)(a2 + 464);
  if ( *(_BYTE *)(a3 + 28) )
    goto LABEL_20;
  v15 = *(unsigned __int64 **)(a3 + 56);
  if ( *(_BYTE *)(a3 + 29) )
  {
    if ( *v15 >= v14 )
    {
LABEL_20:
      v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13);
      v16[3] = a3;
      v16[4] = **(_QWORD **)(a3 + 56);
      v16[5] = *(_QWORD *)(a2 + 464);
      WdLogEvent5_WdEvent(v16);
      v17 = *(_QWORD *)(a2 + 24);
      if ( v17 )
        _InterlockedAdd((volatile signed __int32 *)(v17 + 4), 1u);
      VidSchiSubmitPresentHistoryToken(0LL, (_QWORD *)a2, 0LL, a1);
      goto LABEL_23;
    }
  }
  else if ( *(_DWORD *)v15 - (int)v14 >= 0 )
  {
    goto LABEL_20;
  }
  if ( *(_DWORD *)(a3 + 32) == 0x7FFFFFFF )
  {
    v19 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v19);
    v4 = -1073741823;
  }
  else
  {
    ++*(_DWORD *)(a1 + 1076);
    v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1056));
    if ( v20
      || (v21 = *(unsigned int *)(a1 + 1100),
          v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 1104),
          v23 = *(unsigned int *)(a1 + 1096),
          v24 = *(unsigned int *)(a1 + 1092),
          ++*(_DWORD *)(a1 + 1080),
          (v20 = (PSLIST_ENTRY)v22(v24, v21, v23, a1 + 1056)) != 0LL) )
    {
      *((_QWORD *)&v20->Next + 1) = a3;
      v20[1].Next = *(struct _SLIST_ENTRY **)(a2 + 464);
      memmove(&v20[2].Next + 1, (const void *)a2, *(unsigned int *)(a2 + 484));
      Next = v20[4].Next;
      if ( Next )
        _InterlockedAdd((volatile signed __int32 *)&Next->Next + 1, 1u);
      v29 = a1 + 1032;
      v30 = (__int64 *)(&v20[1].Next + 1);
      v31 = *(__int64 ***)(v29 + 8);
      if ( *v31 != (__int64 *)v29 )
        __fastfail(3u);
      *v30 = v29;
      v30[1] = (__int64)v31;
      *v31 = v30;
      *(_QWORD *)(v29 + 8) = v30;
      ++*(_DWORD *)(a3 + 40);
      _InterlockedAdd((volatile signed __int32 *)(a3 + 32), 1u);
    }
    else
    {
      v27 = WdLogNewEntry5_WdAssertion(v26, v25);
      WdLogEvent5_WdAssertion(v27);
      v4 = -1073741801;
    }
  }
LABEL_23:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
