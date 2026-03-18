/*
 * XREFs of MiZeroInParallelWorker @ 0x1400CC570
 * Callers:
 *     MiZeroInParallel @ 0x1400CFA48 (MiZeroInParallel.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400A6CA4 (KeSetIdealProcessorThreadEx.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiDeleteUltraThreadContext @ 0x1400CF060 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x1400CF818 (MiCreateUltraThreadContext.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x140184D60 (KeZeroPages.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall MiZeroInParallelWorker(unsigned int *StartContext)
{
  unsigned int *v1; // r14
  struct _KTHREAD *CurrentThread; // rsi
  KPRIORITY v3; // edx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r8
  int v7; // r15d
  _QWORD *v8; // rdi
  int v9; // ebp
  int v10; // eax
  int v11; // ebp
  __int64 *v12; // rbx
  unsigned __int64 v13; // rbp
  unsigned __int64 UltraMapping; // r14
  unsigned __int64 *v15; // rsi
  int ProtectionPfnCompatible; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 ValidPte; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  ULONG_PTR v23; // rax
  unsigned __int64 v24; // r13
  _QWORD *v25; // r15
  unsigned __int64 v26; // r14
  int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // r9
  bool v34; // zf
  int v35; // [rsp+20h] [rbp-108h] BYREF
  int v36; // [rsp+24h] [rbp-104h]
  KPRIORITY Priority; // [rsp+28h] [rbp-100h]
  int UltraThreadContext; // [rsp+2Ch] [rbp-FCh]
  unsigned __int64 v39; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v40; // [rsp+38h] [rbp-F0h]
  struct _KTHREAD *v41; // [rsp+40h] [rbp-E8h]
  _QWORD *v42; // [rsp+48h] [rbp-E0h]
  __int64 v43; // [rsp+50h] [rbp-D8h]
  ULONG_PTR v44; // [rsp+58h] [rbp-D0h]
  unsigned int *v45; // [rsp+60h] [rbp-C8h]
  _BYTE v46[128]; // [rsp+70h] [rbp-B8h] BYREF

  v1 = StartContext;
  v45 = StartContext;
  memset(v46, 0, sizeof(v46));
  CurrentThread = KeGetCurrentThread();
  v3 = *v1;
  v4 = *((_QWORD *)v1 + 3);
  v5 = v1[5];
  v40 = *((_QWORD *)v1 + 1);
  v41 = CurrentThread;
  if ( v3 == -1 )
    Priority = -1;
  else
    Priority = KeSetPriorityThread(CurrentThread, v3);
  UltraThreadContext = MiCreateUltraThreadContext(v46, 0LL, 8LL);
  v7 = UltraThreadContext;
  if ( (_DWORD)v5 )
  {
    v8 = (_QWORD *)(v4 + 16);
    v43 = v5;
    v42 = v8;
    do
    {
      if ( !*((_DWORD *)v8 - 4) && _InterlockedIncrement((volatile signed __int32 *)v8 - 4) == 1 )
      {
        v9 = *((_DWORD *)v8 - 3);
        v36 = v9;
        v35 = v9;
        if ( v9 != -1 )
        {
          v10 = KeSetIdealProcessorThreadEx((__int64)CurrentThread, v9, &v35);
          v11 = v35;
          if ( v10 < 0 )
            v11 = -1;
          v36 = v11;
          v35 = v11;
        }
        v12 = (__int64 *)*v8;
        v13 = v40;
        do
        {
          if ( v7 == 1 )
          {
            UltraMapping = MiGetUltraMapping(&v46[96], 3LL, 1LL);
            v15 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v12);
            v18 = (__int64)((unsigned __int128)((v17 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
            ValidPte = MiMakeValidPte((unsigned __int64)v15, (v18 >> 63) + v18, ProtectionPfnCompatible | 0xA0000000);
            *v15 = ValidPte;
            if ( (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v15, ValidPte);
            KeZeroPages(UltraMapping, 4096LL);
            *v15 = 0LL;
            if ( (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v15, 0LL);
            v20 = *v12;
            v21 = v12[1];
LABEL_21:
            v12[1] = 0xFFFFF68000000000uLL;
            v12[1] = v21;
            *v12 = v20 ^ (v20 ^ (v13 >> 3)) & 0xFFFFFFFFFFELL;
            v12 = (__int64 *)v20;
            --*(v8 - 1);
          }
          else
          {
            v22 = *(v8 - 1);
            if ( v22 > 0x4000 )
              v22 = 0x4000LL;
            v39 = v22;
            while ( 1 )
            {
              v23 = MiReservePtes((__int64)&qword_140389360, (unsigned int)v22, v6);
              v44 = v23;
              v24 = v23;
              if ( v23 )
                break;
              v22 >>= 1;
              v39 = v22;
              if ( !v22 )
              {
                MiZeroPhysicalPage((__int64)(v12 + 0xB000000000LL) / 48, 3, *((unsigned __int8 *)v12 + 34) >> 6);
                v20 = *v12;
                v21 = v12[1];
                goto LABEL_21;
              }
            }
            v25 = (_QWORD *)v23;
            if ( v22 )
            {
              v26 = v22;
              do
              {
                v27 = MiMakeProtectionPfnCompatible(4LL, v12);
                v29 = (__int64)((unsigned __int128)((v28 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
                v30 = MiMakeValidPte((unsigned __int64)v25, (v29 >> 63) + v29, v27 | 0xA0000000);
                *v25 = v30;
                if ( (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL )
                  MiWritePteShadow(v25, v30);
                v31 = *v12;
                v32 = v12[1];
                v12[1] = 0xFFFFF68000000000uLL;
                v12[1] = v32;
                ++v25;
                *v12 = (v13 >> 3) & 0xFFFFFFFFFFELL | v31 & 0xFFFFF00000000001uLL;
                v12 = (__int64 *)v31;
                --v26;
              }
              while ( v26 );
              v8 = v42;
              v22 = v39;
              v24 = v44;
              v13 = v40;
            }
            *(v8 - 1) -= v22;
            KeZeroPages((__int64)(v24 << 25) >> 16, v22 << 12);
            MiReleasePtes((__int64)&qword_140389360, v24, v22, v33);
            v7 = UltraThreadContext;
          }
        }
        while ( v12 != (__int64 *)0xFFFFFFFFFLL );
        CurrentThread = v41;
        if ( v36 != -1 )
          KeSetIdealProcessorThreadEx((__int64)v41, v36, 0LL);
      }
      v8 += 3;
      v34 = v43-- == 1;
      v42 = v8;
    }
    while ( !v34 );
    v1 = v45;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 4, 0xFFFFFFFF) == 1 )
    KeSignalGate(v1 + 8, 1LL);
  if ( Priority != -1 )
    KeSetPriorityThread(CurrentThread, Priority);
  if ( v7 == 1 )
    MiDeleteUltraThreadContext(v46);
}
