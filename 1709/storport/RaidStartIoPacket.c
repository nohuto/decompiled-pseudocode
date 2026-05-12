/*
 * XREFs of RaidStartIoPacket @ 0x1C0007770
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0007320 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000EE34 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitSubmitRequest @ 0x1C001B394 (RaidUnitSubmitRequest.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0005880 (RaUnitReleaseRemoveLock.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     RaidInsertDeviceQueue @ 0x1C0007EF0 (RaidInsertDeviceQueue.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaAllocateIoResource @ 0x1C000C34C (RaAllocateIoResource.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001E740 (RaidAdapterPoFxActivateComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002DA5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C002FF44 (RaidGetIoStartingLbaAndLength.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0031A90 (RaidGetQosEntryForDeviceEntry.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0031FD8 (RaidZoneWriteGroupListSearchRequest.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0032564 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidQosSupportedCommand @ 0x1C0032670 (RaidQosSupportedCommand.c)
 *     RaUnitRequestPowerUp @ 0x1C00375DC (RaUnitRequestPowerUp.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00407B4 (RaAttemptHighWaterMarkIncrease.c)
 *     PortSrbGetLbaFromCdb @ 0x1C0047664 (PortSrbGetLbaFromCdb.c)
 */

__int64 __fastcall RaidStartIoPacket(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r12
  int v4; // r13d
  __int64 v7; // r14
  int v8; // ebx
  int v9; // eax
  __int64 v10; // r13
  unsigned __int8 v11; // bl
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  int Number; // r9d
  char v15; // r12
  __int64 v16; // rax
  __int64 v17; // rbx
  char inserted; // bl
  _QWORD *v19; // r13
  __int64 v20; // rbx
  int v21; // ecx
  __int64 v22; // rax
  int v23; // r12d
  PSLIST_ENTRY IoResource; // rcx
  PSLIST_ENTRY v25; // rbx
  void *v26; // rax
  size_t v27; // rdx
  _SLIST_ENTRY *Next; // r14
  unsigned int v29; // r14d
  unsigned int v31; // eax
  _QWORD *v32; // rbx
  __int64 v33; // r14
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r13
  unsigned __int8 v37; // bl
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  PSLIST_ENTRY v42; // rbx
  bool v43; // zf
  PSLIST_ENTRY v44; // rdi
  char v45; // al
  __int64 v46; // rdx
  __int64 v47; // rdx
  unsigned __int8 v48; // cl
  _BYTE *v50; // r9
  unsigned int v51; // r11d
  __int64 v52; // rcx
  unsigned __int64 v53; // r8
  __int64 v54; // r10
  int v55; // ecx
  int v56; // ecx
  unsigned __int8 v57; // r8
  unsigned int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // r11
  __int64 v62; // rdx
  __int64 v63; // r9
  unsigned int v64; // r11d
  __int64 v65; // rcx
  unsigned __int64 v66; // r8
  __int64 v67; // r10
  int v68; // ecx
  int v69; // ecx
  __int64 v70; // r11
  unsigned __int64 v71; // rax
  char v72; // al
  __int64 v73; // rax
  _QWORD *v74; // rbx
  _QWORD *Pool; // rax
  unsigned int v76; // r8d
  unsigned int v77; // eax
  PSLIST_ENTRY v78; // rax
  _QWORD *v79; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v81; // rbx
  _QWORD *v82; // rcx
  _QWORD *v83; // rcx
  _QWORD *v84; // rax
  __int64 v85; // rbx
  _QWORD *v86; // rcx
  char v87; // [rsp+30h] [rbp-59h]
  char v88; // [rsp+30h] [rbp-59h]
  KIRQL v89; // [rsp+31h] [rbp-58h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-55h] BYREF
  int v91; // [rsp+38h] [rbp-51h]
  _QWORD *v92; // [rsp+40h] [rbp-49h]
  unsigned __int64 v93; // [rsp+48h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE v94; // [rsp+50h] [rbp-39h] BYREF
  char v95[8]; // [rsp+68h] [rbp-21h] BYREF
  PSLIST_ENTRY v96; // [rsp+70h] [rbp-19h]
  PSLIST_ENTRY v97; // [rsp+78h] [rbp-11h]
  PSLIST_ENTRY v98; // [rsp+80h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-1h] BYREF
  char v100; // [rsp+F0h] [rbp+67h]
  unsigned int v101; // [rsp+F0h] [rbp+67h]
  unsigned int i; // [rsp+F0h] [rbp+67h]
  unsigned __int64 v103; // [rsp+F0h] [rbp+67h]
  unsigned int v104; // [rsp+F0h] [rbp+67h]
  char v105; // [rsp+F8h] [rbp+6Fh]
  int v106; // [rsp+100h] [rbp+77h]
  unsigned __int8 v107; // [rsp+108h] [rbp+7Fh]

  v106 = a3;
  v3 = *(_QWORD **)(a2 + 184);
  v4 = a3;
  v92 = v3;
  v7 = v3[1];
  if ( !*(_BYTE *)(a1 + 2624) || (v87 = 1, !(unsigned __int8)RaidQosSupportedCommand(v3[1])) )
    v87 = 0;
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v8 = *(_DWORD *)(v7 + 24);
  else
    v8 = *(_DWORD *)(v7 + 12);
  if ( (*(_BYTE *)(a1 + 154) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v7) )
  {
    RaUnitReleaseRemoveLock(a1);
    v45 = 56;
    if ( *(char *)(v7 + 3) < 0 )
      v45 = -72;
    *(_BYTE *)(v7 + 3) = v45;
    RaidCompleteRequestEx((PIRP)a2);
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1824));
    return 1LL;
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  if ( *(_BYTE *)(v7 + 2) == 40 )
  {
    *(struct _PROCESSOR_NUMBER *)(v7 + 96) = ProcNumber;
  }
  else
  {
    if ( !*(_QWORD *)(v7 + 40) )
      *(_QWORD *)(v7 + 40) = *(_QWORD *)(v7 + 56);
    *(struct _PROCESSOR_NUMBER *)(v7 + 56) = ProcNumber;
  }
  if ( *(_BYTE *)(a1 + 121) )
  {
    v46 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v46 == 15 )
    {
      v47 = *(_QWORD *)(v46 + 8);
      v48 = *(_BYTE *)(v47 + 2);
      v107 = v48;
      if ( !(v48 == 40 ? *(_DWORD *)(v47 + 20) : v48) )
      {
        if ( v48 != 40 )
        {
          v50 = (_BYTE *)(v47 + 72);
          goto LABEL_127;
        }
        v50 = 0LL;
        if ( !*(_DWORD *)(v47 + 20) )
        {
          v51 = 0;
          v101 = *(_DWORD *)(v47 + 56);
          if ( v101 )
          {
            while ( 1 )
            {
              v52 = *(unsigned int *)(v47 + 4LL * v51 + 120);
              if ( (unsigned int)v52 >= 0x80 )
              {
                v53 = *(unsigned int *)(v47 + 16);
                if ( (unsigned int)v52 < (unsigned int)v53 )
                {
                  v54 = (unsigned int)v52;
                  v55 = *(_DWORD *)(v47 + v52) - 64;
                  if ( v55 )
                  {
                    v56 = v55 - 1;
                    if ( v56 )
                    {
                      if ( v56 == 1 && v54 + 40 <= v53 )
                      {
                        v50 = (_BYTE *)(v54 + v47 + 32);
                        if ( !*(_DWORD *)(v47 + v54 + 12) )
                          v50 = 0LL;
LABEL_125:
                        v48 = v107;
                        break;
                      }
                    }
                    else if ( v54 + 56 <= v53 )
                    {
                      goto LABEL_121;
                    }
                  }
                  else if ( v54 + 40 <= v53 )
                  {
LABEL_121:
                    v48 = v107;
                    if ( *(_BYTE *)(v47 + v54 + 10) )
                      v50 = (_BYTE *)(v54 + v47 + 24);
                    break;
                  }
                }
              }
              if ( ++v51 >= v101 )
                goto LABEL_125;
            }
          }
        }
LABEL_127:
        v57 = 0;
        if ( v48 != 40 )
        {
          v57 = *(_BYTE *)(v47 + 10);
          goto LABEL_145;
        }
        if ( *(_DWORD *)(v47 + 20) )
        {
          v57 = 0;
          goto LABEL_145;
        }
        v58 = *(_DWORD *)(v47 + 56);
        v59 = 0LL;
        v91 = 0;
        for ( i = v58; (unsigned int)v59 < v58; v91 = v59 )
        {
          v60 = *(unsigned int *)(v47 + 4 * v59 + 120);
          if ( (unsigned int)v60 >= 0x80 )
          {
            v61 = *(unsigned int *)(v47 + 16);
            if ( (unsigned int)v60 < (unsigned int)v61 )
            {
              if ( *(_DWORD *)(v60 + v47) == 64 )
              {
                if ( v60 + 40 <= v61 )
                {
LABEL_138:
                  v57 = *(_BYTE *)((unsigned int)v60 + v47 + 10);
                  break;
                }
              }
              else if ( *(_DWORD *)(v60 + v47) == 65 )
              {
                if ( v60 + 56 <= v61 )
                  goto LABEL_138;
              }
              else if ( *(_DWORD *)(v60 + v47) == 66 && v60 + 40 <= v61 )
              {
                break;
              }
              v58 = i;
            }
          }
          v59 = (unsigned int)(v91 + 1);
        }
LABEL_145:
        if ( v50 && ((*v50 - 10) & 0x5F) == 0 && *(_DWORD *)(a1 + 580) )
        {
          v103 = PortSrbGetLbaFromCdb(v50, v57)
               / (*(_QWORD *)(a1 + 2696)
                / (unsigned __int64)*(unsigned int *)(a1 + 580));
          if ( RtlCompareMemory(*(const void **)(a1 + 136), "HGST", 4uLL) == 4 )
          {
            if ( (unsigned int)v103 <= 0x20B )
              goto LABEL_11;
          }
          else if ( (unsigned int)v103 <= 0x60 )
          {
            goto LABEL_11;
          }
          if ( !RaidZoneWriteGroupListSearchRequest((int)a1 + 400, a2, 0, *(_DWORD *)(a1 + 580), 1) )
          {
            RaUnitReleaseRemoveLock(a1);
            if ( *(_BYTE *)(v7 + 2) != 40 )
            {
              *(_QWORD *)(v7 + 56) = *(_QWORD *)(v7 + 40);
              *(_QWORD *)(v7 + 40) = 0LL;
            }
            v72 = 48;
            if ( *(char *)(v7 + 3) < 0 )
              v72 = -80;
            goto LABEL_179;
          }
          v62 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
          if ( *(_BYTE *)(v62 + 2) != 40 )
          {
            v63 = v62 + 72;
            goto LABEL_172;
          }
          v63 = 0LL;
          if ( !*(_DWORD *)(v62 + 20) )
          {
            v64 = 0;
            v104 = *(_DWORD *)(v62 + 56);
            if ( v104 )
            {
              do
              {
                v65 = *(unsigned int *)(v62 + 4LL * v64 + 120);
                if ( (unsigned int)v65 >= 0x80 )
                {
                  v66 = *(unsigned int *)(v62 + 16);
                  if ( (unsigned int)v65 < (unsigned int)v66 )
                  {
                    v67 = (unsigned int)v65;
                    v68 = *(_DWORD *)(v65 + v62) - 64;
                    if ( v68 )
                    {
                      v69 = v68 - 1;
                      if ( v69 )
                      {
                        if ( v69 == 1 && v67 + 40 <= v66 )
                        {
                          v63 = v67 + v62 + 32;
                          if ( !*(_DWORD *)(v67 + v62 + 12) )
                            v63 = 0LL;
                          break;
                        }
                      }
                      else if ( v67 + 56 <= v66 )
                      {
                        goto LABEL_166;
                      }
                    }
                    else if ( v67 + 40 <= v66 )
                    {
LABEL_166:
                      if ( *(_BYTE *)(v67 + v62 + 10) )
                        v63 = v67 + v62 + 24;
                      break;
                    }
                  }
                }
                ++v64;
              }
              while ( v64 < v104 );
            }
          }
LABEL_172:
          v93 = 0LL;
          RaidGetIoStartingLbaAndLength(v63, &v93, 0LL);
          v71 = _InterlockedCompareExchange64((volatile signed __int64 *)(v70 + 40), 0LL, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v70 + 56));
          if ( v93 > v71 )
          {
            v4 |= 0x20u;
            v106 = v4;
            goto LABEL_11;
          }
          if ( v93 < v71 )
          {
            RaUnitReleaseRemoveLock(a1);
            if ( *(_BYTE *)(v7 + 2) != 40 )
            {
              *(_QWORD *)(v7 + 56) = *(_QWORD *)(v7 + 40);
              *(_QWORD *)(v7 + 40) = 0LL;
            }
            v72 = 6;
            if ( *(char *)(v7 + 3) < 0 )
              v72 = -122;
LABEL_179:
            *(_BYTE *)(v7 + 3) = v72;
            RaidCompleteRequestEx((PIRP)a2);
            return 1LL;
          }
        }
      }
    }
  }
