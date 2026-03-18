/*
 * XREFs of DpiFdoHandleQueryConnectionChange @ 0x1C0011D5C
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C0011EC4 (ExFreeToNPagedLookasideList.c)
 */

__int64 __fastcall DpiFdoHandleQueryConnectionChange(__int64 a1, __int64 a2)
{
  char *v4; // rbx
  char **v5; // rax
  unsigned int v6; // edi
  char *v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  _QWORD *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3352), &LockHandle);
  v5 = (char **)(a1 + 3360);
  if ( *v5 == (char *)v5 )
  {
    v6 = 255;
    goto LABEL_3;
  }
  v4 = *v5;
  if ( *((char ***)*v5 + 1) != v5 || (v8 = *(char **)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
    __fastfail(3u);
  *v5 = v8;
  *((_QWORD *)v8 + 1) = v5;
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(v4 + 40);
  *(_OWORD *)(a2 + 40) = *(_OWORD *)(v4 + 56);
  *(_OWORD *)(a2 + 56) = *(_OWORD *)(v4 + 72);
  *(_OWORD *)(a2 + 72) = *(_OWORD *)(v4 + 88);
  *(_QWORD *)(a2 + 88) = *((_QWORD *)v4 + 13);
  v9 = *((_DWORD *)v4 + 6);
  if ( !v9 )
  {
    if ( *(_BYTE *)(a1 + 1139) )
      *(_BYTE *)(a2 + 102) = 1;
    goto LABEL_15;
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_10;
  v13 = v10 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
LABEL_10:
      *(_QWORD *)a2 = _InterlockedIncrement64(&qword_1C0060CC8);
      *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ *((_DWORD *)v4 + 7)) & 0xFFFFFF;
      *(_BYTE *)(a2 + 96) = v4[31];
      if ( v4[114] )
        v11 = 9;
      else
        v11 = v4[32] != 0 ? 10 : 8;
      *(_DWORD *)(a2 + 8) = (v11 << 24) | *(_DWORD *)(a2 + 8) & 0xF0FFFFFF;
      if ( *((_DWORD *)v4 + 6) == 3 )
        v12 = *((_DWORD *)v4 + 9);
      else
        v12 = -2;
      *(_DWORD *)(a2 + 12) = v12;
      *(_BYTE *)(a2 + 100) = v4[112];
      *(_BYTE *)(a2 + 101) = v4[113];
      *(_BYTE *)(a2 + 103) = v4[115];
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v14[3] = *((unsigned int *)v4 + 7);
    v14[4] = *(_QWORD *)(a1 + 24);
    v14[5] = (unsigned __int8)v4[32];
    WdLogEvent5_WdEvent(v14);
  }
LABEL_15:
  v6 = 0;
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
    ExFreeToNPagedLookasideList(&Lookaside, v4);
  return v6;
}
