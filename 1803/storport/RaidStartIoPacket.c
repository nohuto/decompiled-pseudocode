/*
 * XREFs of RaidStartIoPacket @ 0x1C0008A60
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00085C0 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C001019C (RaidUnitProcessBusyRequest.c)
 *     RaidUnitSubmitRequest @ 0x1C0017474 (RaidUnitSubmitRequest.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0008488 (RaUnitReleaseRemoveLock.c)
 *     RaidInsertDeviceQueue @ 0x1C0009780 (RaidInsertDeviceQueue.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaAllocateIoResource @ 0x1C000CE98 (RaAllocateIoResource.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0026AA8 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C0029FF4 (RaidGetIoStartingLbaAndLength.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C002D6B0 (RaidGetQosEntryForDeviceEntry.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C002D97C (RaidZoneWriteGroupListSearchRequest.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C002E324 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidQosSupportedCommand @ 0x1C002E430 (RaidQosSupportedCommand.c)
 *     RaUnitRequestPowerUp @ 0x1C0034AD0 (RaUnitRequestPowerUp.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C003F5F4 (RaAttemptHighWaterMarkIncrease.c)
 */

__int64 __fastcall RaidStartIoPacket(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  int v5; // edi
  IRP *v6; // rbx
  __int64 v8; // r13
  char v9; // al
  char v10; // cl
  char v11; // dl
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _IO_SECURITY_CONTEXT *SecurityContext; // r9
  unsigned __int8 v15; // r14
  unsigned int FullCreateOptions; // eax
  _IO_SECURITY_CONTEXT *v17; // rdi
  unsigned int AccessState; // ebx
  unsigned int v19; // r11d
  __int64 v20; // rcx
  unsigned __int64 DesiredAccess; // rdx
  __int64 v22; // r10
  __int64 v23; // r8
  int v24; // ecx
  int v25; // ecx
  unsigned __int64 v26; // rcx
  unsigned int v27; // r11d
  unsigned int i; // r10d
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // ecx
  unsigned __int64 v34; // rcx
  int v35; // edx
  int AccessState_high; // eax
  __int64 v37; // rdi
  __int64 v38; // r9
  _IO_SECURITY_CONTEXT *v39; // r10
  _IO_SECURITY_CONTEXT *v40; // r11
  unsigned int v41; // ebx
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // ecx
  int v46; // ecx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  char v49; // cl
  char v50; // al
  char v51; // dl
  char v52; // cl
  int v53; // eax
  unsigned int v54; // r12d
  bool v55; // zf
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rdi
  char v59; // al
  unsigned __int8 v60; // di
  __int64 v61; // r14
  volatile signed __int32 *v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rcx
  unsigned int v65; // ecx
  unsigned __int8 v66; // bl
  __int64 v67; // rcx
  unsigned __int64 v68; // rdi
  _QWORD *Pool; // rbx
  ULONGLONG v70; // rax
  int Number; // r9d
  KIRQL v72; // r13
  unsigned __int64 v73; // rcx
  char v74; // r15
  __int64 v75; // rax
  __int64 v76; // rbx
  unsigned int v77; // eax
  KSPIN_LOCK *v78; // rbx
  unsigned __int64 v79; // rbx
  char inserted; // al
  char v81; // bl
  _QWORD *v82; // rdi
  __int64 v83; // rbx
  int v84; // ecx
  PSLIST_ENTRY IoResource; // rcx
  __int64 v86; // rax
  int v87; // r13d
  unsigned int v88; // r8d
  PSLIST_ENTRY v89; // rax
  _QWORD *v90; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v92; // rbx
  _QWORD *v93; // rcx
  unsigned int v94; // r15d
  PSLIST_ENTRY v95; // rbx
  void *v96; // r9
  unsigned int v97; // edx
  _SLIST_ENTRY *Next; // rdi
  char v99; // al
  _QWORD *v100; // rcx
  _QWORD *v101; // rax
  __int64 v102; // rbx
  _QWORD *v103; // rcx
  unsigned __int64 v104; // rcx
  __int64 v105; // rdx
  PSLIST_ENTRY v106; // rdi
  PSLIST_ENTRY v107; // rbx
  char v108; // [rsp+30h] [rbp-59h]
  char v109; // [rsp+30h] [rbp-59h]
  KIRQL v110; // [rsp+31h] [rbp-58h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v112; // [rsp+38h] [rbp-51h]
  int v113; // [rsp+3Ch] [rbp-4Dh]
  unsigned __int64 v114; // [rsp+40h] [rbp-49h] BYREF
  __int64 v115; // [rsp+48h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE v116; // [rsp+50h] [rbp-39h] BYREF
  char v117[8]; // [rsp+68h] [rbp-21h] BYREF
  PSLIST_ENTRY v118; // [rsp+70h] [rbp-19h]
  PSLIST_ENTRY v119; // [rsp+78h] [rbp-11h]
  PSLIST_ENTRY v120; // [rsp+80h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-1h] BYREF
  char v122; // [rsp+F0h] [rbp+67h]
  int v124; // [rsp+100h] [rbp+77h]
  char v125; // [rsp+108h] [rbp+7Fh]

  v124 = a3;
  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0LL;
  v5 = a3;
  v6 = (IRP *)a2;
  v112 = 0;
  v115 = v3;
  v8 = *(_QWORD *)(v3 + 8);
  if ( !*(_BYTE *)(a1 + 2624) || (v108 = 1, !(unsigned __int8)RaidQosSupportedCommand(*(_QWORD *)(v3 + 8))) )
    v108 = 0;
  if ( *(_BYTE *)(v8 + 2) == 40 )
    v113 = *(_DWORD *)(v8 + 24);
  else
    v113 = *(_DWORD *)(v8 + 12);
  if ( (*(_BYTE *)(a1 + 154) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v8) )
  {
    RaUnitReleaseRemoveLock(a1);
    v9 = -72;
    v10 = *(_BYTE *)(v8 + 3) & 0x80;
    v11 = 56;
    if ( *(_BYTE *)(v8 + 2) == 40 )
    {
      if ( !v10 )
        v9 = 56;
    }
    else
    {
      if ( v10 )
        v11 = -72;
      v9 = v11;
    }
    *(_BYTE *)(v8 + 3) = v9;
    RaidCompleteRequestEx(v6);
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1824));
    return 1LL;
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  if ( *(_BYTE *)(v8 + 2) == 40 )
  {
    *(struct _PROCESSOR_NUMBER *)(v8 + 96) = ProcNumber;
  }
  else
  {
    if ( !*(_QWORD *)(v8 + 40) )
      *(_QWORD *)(v8 + 40) = *(_QWORD *)(v8 + 56);
    *(struct _PROCESSOR_NUMBER *)(v8 + 56) = ProcNumber;
  }
  if ( !*(_BYTE *)(a1 + 121) )
    goto LABEL_102;
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction != 15 )
    goto LABEL_102;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  v15 = BYTE2(SecurityContext->SecurityQos);
  if ( v15 == 40 )
    FullCreateOptions = SecurityContext->FullCreateOptions;
  else
    FullCreateOptions = v15;
  if ( FullCreateOptions )
  {
LABEL_101:
    v4 = 0LL;
    goto LABEL_102;
  }
  if ( v15 != 40 )
  {
    v17 = SecurityContext + 3;
    goto LABEL_48;
  }
  v17 = 0LL;
  if ( !SecurityContext->FullCreateOptions )
  {
    AccessState = (unsigned int)SecurityContext[2].AccessState;
    v19 = 0;
    if ( !AccessState )
    {
LABEL_39:
      v6 = (IRP *)a2;
      goto LABEL_48;
    }
    while ( 1 )
    {
      v20 = *((unsigned int *)&SecurityContext[5].SecurityQos + v19);
      if ( (unsigned int)v20 < 0x80 )
        goto LABEL_43;
      DesiredAccess = SecurityContext->DesiredAccess;
      if ( (unsigned int)v20 >= (unsigned int)DesiredAccess )
        goto LABEL_43;
      v22 = (__int64)SecurityContext + v20;
      v23 = (unsigned int)v20;
      v24 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v20) - 64;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 == 1 && v23 + 40 <= DesiredAccess )
          {
            v17 = (_IO_SECURITY_CONTEXT *)(v22 + 32);
            if ( !*(_DWORD *)(v22 + 12) )
              v17 = 0LL;
            goto LABEL_39;
          }
          goto LABEL_43;
        }
        v26 = v23 + 56;
      }
      else
      {
        v26 = v23 + 40;
      }
      if ( v26 <= DesiredAccess )
      {
        v6 = (IRP *)a2;
        if ( *(_BYTE *)(v22 + 10) )
          v17 = (_IO_SECURITY_CONTEXT *)(v22 + 24);
        break;
      }
