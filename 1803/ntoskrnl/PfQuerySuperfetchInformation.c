/*
 * XREFs of PfQuerySuperfetchInformation @ 0x1405B0640
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     SepPrivilegeCheck @ 0x140105560 (SepPrivilegeCheck.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     PfpMemoryRangesQuery @ 0x14014C6B8 (PfpMemoryRangesQuery.c)
 *     PfpMemoryListQuery @ 0x14014CEB4 (PfpMemoryListQuery.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1404D5808 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     PfGetCompletedTrace @ 0x14050FFC4 (PfGetCompletedTrace.c)
 *     PfpPrivSourceEnum @ 0x140538648 (PfpPrivSourceEnum.c)
 *     SepFilterPrivilegeAudits @ 0x14056A3DC (SepFilterPrivilegeAudits.c)
 *     PfpQueryGpuUtilization @ 0x140572420 (PfpQueryGpuUtilization.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     PfpPfnPrioRequest @ 0x1405B0D80 (PfpPfnPrioRequest.c)
 *     PfpQueryScenarioInformation @ 0x1405EDCB8 (PfpQueryScenarioInformation.c)
 *     MmLogQueryCombineStats @ 0x140756628 (MmLogQueryCombineStats.c)
 *     PfpQueryFileExtentsRequest @ 0x14075BDB8 (PfpQueryFileExtentsRequest.c)
 *     PfpVirtualQuery @ 0x14075C414 (PfpVirtualQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfQuerySuperfetchInformation(__int64 a1, __int128 *a2, int a3, __int64 a4, unsigned int *a5)
{
  unsigned __int8 v5; // r15
  unsigned int *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ecx
  LUID v10; // rbx
  _KPROCESS *Process; // r13
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v13; // r12
  _QWORD *v14; // rsi
  unsigned __int64 *v15; // r14
  ULONG_PTR v16; // rdi
  __int64 v17; // rcx
  char v18; // bl
  _QWORD *v19; // rax
  void *v20; // r14
  __int64 v23; // rcx
  PSE_EXPORTS v24; // r13
  struct _KTHREAD *v25; // rcx
  int v26; // ebx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  struct _KTHREAD *v30; // rsi
  signed __int64 *p_Lock; // r13
  _DWORD *v32; // rdi
  __int128 v33; // [rsp+48h] [rbp-E0h] BYREF
  volatile void *Address[2]; // [rsp+58h] [rbp-D0h]
  PVOID Object; // [rsp+68h] [rbp-C0h] BYREF
  int v36; // [rsp+70h] [rbp-B8h]
  ULONG_PTR v37; // [rsp+78h] [rbp-B0h]
  struct _LIST_ENTRY *Flink; // [rsp+80h] [rbp-A8h]
  __int64 v39; // [rsp+88h] [rbp-A0h]
  __int128 v40; // [rsp+98h] [rbp-90h]
  volatile void *v41; // [rsp+A8h] [rbp-80h]
  __int128 v42; // [rsp+B0h] [rbp-78h]
  int v43[2]; // [rsp+C0h] [rbp-68h] BYREF
  LUID v44; // [rsp+C8h] [rbp-60h] BYREF
  int v45; // [rsp+D0h] [rbp-58h]
  _BYTE v46[4]; // [rsp+D8h] [rbp-50h] BYREF
  int v47; // [rsp+DCh] [rbp-4Ch]
  int v48; // [rsp+F0h] [rbp-38h]
  int v49; // [rsp+F4h] [rbp-34h]

  v5 = a4;
  v6 = a5;
  v39 = (__int64)a5;
  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v7 = 0;
  v33 = *a2;
  *(_OWORD *)Address = a2[1];
  if ( (_QWORD)v33 != 0x6B7568430000002DLL )
    return (unsigned int)-1073741811;
  v8 = DWORD2(v33);
  if ( DWORD2(v33) <= 0x1C )
  {
    v9 = 268501248;
    if ( _bittest(&v9, DWORD2(v33)) )
      goto LABEL_29;
  }
  v10 = SeProfileSingleProcessPrivilege;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Flink = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v14 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v14);
        v36 = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v14 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v13);
    }
    else
    {
      v14 = 0LL;
    }
    Object = v14;
  }
  else
  {
    v14 = 0LL;
    Object = 0LL;
  }
  v15 = &Process[1].Affinity.Bitmap[5];
  v16 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v16 )
  {
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v16 = ObFastReferenceObjectLocked(v15);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v30);
    v14 = Object;
  }
  v37 = v16;
  if ( SeTokenLeakTracking )
  {
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 1144) + 284LL));
      if ( v16 == SepTokenLeakToken )
        __debugbreak();
      v14 = Object;
      v16 = v37;
    }
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14[143] + 284LL));
      v14 = Object;
      if ( Object == (PVOID)SepTokenLeakToken )
        __debugbreak();
      v16 = v37;
    }
  }
  v43[0] = 1;
  v43[1] = 1;
  v44 = v10;
  v45 = 0;
  if ( v5 )
  {
    if ( !v14 )
    {
      v17 = v16;
      goto LABEL_19;
    }
    if ( v36 >= 2 )
    {
      v17 = (__int64)v14;
LABEL_19:
      v18 = SepPrivilegeCheck(v17, (__int64)&v44, 1u, 1, v5);
      goto LABEL_20;
    }
    v18 = 0;
  }
  else
  {
    v18 = 1;
  }
LABEL_20:
  if ( v5 )
  {
    v19 = v14 ? v14 : (_QWORD *)v16;
    v20 = *(void **)v19[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v20) )
    {
      if ( (v24 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v20))
        && !RtlEqualSid(v24->SeLocalServiceSid, v20)
        || SepFilterPrivilegeAudits(1, (unsigned int *)v43) )
      {
        SepAdtPrivilegedServiceAuditAlarm((int)&Object, &SeSubsystemName, 0LL, (__int64)v14, v16, v43, v18);
        v16 = v37;
        v14 = Object;
      }
    }
  }
  if ( SeTokenLeakTracking )
  {
    if ( v16 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 1144) + 284LL));
      if ( v37 == SepTokenLeakToken )
        __debugbreak();
      v14 = Object;
    }
    if ( v14 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v14[143] + 284LL));
      if ( Object == (PVOID)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v37);
  v37 = 0LL;
  if ( Object )
    ObfDereferenceObject(Object);
  Object = 0LL;
  if ( !v18 )
    return (unsigned int)-1073741790;
  v7 = 0;
  v8 = DWORD2(v33);
  v6 = (unsigned int *)v39;
LABEL_29:
  if ( v8 == 6 )
  {
    return (unsigned int)PfpPfnPrioRequest(&v33, v5, v6);
  }
  else
  {
    switch ( v8 )
    {
      case 1:
        return (unsigned int)PfGetCompletedTrace((_QWORD *)Address[0], (unsigned int)Address[1], v5, v6);
      case 2:
        if ( LODWORD(Address[1]) != 28 )
          goto LABEL_99;
        v25 = KeGetCurrentThread();
        --v25->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)qword_1403CD6B8, 0LL);
        v42 = xmmword_1403CD504;
        v39 = qword_1403CD514;
        v26 = dword_1403CD51C;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_1403CD6B8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)qword_1403CD6B8);
        KeAbPostRelease((ULONG_PTR)qword_1403CD6B8);
        KeLeaveCriticalRegion();
        if ( v5 )
        {
          v27 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v27 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v27 = *(_BYTE *)v27;
          *(_BYTE *)(v27 + 27) = *(_BYTE *)(v27 + 27);
        }
        v28 = Address[0];
        *(_OWORD *)Address[0] = v42;
        v28[2] = v39;
        *((_DWORD *)v28 + 6) = v26;
        *v6 = 28;
        v7 = 0;
        break;
      case 8:
        return (unsigned int)PfpPrivSourceEnum((__int64)&v33, v5, v6);
      case 9:
        v7 = 0;
        if ( LODWORD(Address[1]) != 4 )
          goto LABEL_99;
        if ( v5 )
        {
          v29 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v29 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v29 = *(_BYTE *)v29;
          *(_BYTE *)(v29 + 3) = *(_BYTE *)(v29 + 3);
          v7 = 0;
        }
        *(_DWORD *)Address[0] = dword_1403E27D0;
        *v6 = 4;
        break;
      case 12:
        return (unsigned int)PfpQueryScenarioInformation(&v33, v5, v6);
      case 16:
        return (unsigned int)PfpMemoryListQuery((__int64)&v33, v5, v6, a4);
      case 17:
        return (unsigned int)PfpMemoryRangesQuery((__int64)&v33, v5, v6);
      case 20:
        if ( LODWORD(Address[1]) != 16 )
          goto LABEL_99;
        v7 = 0;
        v40 = 0uLL;
        if ( v5 )
        {
          v23 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v23 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v23 = *(_BYTE *)v23;
          *(_BYTE *)(v23 + 15) = *(_BYTE *)(v23 + 15);
          v7 = 0;
        }
        v40 = *(_OWORD *)Address[0];
        if ( (_DWORD)v40 == 1 )
        {
          *((_QWORD *)&v40 + 1) = qword_1403CD830;
          *(_OWORD *)Address[0] = v40;
          *v6 = 16;
        }
        else
        {
          v7 = -1073741735;
        }
        break;
      case 23:
        return (unsigned int)PfpVirtualQuery(&v33, v5, v6);
      case 24:
        if ( LODWORD(Address[1]) == 16 )
        {
          MmLogQueryCombineStats(0LL, 0LL, v46);
          v32 = Address[0];
          if ( v5 )
            ProbeForWrite(Address[0], 0x10uLL, 4u);
          v41 = Address[0];
          if ( *(_DWORD *)Address[0] == 1 )
          {
            *((_DWORD *)Address[0] + 1) = v47;
            v32[2] = v48;
            v32[3] = v49;
          }
          else
          {
            v7 = -1073741811;
          }
        }
        else
        {
LABEL_99:
          v7 = -1073741306;
        }
        break;
      case 27:
        return (unsigned int)PfpQueryFileExtentsRequest(&v33, v5, v6);
      case 28:
        return (unsigned int)PfpQueryGpuUtilization((__int64)&v33, v5, v6);
      default:
        v7 = -1073741821;
        break;
    }
  }
  return v7;
}