LABEL_11:
  LOBYTE(v9) = *(_BYTE *)(v7 + 2);
  if ( (_BYTE)v9 == 40 )
    v9 = *(_DWORD *)(v7 + 20);
  else
    v9 = (unsigned __int8)v9;
  if ( v9 )
  {
    switch ( v9 )
    {
      case 2:
      case 7:
      case 9:
      case 18:
      case 19:
      case 23:
      case 32:
      case 36:
      case 37:
        break;
      case 8:
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) )
          goto LABEL_15;
        break;
      case 16:
        v73 = *(_QWORD *)(a1 + 24);
        if ( v73 && (*(_BYTE *)(v73 + 524) & 0x10) != 0 )
          break;
        goto LABEL_15;
      default:
        goto LABEL_15;
    }
  }
  if ( (v8 & 0x100800) == 0 )
  {
LABEL_21:
    if ( KeGetCurrentIrql() >= 2u || *(char *)(a1 + 152) < 0 || (*(_BYTE *)(a1 + 153) & 1) != 0 )
    {
      v36 = *(_QWORD *)(a1 + 24);
      v37 = 0;
      v92 = *(_QWORD **)(a2 + 184);
      v105 = 0;
      if ( *(_QWORD *)(v36 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v36, 0LL);
        v37 = 2;
        v105 = 2;
      }
      if ( *(char *)(a1 + 153) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480)) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1488) + 88LL));
        if ( *(char *)(v36 + 108) < 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1784));
          if ( (*(_BYTE *)(v36 + 109) & 1) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1792));
        }
        v38 = *(_QWORD *)(a1 + 1488);
        if ( (*(_DWORD *)(v38 + 140) & 1) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v38 + 136));
        PoFxActivateComponent(**(_QWORD **)(a1 + 1488), 0LL, 2LL);
        v37 = v105 | 1;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
      }
      v92[2] = v37 & 1 | (unsigned __int64)(2 * ((v37 >> 1) & 1u));
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 24);
      v11 = 0;
      v12 = *(_QWORD *)(a2 + 184);
      v100 = 0;
      if ( *(_QWORD *)(v10 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v10, 0LL);
        v11 = 2;
        v100 = 2;
      }
      if ( *(char *)(a1 + 153) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480)) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1488) + 88LL));
        if ( *(char *)(v10 + 108) < 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1784));
          if ( (*(_BYTE *)(v10 + 109) & 1) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1792));
        }
        v35 = *(_QWORD *)(a1 + 1488);
        if ( (*(_DWORD *)(v35 + 140) & 1) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v35 + 136));
        PoFxActivateComponent(**(_QWORD **)(a1 + 1488), 0LL, 1LL);
        v11 = v100 | 1;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
      }
      *(_QWORD *)(v12 + 16) = v11 & 1 | (unsigned __int64)(2 * ((v11 >> 1) & 1u));
      v3 = v92;
    }
    goto LABEL_28;
  }
