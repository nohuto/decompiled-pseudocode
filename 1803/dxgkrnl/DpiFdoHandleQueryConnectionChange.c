/*
 * XREFs of DpiFdoHandleQueryConnectionChange @ 0x1C003B514
 * Callers:
 *     DpiDxgkDdiQueryConnectionChange @ 0x1C00422B4 (DpiDxgkDdiQueryConnectionChange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C00290DC (ExFreeToNPagedLookasideList.c)
 */

__int64 __fastcall DpiFdoHandleQueryConnectionChange(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  _QWORD *v14; // rax
  int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3352), &LockHandle);
  v5 = (_QWORD *)(a1 + 3360);
  v6 = *(__int64 **)(a1 + 3360);
  if ( v6 == (__int64 *)(a1 + 3360) )
  {
    v7 = 255;
    goto LABEL_20;
  }
  v4 = *(_QWORD *)(a1 + 3360);
  if ( (_QWORD *)v6[1] != v5 || (v8 = *v6, *(_QWORD *)(v8 + 8) != v4) )
    __fastfail(3u);
  *v5 = v8;
  *(_QWORD *)(v8 + 8) = v5;
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(v4 + 40);
  *(_OWORD *)(a2 + 40) = *(_OWORD *)(v4 + 56);
  *(_OWORD *)(a2 + 56) = *(_OWORD *)(v4 + 72);
  *(_OWORD *)(a2 + 72) = *(_OWORD *)(v4 + 88);
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(v4 + 104);
  v9 = *(_DWORD *)(v4 + 24);
  if ( !v9 )
  {
    if ( *(_BYTE *)(a1 + 1139) )
      *(_BYTE *)(a2 + 102) = 1;
    goto LABEL_19;
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_9;
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
LABEL_9:
      *(_QWORD *)a2 = _InterlockedIncrement64(&qword_1C007AC20);
      v12 = *(_DWORD *)(a2 + 8) ^ (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(v4 + 28)) & 0xFFFFFF;
      *(_DWORD *)(a2 + 8) = v12;
      *(_BYTE *)(a2 + 96) = *(_BYTE *)(v4 + 31);
      if ( *(_BYTE *)(v4 + 114) )
        v13 = 9;
      else
        v13 = *(_BYTE *)(v4 + 32) != 0 ? 10 : 8;
      *(_DWORD *)(a2 + 8) = (v13 << 24) | v12 & 0xF0FFFFFF;
      if ( *(_DWORD *)(v4 + 24) == 3 )
        v15 = *(_DWORD *)(v4 + 36);
      else
        v15 = -2;
      *(_DWORD *)(a2 + 12) = v15;
      *(_BYTE *)(a2 + 100) = *(_BYTE *)(v4 + 112);
      *(_BYTE *)(a2 + 101) = *(_BYTE *)(v4 + 113);
      *(_BYTE *)(a2 + 103) = *(_BYTE *)(v4 + 115);
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v14[3] = *(unsigned int *)(v4 + 28);
    v14[4] = *(_QWORD *)(a1 + 24);
    v14[5] = *(unsigned __int8 *)(v4 + 32);
    WdLogEvent5_WdEvent(v14);
  }
LABEL_19:
  v7 = 0;
LABEL_20:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
    ExFreeToNPagedLookasideList(&Lookaside, (PVOID)v4);
  return v7;
}
