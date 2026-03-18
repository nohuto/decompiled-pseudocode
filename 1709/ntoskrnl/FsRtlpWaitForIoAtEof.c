/*
 * XREFs of FsRtlpWaitForIoAtEof @ 0x140100900
 * Callers:
 *     FsRtlGetIoAtEof @ 0x140100640 (FsRtlGetIoAtEof.c)
 *     FsRtlAcquireEofLock @ 0x1401006C0 (FsRtlAcquireEofLock.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 *     FsRtlReleaseHeaderMutex @ 0x140082C20 (FsRtlReleaseHeaderMutex.c)
 *     FsRtlAcquireHeaderMutex @ 0x140083FE0 (FsRtlAcquireHeaderMutex.c)
 *     KeSetPriorityBoost @ 0x14008BBA0 (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     KeQueryPriorityThread @ 0x140100BB0 (KeQueryPriorityThread.c)
 */

char __fastcall FsRtlpWaitForIoAtEof(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  KSPIN_LOCK *v5; // r14
  int IoPriorityThread; // esi
  KPRIORITY PriorityThread; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  KPRIORITY v14; // eax
  int v15; // eax
  _QWORD v16[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 Object; // [rsp+40h] [rbp-30h] BYREF
  char v18; // [rsp+42h] [rbp-2Eh]
  int v19; // [rsp+44h] [rbp-2Ch]
  _QWORD v20[4]; // [rsp+48h] [rbp-28h] BYREF
  KPRIORITY v21; // [rsp+68h] [rbp-8h]
  int v22; // [rsp+6Ch] [rbp-4h]

  CurrentThread = KeGetCurrentThread();
  v5 = *(KSPIN_LOCK **)a1;
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  if ( IoPriorityThread >= 2 )
    IoPriorityThread = 2;
  if ( IoPriorityThread > 1 && !*(_BYTE *)(a1 + 36) && (int)PsGetIoPriorityThread((__int64)v5) < 2 )
  {
    PsBoostThreadIoEx((__int64)v5, 0, 0, 0LL);
    IoBoostThreadIoPriority(v5, IoPriorityThread, 0);
    *(_BYTE *)(a1 + 36) = 1;
  }
  PriorityThread = KeQueryPriorityThread(CurrentThread);
  if ( PriorityThread >= 15 )
    PriorityThread = 15;
  if ( PriorityThread > *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 32) = PriorityThread;
    if ( PriorityThread > KeQueryPriorityThread((PKTHREAD)v5) )
      KeSetPriorityBoost((__int64)v5, PriorityThread, v9);
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = a1 + 8;
  while ( v10 != v11 )
  {
    v14 = *(_DWORD *)(v10 + 56);
    if ( v14 < PriorityThread )
      goto LABEL_23;
    if ( *(_DWORD *)(v10 + 60) >= IoPriorityThread )
      break;
    if ( PriorityThread > v14 )
LABEL_23:
      v14 = PriorityThread;
    *(_DWORD *)(v10 + 56) = v14;
    v15 = *(_DWORD *)(v10 + 60);
    if ( IoPriorityThread > v15 )
      v15 = IoPriorityThread;
    *(_DWORD *)(v10 + 60) = v15;
    v10 = *(_QWORD *)(v10 + 8);
  }
  Object = 1;
  v20[1] = v20;
  v18 = 6;
  v20[0] = v20;
  v12 = *(_QWORD **)(a1 + 16);
  v19 = 0;
  v20[3] = CurrentThread;
  v21 = PriorityThread;
  v22 = IoPriorityThread;
  v20[2] = a3;
  if ( *v12 != v11 )
    __fastfail(3u);
  v16[0] = a1 + 8;
  v16[1] = v12;
  *v12 = v16;
  *(_QWORD *)(a1 + 16) = v16;
  FsRtlReleaseHeaderMutex(a1, a2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  FsRtlAcquireHeaderMutex(a1, a2);
  if ( a3 >= 0 && a3 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( IoPriorityThread < 2 && v22 >= 2 && !*(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