LABEL_43:
      if ( ++v19 >= AccessState )
      {
        v6 = (IRP *)a2;
        break;
      }
    }
  }
LABEL_48:
  if ( v15 == 40 && !SecurityContext->FullCreateOptions )
  {
    v27 = (unsigned int)SecurityContext[2].AccessState;
    for ( i = 0; i < v27; ++i )
    {
      v29 = *((unsigned int *)&SecurityContext[5].SecurityQos + i);
      if ( (unsigned int)v29 >= 0x80 )
      {
        v30 = SecurityContext->DesiredAccess;
        if ( (unsigned int)v29 < (unsigned int)v30 )
        {
          v31 = (unsigned int)v29;
          v32 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v29) - 64;
          if ( !v32 )
            goto LABEL_56;
          v33 = v32 - 1;
          if ( !v33 )
          {
            v34 = v31 + 56;
LABEL_57:
            if ( v34 <= v30 )
              break;
            continue;
          }
          if ( v33 == 1 )
          {
LABEL_56:
            v34 = v31 + 40;
            goto LABEL_57;
          }
        }
      }
    }
  }
  if ( !v17
    || ((LOBYTE(v17->SecurityQos) - 10) & 0x5F) != 0
    || (v35 = *(_DWORD *)(a1 + 580)) == 0
    || (v15 != 40
      ? (AccessState_high = HIDWORD(SecurityContext->AccessState))
      : (AccessState_high = (int)SecurityContext[1].SecurityQos),
        (AccessState_high & 0x1000) == 0) )
  {
    v5 = v124;
    goto LABEL_101;
  }
  v37 = RaidZoneWriteGroupListSearchRequest((int)a1 + 400, (_DWORD)v6, 0, v35, 1);
  if ( !v37 )
  {
    RaUnitReleaseRemoveLock(a1);
    v49 = *(_BYTE *)(v8 + 2);
    if ( v49 != 40 )
    {
      *(_QWORD *)(v8 + 56) = *(_QWORD *)(v8 + 40);
      *(_QWORD *)(v8 + 40) = 0LL;
    }
    v50 = -80;
    v51 = *(_BYTE *)(v8 + 3) & 0x80;
    v55 = v49 == 40;
    v52 = 48;
    if ( v55 )
    {
      if ( !v51 )
        v50 = 48;
    }
    else
    {
      if ( v51 )
        v52 = -80;
      v50 = v52;
    }
    *(_BYTE *)(v8 + 3) = v50;
    RaidCompleteRequestEx(v6);
    return 1LL;
  }
  v4 = 0LL;
  v39 = v6->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(v39->SecurityQos) != 40 )
  {
    v40 = v39 + 3;
    goto LABEL_88;
  }
  v40 = 0LL;
  if ( v39->FullCreateOptions )
    goto LABEL_88;
  v41 = (unsigned int)v39[2].AccessState;
  v38 = 0LL;
  if ( !v41 )
    goto LABEL_88;
  while ( 1 )
  {
    v42 = *((unsigned int *)&v39[5].SecurityQos + (unsigned int)v38);
    if ( (unsigned int)v42 < 0x80 )
      goto LABEL_83;
    v43 = v39->DesiredAccess;
    if ( (unsigned int)v42 >= (unsigned int)v43 )
      goto LABEL_83;
    v44 = (unsigned int)v42;
    v45 = *(_DWORD *)((char *)&v39->SecurityQos + v42) - 64;
    if ( !v45 )
      break;
    v46 = v45 - 1;
    if ( !v46 )
    {
      v47 = v44 + 56;
      goto LABEL_82;
    }
    if ( v46 == 1 && v44 + 40 <= v43 )
    {
      v40 = (_IO_SECURITY_CONTEXT *)((char *)v39 + v44 + 32);
      if ( !*(_DWORD *)((char *)&v39->AccessState + v44 + 4) )
        v40 = 0LL;
      goto LABEL_88;
    }
LABEL_83:
    v38 = (unsigned int)(v38 + 1);
    if ( (unsigned int)v38 >= v41 )
      goto LABEL_88;
  }
  v47 = v44 + 40;
