/*
 * XREFs of NtDeleteWnfStateName @ 0x140438840
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfDeleteNameInstance @ 0x140438C24 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140438FF8 (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfDeletePermanentName @ 0x1404390F4 (ExpWnfDeletePermanentName.c)
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 *     ExpCaptureWnfStateName @ 0x1404EF5B8 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1404EF98C (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ExpWnfDeletePermanentStateData @ 0x140722FCC (ExpWnfDeletePermanentStateData.c)
 */

__int64 __fastcall NtDeleteWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v4; // r14
  NTSTATUS v5; // edi
  char v6; // r8
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r15
  BOOL v10; // r12d
  _KPROCESS *Process; // rax
  void *Ptr; // rdi
  __int64 v13; // r8
  void *v15; // rdi
  struct _EX_RUNDOWN_REF *v16; // [rsp+58h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v18; // [rsp+68h] [rbp-B0h] BYREF
  int v19[2]; // [rsp+70h] [rbp-A8h] BYREF
  NTSTATUS AccessStatus; // [rsp+78h] [rbp-A0h] BYREF
  PVOID P; // [rsp+80h] [rbp-98h] BYREF
  ACCESS_MASK v22; // [rsp+88h] [rbp-90h] BYREF
  ACCESS_MASK GrantedAccess[3]; // [rsp+8Ch] [rbp-8Ch] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+98h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-60h] BYREF
  char v26; // [rsp+128h] [rbp+10h]
  int v27; // [rsp+130h] [rbp+18h]
  _KPROCESS *v28; // [rsp+138h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
  v26 = a3;
  v27 = 0;
  P = 0LL;
  v4 = 0LL;
  *(_QWORD *)v19 = 0LL;
  v16 = 0LL;
  v5 = ExpCaptureWnfStateName(a1, &v18, a3);
  v17 = v5;
  if ( v5 >= 0 )
  {
    v7 = v18;
    v8 = (v18 >> 6) & 0xF;
    v9 = (v18 >> 4) & 3;
    if ( ((v18 >> 4) & 3) == 0 )
    {
      v5 = -1073741811;
      goto LABEL_21;
    }
    v10 = v6 == 0;
    if ( (_DWORD)v9 != 3 )
    {
      if ( v6 )
      {
        v5 = ExpWnfLookupPermanentName(v18, &P);
        if ( v5 < 0 )
          goto LABEL_21;
        v15 = (void *)*((_QWORD *)P + 2);
        SeCaptureSubjectContext(&SubjectSecurityContext);
        SeAccessCheck(
          v15,
          &SubjectSecurityContext,
          0,
          0x10000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
          1,
          &v22,
          (PNTSTATUS)&v28);
        SeReleaseSubjectContext(&SubjectSecurityContext);
        v5 = (int)v28;
        if ( (int)v28 < 0 )
          goto LABEL_21;
        v10 = 1;
      }
      v5 = ExpWnfDeletePermanentName(v7);
      if ( v5 < 0 )
        goto LABEL_21;
      v27 = 1;
      v6 = v26;
    }
    if ( v6 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v7 = v18;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v28 = Process;
    if ( (_DWORD)v9 == 3 )
    {
      v5 = ExpWnfResolveScopeInstance((int)v19, (int)Process, 0, v8, 0LL);
      v4 = *(struct _EX_RUNDOWN_REF **)v19;
      if ( v5 < 0 )
        goto LABEL_21;
    }
    else
    {
      v5 = 0;
      v4 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v8, 0LL);
    }
    if ( v4 )
    {
      v18 = (int)v9;
      while ( 1 )
      {
        v5 = ExpWnfLookupNameInstance(v4, v7, &v16);
        if ( v5 >= 0 )
        {
          if ( !v10 )
          {
            Ptr = v16[9].Ptr;
            SeCaptureSubjectContext(&SubjectContext);
            SeAccessCheck(
              Ptr,
              &SubjectContext,
              0,
              0x10000u,
              0,
              0LL,
              (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
              1,
              GrantedAccess,
              &AccessStatus);
            SeReleaseSubjectContext(&SubjectContext);
            v5 = AccessStatus;
            if ( AccessStatus < 0 )
              goto LABEL_21;
            v10 = 1;
          }
          if ( v18 == 3 && (_KPROCESS *)v16[19].Count != v28 )
          {
            v5 = -1073741790;
            goto LABEL_21;
          }
          ExpWnfNotifyNameSubscribers(v16, 16LL, 1LL);
          LOBYTE(v13) = 1;
          if ( (unsigned int)ExpWnfDeleteNameInstance(v4, v16, v13) )
            v16 = 0LL;
          else
            v5 = -1073741772;
        }
        if ( v18 != 3 )
        {
          if ( v16 )
          {
            ExReleaseRundownProtection(v16 + 1);
            v16 = 0LL;
          }
          v4 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v8, v4);
          if ( v4 )
            continue;
        }
        break;
      }
    }
    if ( (v7 & 0x400) != 0 )
      ExpWnfDeletePermanentStateData(0LL, v7);
  }
LABEL_21:
  if ( v27 )
    v5 = 0;
  v17 = v5;
  if ( v16 )
    ExReleaseRundownProtection(v16 + 1);
  if ( v4 )
    ExReleaseRundownProtection(v4 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v17;
}
