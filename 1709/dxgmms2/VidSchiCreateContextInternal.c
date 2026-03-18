/*
 * XREFs of VidSchiCreateContextInternal @ 0x1C00106B4
 * Callers:
 *     VidSchCreateContext @ 0x1C0072270 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C007C648 (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00071A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiFreeQueuePacket @ 0x1C0010C4C (VidSchiFreeQueuePacket.c)
 *     VidSchiIncrementContextReference @ 0x1C00110B0 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C002AD20 (McTemplateK0pqqqqqqqqppp.c)
 *     VidSchTerminateContext @ 0x1C00706B0 (VidSchTerminateContext.c)
 *     VidSchSetPriorityContext @ 0x1C0072300 (VidSchSetPriorityContext.c)
 */

char *__fastcall VidSchiCreateContextInternal(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // r15
  char *PoolWithTag; // rax
  char *v8; // rsi
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  int v19; // r13d
  SIZE_T v20; // rdi
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  __int64 v24; // r9
  int v25; // ebx
  __int64 v26; // r13
  unsigned int v27; // r14d
  int v28; // r15d
  _DWORD *v29; // rax
  _DWORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  int v34; // r8d
  bool v35; // zf
  __int128 v36; // xmm1
  __int64 v37; // rax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+80h] [rbp-80h]
  KSPIN_LOCK *v44; // [rsp+80h] [rbp-80h]
  _QWORD v45[4]; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v47[5]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( (*a2 & 4) != 0 || a3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x3D0uLL, 0x68536956u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3D0uLL);
      *(_DWORD *)v8 = 1852785494;
      *((_QWORD *)v8 + 7) = a3;
      *((_QWORD *)v8 + 13) = a1;
      *((_QWORD *)v8 + 10) = KeGetCurrentThread();
      *((_OWORD *)v8 + 7) = *(_OWORD *)a2;
      *((_QWORD *)v8 + 16) = *((_QWORD *)a2 + 2);
      v9 = (unsigned int)a2[1];
      *((_DWORD *)v8 + 22) = v9;
      *((_QWORD *)v8 + 12) = *(_QWORD *)(v4 + 8 * v9 + 424);
      v10 = *(_BYTE *)(((__int64 (*)(void))DxgCoreInterface[6])() + 307);
      v11 = *((_QWORD *)v8 + 12);
      *((_QWORD *)v8 + 17) = 1LL;
      v8[885] = (v10 & 8) != 0;
      v43 = v11;
      memset(v8 + 312, 0, 0x38uLL);
      KeInitializeEvent((PRKEVENT)v8 + 13, SynchronizationEvent, 0);
      *((_QWORD *)v8 + 47) = v8 + 368;
      *((_QWORD *)v8 + 46) = v8 + 368;
      *((_QWORD *)v8 + 82) = v8 + 648;
      *((_QWORD *)v8 + 81) = v8 + 648;
      *((_QWORD *)v8 + 84) = v8 + 664;
      *((_QWORD *)v8 + 83) = v8 + 664;
      *((_QWORD *)v8 + 86) = v8 + 680;
      *((_QWORD *)v8 + 85) = v8 + 680;
      *((_QWORD *)v8 + 88) = v8 + 696;
      *((_QWORD *)v8 + 87) = v8 + 696;
      if ( (*a2 & 0x100) != 0 )
      {
        *((_QWORD *)v8 + 91) = v8 + 720;
        *((_QWORD *)v8 + 90) = v8 + 720;
      }
      *((_QWORD *)v8 + 94) = v8 + 744;
      *((_QWORD *)v8 + 93) = v8 + 744;
      v8[884] = 1;
      VidSchiIncrementContextReference(v8);
      v8[884] = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1888), &LockHandle);
      if ( *(_BYTE *)(a1 + 1052) || *(_BYTE *)(a1 + 1053) )
      {
        *((_DWORD *)v8 + 44) |= 0x100u;
        v12 = v8 + 8;
        v13 = v43 + 2536;
        v14 = *(_QWORD **)(v43 + 2544);
        if ( *v14 != v43 + 2536 )
          __fastfail(3u);
      }
      else
      {
        v12 = v8 + 8;
        v13 = v43 + 2504;
        v14 = *(_QWORD **)(v43 + 2512);
        if ( *v14 != v43 + 2504 )
          __fastfail(3u);
      }
      *v12 = v13;
      v12[1] = v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
      v15 = *(_QWORD **)(a1 + 72);
      v16 = v8 + 24;
      if ( *v15 != a1 + 64 )
        __fastfail(3u);
      *v16 = a1 + 64;
      *((_QWORD *)v8 + 4) = v15;
      *v15 = v16;
      *(_QWORD *)(a1 + 72) = v16;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *((_QWORD *)v8 + 57) = *(_QWORD *)(v4 + 2456);
      *((_QWORD *)v8 + 58) = *(_QWORD *)(v4 + 2504);
      *((_QWORD *)v8 + 54) = *((_QWORD *)v8 + 57);
      KeInitializeTimer((PKTIMER)(v8 + 496));
      KeInitializeDpc((PRKDPC)(v8 + 560), (PKDEFERRED_ROUTINE)VidSchiDelayReadyRoutine, v8);
      v17 = *a2;
      if ( (*a2 & 0x604) != 0 )
      {
        if ( (v17 & 1) != 0 )
        {
          memset(v47, 0, 0x48uLL);
          *(_QWORD *)&v47[0] = 0LL;
          v31 = *((unsigned int *)v8 + 22);
          DWORD2(v47[0]) = *(unsigned __int16 *)(*(_QWORD *)(v4 + 8 * v31 + 424) + 8LL);
          v32 = *(_QWORD *)(v4 + 8);
          HIDWORD(v47[0]) = 1 << *(_BYTE *)(*(_QWORD *)(v4 + 8 * v31 + 424) + 6LL);
          LODWORD(v47[1]) = v47[1] & 0xFFFFFFF6 | ((v17 & 4 | (v17 >> 4) & 0x20) >> 2);
          v33 = *(_QWORD **)(a1 + 16);
          LODWORD(v47[1]) ^= (LOBYTE(v47[1]) ^ (unsigned __int8)(4
                                                               * *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 2216LL)
                                                                          + 48LL * *(unsigned __int16 *)(v43 + 6)
                                                                          + 40))) & 4;
          if ( (int)DxgCoreInterface[18](v32, v33, (__int64)v47) < 0 )
          {
LABEL_43:
            VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8);
            return 0LL;
          }
          v35 = bTracingEnabled == 0;
          v36 = v47[1];
          v37 = *(_QWORD *)&v47[0];
          *(_OWORD *)(v8 + 888) = v47[0];
          *((_QWORD *)v8 + 8) = v37;
          v38 = v47[2];
          *(_OWORD *)(v8 + 904) = v36;
          v39 = v47[3];
          *(_OWORD *)(v8 + 920) = v38;
          *(_QWORD *)&v38 = *(_QWORD *)&v47[4];
          *(_OWORD *)(v8 + 936) = v39;
          *((_QWORD *)v8 + 119) = v38;
          if ( !v35 )
          {
            v40 = *(_QWORD *)(a1 + 8);
            if ( !v40 )
              LODWORD(v40) = a1;
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0pqqqqqqqqppp(
                v47[3],
                (unsigned int)&EventCreateContext,
                v34,
                v40,
                SBYTE8(v47[0]),
                SBYTE12(v47[0]),
                SBYTE4(v47[2]),
                SBYTE8(v47[2]),
                SBYTE12(v47[2]),
                v47[3],
                SBYTE4(v47[3]),
                (2 * ((*(_DWORD *)(*((_QWORD *)v8 + 13) + 48LL) & 0x10) != 0)) | 1,
                (char)v8);
          }
        }
        else if ( bTracingEnabled )
        {
          memset(v45, 0, sizeof(v45));
          v24 = *(_QWORD *)(a1 + 8);
          v25 = (v17 >> 6) & 1;
          if ( !v24 )
            LODWORD(v24) = a1;
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v26 = *(_QWORD *)(v4 + 8LL * *((unsigned int *)v8 + 22) + 424);
            McTemplateK0pqqqqqqqqppp(
              *(unsigned __int16 *)(v26 + 8),
              (unsigned int)&EventCreateContext,
              HIDWORD(v45[0]),
              v24,
              *(_WORD *)(v26 + 8),
              1 << *(_BYTE *)(v26 + 6),
              v45[0],
              SBYTE4(v45[0]),
              v45[1],
              SBYTE4(v45[1]),
              v45[2],
              (2 * (((*(_DWORD *)(*((_QWORD *)v8 + 13) + 48LL) & 0x10) != 0) | (2 * v25))) | 1,
              (char)v8);
          }
        }
      }
      else
      {
        *((_QWORD *)v8 + 8) = *(_QWORD *)(a3 + 184);
      }
      if ( (int)VidSchSetPriorityContext(v8, (unsigned int)a2[3], 1LL, (unsigned int)a2[4]) >= 0 )
      {
        v18 = *(_DWORD *)(v4 + 128) * (48 * *(_DWORD *)(v4 + 56) + ((8 * *(_DWORD *)(v4 + 56) + 175) & 0xFFFFFFF8))
            + 8 * (*(_DWORD *)(v4 + 56) + 93);
        if ( v18 <= 0x3A0 )
          v18 = 928;
        v19 = 0;
        v20 = v18;
        do
        {
          v21 = ExAllocatePoolWithTag((POOL_TYPE)512, v20, 0x68536956u);
          v22 = v21;
          if ( !v21 )
          {
            v42 = WdLogNewEntry5_WdWarning();
            WdLogEvent5_WdWarning(v42);
            goto LABEL_43;
          }
          memset(v21, 0, v20);
          v44 = (KSPIN_LOCK *)(v4 + 1896);
          VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1896), (__int64)(v8 + 744), v22 + 1, (_DWORD *)v8 + 190);
          VidSchiFreeQueuePacket(v8);
          ++v19;
        }
        while ( v19 < 5 );
        if ( (*a2 & 0x100) == 0 )
          return v8;
        v27 = a2[5];
        if ( v27 )
        {
          v28 = 0;
          while ( 1 )
          {
            v29 = ExAllocatePoolWithTag((POOL_TYPE)512, v20, 0x68536956u);
            v30 = v29;
            if ( !v29 )
              break;
            memset(v29, 0, v20);
            v30[16] |= 0x40u;
            VidSchiInterlockedInsertTailList(v44, (__int64)(v8 + 744), (_QWORD *)v30 + 1, (_DWORD *)v8 + 190);
            VidSchiFreeQueuePacket(v8);
            if ( ++v28 >= v27 )
              return v8;
          }
        }
      }
      goto LABEL_43;
    }
  }
  v41 = WdLogNewEntry5_WdWarning();
  WdLogEvent5_WdWarning(v41);
  return 0LL;
}