LABEL_82:
  if ( v47 > v43 )
    goto LABEL_83;
  if ( *((_BYTE *)&v39->AccessState + v44 + 2) )
    v40 = (_IO_SECURITY_CONTEXT *)((char *)v39 + v44 + 24);
LABEL_88:
  v114 = 0LL;
  RaidGetIoStartingLbaAndLength(v40, &v114, 0LL, v38);
  v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 40), 0LL, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v37 + 56));
  v5 = v124;
  if ( v114 > v48 )
  {
    v5 = v124 | 0x20;
    v124 |= 0x20u;
  }
LABEL_102:
  LOBYTE(v53) = *(_BYTE *)(v8 + 2);
  if ( (_BYTE)v53 == 40 )
    v53 = *(_DWORD *)(v8 + 20);
  else
    v53 = (unsigned __int8)v53;
  v54 = 1;
  if ( !v53 )
    goto LABEL_111;
  switch ( v53 )
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
      goto LABEL_111;
    case 8:
      v55 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) == 0;
      break;
    case 16:
      v56 = *(_QWORD *)(a1 + 24);
      if ( !v56 )
        goto LABEL_112;
      v55 = (*(_BYTE *)(v56 + 524) & 0x10) == 0;
      break;
    default:
      goto LABEL_112;
  }
  if ( v55 )
  {
LABEL_112:
    v124 = v5 | 8;
    *(_QWORD *)(v115 + 16) = 0LL;
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
    }
    else
    {
      v57 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v57 + 5088) )
        goto LABEL_117;
    }
  }
  else
  {
LABEL_111:
    if ( (v113 & 0x100800) != 0 )
      goto LABEL_112;
    v57 = *(_QWORD *)(a1 + 24);
LABEL_117:
    v58 = v57;
    if ( KeGetCurrentIrql() >= 2u || *(char *)(a1 + 152) < 0 || (v59 = *(_BYTE *)(a1 + 153), (v59 & 1) != 0) )
    {
      v66 = 0;
      v122 = 0;
      v61 = *(_QWORD *)(a2 + 184);
      if ( *(_QWORD *)(v58 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v58, 0LL, 2LL);
        v122 = 2;
        v66 = 2;
      }
      if ( *(char *)(a1 + 153) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480)) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1488) + 112LL));
        if ( *(char *)(v58 + 108) < 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1784));
          if ( (*(_BYTE *)(v58 + 109) & 1) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1792));
        }
        v67 = *(_QWORD *)(a1 + 1488);
        if ( (*(_DWORD *)(v67 + 164) & 1) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v67 + 160));
          v67 = *(_QWORD *)(a1 + 1488);
        }
        PoFxActivateComponent(*(_QWORD *)v67, 0LL, 2LL);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
        v66 = v122 | 1;
      }
      v65 = v66;
    }
    else
    {
      v60 = 0;
      v125 = 0;
      v61 = *(_QWORD *)(a2 + 184);
      if ( *(_QWORD *)(v57 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v57, 0LL, 1LL);
        v59 = *(_BYTE *)(a1 + 153);
        v60 = 2;
        v125 = 2;
      }
      if ( v59 < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480)) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1488) + 112LL));
        if ( *(char *)(v57 + 108) < 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1784));
          if ( (*(_BYTE *)(v57 + 109) & 1) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1792));
        }
        v62 = *(volatile signed __int32 **)(a1 + 1488);
        if ( (v62[41] & 1) != 0 )
        {
          _InterlockedIncrement(v62 + 40);
          v62 = *(volatile signed __int32 **)(a1 + 1488);
        }
        v63 = 5LL;
        v64 = *(_QWORD *)v62;
        if ( !*(_DWORD *)(a1 + 684) )
          v63 = 1LL;
        PoFxActivateComponent(v64, 0LL, v63);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
        v60 = v125 | 1;
      }
      v65 = v60;
    }
    *(_QWORD *)(v61 + 16) = v65 & 1 | (unsigned __int64)(2 * ((v65 >> 1) & 1));
    v4 = 0LL;
  }
  v68 = -1LL;
  if ( v108 )
  {
    Pool = 0LL;
    if ( *(_DWORD *)(a1 + 2648) != -1 || *(_DWORD *)(a1 + 2632) != -1 || *(_DWORD *)(a1 + 2636) )
    {
      Pool = RaidAllocatePool(NonPagedPoolNx, 0x38uLL, 0x54436152u, *(_QWORD *)(a1 + 8));
      if ( Pool )
      {
        *Pool = 0LL;
        Pool[1] = 0LL;
        Pool[2] = 0LL;
        Pool[3] = 0LL;
        Pool[4] = 0LL;
        Pool[5] = 0LL;
        Pool[6] = 0LL;
        *(_DWORD *)Pool = 300819165;
        if ( *(_DWORD *)(a1 + 2648) == -1 )
          v70 = -1LL;
        else
          v70 = (unsigned int)(5000000 * *(_DWORD *)(a1 + 2648)) + KeQueryUnbiasedInterruptTime();
        Pool[1] = v70;
        v124 |= 0x10u;
        Pool[5] = a2;
        Pool[6] = a1;
      }
    }
    if ( *(_BYTE *)(v8 + 2) == 40 )
    {
      if ( Pool )
      {
        Pool[2] = *(_QWORD *)(v8 + 96);
        *(_QWORD *)(v8 + 96) = Pool;
      }
      *(_DWORD *)(v8 + 40) = *(_DWORD *)(a1 + 2640);
    }
    else
    {
      if ( Pool )
      {
        Pool[2] = *(_QWORD *)(v8 + 48);
        *(_QWORD *)(v8 + 48) = Pool;
      }
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(a1 + 2640);
    }
  }
  v72 = KfRaiseIrql(2u);
  v110 = v72;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) == 0
    || (unsigned int)ProcNumber.Group >= LODWORD(WPP_MAIN_CB.SecurityDescriptor)
    || (Number = ProcNumber.Number,
        (unsigned int)ProcNumber.Number >= *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount + 4LL
                                                                                                 * ProcNumber.Group))
    || (v73 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7,
        *(_DWORD *)(v73 + *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock + 80)) )
  {
    v109 = 0;
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)(v73 + *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock + 80), 2);
    v109 = 1;
  }
  v74 = 0;
  *(_BYTE *)(a2 + 141) = -87;
  *(_QWORD *)(v115 + 32) = a1;
  v75 = *(_QWORD *)(a1 + 24);
  if ( v75 )
  {
    v76 = *(_QWORD *)(a1 + 208);
    if ( v76 )
    {
      if ( *(_QWORD *)(v75 + 5000) )
      {
        v77 = KeQueryHighestNodeNumber() + 1;
        if ( v77 )
        {
          v78 = (KSPIN_LOCK *)(v76 + 64);
          v4 = v77;
          do
          {
            KeAcquireInStackQueuedSpinLock(v78 + 5, &LockHandle);
            if ( (KSPIN_LOCK *)*v78 != v78 && *(_QWORD *)(*v78 + 40) < v68 )
              v68 = *(_QWORD *)(*v78 + 40);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v78 += 7;
            --v4;
          }
          while ( v4 );
        }
        v79 = v4;
        if ( v68 != -1LL )
          v79 = v68;
        if ( v79 )
          v74 = KeQueryUnbiasedInterruptTime() - v79 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5000LL);
      }
    }
  }
  inserted = RaidInsertDeviceQueue((int)a1 + 400, a2, v124, Number, v74);
  v81 = inserted;
  if ( v74 && inserted )
    ++*(_QWORD *)(a1 + 1712);
  if ( (v124 & 8) == 0 && *(_BYTE *)(a1 + 439) && *(char *)(a1 + 153) >= 0 )
    RaUnitRequestPowerUp(a1);
  if ( v81 )
    goto LABEL_224;
  *(_BYTE *)(a2 + 141) = -88;
  v82 = (_QWORD *)(a2 + 120);
  v83 = *(_QWORD *)(a1 + 408);
  if ( *(int *)(v83 + 44) <= 0 && *(int *)(v83 + 40) <= 0 )
  {
LABEL_193:
    v84 = *(_DWORD *)(v83 + 128);
    if ( !v84 )
    {
      IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v83 + 64));