LABEL_15:
  v3[2] = 0LL;
  v106 = v4 | 8;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
    goto LABEL_28;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5088LL) )
    goto LABEL_21;
LABEL_28:
  v13 = -1LL;
  if ( v87 )
  {
    v74 = 0LL;
    if ( *(_DWORD *)(a1 + 2648) != -1 || *(_DWORD *)(a1 + 2632) != -1 || *(_DWORD *)(a1 + 2636) )
    {
      Pool = RaidAllocatePool(NonPagedPoolNx, 0x38uLL, 0x54436152u, *(_QWORD *)(a1 + 8));
      v74 = Pool;
      if ( Pool )
      {
        memset(Pool, 0, 0x38uLL);
        *(_DWORD *)v74 = 300819165;
        if ( *(_DWORD *)(a1 + 2648) == -1 )
          v74[1] = -1LL;
        else
          v74[1] = (unsigned int)(5000000 * *(_DWORD *)(a1 + 2648)) + KeQueryUnbiasedInterruptTime();
        v106 |= 0x10u;
        v74[6] = a1;
        v74[5] = a2;
      }
    }
    if ( *(_BYTE *)(v7 + 2) == 40 )
    {
      if ( v74 )
      {
        v74[2] = *(_QWORD *)(v7 + 96);
        *(_QWORD *)(v7 + 96) = v74;
      }
      *(_DWORD *)(v7 + 40) = *(_DWORD *)(a1 + 2640);
    }
    else
    {
      if ( v74 )
      {
        v74[2] = *(_QWORD *)(v7 + 48);
        *(_QWORD *)(v7 + 48) = v74;
      }
      *(_DWORD *)(v7 + 20) = *(_DWORD *)(a1 + 2640);
    }
  }
  v89 = KfRaiseIrql(2u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) == 0
    || (unsigned int)ProcNumber.Group >= HIDWORD(WPP_MAIN_CB.Reserved)
    || (Number = ProcNumber.Number,
        (unsigned int)ProcNumber.Number >= *((_DWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink
                                           + ProcNumber.Group))
    || (v39 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7,
        *(_DWORD *)(v39 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 80)) )
  {
    v88 = 0;
  }
  else
  {
    v88 = 1;
    _InterlockedExchange((volatile __int32 *)(v39 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 80), 2);
  }
  *(_BYTE *)(a2 + 141) = -87;
  v3[4] = a1;
  v15 = 0;
  v16 = *(_QWORD *)(a1 + 24);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 208);
    if ( v17 )
    {
      if ( *(_QWORD *)(v16 + 5000) )
      {
        v31 = KeQueryHighestNodeNumber() + 1;
        if ( v31 )
        {
          v32 = (_QWORD *)(v17 + 64);
          v33 = v31;
          do
          {
            KeAcquireInStackQueuedSpinLock(v32 + 5, &LockHandle);
            v34 = (_QWORD *)*v32;
            if ( (_QWORD *)*v32 != v32 && v34[5] < v13 )
              v13 = v34[5];
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v32 += 7;
            --v33;
          }
          while ( v33 );
          if ( v13 != -1LL && v13 )
            v15 = KeQueryUnbiasedInterruptTime() - v13 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5000LL);
        }
      }
    }
  }
  inserted = RaidInsertDeviceQueue((int)a1 + 400, a2, v106, Number, v15);
  if ( v15 && inserted )
    ++*(_QWORD *)(a1 + 1712);
  if ( (v106 & 8) == 0 && *(_BYTE *)(a1 + 439) && *(char *)(a1 + 153) >= 0 )
    RaUnitRequestPowerUp(a1);
  if ( inserted )
    goto LABEL_84;
  *(_BYTE *)(a2 + 141) = -88;
  v19 = (_QWORD *)(a2 + 120);
  v20 = *(_QWORD *)(a1 + 408);
  if ( *(int *)(v20 + 44) <= 0 && *(int *)(v20 + 40) <= 0 )
  {
LABEL_40:
    v21 = *(_DWORD *)(v20 + 128);
    if ( v21 )
    {
      v22 = (unsigned int)(v21 * HIDWORD(KeGetPcr()[1].LockArray)) / *(_DWORD *)(v20 + 132);
      v23 = v22;
      IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v20 + 64) + 8 * v22));
      if ( !IoResource )
      {
        v76 = *(_DWORD *)(v20 + 128);
        v77 = 1;
        v91 = 1;
        if ( v76 <= 1 )
          goto LABEL_43;
        while ( !IoResource )
        {
          v78 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v20 + 64) + 8LL * ((v23 + v77) % v76)));
          v76 = *(_DWORD *)(v20 + 128);
          IoResource = v78;
          v77 = v91 + 1;
          v91 = v77;
          if ( v77 >= v76 )
          {
            if ( IoResource )
              break;
            goto LABEL_215;
          }
        }
      }
      LODWORD(IoResource->Next) = v23;
    }
    else
    {
      IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v20 + 64));
    }
