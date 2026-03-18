/*
 * XREFs of PfQuerySuperfetchInformation @ 0x1404C4070
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PfpMemoryRangesQuery @ 0x14000D6F0 (PfpMemoryRangesQuery.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     SepPrivilegeCheck @ 0x140087BC0 (SepPrivilegeCheck.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PfpMemoryListQuery @ 0x1401529F8 (PfpMemoryListQuery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PfpPfnPrioRequest @ 0x14043D960 (PfpPfnPrioRequest.c)
 *     PfpQueryGpuUtilization @ 0x14044832C (PfpQueryGpuUtilization.c)
 *     PfGetCompletedTrace @ 0x140455130 (PfGetCompletedTrace.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14046BB90 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x14046C45C (SepFilterPrivilegeAudits.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 *     MmLogQueryCombineStats @ 0x1406ED1E0 (MmLogQueryCombineStats.c)
 *     PfpQueryFileExtentsRequest @ 0x1406F2EF8 (PfpQueryFileExtentsRequest.c)
 *     PfpQueryScenarioInformation @ 0x1406F3550 (PfpQueryScenarioInformation.c)
 *     PfpVirtualQuery @ 0x1406F39F4 (PfpVirtualQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfQuerySuperfetchInformation(__int64 a1, __int128 *a2, int a3, __int64 a4, unsigned int *a5)
{
  unsigned __int8 v5; // r14
  _QWORD *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ecx
  _KPROCESS *Process; // r13
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v12; // r15
  unsigned __int64 *v13; // rsi
  ULONG_PTR v14; // rbx
  __int64 v15; // rcx
  char v16; // si
  _QWORD *v17; // rax
  void *v18; // r15
  __int64 v21; // rcx
  PSE_EXPORTS v22; // r13
  struct _KTHREAD *v23; // rdi
  signed __int64 *p_Lock; // r13
  struct _KTHREAD *v25; // rcx
  int v26; // ebx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _DWORD *v30; // rdi
  __int128 v31; // [rsp+48h] [rbp-E0h] BYREF
  volatile void *Address[2]; // [rsp+58h] [rbp-D0h]
  PVOID Object; // [rsp+68h] [rbp-C0h] BYREF
  int v34; // [rsp+70h] [rbp-B8h]
  ULONG_PTR v35; // [rsp+78h] [rbp-B0h]
  struct _LIST_ENTRY *Flink; // [rsp+80h] [rbp-A8h]
  __int64 v37; // [rsp+88h] [rbp-A0h]
  __int128 v38; // [rsp+90h] [rbp-98h]
  volatile void *v39; // [rsp+A8h] [rbp-80h]
  __int128 v40; // [rsp+B0h] [rbp-78h]
  unsigned int v41; // [rsp+C0h] [rbp-68h] BYREF
  int v42; // [rsp+C4h] [rbp-64h]
  LUID v43; // [rsp+C8h] [rbp-60h] BYREF
  int v44; // [rsp+D0h] [rbp-58h]
  _BYTE v45[4]; // [rsp+D8h] [rbp-50h] BYREF
  int v46; // [rsp+DCh] [rbp-4Ch]
  int v47; // [rsp+F0h] [rbp-38h]
  int v48; // [rsp+F4h] [rbp-34h]

  v5 = a4;
  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v6 = 0LL;
  v7 = 0;
  v31 = *a2;
  *(_OWORD *)Address = a2[1];
  if ( (_QWORD)v31 != 0x6B7568430000002DLL )
    return (unsigned int)-1073741811;
  v8 = DWORD2(v31);
  if ( DWORD2(v31) <= 0x1C )
  {
    v9 = 268501248;
    if ( _bittest(&v9, DWORD2(v31)) )
      goto LABEL_28;
  }
  v41 = 1;
  v42 = 1;
  v43 = SeProfileSingleProcessPrivilege;
  v44 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Flink = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v6 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObject(v6);
      v34 = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v12);
  }
  Object = v6;
  v13 = &Process[1].Affinity.Bitmap[5];
  v14 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v14 )
  {
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v14 = ObFastReferenceObjectLocked(v13);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v23);
    v6 = Object;
  }
  v35 = v14;
  if ( SeTokenLeakTracking )
  {
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 1144) + 284LL));
      if ( v14 == SepTokenLeakToken )
        __debugbreak();
      v6 = Object;
      v14 = v35;
    }
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6[143] + 284LL));
      v6 = Object;
      if ( Object == (PVOID)SepTokenLeakToken )
        __debugbreak();
      v14 = v35;
    }
  }
  if ( v5 )
  {
    if ( !v6 )
    {
      v15 = v14;
      goto LABEL_18;
    }
    if ( v34 >= 2 )
    {
      v15 = (__int64)v6;
LABEL_18:
      v16 = SepPrivilegeCheck(v15, (__int64)&v43, v41, v42, v5);
      goto LABEL_19;
    }
    v16 = 0;
  }
  else
  {
    v16 = 1;
  }
LABEL_19:
  if ( v5 )
  {
    v17 = v6 ? v6 : (_QWORD *)v14;
    v18 = *(void **)v17[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v18) )
    {
      if ( (v22 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v18))
        && !RtlEqualSid(v22->SeLocalServiceSid, v18)
        || SepFilterPrivilegeAudits(1, &v41) )
      {
        SepAdtPrivilegedServiceAuditAlarm((int)&Object, &SeSubsystemName, 0LL, (__int64)v6, v14, (int *)&v41, v16);
        v14 = v35;
        v6 = Object;
      }
    }
  }
  if ( SeTokenLeakTracking )
  {
    if ( v14 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 1144) + 284LL));
      if ( v35 == SepTokenLeakToken )
        __debugbreak();
      v6 = Object;
    }
    if ( v6 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6[143] + 284LL));
      if ( Object == (PVOID)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v35);
  v35 = 0LL;
  if ( Object )
    ObfDereferenceObject(Object);
  Object = 0LL;
  if ( !v16 )
    return (unsigned int)-1073741790;
  v7 = 0;
  v8 = DWORD2(v31);
LABEL_28:
  if ( v8 != 6 )
  {
    switch ( v8 )
    {
      case 1:
        return (unsigned int)PfGetCompletedTrace((_QWORD *)Address[0], (unsigned int)Address[1], v5, a5);
      case 2:
        if ( LODWORD(Address[1]) != 28 )
          return (unsigned int)-1073741306;
        v25 = KeGetCurrentThread();
        --v25->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)qword_14038D298, 0LL);
        v40 = xmmword_14038D0E4;
        v37 = qword_14038D0F4;
        v26 = dword_14038D0FC;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_14038D298, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)qword_14038D298);
        KeAbPostRelease((ULONG_PTR)qword_14038D298);
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
        *(_OWORD *)Address[0] = v40;
        v28[2] = v37;
        *((_DWORD *)v28 + 6) = v26;
        *a5 = 28;
        return 0;
      case 8:
        return (unsigned int)PfpPrivSourceEnum(&v31, v5, a5);
      case 9:
        v7 = 0;
        if ( LODWORD(Address[1]) != 4 )
          return (unsigned int)-1073741306;
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
        *(_DWORD *)Address[0] = dword_14039E910;
        *a5 = 4;
        return v7;
      case 12:
        return (unsigned int)PfpQueryScenarioInformation(&v31, v5, a5);
      case 16:
        return (unsigned int)PfpMemoryListQuery((__int64)&v31, v5, a5, a4);
      case 17:
        PfpMemoryRangesQuery();
      case 20:
        if ( LODWORD(Address[1]) != 16 )
          return (unsigned int)-1073741306;
        v7 = 0;
        v38 = 0uLL;
        if ( v5 )
        {
          v21 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v21 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v21 = *(_BYTE *)v21;
          *(_BYTE *)(v21 + 15) = *(_BYTE *)(v21 + 15);
          v7 = 0;
        }
        v38 = *(_OWORD *)Address[0];
        if ( (_DWORD)v38 == 1 )
        {
          *((_QWORD *)&v38 + 1) = qword_14038D410;
          *(_OWORD *)Address[0] = v38;
          *a5 = 16;
        }
        else
        {
          return (unsigned int)-1073741735;
        }
        return v7;
      case 23:
        return (unsigned int)PfpVirtualQuery(&v31, v5, a5);
      case 24:
        if ( LODWORD(Address[1]) == 16 )
        {
          MmLogQueryCombineStats(0LL, 0LL, v45);
          v30 = Address[0];
          if ( v5 )
            ProbeForWrite(Address[0], 0x10uLL, 4u);
          v39 = Address[0];
          if ( *(_DWORD *)Address[0] == 1 )
          {
            *((_DWORD *)Address[0] + 1) = v46;
            v30[2] = v47;
            v30[3] = v48;
          }
          else
          {
            return (unsigned int)-1073741811;
          }
        }
        else
        {
          return (unsigned int)-1073741306;
        }
        return v7;
      case 27:
        return (unsigned int)PfpQueryFileExtentsRequest(&v31, v5, a5);
      case 28:
        return (unsigned int)PfpQueryGpuUtilization((__int64)&v31, v5, a5);
      default:
        return (unsigned int)-1073741821;
    }
  }
  return (unsigned int)PfpPfnPrioRequest((__int64)&v31, v5, a5);
}
