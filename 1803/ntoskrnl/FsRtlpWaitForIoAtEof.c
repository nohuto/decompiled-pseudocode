/*
 * XREFs of FsRtlpWaitForIoAtEof @ 0x14007C42C
 * Callers:
 *     FsRtlGetIoAtEof @ 0x14007C170 (FsRtlGetIoAtEof.c)
 *     FsRtlAcquireEofLock @ 0x14007C1F0 (FsRtlAcquireEofLock.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     KeQueryPriorityThread @ 0x140091160 (KeQueryPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400FEA00 (FsRtlReleaseHeaderMutex.c)
 *     FsRtlAcquireHeaderMutex @ 0x140103650 (FsRtlAcquireHeaderMutex.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 */

char __fastcall FsRtlpWaitForIoAtEof(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v5; // r14
  int IoPriorityThread; // esi
  KPRIORITY PriorityThread; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rax
  KPRIORITY v13; // ecx
  KPRIORITY v14; // eax
  int v15; // ecx
  int v16; // eax
  _QWORD v17[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 Object; // [rsp+40h] [rbp-30h] BYREF
  char v19; // [rsp+42h] [rbp-2Eh]
  int v20; // [rsp+44h] [rbp-2Ch]
  _QWORD v21[4]; // [rsp+48h] [rbp-28h] BYREF
  KPRIORITY v22; // [rsp+68h] [rbp-8h]
  int v23; // [rsp+6Ch] [rbp-4h]

  CurrentThread = KeGetCurrentThread();
  v5 = *(struct _KTHREAD **)a1;
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  if ( IoPriorityThread >= 2 )
    IoPriorityThread = 2;
  if ( IoPriorityThread > 1 && !*(_BYTE *)(a1 + 36) && (int)PsGetIoPriorityThread(v5) < 2 )
  {
    PsBoostThreadIoEx(v5, 0LL, 0LL, 0LL);
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
      KeSetPriorityBoost(v5, (unsigned int)PriorityThread);
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = a1 + 8;
  while ( v9 != v10 )
  {
    v13 = *(_DWORD *)(v9 + 56);
    if ( v13 >= PriorityThread && *(_DWORD *)(v9 + 60) >= IoPriorityThread )
      break;
    v14 = PriorityThread;
    if ( PriorityThread <= v13 )
      v14 = *(_DWORD *)(v9 + 56);
    v15 = *(_DWORD *)(v9 + 60);
    *(_DWORD *)(v9 + 56) = v14;
    v16 = IoPriorityThread;
    if ( IoPriorityThread <= v15 )
      v16 = v15;
    *(_DWORD *)(v9 + 60) = v16;
    v9 = *(_QWORD *)(v9 + 8);
  }
  Object = 1;
  v21[1] = v21;
  v19 = 6;
  v21[0] = v21;
  v11 = *(_QWORD **)(a1 + 16);
  v20 = 0;
  v21[3] = CurrentThread;
  v22 = PriorityThread;
  v23 = IoPriorityThread;
  v21[2] = a3;
  if ( *v11 != v10 )
    __fastfail(3u);
  v17[1] = v11;
  v17[0] = a1 + 8;
  *v11 = v17;
  *(_QWORD *)(a1 + 16) = v17;
  FsRtlReleaseHeaderMutex(a1, a2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  FsRtlAcquireHeaderMutex(a1, a2);
  if ( a3 >= 0 && a3 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( IoPriorityThread < 2 && v23 >= 2 && !*(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