LABEL_43:
    if ( IoResource )
    {
LABEL_44:
      if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v20 + 192)) >= *(_DWORD *)(v20 + 36) )
        *(_DWORD *)(v20 + 36) = *(_DWORD *)(v20 + 192);
      v25 = IoResource + 1;
      v97 = IoResource + 1;
      v98 = IoResource + 51;
      v96 = IoResource + 67;
      v26 = (void *)*((_QWORD *)&IoResource[48].Next + 1);
      v27 = *((unsigned int *)&IoResource[47].Next + 2);
      LOBYTE(IoResource[2].Next) &= 0x9Cu;
      Next = IoResource[50].Next;
      LODWORD(IoResource[1].Next) = 523124044;
      *((_QWORD *)&IoResource[1].Next + 1) = 0LL;
      WORD1(IoResource[2].Next) = -1;
      BYTE4(IoResource[2].Next) = -1;
      *((_QWORD *)&IoResource[2].Next + 1) = 0LL;
      *((_QWORD *)&IoResource[7].Next + 1) = 0LL;
      IoResource[8].Next = 0LL;
      *((_QWORD *)&IoResource[9].Next + 1) = 0LL;
      *((_QWORD *)&IoResource[10].Next + 1) = 0LL;
      IoResource[10].Next = 0LL;
      IoResource[13].Next = 0LL;
      IoResource[11].Next = 0LL;
      *((_QWORD *)&IoResource[11].Next + 1) = 0LL;
      *((_QWORD *)&IoResource[14].Next + 1) = 0LL;
      IoResource[15].Next = 0LL;
      *((_QWORD *)&IoResource[8].Next + 1) = 0LL;
      *((_QWORD *)&IoResource[44].Next + 1) = 0LL;
      IoResource[45].Next = 0LL;
      *((_QWORD *)&IoResource[45].Next + 1) = 0LL;
      IoResource[46].Next = 0LL;
      *((_DWORD *)&IoResource[47].Next + 2) = v27;
      *((_QWORD *)&IoResource[48].Next + 1) = v26;
      if ( v26 )
        memset(v26, 0, v27);
      LOBYTE(v25[1].Next) &= ~0x80u;
      BYTE1(v25[1].Next) &= 0xF0u;
      v25[48].Next = 0LL;
      *((_DWORD *)&v25[46].Next + 3) = 0;
      *((_DWORD *)&v25[48].Next + 2) = 0;
      v25[49].Next = Next;
      (*(void (__fastcall **)(_QWORD, __int64, char *))(a1 + 392))(*(_QWORD *)(a1 + 384), a2, v95);
      v29 = 1;
      goto LABEL_49;
    }
