/*
 * XREFs of MiZeroInParallelWorker @ 0x14007CF90
 * Callers:
 *     MiZeroInParallel @ 0x14007CE14 (MiZeroInParallel.c)
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     KeSetIdealProcessorThreadEx @ 0x140111648 (KeSetIdealProcessorThreadEx.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x1401852C0 (KeZeroPages.c)
 */

void __fastcall MiZeroInParallelWorker(volatile signed __int32 *StartContext)
{
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int32 *v2; // rsi
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD **v6; // rbx
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // ebp
  _QWORD *v10; // r14
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r13
  _QWORD *v14; // rax
  _QWORD *v15; // r15
  unsigned __int64 v16; // rsi
  int ProtectionPfnCompatible; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  bool v22; // zf
  __int64 v23; // [rsp+20h] [rbp-68h]
  _QWORD **v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *v26; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+18h]
  KPRIORITY Priority; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v2 = StartContext;
  v3 = *((_QWORD *)StartContext + 1);
  v4 = *((_QWORD *)StartContext + 3);
  v5 = *((unsigned int *)StartContext + 5);
  v23 = v3;
  v26 = CurrentThread;
  if ( *StartContext == -1 )
    Priority = -1;
  else
    Priority = KeSetPriorityThread(CurrentThread, *StartContext);
  if ( (_DWORD)v5 )
  {
    v6 = (_QWORD **)(v4 + 16);
    v25 = v5;
    v24 = v6;
    do
    {
      if ( !*((_DWORD *)v6 - 4) && _InterlockedIncrement((volatile signed __int32 *)v6 - 4) == 1 )
      {
        v7 = *((_DWORD *)v6 - 3);
        v29 = v7;
        v28 = v7;
        if ( v7 != -1 )
        {
          v8 = KeSetIdealProcessorThreadEx(CurrentThread, v7, &v28);
          v9 = v28;
          if ( v8 < 0 )
            v9 = -1;
          v29 = v9;
          v28 = v9;
        }
        v10 = *v6;
        do
        {
          v11 = (unsigned __int64)*(v6 - 1);
          if ( v11 > 0x4000 )
            v11 = 0x4000LL;
          while ( 1 )
          {
            v12 = MiReservePtes(&qword_14036D0A0, (unsigned int)v11);
            v13 = v12;
            if ( v12 )
              break;
            v11 >>= 1;
            if ( !v11 )
            {
              MiZeroPhysicalPage((__int64)(v10 + 0xB000000000LL) / 48);
              v14 = (_QWORD *)*v10;
              *v10 = v3;
              v10 = v14;
              *(v6 - 1) = (_QWORD *)((char *)*(v6 - 1) - 1);
              goto LABEL_25;
            }
          }
          v15 = (_QWORD *)v12;
          if ( v11 )
          {
            v16 = v11;
            do
            {
              ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v10);
              v19 = (__int64)((unsigned __int128)((v18 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
              *v15 = MiMakeValidPte(v15, (v19 >> 63) + v19, ProtectionPfnCompatible | 0xA0000000);
              if ( (unsigned int)MiPteInShadowRange(v15) )
                MiWritePteShadow(v20);
              v21 = (_QWORD *)*v10;
              ++v15;
              *v10 = v23;
              v10 = v21;
              --v16;
            }
            while ( v16 );
            v6 = v24;
          }
          *(v6 - 1) = (_QWORD *)((char *)*(v6 - 1) - v11);
          KeZeroPages(v13 << 25 >> 16, v11 << 12);
          MiReleasePtes(&qword_14036D0A0, v13, (unsigned int)v11);
          v3 = v23;
LABEL_25:
          ;
        }
        while ( v10 != (_QWORD *)0xFFFFFFFFFLL );
        CurrentThread = v26;
        if ( v29 != -1 )
          KeSetIdealProcessorThreadEx(v26, v29, 0LL);
      }
      v6 += 3;
      v22 = v25-- == 1;
      v24 = v6;
    }
    while ( !v22 );
    v2 = StartContext;
  }
  if ( _InterlockedExchangeAdd(v2 + 4, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)(v2 + 8), 1);
  if ( Priority != -1 )
    KeSetPriorityThread(CurrentThread, Priority);
}
