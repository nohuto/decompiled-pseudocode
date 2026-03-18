/*
 * XREFs of MiZeroInParallel @ 0x1400CFA48
 * Callers:
 *     MiInitializeMdlPages @ 0x1400CA600 (MiInitializeMdlPages.c)
 *     MiAllocateLargeZeroPages @ 0x1406EB7E8 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140554950 (PsCreateSystemThread.c)
 */

void __fastcall MiZeroInParallel(__int64 a1, unsigned __int32 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v4; // r9
  unsigned int v5; // ebx
  unsigned __int64 v7; // rdi
  unsigned int v8; // r15d
  int v9; // r12d
  unsigned __int32 v10; // r11d
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int32 v13; // ebx
  unsigned int v14; // esi
  int v15; // edi
  __int64 v16; // r8
  __int64 v17; // r10
  unsigned int StartContext; // [rsp+40h] [rbp-40h] BYREF
  _KPROCESS *Process; // [rsp+48h] [rbp-38h]
  signed __int32 v20[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int16 v22; // [rsp+60h] [rbp-20h] BYREF
  char v23; // [rsp+62h] [rbp-1Eh]
  int v24; // [rsp+64h] [rbp-1Ch]
  _QWORD v25[3]; // [rsp+68h] [rbp-18h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+40h] BYREF
  int v27; // [rsp+C8h] [rbp+48h]

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
    v11 = a1 + 4;
    do
    {
      *(_DWORD *)v11 = -1;
      if ( *(_QWORD *)(v11 + 12) == 0xFFFFFFFFFLL )
      {
        *(_DWORD *)(v11 - 4) = 1;
      }
      else
      {
        *(_DWORD *)(v11 - 4) = 0;
        ++v8;
        v7 += *(_QWORD *)(v11 + 4);
        if ( a2 != 1 )
        {
          LODWORD(v16) = -1;
          v27 = -1;
          if ( (unsigned __int16)KeNumberNodes > 1u )
          {
            v17 = v10 >> byte_140388501;
            if ( v4 && (_DWORD)v17 == v9 )
            {
              _BitScanReverse64((unsigned __int64 *)&v16, v4);
              _bittestandreset64((__int64 *)&v4, (unsigned int)v16);
            }
            else
            {
              v4 = *(_QWORD *)(KeNodeBlock[v17] + 136);
              if ( !v4 )
                goto LABEL_23;
              _BitScanReverse64((unsigned __int64 *)&v16, v4);
              v9 = v10 >> byte_140388501;
              v4 &= ~(1LL << v16);
            }
            v27 = v16;
          }
LABEL_23:
          *(_DWORD *)v11 = v16;
        }
      }
      ++v10;
      v11 += 24LL;
    }
    while ( v10 < a2 );
  }
  if ( v5 > v8 )
    v5 = v8;
  v12 = v7 >> 12;
  Process = CurrentThread->ApcState.Process;
  if ( v5 <= v12 )
    LODWORD(v12) = v5;
  v25[1] = v25;
  v13 = 0;
  v21 = a1;
  v20[1] = a2;
  v22 = 263;
  if ( (_DWORD)v12 != 1 )
    v13 = v12;
  v23 = 6;
  v24 = 0;
  v25[0] = v25;
  v20[0] = v13;
  if ( v13 )
    v14 = KeSetPriorityThread(CurrentThread, 15);
  else
    v14 = -1;
  v15 = 0;
  StartContext = v14;
  if ( v13 )
  {
    while ( PsCreateSystemThread(
              &ThreadHandle,
              0x1FFFFFu,
              0LL,
              0LL,
              0LL,
              (PKSTART_ROUTINE)MiZeroInParallelWorker,
              &StartContext) >= 0 )
    {
      ObCloseHandle(ThreadHandle, 0);
      if ( ++v15 >= v13 )
        goto LABEL_38;
    }
    v13 -= v15;
    if ( _InterlockedExchangeAdd(v20, -v13) == v13 )
      KeSignalGate(&v22, 1LL);
LABEL_38:
    if ( v13 )
      KeSetPriorityThread(CurrentThread, v14);
  }
  if ( v15 )
    KeWaitForGate(&v22, 0LL);
  else
    MiZeroInParallelWorker(&StartContext);
}