LABEL_215:
    if ( *(_DWORD *)(v20 + 136) < *(_DWORD *)(v20 + 144) )
    {
      RaAttemptHighWaterMarkIncrease(v20);
      IoResource = (PSLIST_ENTRY)RaAllocateIoResource((PSLIST_HEADER)(v20 + 64));
      if ( IoResource )
        goto LABEL_44;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v20, &v94);
    v79 = *(_QWORD **)(v20 + 16);
    if ( *v79 != v20 + 8 )
      __fastfail(3u);
    *v19 = v20 + 8;
    *(_QWORD *)(a2 + 128) = v79;
    *v79 = v19;
    *(_QWORD *)(v20 + 16) = v19;
    ++*(_DWORD *)(v20 + 24);
    *(_DWORD *)(v20 + 40) = 1;
    if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
    {
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(a2 + 120);
      v81 = v20 + 264;
      v82 = *(_QWORD **)(v81 + 8);
      if ( *v82 != v81 )
        __fastfail(3u);
      *QosEntryForDeviceEntry = v81;
      QosEntryForDeviceEntry[1] = v82;
      *v82 = QosEntryForDeviceEntry;
      *(_QWORD *)(v81 + 8) = QosEntryForDeviceEntry;
    }
    goto LABEL_223;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(*(PKSPIN_LOCK *)(a1 + 408), &v94);
  if ( *(int *)(v20 + 44) <= 0 && *(int *)(v20 + 40) <= 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v94);
    goto LABEL_40;
  }
  v83 = *(_QWORD **)(v20 + 16);
  if ( *v83 != v20 + 8 )
    __fastfail(3u);
  *v19 = v20 + 8;
  *(_QWORD *)(a2 + 128) = v83;
  *v83 = v19;
  *(_QWORD *)(v20 + 16) = v19;
  ++*(_DWORD *)(v20 + 24);
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    v84 = (_QWORD *)RaidGetQosEntryForDeviceEntry(a2 + 120);
    v85 = v20 + 264;
    v86 = *(_QWORD **)(v85 + 8);
    if ( *v86 != v85 )
      __fastfail(3u);
    *v84 = v85;
    v84[1] = v86;
    *v86 = v84;
    *(_QWORD *)(v85 + 8) = v84;
  }
LABEL_223:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v94);
LABEL_84:
  v29 = 0;
LABEL_49:
  if ( v88 == 1
    && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) != 0
    && (unsigned int)ProcNumber.Group < HIDWORD(WPP_MAIN_CB.Reserved)
    && (unsigned int)ProcNumber.Number < *((_DWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink
                                         + ProcNumber.Group) )
  {
    v40 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7;
    v41 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 64LL;
    _InterlockedExchange((volatile __int32 *)(v40 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 80), 1);
    v42 = ExpInterlockedFlushSList((PSLIST_HEADER)(v41 + v40));
    while ( v42 )
    {
      v43 = (BYTE1(v42[-1].Next) & 1) == 0;
      v44 = v42 - 2;
      v42 = v42->Next;
      if ( !v43 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(*((_QWORD *)&v44[13].Next + 1), *((unsigned int *)&v44[46].Next + 3));
        BYTE1(v44[1].Next) &= ~1u;
      }
      ((void (__fastcall *)(PSLIST_ENTRY))v44[41].Next)(v44);
    }
    _InterlockedExchange(
      (volatile __int32 *)(((unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7)
                         + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
                         + 80),
      0);
  }
  KeLowerIrql(v89);
  return v29;
}
