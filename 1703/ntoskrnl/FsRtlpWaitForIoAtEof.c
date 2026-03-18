/*
 * XREFs of FsRtlpWaitForIoAtEof @ 0x14011D258
 * Callers:
 *     FsRtlAcquireEofLock @ 0x14011D010 (FsRtlAcquireEofLock.c)
 *     FsRtlGetIoAtEof @ 0x14011E1D0 (FsRtlGetIoAtEof.c)
 * Callees:
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeQueryPriorityThread @ 0x140054910 (KeQueryPriorityThread.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400EEA90 (FsRtlReleaseHeaderMutex.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     FsRtlAcquireHeaderMutex @ 0x140112010 (FsRtlAcquireHeaderMutex.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 */

char __fastcall FsRtlpWaitForIoAtEof(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v5; // r14
  int IoPriorityThread; // esi
  KPRIORITY PriorityThread; // edi
  struct _SINGLE_LIST_ENTRY *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  KPRIORITY v15; // eax
  bool v16; // cc
  int v17; // eax
  _QWORD v18[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 Object; // [rsp+40h] [rbp-30h] BYREF
  char v20; // [rsp+42h] [rbp-2Eh]
  int v21; // [rsp+44h] [rbp-2Ch]
  _QWORD v22[4]; // [rsp+48h] [rbp-28h] BYREF
  KPRIORITY v23; // [rsp+68h] [rbp-8h]
  int v24; // [rsp+6Ch] [rbp-4h]

  CurrentThread = KeGetCurrentThread();
  v5 = *(struct _KTHREAD **)a1;
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  if ( IoPriorityThread >= 2 )
    IoPriorityThread = 2;
  if ( IoPriorityThread > 1 && !*(_BYTE *)(a1 + 36) && (int)PsGetIoPriorityThread((__int64)v5) < 2 )
  {
    PsBoostThreadIoEx((__int64)v5, 0, 0, 0LL);
    IoBoostThreadIoPriority(v5, (unsigned int)IoPriorityThread, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  PriorityThread = KeQueryPriorityThread(CurrentThread);
  if ( PriorityThread >= 15 )
    PriorityThread = 15;
  if ( PriorityThread > *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 32) = PriorityThread;
    if ( PriorityThread > KeQueryPriorityThread(v5) )
      KeSetPriorityBoost((__int64)v5, PriorityThread, v9, v10);
  }
  v11 = *(_QWORD *)(a1 + 16);
  v12 = a1 + 8;
  while ( v11 != v12 )
  {
    v15 = *(_DWORD *)(v11 + 56);
    v16 = PriorityThread <= v15;
    if ( PriorityThread <= v15 )
    {
      if ( *(_DWORD *)(v11 + 60) >= IoPriorityThread )
        break;
      v16 = PriorityThread <= v15;
    }
    if ( !v16 )
      v15 = PriorityThread;
    *(_DWORD *)(v11 + 56) = v15;
    v17 = *(_DWORD *)(v11 + 60);
    if ( IoPriorityThread > v17 )
      v17 = IoPriorityThread;
    *(_DWORD *)(v11 + 60) = v17;
    v11 = *(_QWORD *)(v11 + 8);
  }
  Object = 1;
  v22[1] = v22;
  v20 = 6;
  v22[0] = v22;
  v13 = *(_QWORD **)(a1 + 16);
  v21 = 0;
  v22[3] = CurrentThread;
  v23 = PriorityThread;
  v24 = IoPriorityThread;
  v22[2] = a3;
  if ( *v13 != v12 )
    __fastfail(3u);
  v18[0] = a1 + 8;
  v18[1] = v13;
  *v13 = v18;
  *(_QWORD *)(a1 + 16) = v18;
  FsRtlReleaseHeaderMutex(a1, a2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  FsRtlAcquireHeaderMutex(a1, a2);
  if ( a3 >= 0 && a3 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( IoPriorityThread < 2 && v24 >= 2 && !*(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
