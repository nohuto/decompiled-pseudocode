/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x140747E84
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlFindSetBits @ 0x1400165A0 (RtlFindSetBits.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetProcessId @ 0x1400BAF50 (PsGetProcessId.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     ExUnlockUserBuffer @ 0x140132124 (ExUnlockUserBuffer.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140483530 (SeQuerySecurityDescriptorInfo.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14048E3EC (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x14048E4C0 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     PsGetNextProcess @ 0x1404FD830 (PsGetNextProcess.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     EtwpUMGLEnabled @ 0x140743E54 (EtwpUMGLEnabled.c)
 *     EtwpMapEnableFlags @ 0x140749890 (EtwpMapEnableFlags.c)
 *     EtwpCheckSystemTraceAccess @ 0x140751BD8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpGetSoftRestartInformation @ 0x1407529D8 (EtwpGetSoftRestartInformation.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        unsigned int *a4)
{
  DWORD SetBits; // r15d
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // r13
  unsigned int v12; // edx
  struct _KTHREAD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  void *v16; // rbx
  char v17; // dl
  unsigned int *p_SizeOfBitMap; // rcx
  unsigned int v19; // edx
  struct _KTHREAD *v20; // rax
  __int64 v21; // rax
  unsigned int *v22; // rbx
  __int64 v23; // rax
  ULONG v24; // ebx
  unsigned int v25; // edx
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BITMAP *v27; // rax
  _RTL_BITMAP *v28; // r13
  unsigned int v29; // eax
  ULONG i; // ebx
  unsigned int v31; // r14d
  unsigned int v32; // edx
  struct _KTHREAD *v33; // rax
  unsigned int *v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // r13d
  unsigned int v38; // r14d
  struct _KPROCESS *j; // rcx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v41; // rdi
  unsigned int ProcessId; // eax
  ULONG Length; // [rsp+30h] [rbp-78h] BYREF
  DWORD SecurityInformation; // [rsp+34h] [rbp-74h] BYREF
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+48h] [rbp-60h] BYREF
  int v48; // [rsp+50h] [rbp-58h]
  __int64 v49; // [rsp+58h] [rbp-50h]
  __int64 v50; // [rsp+60h] [rbp-48h]
  __int64 v51; // [rsp+68h] [rbp-40h]
  __int64 v52; // [rsp+70h] [rbp-38h]
  __int64 v53; // [rsp+78h] [rbp-30h]
  ULONG v54; // [rsp+B8h] [rbp+10h]

  SetBits = 0;
  v8 = 0;
  if ( a2 < 4 )
    return 3221225485LL;
  v48 = *(_DWORD *)a1;
  v10 = v48;
  v11 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( v48 <= 6 )
  {
    if ( v48 == 6 )
    {
      v24 = 0;
      v54 = 0;
      v49 = a1;
      if ( a2 < 0x10 )
        return 3221225476LL;
      v52 = *(_QWORD *)(a1 + 8);
      v25 = (unsigned __int16)v52;
      if ( (unsigned __int16)v52 == 0xFFFF )
        v25 = *(unsigned __int8 *)(v11 + 4156);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v27 = (_RTL_BITMAP *)EtwpAcquireLoggerContextByLoggerId(v11, v25, 1);
      v28 = v27;
      ObjectsSecurityDescriptor = v27;
      if ( !v27 )
        goto LABEL_38;
      v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v27);
      if ( (v8 & 0x80000000) == 0 )
      {
        if ( (v28[52].SizeOfBitMap & 0x80u) != 0 )
        {
          v24 = RtlNumberOfSetBits(v28 + 133);
          v54 = v24;
        }
        v29 = 4 * v24 + 16;
        *a4 = v29;
        if ( v29 > a2 )
        {
          v8 = -1073741789;
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            Length = i;
            if ( i >= v54 )
              break;
            SetBits = RtlFindSetBits(v28 + 133, 1u, SetBits + 1);
            SecurityInformation = SetBits;
            *(_DWORD *)(a1 + 4LL * i + 16) = SetBits;
          }
        }
      }
      p_SizeOfBitMap = &v28->SizeOfBitMap;
LABEL_41:
      v17 = 1;
      goto LABEL_42;
    }
    if ( !v48 )
    {
      *a4 = 8;
      if ( a2 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = 65;
      return v8;
    }
    if ( v48 != 1 )
    {
      switch ( v48 )
      {
        case 2:
          *a4 = 16;
          if ( a2 != 16 )
            return 3221225476LL;
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 108) + 4096LL);
          break;
        case 3:
          *a4 = 8;
          if ( a2 != 8 )
            return 3221225476LL;
          *(_DWORD *)(a1 + 4) = EtwpProfileInterval;
          break;
        case 4:
          *a4 = 24;
          if ( a2 < 0x18 )
            return 3221225476LL;
          v50 = *(_QWORD *)(a1 + 8);
          SecurityInformation = *(_DWORD *)(a1 + 4);
          v12 = (unsigned __int16)v50;
          if ( (unsigned __int16)v50 == 0xFFFF )
            v12 = *(unsigned __int8 *)(v11 + 4156);
          v13 = KeGetCurrentThread();
          --v13->KernelApcDisable;
          v14 = EtwpAcquireLoggerContextByLoggerId(v11, v12, 0);
          v15 = v14;
          if ( v14 )
          {
            v16 = (void *)EtwpReferenceLoggerSecurityDescriptor(v14);
            ObjectsSecurityDescriptor = v16;
            Length = a2 - 16;
            v8 = SeQuerySecurityDescriptorInfo(
                   &SecurityInformation,
                   (PSECURITY_DESCRIPTOR)(a1 + 16),
                   &Length,
                   &ObjectsSecurityDescriptor);
            *a4 = Length + 16;
            EtwpDereferenceLoggerSecurityDescriptor(v15, (__int64)v16);
            v17 = 0;
            p_SizeOfBitMap = (unsigned int *)v15;
LABEL_42:
            EtwpReleaseLoggerContext(p_SizeOfBitMap, v17);
            goto LABEL_43;
          }
LABEL_38:
          v8 = -1073741162;
LABEL_43:
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return v8;
        case 5:
          *a4 = 20;
          if ( ((a2 - 16) & 0xFFFFFFFB) == 0 )
          {
            *(_DWORD *)(a1 + 4) = EtwpSpinLockSpinThreshold;
            *(_DWORD *)(a1 + 8) = EtwpSpinLockAcquireSampleRate;
            *(_DWORD *)(a1 + 12) = EtwpSpinLockContentionSampleRate;
            if ( a2 == 20 )
              *(_DWORD *)(a1 + 16) = EtwpSpinLockHoldThreshold;
            return v8;
          }
          return 3221225476LL;
        default:
          return (unsigned int)-1073741822;
      }
      return v8;
    }
    *a4 = 48;
    if ( a2 != 48 )
      return 3221225476LL;
    v51 = *(_QWORD *)(a1 + 8);
    v19 = (unsigned __int16)v51;
    if ( (unsigned __int16)v51 == 0xFFFF )
      v19 = *(unsigned __int8 *)(v11 + 4156);
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = EtwpAcquireLoggerContextByLoggerId(v11, v19, 1);
    v22 = (unsigned int *)v21;
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v21;
    if ( !v21 )
      goto LABEL_38;
    if ( (*(_DWORD *)(v21 + 12) & 0x2000000) == 0 )
    {
      EtwpReleaseLoggerContext((unsigned int *)v21, 1);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 3221225485LL;
    }
    v23 = 32LL * *(unsigned __int8 *)(v21 + 834);
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(v23 + v11 + 4208);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(v23 + v11 + 4224);
    EtwpMapEnableFlags(a1 + 16, 0LL);
LABEL_71:
    p_SizeOfBitMap = v22;
    goto LABEL_41;
  }
  if ( v48 == 7 )
  {
    *a4 = 16;
    if ( a2 != 16 )
      return 3221225476LL;
    *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
    *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
    *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
    return v8;
  }
  if ( v48 <= 9 )
  {
    v37 = 0;
    if ( a2 < 8 )
      return 3221225476LL;
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      v38 = (a2 - 4) >> 2;
      for ( j = 0LL; ; j = v41 )
      {
        NextProcess = (struct _KPROCESS *)PsGetNextProcess(j);
        v41 = NextProcess;
        Object = NextProcess;
        if ( !NextProcess )
          break;
        if ( (NextProcess[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0
          && (v10 == 9 || EtwpUMGLEnabled((ULONG_PTR)NextProcess)) )
        {
          ProcessId = (unsigned int)PsGetProcessId(v41);
          if ( v37 < v38 )
            *(_DWORD *)(a1 + 4LL * v37 + 4) = ProcessId;
          ++v37;
        }
      }
      *a4 = 4 * v37 + 4;
      return v38 < v37 ? 0xC0000023 : 0;
    }
    return 3221225506LL;
  }
  if ( v48 == 10 )
  {
    if ( a2 < 0x10 )
      return 3221225476LL;
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      v53 = *(_QWORD *)(a1 + 8);
      v32 = (unsigned __int16)v53;
      if ( (unsigned __int16)v53 == 0xFFFF )
        v32 = *(unsigned __int8 *)(v11 + 4156);
      v33 = KeGetCurrentThread();
      --v33->KernelApcDisable;
      v34 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v11, v32, 1);
      v22 = v34;
      P = v34;
      if ( !v34 )
        goto LABEL_38;
      if ( (v34[3] & 0x2000000) == 0 )
      {
        EtwpReleaseLoggerContext(v34, 1);
        v8 = -1073741811;
        goto LABEL_43;
      }
      v8 = EtwpCheckSystemTraceAccess(v34, 1LL);
      if ( (v8 & 0x80000000) == 0 )
      {
        v35 = 5LL * *((unsigned __int8 *)v22 + 834);
        v36 = 4 * EtwpPoolTagFilter[10 * *((unsigned __int8 *)v22 + 834)] + 16;
        *a4 = v36;
        if ( v36 > a2 )
          v8 = -1073741789;
        else
          memmove((void *)(a1 + 16), &EtwpPoolTagFilter[2 * v35 + 2], 4LL * EtwpPoolTagFilter[2 * v35]);
      }
      goto LABEL_71;
    }
    return 3221225506LL;
  }
  if ( v48 != 13 )
  {
    if ( v48 != 18 )
      return (unsigned int)-1073741822;
    return (unsigned int)EtwpGetSoftRestartInformation(a1, a2, a4);
  }
  if ( a2 < 0x28 )
    return 3221225476LL;
  v31 = a2 - 8;
  result = ExLockUserBuffer(a1 + 8, v31, a3, IoWriteAccess, &Object, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    v8 = ((__int64 (__fastcall *)(__int64, _QWORD, PVOID, unsigned int *))off_140354F48[0])(20LL, v31, Object, a4);
    if ( Object )
      ExUnlockUserBuffer((struct _MDL *)P);
    return v8;
  }
  return result;
}
