/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x14070C7F8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     ExUnlockUserBuffer @ 0x14003C654 (ExUnlockUserBuffer.c)
 *     RtlFindSetBits @ 0x140052C70 (RtlFindSetBits.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     PsIsSystemProcess @ 0x14008B4F0 (PsIsSystemProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessId @ 0x140100A50 (PsGetProcessId.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     EtwpMapEnableFlags @ 0x1404357C4 (EtwpMapEnableFlags.c)
 *     PsGetNextProcess @ 0x1404995D0 (PsGetNextProcess.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1404F1C0C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404F1C84 (EtwpCheckLoggerControlAccess.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1404F1CD8 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404FC5B0 (SeQuerySecurityDescriptorInfo.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405D8D94 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUMGLEnabled @ 0x140709CA4 (EtwpUMGLEnabled.c)
 *     EtwpGetSoftRestartInformation @ 0x140713888 (EtwpGetSoftRestartInformation.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, unsigned int *a4)
{
  unsigned int v5; // r14d
  DWORD SetBits; // r15d
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rax
  unsigned int *v14; // rax
  __int64 v15; // r13
  void *v16; // rbx
  char v17; // dl
  unsigned int *v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rax
  unsigned int *v22; // rax
  unsigned int *v23; // rbx
  __int64 v24; // rax
  ULONG v25; // ebx
  unsigned int v26; // edi
  __int64 v27; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v29; // rax
  unsigned int *v30; // r13
  unsigned int v31; // eax
  ULONG i; // ebx
  unsigned int v33; // r14d
  unsigned int v34; // ebx
  __int64 v35; // rcx
  struct _KTHREAD *v36; // rax
  unsigned int *v37; // rax
  __int64 v38; // r9
  unsigned int v39; // eax
  unsigned int v40; // r13d
  unsigned int v41; // r14d
  struct _KPROCESS *j; // rcx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v44; // rdi
  unsigned int ProcessId; // eax
  ULONG Length; // [rsp+30h] [rbp-78h] BYREF
  DWORD SecurityInformation; // [rsp+34h] [rbp-74h] BYREF
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp-68h] BYREF
  struct _MDL *v50; // [rsp+48h] [rbp-60h] BYREF
  int v51; // [rsp+50h] [rbp-58h]
  __int64 v52; // [rsp+58h] [rbp-50h]
  __int64 v53; // [rsp+60h] [rbp-48h]
  __int64 v54; // [rsp+68h] [rbp-40h]
  __int64 v55; // [rsp+70h] [rbp-38h]
  __int64 v56; // [rsp+78h] [rbp-30h]
  ULONG v57; // [rsp+B8h] [rbp+10h]

  v5 = a2;
  SetBits = 0;
  v8 = 0;
  if ( (unsigned int)a2 < 4 )
    return 3221225485LL;
  v51 = *(_DWORD *)a1;
  v10 = v51;
  if ( v51 <= 6 )
  {
    if ( v51 == 6 )
    {
      v25 = 0;
      v57 = 0;
      v52 = a1;
      if ( (unsigned int)a2 < 0x10 )
        return 3221225476LL;
      v55 = *(_QWORD *)(a1 + 8);
      v26 = (unsigned __int16)v55;
      if ( (unsigned __int16)v55 == 0xFFFF )
        v26 = (unsigned __int8)EtwpSystemLogger[0];
      v27 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v29 = EtwpAcquireLoggerContextByLoggerId(v27, v26, 1);
      v30 = v29;
      ObjectsSecurityDescriptor = v29;
      if ( !v29 )
        goto LABEL_38;
      v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v29);
      if ( (v8 & 0x80000000) == 0 )
      {
        if ( (v30[204] & 0x80u) != 0 )
        {
          v25 = RtlNumberOfSetBits((PRTL_BITMAP)(v30 + 206));
          v57 = v25;
        }
        v31 = 4 * v25 + 16;
        *a4 = v31;
        if ( v31 > v5 )
        {
          v8 = -1073741789;
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            Length = i;
            if ( i >= v57 )
              break;
            SetBits = RtlFindSetBits((PRTL_BITMAP)(v30 + 206), 1u, SetBits + 1);
            SecurityInformation = SetBits;
            *(_DWORD *)(a1 + 4LL * i + 16) = SetBits;
          }
        }
      }
      v18 = v30;
LABEL_41:
      v17 = 1;
      goto LABEL_42;
    }
    if ( !v51 )
    {
      *a4 = 8;
      if ( (_DWORD)a2 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = 65;
      return v8;
    }
    if ( v51 != 1 )
    {
      switch ( v51 )
      {
        case 2:
          *a4 = 16;
          if ( (_DWORD)a2 != 16 )
            return 3221225476LL;
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 108) + 5096LL);
          break;
        case 3:
          *a4 = 8;
          if ( (_DWORD)a2 != 8 )
            return 3221225476LL;
          *(_DWORD *)(a1 + 4) = EtwpProfileInterval;
          break;
        case 4:
          *a4 = 24;
          if ( (unsigned int)a2 < 0x18 )
            return 3221225476LL;
          v53 = *(_QWORD *)(a1 + 8);
          SecurityInformation = *(_DWORD *)(a1 + 4);
          v11 = (unsigned __int16)v53;
          if ( (unsigned __int16)v53 == 0xFFFF )
            v11 = (unsigned __int8)EtwpSystemLogger[0];
          v12 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
          v13 = KeGetCurrentThread();
          --v13->KernelApcDisable;
          v14 = EtwpAcquireLoggerContextByLoggerId(v12, v11, 0);
          v15 = (__int64)v14;
          if ( v14 )
          {
            v16 = (void *)EtwpReferenceLoggerSecurityDescriptor((__int64)v14);
            ObjectsSecurityDescriptor = v16;
            Length = v5 - 16;
            v8 = SeQuerySecurityDescriptorInfo(
                   &SecurityInformation,
                   (PSECURITY_DESCRIPTOR)(a1 + 16),
                   &Length,
                   &ObjectsSecurityDescriptor);
            *a4 = Length + 16;
            EtwpDereferenceLoggerSecurityDescriptor(v15, (__int64)v16);
            v17 = 0;
            v18 = (unsigned int *)v15;
LABEL_42:
            EtwpReleaseLoggerContext(v18, v17);
            goto LABEL_43;
          }
LABEL_38:
          v8 = -1073741162;
LABEL_43:
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return v8;
        case 5:
          *a4 = 20;
          if ( (((_DWORD)a2 - 16) & 0xFFFFFFFB) == 0 )
          {
            *(_DWORD *)(a1 + 4) = EtwpSpinLockSpinThreshold;
            *(_DWORD *)(a1 + 8) = EtwpSpinLockAcquireSampleRate;
            *(_DWORD *)(a1 + 12) = EtwpSpinLockContentionSampleRate;
            if ( (_DWORD)a2 == 20 )
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
    if ( (_DWORD)a2 != 48 )
      return 3221225476LL;
    v54 = *(_QWORD *)(a1 + 8);
    v19 = (unsigned __int16)v54;
    if ( (unsigned __int16)v54 == 0xFFFF )
      v19 = (unsigned __int8)EtwpSystemLogger[0];
    v20 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = EtwpAcquireLoggerContextByLoggerId(v20, v19, 1);
    v23 = v22;
    ObjectsSecurityDescriptor = v22;
    if ( !v22 )
      goto LABEL_38;
    if ( (v22[3] & 0x2000000) == 0 )
    {
      EtwpReleaseLoggerContext(v22, 1);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 3221225485LL;
    }
    v24 = 32LL * *((unsigned __int8 *)v22 + 818);
    *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&EtwpGroupMasks + v24);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)((char *)&unk_140344F10 + v24);
    EtwpMapEnableFlags(a1 + 16, 0);
LABEL_69:
    v18 = v23;
    goto LABEL_41;
  }
  if ( v51 == 7 )
  {
    *a4 = 16;
    if ( (_DWORD)a2 != 16 )
      return 3221225476LL;
    *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
    *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
    *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
    return v8;
  }
  if ( v51 <= 9 )
  {
    v40 = 0;
    if ( (unsigned int)a2 >= 8 )
    {
      v41 = (unsigned int)(a2 - 4) >> 2;
      for ( j = 0LL; ; j = v44 )
      {
        NextProcess = (struct _KPROCESS *)PsGetNextProcess(j);
        v44 = NextProcess;
        Object = NextProcess;
        if ( !NextProcess )
          break;
        if ( !PsIsSystemProcess(NextProcess) && (v10 == 9 || EtwpUMGLEnabled((ULONG_PTR)v44)) )
        {
          ProcessId = (unsigned int)PsGetProcessId(v44);
          if ( v40 < v41 )
            *(_DWORD *)(a1 + 4LL * v40 + 4) = ProcessId;
          ++v40;
        }
      }
      *a4 = 4 * v40 + 4;
      return v41 < v40 ? 0xC0000023 : 0;
    }
    return 3221225476LL;
  }
  if ( v51 == 10 )
  {
    if ( (unsigned int)a2 < 0x10 )
      return 3221225476LL;
    v56 = *(_QWORD *)(a1 + 8);
    v34 = (unsigned __int16)v56;
    if ( (unsigned __int16)v56 == 0xFFFF )
      v34 = (unsigned __int8)EtwpSystemLogger[0];
    v35 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    v36 = KeGetCurrentThread();
    --v36->KernelApcDisable;
    v37 = EtwpAcquireLoggerContextByLoggerId(v35, v34, 1);
    v23 = v37;
    v50 = (struct _MDL *)v37;
    if ( !v37 )
      goto LABEL_38;
    if ( (v37[3] & 0x2000000) == 0 )
    {
      EtwpReleaseLoggerContext(v37, 1);
      v8 = -1073741811;
      goto LABEL_43;
    }
    v8 = EtwpCheckSystemTraceAccess((__int64)v37, 1u);
    if ( (v8 & 0x80000000) == 0 )
    {
      v38 = 5LL * *((unsigned __int8 *)v23 + 818);
      v39 = 4 * (unsigned __int16)EtwpPoolTagFilter[10 * *((unsigned __int8 *)v23 + 818)] + 16;
      *a4 = v39;
      if ( v39 > v5 )
        v8 = -1073741789;
      else
        memmove((void *)(a1 + 16), (char *)&unk_140344D44 + 4 * v38, 4LL * (unsigned __int16)EtwpPoolTagFilter[2 * v38]);
    }
    goto LABEL_69;
  }
  if ( v51 != 13 )
  {
    if ( v51 != 18 )
      return (unsigned int)-1073741822;
    return (unsigned int)EtwpGetSoftRestartInformation(a1, a2, a4);
  }
  if ( (unsigned int)a2 < 0x28 )
    return 3221225476LL;
  v33 = a2 - 8;
  result = ExLockUserBuffer(a1 + 8, (int)a2 - 8, a3, IoWriteAccess, &Object, &v50);
  if ( (int)result >= 0 )
  {
    v8 = ((__int64 (__fastcall *)(__int64, _QWORD, PVOID, unsigned int *))off_14033C718[0])(20LL, v33, Object, a4);
    if ( Object )
      ExUnlockUserBuffer(v50);
    return v8;
  }
  return result;
}
