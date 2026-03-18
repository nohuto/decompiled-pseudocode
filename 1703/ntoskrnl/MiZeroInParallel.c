/*
 * XREFs of MiZeroInParallel @ 0x14007CE14
 * Callers:
 *     MiInitializeMdlPages @ 0x14007A868 (MiInitializeMdlPages.c)
 *     MiAllocateLargeZeroPages @ 0x1406BE398 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     MiZeroInParallelWorker @ 0x14007CF90 (MiZeroInParallelWorker.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140567970 (PsCreateSystemThread.c)
 */

void __fastcall MiZeroInParallel(__int64 a1, unsigned __int32 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v4; // r9
  unsigned __int32 v5; // edi
  unsigned __int64 v7; // rbx
  unsigned __int32 v8; // r15d
  int v9; // r12d
  unsigned __int32 v10; // r11d
  __int16 v11; // ax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int32 v14; // ebx
  KPRIORITY v15; // esi
  int v16; // edi
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rax
  KPRIORITY StartContext; // [rsp+40h] [rbp-40h] BYREF
  _KPROCESS *Process; // [rsp+48h] [rbp-38h]
  signed __int32 v22[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]
  __int16 v24; // [rsp+60h] [rbp-20h] BYREF
  char v25; // [rsp+62h] [rbp-1Eh]
  int v26; // [rsp+64h] [rbp-1Ch]
  _QWORD v27[3]; // [rsp+68h] [rbp-18h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+40h] BYREF
  __int16 v29; // [rsp+C8h] [rbp+48h]
  int v30; // [rsp+D0h] [rbp+50h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = KeNumberProcessors_0;
  if ( (a3 & 8) != 0 || (CurrentThread->MiscFlags & 0x400) != 0 || KeGetCurrentIrql() == 2 || (MiFlags & 0x30) == 0 )
    v5 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = -1;
  v10 = 0;
  if ( a2 )
  {
    v11 = KeNumberNodes;
    v12 = a1 + 4;
    v29 = KeNumberNodes;
    do
    {
      *(_DWORD *)v12 = -1;
      if ( *(_QWORD *)(v12 + 12) == 0xFFFFFFFFFLL )
      {
        *(_DWORD *)(v12 - 4) = 1;
      }
      else
      {
        *(_DWORD *)(v12 - 4) = 0;
        ++v8;
        v7 += *(_QWORD *)(v12 + 4);
        if ( a2 != 1 )
        {
          LODWORD(v17) = -1;
          v30 = -1;
          if ( (unsigned __int16)v11 <= 1u )
          {
LABEL_23:
            *(_DWORD *)v12 = v17;
            goto LABEL_9;
          }
          v18 = v10 >> byte_14036C1B9;
          if ( v4 && (_DWORD)v18 == v9 )
          {
            _BitScanReverse64((unsigned __int64 *)&v17, v4);
            LOBYTE(v19) = v17;
            goto LABEL_30;
          }
          v4 = *(_QWORD *)(KeNodeBlock[v18] + 136);
          if ( v4 )
          {
            _BitScanReverse64((unsigned __int64 *)&v19, v4);
            v9 = v10 >> byte_14036C1B9;
            LODWORD(v17) = v19;
LABEL_30:
            v4 &= ~(1LL << v19);
            v30 = v17;
          }
          v11 = v29;
          goto LABEL_23;
        }
      }
LABEL_9:
      ++v10;
      v12 += 24LL;
    }
    while ( v10 < a2 );
  }
  if ( v5 > v8 )
    v5 = v8;
  v13 = v7 >> 12;
  Process = CurrentThread->ApcState.Process;
  if ( v5 > v13 )
    v5 = v13;
  v27[1] = v27;
  v14 = 0;
  v23 = a1;
  v22[1] = a2;
  v24 = 263;
  if ( v5 != 1 )
    v14 = v5;
  v25 = 6;
  v26 = 0;
  v27[0] = v27;
  v22[0] = v14;
  if ( v14 )
    v15 = KeSetPriorityThread(CurrentThread, 15);
  else
    v15 = -1;
  v16 = 0;
  StartContext = v15;
  if ( v14 )
  {
    while ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, MiZeroInParallelWorker, &StartContext) >= 0 )
    {
      ObCloseHandle(ThreadHandle, 0);
      if ( ++v16 >= v14 )
        goto LABEL_38;
    }
    v14 -= v16;
    if ( _InterlockedExchangeAdd(v22, -v14) == v14 )
      KeSignalGate((__int64)&v24, 1);
LABEL_38:
    if ( v14 )
      KeSetPriorityThread(CurrentThread, v15);
  }
  if ( v16 )
    KeWaitForGate((__int64)&v24, 0);
  else
    MiZeroInParallelWorker(&StartContext);
}
