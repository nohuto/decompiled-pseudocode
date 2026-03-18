/*
 * XREFs of VidSchiCreateContextInternal @ 0x1C000EE34
 * Callers:
 *     VidSchCreateContext @ 0x1C006BDA0 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C0074ED8 (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00063A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiFreeQueuePacket @ 0x1C000EB98 (VidSchiFreeQueuePacket.c)
 *     VidSchiIncrementContextReference @ 0x1C00100A0 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pqqqqqqqqppp @ 0x1C0028E20 (Template_pqqqqqqqqppp.c)
 *     VidSchSetPriorityContext @ 0x1C006BC50 (VidSchSetPriorityContext.c)
 *     VidSchTerminateContext @ 0x1C006BE20 (VidSchTerminateContext.c)
 */

__int64 __fastcall VidSchiCreateContextInternal(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // r15
  PVOID PoolWithTag; // rax
  __int64 v8; // r14
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
  int v19; // esi
  SIZE_T v20; // rdi
  PVOID v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r8
  unsigned int v27; // esi
  int v28; // r12d
  PVOID v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r9
  _QWORD *v34; // rdx
  int v35; // r8d
  bool v36; // zf
  __int128 v37; // xmm1
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // r9
  int v44; // ebx
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // [rsp+80h] [rbp-80h]
  _QWORD v48[4]; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v50[5]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( (*a2 & 4) != 0 || a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x3E8uLL, 0x68536956u);
    v8 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3E8uLL);
      *(_DWORD *)v8 = 1852785494;
      *(_QWORD *)(v8 + 56) = a3;
      *(_QWORD *)(v8 + 104) = a1;
      *(_QWORD *)(v8 + 80) = KeGetCurrentThread();
      *(_OWORD *)(v8 + 112) = *(_OWORD *)a2;
      *(_QWORD *)(v8 + 128) = *((_QWORD *)a2 + 2);
      v9 = (unsigned int)a2[1];
      *(_DWORD *)(v8 + 88) = v9;
      *(_QWORD *)(v8 + 96) = *(_QWORD *)(v4 + 8 * v9 + 416);
      v10 = *(_BYTE *)(((__int64 (*)(void))DxgCoreInterface[6])() + 275);
      v11 = *(_QWORD *)(v8 + 96);
      *(_QWORD *)(v8 + 136) = 1LL;
      *(_BYTE *)(v8 + 909) = (v10 & 4) != 0;
      v47 = v11;
      memset((void *)(v8 + 312), 0, 0x38uLL);
      KeInitializeEvent((PRKEVENT)(v8 + 312), SynchronizationEvent, 0);
      *(_QWORD *)(v8 + 376) = v8 + 368;
      *(_QWORD *)(v8 + 368) = v8 + 368;
      *(_QWORD *)(v8 + 680) = v8 + 672;
      *(_QWORD *)(v8 + 672) = v8 + 672;
      *(_QWORD *)(v8 + 696) = v8 + 688;
      *(_QWORD *)(v8 + 688) = v8 + 688;
      *(_QWORD *)(v8 + 712) = v8 + 704;
      *(_QWORD *)(v8 + 704) = v8 + 704;
      *(_QWORD *)(v8 + 728) = v8 + 720;
      *(_QWORD *)(v8 + 720) = v8 + 720;
      if ( (*a2 & 0x100) != 0 )
      {
        *(_QWORD *)(v8 + 752) = v8 + 744;
        *(_QWORD *)(v8 + 744) = v8 + 744;
      }
      *(_QWORD *)(v8 + 776) = v8 + 768;
      *(_QWORD *)(v8 + 768) = v8 + 768;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1880), &LockHandle);
      if ( *(_BYTE *)(a1 + 1052) || *(_BYTE *)(a1 + 1053) )
      {
        *(_DWORD *)(v8 + 176) |= 0x100u;
        v12 = (_QWORD *)(v8 + 8);
        v13 = v47 + 2520;
        v14 = *(_QWORD **)(v47 + 2528);
        if ( *v14 != v47 + 2520 )
          __fastfail(3u);
      }
      else
      {
        v12 = (_QWORD *)(v8 + 8);
        v13 = v47 + 2488;
        v14 = *(_QWORD **)(v47 + 2496);
        if ( *v14 != v47 + 2488 )
          __fastfail(3u);
      }
      *v12 = v13;
      v12[1] = v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
      v15 = *(_QWORD **)(a1 + 72);
      v16 = (_QWORD *)(v8 + 24);
      if ( *v15 != a1 + 64 )
        __fastfail(3u);
      *v16 = a1 + 64;
      *(_QWORD *)(v8 + 32) = v15;
      *v15 = v16;
      *(_QWORD *)(a1 + 72) = v16;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *(_QWORD *)(v8 + 480) = *(_QWORD *)(v4 + 2440);
      *(_QWORD *)(v8 + 488) = *(_QWORD *)(v4 + 2488);
      *(_QWORD *)(v8 + 456) = *(_QWORD *)(v8 + 480);
      KeInitializeTimer((PKTIMER)(v8 + 520));
      KeInitializeDpc((PRKDPC)(v8 + 584), (PKDEFERRED_ROUTINE)VidSchiDelayReadyRoutine, (PVOID)v8);
      *(_BYTE *)(v8 + 908) = 1;
      VidSchiIncrementContextReference(v8);
      *(_BYTE *)(v8 + 908) = 0;
      v17 = *a2;
      if ( (*a2 & 0x204) != 0 )
      {
        if ( (v17 & 1) != 0 )
        {
          memset(v50, 0, 0x48uLL);
          *(_QWORD *)&v50[0] = 0LL;
          v32 = *(unsigned int *)(v8 + 88);
          v33 = *(_QWORD *)(v4 + 8);
          DWORD2(v50[0]) = *(unsigned __int16 *)(*(_QWORD *)(v4 + 8 * v32 + 416) + 8LL);
          HIDWORD(v50[0]) = 1 << *(_BYTE *)(*(_QWORD *)(v4 + 8 * v32 + 416) + 6LL);
          LODWORD(v50[1]) = v50[1] & 0xFFFFFFF6 | ((v17 & 4 | (v17 >> 4) & 0x20) >> 2);
          v34 = *(_QWORD **)(a1 + 16);
          LODWORD(v50[1]) ^= (LOBYTE(v50[1]) ^ (unsigned __int8)(4
                                                               * *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 2192LL)
                                                                          + 48LL * *(unsigned __int16 *)(v47 + 6)
                                                                          + 40))) & 4;
          if ( (int)DxgCoreInterface[18](v33, v34, (__int64)v50) < 0 )
          {
LABEL_46:
            VidSchTerminateContext((PVOID)v8);
            return 0LL;
          }
          v36 = bTracingEnabled == 0;
          v37 = v50[1];
          v38 = *(_QWORD *)&v50[0];
          *(_OWORD *)(v8 + 912) = v50[0];
          *(_QWORD *)(v8 + 64) = v38;
          v39 = v50[2];
          *(_OWORD *)(v8 + 928) = v37;
          v40 = v50[3];
          *(_OWORD *)(v8 + 944) = v39;
          *(_QWORD *)&v39 = *(_QWORD *)&v50[4];
          *(_OWORD *)(v8 + 960) = v40;
          *(_QWORD *)(v8 + 976) = v39;
          if ( !v36 )
          {
            v42 = *(_QWORD *)(a1 + 8);
            if ( !v42 )
              LODWORD(v42) = a1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              Template_pqqqqqqqqppp(
                v50[3],
                (unsigned int)&EventCreateContext,
                v35,
                v42,
                SBYTE8(v50[0]),
                SBYTE12(v50[0]),
                SBYTE4(v50[2]),
                SBYTE8(v50[2]),
                SBYTE12(v50[2]),
                v50[3],
                SBYTE4(v50[3]),
                (2 * ((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) & 0x10) != 0)) | 1,
                v8);
          }
        }
        else if ( bTracingEnabled )
        {
          memset(v48, 0, sizeof(v48));
          v43 = *(_QWORD *)(a1 + 8);
          v44 = v17 & 0x40;
          if ( !v43 )
            LODWORD(v43) = a1;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v45 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v8 + 88) + 416);
            Template_pqqqqqqqqppp(
              *(unsigned __int16 *)(v45 + 8),
              (unsigned int)&EventCreateContext,
              HIDWORD(v48[0]),
              v43,
              *(_WORD *)(v45 + 8),
              1 << *(_BYTE *)(v45 + 6),
              v48[0],
              SBYTE4(v48[0]),
              v48[1],
              SBYTE4(v48[1]),
              v48[2],
              (2 * (((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) & 0x10) != 0) | (v44 != 0 ? 2 : 0))) | 1,
              v8);
          }
        }
      }
      else
      {
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(a3 + 184);
      }
      if ( (int)VidSchSetPriorityContext(v8, (unsigned int)a2[3], 1LL, (unsigned int)a2[4]) >= 0 )
      {
        v18 = *(_DWORD *)(v4 + 128) * (48 * *(_DWORD *)(v4 + 56) + ((8 * *(_DWORD *)(v4 + 56) + 167) & 0xFFFFFFF8))
            + 8 * (*(_DWORD *)(v4 + 56) + 89);
        if ( v18 <= 0x370 )
          v18 = 880;
        v19 = 0;
        v20 = v18;
        do
        {
          v21 = ExAllocatePoolWithTag((POOL_TYPE)512, v20, 0x68536956u);
          v24 = (__int64)v21;
          if ( !v21 )
          {
            v46 = WdLogNewEntry5_WdWarning(v23, v22);
            WdLogEvent5_WdWarning(v46);
            goto LABEL_46;
          }
          memset(v21, 0, v20);
          VidSchiInterlockedInsertTailList(
            (KSPIN_LOCK *)(v4 + 1888),
            v8 + 768,
            (_QWORD *)(v24 + 8),
            (_DWORD *)(v8 + 784));
          VidSchiFreeQueuePacket(v8, v24, v25);
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
            v30 = (__int64)v29;
            if ( !v29 )
              break;
            memset(v29, 0, v20);
            *(_DWORD *)(v30 + 64) |= 0x40u;
            VidSchiInterlockedInsertTailList(
              (KSPIN_LOCK *)(v4 + 1888),
              v8 + 768,
              (_QWORD *)(v30 + 8),
              (_DWORD *)(v8 + 784));
            VidSchiFreeQueuePacket(v8, v30, v31);
            if ( ++v28 >= v27 )
              return v8;
          }
        }
      }
      goto LABEL_46;
    }
  }
  v41 = WdLogNewEntry5_WdWarning(a1, a2);
  WdLogEvent5_WdWarning(v41);
  return 0LL;
}
