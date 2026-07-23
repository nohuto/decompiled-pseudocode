/*
 * XREFs of PpmParkSteerInterrupts @ 0x140045AD0
 * Callers:
 *     <none>
 * Callees:
 *     KeSubtractAffinityEx @ 0x140044C00 (KeSubtractAffinityEx.c)
 *     KeIntSteerSnapPerf @ 0x140044D00 (KeIntSteerSnapPerf.c)
 *     KeComplementAffinityEx @ 0x140044F90 (KeComplementAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140045000 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeAndAffinityEx @ 0x1400450B0 (KeAndAffinityEx.c)
 *     KiIntSteerCalculateDistribution @ 0x1400451A0 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerDistributeInterrupts @ 0x140045400 (KiIntSteerDistributeInterrupts.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KiEnumerateNextProcessorNumber @ 0x140045A70 (KiEnumerateNextProcessorNumber.c)
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     KiIntSteerLogState @ 0x14014C888 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1401FCE60 (KeFindFirstSetRightAffinityEx.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

char PpmParkSteerInterrupts()
{
  unsigned int v0; // r14d
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned __int64 v3; // r9
  LARGE_INTEGER v4; // r11
  unsigned __int16 v5; // si
  __int64 v6; // r10
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // edi
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  bool v17; // cf
  unsigned __int8 CurrentIrql; // si
  unsigned __int16 v19; // di
  REGHANDLE v20; // rbx
  SIZE_T v22; // rbx
  PVOID PoolWithTag; // rax
  unsigned int FirstSetRightAffinity; // eax
  ULONG_PTR *i; // rbx
  ULONG_PTR *j; // rdi
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v28; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v29; // [rsp+46h] [rbp-BAh]
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h]
  __int16 v33; // [rsp+60h] [rbp-A0h]
  _DWORD v34[2]; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER v35; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v36[2]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v37; // [rsp+88h] [rbp-78h]
  int v38; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v39[43]; // [rsp+94h] [rbp-6Ch] BYREF
  _QWORD v40[22]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int16 v41[88]; // [rsp+1F0h] [rbp+F0h] BYREF
  _DWORD v42[44]; // [rsp+2A0h] [rbp+1A0h] BYREF
  char v43[8]; // [rsp+350h] [rbp+250h] BYREF
  __int64 v44; // [rsp+358h] [rbp+258h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+400h] [rbp+300h] BYREF
  __int64 v46; // [rsp+410h] [rbp+310h]
  __int64 v47; // [rsp+418h] [rbp+318h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+420h] [rbp+320h] BYREF
  int *v49; // [rsp+430h] [rbp+330h]
  __int64 v50; // [rsp+438h] [rbp+338h]
  int *v51; // [rsp+440h] [rbp+340h]
  __int64 v52; // [rsp+448h] [rbp+348h]
  int *v53; // [rsp+450h] [rbp+350h]
  __int64 v54; // [rsp+458h] [rbp+358h]
  __int64 *v55; // [rsp+460h] [rbp+360h]
  int v56; // [rsp+468h] [rbp+368h]
  int v57; // [rsp+46Ch] [rbp+36Ch]
  void *retaddr; // [rsp+4A8h] [rbp+3A8h]

  if ( PpmIntSteerDisabled || !KiIntTrackRootEnabled )
    return 1;
  if ( !PpmIntSteerTrigger )
  {
    v22 = 8 * (unsigned int)HalQueryMaximumProcessorCount();
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x6B725449u);
    PpmIntSteerTrigger = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 1;
    memset(PoolWithTag, 0, (unsigned int)v22);
  }
  KeIntSteerSnapPerf(v34, &v35);
  KeComplementAffinityEx((__int64)v41, PpmPerfCoreParkingMask);
  KeQuerySystemAllowedCpuSetAffinity(KiCachedSystemAllowedCpuSet, &KiCachedSystemAllowedCpuSetVersion);
  KeAndAffinityEx(v41, KiCachedSystemAllowedCpuSet, v41);
  LODWORD(v40[0]) = 1310721;
  v0 = 0;
  v1 = 0;
  v2 = 0;
  memset((char *)v40 + 4, 0, 0xA4uLL);
  v3 = qword_1403E42B8[0];
  v4 = v35;
  v32 = qword_1403E42B8[0];
  v5 = 0;
  v31 = (unsigned __int16 *)KeActiveProcessors;
LABEL_5:
  v6 = PpmIntSteerTrigger;
  while ( v3 )
  {
LABEL_7:
    _BitScanForward64(&v7, v3);
    ++v0;
    v3 &= ~(1LL << v7);
    v34[1] = v7;
    v32 = v3;
    v27 = KiProcessorNumberToIndexMappingTable[64 * v5 + (unsigned __int8)v7];
    v8 = v27;
    if ( ((*(_QWORD *)&v41[4 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v8] >> 6) + 4] >> (KiProcessorIndexToNumberMappingTable[v8] & 0x3F)) & 1) == 0 )
    {
      *(_QWORD *)(v6 + 8LL * v27) = 0LL;
      goto LABEL_5;
    }
    ++v2;
    if ( !*(_QWORD *)(v6 + 8LL * v27) )
    {
      *(LARGE_INTEGER *)(v6 + 8LL * v27) = v4;
      v6 = PpmIntSteerTrigger;
    }
    if ( v4.QuadPart - *(_QWORD *)(v6 + 8LL * (unsigned int)v8) >= (unsigned __int64)(10000 * PpmIntSteerTriggerMax) )
    {
      v9 = KiProcessorIndexToNumberMappingTable[(unsigned int)v8] & 0x3F;
      v10 = (unsigned int)KiProcessorIndexToNumberMappingTable[(unsigned int)v8] >> 6;
      if ( LOWORD(v40[0]) <= (unsigned int)v10 )
        LOWORD(v40[0]) = v10 + 1;
      v11 = v40[v10 + 1];
      _bittestandset64(&v11, v9);
      v40[v10 + 1] = v11;
      ++v1;
    }
  }
  while ( 1 )
  {
    v33 = ++v5;
    if ( v5 >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
      break;
    v3 = *(_QWORD *)&KeActiveProcessors[2 * v5 + 2];
    v32 = v3;
    if ( v3 )
      goto LABEL_7;
  }
  if ( !v1 )
  {
    if ( v2 )
    {
      KeCopyAffinityEx(v40, v41);
      v1 = v2;
    }
    else
    {
      FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(KiCachedSystemAllowedCpuSet);
      if ( FirstSetRightAffinity == -1 )
        FirstSetRightAffinity = 0;
      v27 = FirstSetRightAffinity;
      KeAddProcessorAffinityEx(v40, FirstSetRightAffinity);
      v1 = 1;
    }
  }
  if ( PpmIntSteerMode < 1 )
    goto LABEL_17;
  switch ( PpmIntSteerMode )
  {
    case 1:
      KeCopyAffinityEx(&v38, KeActiveProcessors);
      v2 = v0;
      break;
    case 2:
      KeCopyAffinityEx(&v38, v40);
      v2 = v1;
      break;
    case 3:
      KeCopyAffinityEx(&v38, v41);
      break;
    default:
      if ( (unsigned int)(PpmIntSteerMode - 5) > 1 )
      {
LABEL_17:
        v12 = PpmIntSteerLoadMax + v34[0];
        if ( PpmIntSteerLoadMax == 50 )
          v2 = v12 / 0x32;
        else
          v2 = v12 / PpmIntSteerLoadMax;
        if ( v2 >= v1 )
        {
          v2 = v1;
          KeCopyAffinityEx(&v38, v40);
        }
        else
        {
          v38 = 1310721;
          memset(v39, 0, 0xA4uLL);
          v42[0] = 1310721;
          memset(&v42[1], 0, 0xA4uLL);
          if ( PpmParkPreferenceHandler )
            PpmParkPreferenceHandler(1LL, PpmCheckTime, v2, v40, 0LL, v42, &v38);
          v13 = 0;
          if ( (_WORD)v38 )
          {
            v14 = (unsigned __int64 *)&v39[1];
            v15 = (unsigned __int16)v38;
            do
            {
              v16 = *v14++;
              v13 += (unsigned int)((0x101010101010101LL
                                   * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                     + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                     + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                       + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
              --v15;
            }
            while ( v15 );
          }
          v17 = v13 < v2;
          if ( v13 > v2 )
          {
            v38 = 1310721;
            memset(v39, 0, 0xA4uLL);
            v17 = v2 != 0;
            v13 = 0;
          }
          if ( v17 )
          {
            KeSubtractAffinityEx((unsigned __int16 *)v40, (unsigned __int16 *)v42, v43);
            v32 = v44;
            v31 = (unsigned __int16 *)v43;
            v33 = 0;
            while ( (int)KiEnumerateNextProcessorNumber((__int64)&v28, &v31) >= 0 )
            {
              v27 = KiProcessorNumberToIndexMappingTable[64 * v28 + v29];
              if ( ((*(_QWORD *)&v39[2 * ((unsigned int)KiProcessorIndexToNumberMappingTable[v27] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[v27] & 0x3F)) & 1) == 0 )
              {
                KeAddProcessorAffinityEx(&v38, v27);
                if ( ++v13 >= v2 )
                  goto LABEL_32;
              }
            }
            if ( v13 < v2 )
            {
              v32 = v40[1];
              v31 = (unsigned __int16 *)v40;
              v33 = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v27, &v31) )
              {
                if ( ((*(_QWORD *)&v39[2 * ((unsigned int)KiProcessorIndexToNumberMappingTable[v27] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[v27] & 0x3F)) & 1) == 0 )
                {
                  KeAddProcessorAffinityEx(&v38, v27);
                  if ( ++v13 >= v2 )
                    break;
                }
              }
            }
          }
        }
        break;
      }
      v38 = 1310721;
      memset(v39, 0, 0xA4uLL);
      KeAddProcessorAffinityEx(&v38, (unsigned int)(PpmIntSteerMode - 5));
      v2 = 1;
      break;
  }
LABEL_32:
  if ( (unsigned int)KeIsEmptyAffinityEx(&v38) )
    KeAddProcessorAffinityEx(&v38, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(&KiIntTrackSpinlock);
  KiIntSteerCalculateDistribution((unsigned __int16 *)&v38, v2);
  v19 = v38;
  KiIntSteerMask = v38;
  dword_14034FDA4 = 0;
  if ( (_WORD)v38 )
  {
    memmove(&qword_14034FDA8, &v39[1], 8LL * (unsigned __int16)v38);
    v19 = KiIntSteerMask;
  }
  KiIntSteerMaskCount = v2;
  v20 = KiIntSteerEtwHandle;
  if ( KiIntSteerEtwHandle )
  {
    if ( EtwEventEnabled(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
      v50 = 4LL;
      v49 = &KiIntTrackRootCount;
      v52 = 4LL;
      v51 = &KiIntSteerMaskCount;
      v54 = 2LL;
      v53 = &KiIntSteerMask;
      v55 = &qword_14034FDA8;
      v57 = 0;
      v56 = 160 * v19;
      EtwWriteEx(v20, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
      v20 = KiIntSteerEtwHandle;
    }
    if ( v20 )
    {
      if ( EtwEventEnabled(v20, &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE) )
      {
        v36[1] = (unsigned __int16 *)qword_1403E42B8[0];
        v36[0] = (unsigned __int16 *)KeActiveProcessors;
        v37 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v30, v36) )
        {
          v45.Ptr = (ULONGLONG)&v30;
          *(_QWORD *)&v45.Size = 4LL;
          v47 = 4LL;
          v46 = KiProcessorBlock[v30] + 11672;
          EtwWriteEx(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE, 0LL, 0, 0LL, 0LL, 2u, &v45);
        }
        v20 = KiIntSteerEtwHandle;
      }
      if ( v20 )
      {
        if ( EtwEventEnabled(v20, &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET) )
        {
          for ( i = (ULONG_PTR *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (ULONG_PTR *)*i )
          {
            if ( i[22] != i[20] )
            {
              for ( j = (ULONG_PTR *)i[2]; j != i + 2; j = (ULONG_PTR *)*j )
                KiIntSteerLogState(j, &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET);
            }
          }
        }
      }
    }
  }
  KiIntSteerDistributeInterrupts();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KiIntTrackSpinlock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&KiIntTrackSpinlock, 0LL);
  __writecr8(CurrentIrql);
  return 1;
}
