/*
 * XREFs of MiZeroInParallelWorker @ 0x1401386E0
 * Callers:
 *     MiZeroInParallel @ 0x14013A938 (MiZeroInParallel.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     KeSetIdealProcessorThreadEx @ 0x14003ABC0 (KeSetIdealProcessorThreadEx.c)
 *     MiReserveLowPrioritySystemPtes @ 0x14003CAA0 (MiReserveLowPrioritySystemPtes.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     MiDeleteUltraThreadContext @ 0x14013A5C4 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14013A724 (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1401AE9B0 (KeZeroPages.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall MiZeroInParallelWorker(unsigned int *StartContext)
{
  unsigned int *v1; // r14
  struct _KTHREAD *CurrentThread; // rsi
  KPRIORITY v3; // edx
  unsigned __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // ebp
  _QWORD *v8; // rdi
  bool v9; // zf
  unsigned int v10; // ebp
  __int64 *v11; // rbx
  int v12; // ebp
  unsigned __int64 UltraMapping; // r14
  unsigned __int64 *v14; // rsi
  int ProtectionPfnCompatible; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  BOOL v22; // r15d
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // ebp
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r9
  unsigned __int64 v31; // r13
  _QWORD *v32; // r12
  __int64 v33; // r15
  unsigned __int64 v34; // r14
  int v35; // eax
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // [rsp+20h] [rbp-F8h] BYREF
  int UltraThreadContext; // [rsp+24h] [rbp-F4h]
  unsigned int v46; // [rsp+28h] [rbp-F0h]
  KPRIORITY Priority; // [rsp+2Ch] [rbp-ECh]
  unsigned __int64 v48; // [rsp+30h] [rbp-E8h]
  struct _KTHREAD *v49; // [rsp+38h] [rbp-E0h]
  _QWORD *v50; // [rsp+40h] [rbp-D8h]
  __int64 v51; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v52; // [rsp+50h] [rbp-C8h]
  unsigned int *v53; // [rsp+58h] [rbp-C0h]
  _BYTE v54[128]; // [rsp+60h] [rbp-B8h] BYREF

  v1 = StartContext;
  v53 = StartContext;
  memset(v54, 0, sizeof(v54));
  CurrentThread = KeGetCurrentThread();
  v3 = *v1;
  v4 = *((_QWORD *)v1 + 1);
  v5 = *((_QWORD *)v1 + 3);
  v6 = v1[5];
  v48 = v4;
  v49 = CurrentThread;
  if ( v3 == -1 )
    Priority = -1;
  else
    Priority = KeSetPriorityThread(CurrentThread, v3);
  UltraThreadContext = MiCreateUltraThreadContext(v54, 0LL, 8LL);
  v7 = UltraThreadContext;
  if ( (_DWORD)v6 )
  {
    v8 = (_QWORD *)(v5 + 16);
    v51 = v6;
    v50 = v8;
    do
    {
      if ( !*((_DWORD *)v8 - 4) && _InterlockedIncrement((volatile signed __int32 *)v8 - 4) == 1 )
      {
        v10 = *((_DWORD *)v8 - 3);
        v46 = v10;
        v44 = v10;
        if ( v10 != -1 )
        {
          v26 = KeSetIdealProcessorThreadEx((__int64)CurrentThread, v10, &v44);
          v27 = v44;
          if ( v26 < 0 )
            v27 = -1;
          v46 = v27;
          v44 = v27;
        }
        v11 = (__int64 *)*v8;
        v12 = UltraThreadContext;
        do
        {
          if ( v12 == 1 )
          {
            UltraMapping = MiGetUltraMapping(&v54[96], 3LL, 1LL);
            v14 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v11);
            v17 = (__int64)((unsigned __int128)((v16 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
            *v14 = MiMakeValidPte((unsigned __int64)v14, (v17 >> 63) + v17, ProtectionPfnCompatible | 0xA0000000, v18);
            v22 = MiPteInShadowRange((unsigned __int64)v14);
            if ( v22 )
              MiWritePteShadow(v20, v19, v21);
            KeZeroPages(UltraMapping, 4096LL);
            *v14 = ZeroPte;
            if ( v22 )
              MiWritePteShadow((__int64)v14, ZeroPte, v23);
            v24 = *v11;
            v25 = v11[1];
            v4 = v48;
LABEL_24:
            v11[1] = 0xFFFFF68000000000uLL;
            v11[1] = v25;
            *v11 = v24 ^ (v24 ^ (v4 >> 3)) & 0xFFFFFFFFFFELL;
            v11 = (__int64 *)v24;
            --*(v8 - 1);
          }
          else
          {
            v28 = *(v8 - 1);
            if ( v28 > 0x4000 )
              v28 = 0x4000LL;
            while ( 1 )
            {
              v29 = MiReserveLowPrioritySystemPtes(v28);
              v52 = v29;
              v31 = v29;
              if ( v29 )
                break;
              v28 >>= 1;
              if ( !v28 )
              {
                MiZeroPhysicalPage((__int64)(v11 + 0xB000000000LL) / 48, 3, *((unsigned __int8 *)v11 + 34) >> 6, v30);
                v24 = *v11;
                v25 = v11[1];
                goto LABEL_24;
              }
            }
            v32 = (_QWORD *)v29;
            if ( v28 )
            {
              v33 = (v4 >> 3) & 0xFFFFFFFFFFELL;
              v34 = v28;
              do
              {
                v35 = MiMakeProtectionPfnCompatible(4LL, v11);
                v37 = (__int64)((unsigned __int128)((v36 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
                *v32 = MiMakeValidPte((unsigned __int64)v32, (v37 >> 63) + v37, v35 | 0xA0000000, v38);
                if ( MiPteInShadowRange((unsigned __int64)v32) )
                  MiWritePteShadow(v40, v39, v41);
                v42 = *v11;
                v43 = v11[1];
                v11[1] = 0xFFFFF68000000000uLL;
                v11[1] = v43;
                ++v32;
                *v11 = v33 | v42 & 0xFFFFF00000000001uLL;
                v11 = (__int64 *)v42;
                --v34;
              }
              while ( v34 );
              v8 = v50;
              v31 = v52;
              v12 = UltraThreadContext;
              v4 = v48;
            }
            *(v8 - 1) -= v28;
            KeZeroPages((__int64)(v31 << 25) >> 16, v28 << 12);
            MiReleasePtes((__int64)&qword_1403CC5E0, v31, (unsigned int)v28);
          }
        }
        while ( v11 != (__int64 *)0xFFFFFFFFFLL );
        CurrentThread = v49;
        if ( v46 != -1 )
          KeSetIdealProcessorThreadEx((__int64)v49, v46, 0LL);
      }
      v8 += 3;
      v9 = v51-- == 1;
      v50 = v8;
    }
    while ( !v9 );
    v1 = v53;
    v7 = UltraThreadContext;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 4, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)(v1 + 8), 1);
  if ( Priority != -1 )
    KeSetPriorityThread(CurrentThread, Priority);
  if ( v7 == 1 )
    MiDeleteUltraThreadContext(v54);
}