LABEL_202:
      if ( IoResource
        || *(_DWORD *)(v83 + 136) < *(_DWORD *)(v83 + 144)
        && (RaAttemptHighWaterMarkIncrease(v83),
            (IoResource = (PSLIST_ENTRY)RaAllocateIoResource((PSLIST_HEADER)(v83 + 64))) != 0LL) )
      {
        if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v83 + 192)) >= *(_DWORD *)(v83 + 36) )
          *(_DWORD *)(v83 + 36) = *(_DWORD *)(v83 + 192);
        v95 = IoResource + 2;
        LODWORD(v4) = 0;
        v119 = IoResource + 2;
        v120 = IoResource + 52;
        v118 = IoResource + 68;
        v96 = (void *)*((_QWORD *)&IoResource[49].Next + 1);
        v97 = *((_DWORD *)&IoResource[48].Next + 2);
        LOBYTE(IoResource[3].Next) &= 0x9Cu;
        Next = IoResource[51].Next;
        WORD1(IoResource[3].Next) = -1;
        v99 = (char)IoResource[3].Next;
        LODWORD(IoResource[2].Next) = 523124044;
        *((_QWORD *)&IoResource[2].Next + 1) = 0LL;
        BYTE4(IoResource[3].Next) = -1;
        *((_QWORD *)&IoResource[3].Next + 1) = 0LL;
        *((_QWORD *)&IoResource[8].Next + 1) = 0LL;
        IoResource[9].Next = 0LL;
        *((_QWORD *)&IoResource[10].Next + 1) = 0LL;
        *((_QWORD *)&IoResource[11].Next + 1) = 0LL;
        IoResource[11].Next = 0LL;
        IoResource[14].Next = 0LL;
        IoResource[12].Next = 0LL;
        *((_QWORD *)&IoResource[12].Next + 1) = 0LL;
        *((_QWORD *)&IoResource[15].Next + 1) = 0LL;
        IoResource[16].Next = 0LL;
        *((_QWORD *)&IoResource[9].Next + 1) = 0LL;
        *((_QWORD *)&IoResource[45].Next + 1) = 0LL;
        IoResource[46].Next = 0LL;
        *((_QWORD *)&IoResource[46].Next + 1) = 0LL;
        IoResource[47].Next = 0LL;
        *((_DWORD *)&IoResource[48].Next + 2) = v97;
        *((_QWORD *)&IoResource[49].Next + 1) = v96;
        if ( v96 )
        {
          memset(v96, 0, v97);
          v99 = (char)v95[1].Next;
        }
        BYTE1(v95[1].Next) &= 0xF0u;
        LOBYTE(v95[1].Next) = v99 & 0x7F;
        v95[48].Next = 0LL;
        *((_DWORD *)&v95[46].Next + 3) = 0;
        *((_DWORD *)&v95[48].Next + 2) = 0;
        v95[49].Next = Next;
        (*(void (__fastcall **)(_QWORD, __int64, char *))(a1 + 392))(*(_QWORD *)(a1 + 384), a2, v117);
        v94 = 1;
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v83, &v116);
        v90 = *(_QWORD **)(v83 + 16);
        if ( *v90 != v83 + 8 )
          __fastfail(3u);
        *v82 = v83 + 8;
        *(_QWORD *)(a2 + 128) = v90;
        *v90 = v82;
        *(_QWORD *)(v83 + 16) = v82;
        ++*(_DWORD *)(v83 + 24);
        *(_DWORD *)(v83 + 40) = 1;
        if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
        {
          QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v82);
          v92 = v83 + 264;
          v93 = *(_QWORD **)(v92 + 8);
          if ( *v93 != v92 )
            __fastfail(3u);
          *QosEntryForDeviceEntry = v92;
          QosEntryForDeviceEntry[1] = v93;
          *v93 = QosEntryForDeviceEntry;
          *(_QWORD *)(v92 + 8) = QosEntryForDeviceEntry;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v116);
        LODWORD(v4) = 0;
        v94 = 0;
      }
      goto LABEL_225;
    }
    v86 = (unsigned int)(v84 * HIDWORD(KeGetPcr()[1].LockArray)) / *(_DWORD *)(v83 + 132);
    v87 = v86;
    IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v83 + 64) + 8 * v86));
    if ( !IoResource )
    {
      v88 = *(_DWORD *)(v83 + 128);
      if ( v88 <= 1 )
      {
LABEL_201:
        v72 = v110;
        goto LABEL_202;
      }
      while ( !IoResource )
      {
        v89 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v83 + 64) + 8LL * ((v54 + v87) % v88)));
        v88 = *(_DWORD *)(v83 + 128);
        ++v54;
        IoResource = v89;
        if ( v54 >= v88 )
        {
          if ( !v89 )
            goto LABEL_201;
          break;
        }
      }
    }
    LODWORD(IoResource->Next) = v87;
    goto LABEL_201;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(*(PKSPIN_LOCK *)(a1 + 408), &v116);
  if ( *(int *)(v83 + 44) <= 0 && *(int *)(v83 + 40) <= 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v116);
    goto LABEL_193;
  }
  v100 = *(_QWORD **)(v83 + 16);
  if ( *v100 != v83 + 8 )
    __fastfail(3u);
  *v82 = v83 + 8;
  *(_QWORD *)(a2 + 128) = v100;
  *v100 = v82;
  *(_QWORD *)(v83 + 16) = v82;
  ++*(_DWORD *)(v83 + 24);
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    v101 = (_QWORD *)RaidGetQosEntryForDeviceEntry(v82);
    v102 = v83 + 264;
    v103 = *(_QWORD **)(v102 + 8);
    if ( *v103 != v102 )
      __fastfail(3u);
    *v101 = v102;
    v101[1] = v103;
    *v103 = v101;
    *(_QWORD *)(v102 + 8) = v101;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v116);
LABEL_224:
  v94 = v112;
LABEL_225:
  if ( v109 == 1
    && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) != 0
    && (unsigned int)ProcNumber.Group < LODWORD(WPP_MAIN_CB.SecurityDescriptor)
    && (unsigned int)ProcNumber.Number < *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount + 4LL * ProcNumber.Group) )
  {
    v104 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7;
    v105 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock + 64LL;
    _InterlockedExchange((volatile __int32 *)(v104 + *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock + 80), 1);
    v106 = ExpInterlockedFlushSList((PSLIST_HEADER)(v105 + v104));
    while ( v106 )
    {
      v55 = (BYTE1(v106[-1].Next) & 1) == 0;
      v107 = v106 - 2;
      v106 = v106->Next;
      if ( !v55 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(*((_QWORD *)&v107[13].Next + 1), *((unsigned int *)&v107[46].Next + 3));
        BYTE1(v107[1].Next) &= ~1u;
      }
      ((void (__fastcall *)(PSLIST_ENTRY))v107[41].Next)(v107);
    }
    _InterlockedExchange(
      (volatile __int32 *)(((unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7)
                         + *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock
                         + 80),
      v4);
  }
  KeLowerIrql(v72);
  return v94;
}
