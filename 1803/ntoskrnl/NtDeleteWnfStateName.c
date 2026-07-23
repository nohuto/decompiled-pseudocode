/*
 * XREFs of NtDeleteWnfStateName @ 0x140567140
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     ExpWnfLookupNameInstance @ 0x1404F62D0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ExpCaptureWnfStateName @ 0x1404F68C4 (ExpCaptureWnfStateName.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfLookupPermanentName @ 0x1405178D4 (ExpWnfLookupPermanentName.c)
 *     ExpWnfDeleteNameInstance @ 0x140567528 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1405678F8 (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfDeletePermanentName @ 0x1405679F4 (ExpWnfDeletePermanentName.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     ExpWnfDeletePermanentStateData @ 0x1407CA560 (ExpWnfDeletePermanentStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // r14
  int v3; // edi
  char v4; // r8
  __int64 v5; // rbx
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  _BOOL8 v8; // r12
  _KPROCESS *Process; // rax
  __int64 v10; // r8
  void *Ptr; // rdi
  void *v13; // rdi
  struct _EX_RUNDOWN_REF *v14; // [rsp+58h] [rbp-C0h] BYREF
  NTSTATUS v15; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v16; // [rsp+68h] [rbp-B0h] BYREF
  int v17[2]; // [rsp+70h] [rbp-A8h] BYREF
  NTSTATUS AccessStatus; // [rsp+78h] [rbp-A0h] BYREF
  PVOID P; // [rsp+80h] [rbp-98h] BYREF
  ACCESS_MASK v20; // [rsp+88h] [rbp-90h] BYREF
  ACCESS_MASK GrantedAccess[3]; // [rsp+8Ch] [rbp-8Ch] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+98h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-60h] BYREF
  char PreviousMode; // [rsp+128h] [rbp+10h]
  int v25; // [rsp+130h] [rbp+18h]
  _KPROCESS *v26; // [rsp+138h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25 = 0;
  P = 0LL;
  v2 = 0LL;
  *(_QWORD *)v17 = 0LL;
  v14 = 0LL;
  v3 = ExpCaptureWnfStateName((__int64 *)StateName, &v16, PreviousMode);
  v15 = v3;
  if ( v3 >= 0 )
  {
    v5 = v16;
    v6 = (v16 >> 6) & 0xF;
    v7 = (v16 >> 4) & 3;
    if ( ((v16 >> 4) & 3) == 0 )
    {
      v3 = -1073741811;
      goto LABEL_19;
    }
    v8 = v4 == 0;
    if ( (_DWORD)v7 != 3 )
    {
      if ( v4 )
      {
        v3 = ExpWnfLookupPermanentName(v16, &P);
        if ( v3 < 0 )
          goto LABEL_19;
        v13 = (void *)*((_QWORD *)P + 2);
        SeCaptureSubjectContext(&SubjectSecurityContext);
        SeAccessCheck(
          v13,
          &SubjectSecurityContext,
          0,
          0x10000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
          1,
          &v20,
          (PNTSTATUS)&v26);
        SeReleaseSubjectContext(&SubjectSecurityContext);
        v3 = (int)v26;
        if ( (int)v26 < 0 )
          goto LABEL_19;
        LODWORD(v8) = 1;
      }
      v3 = ExpWnfDeletePermanentName(v5);
      if ( v3 < 0 )
        goto LABEL_19;
      v25 = 1;
      v4 = PreviousMode;
    }
    if ( v4 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v5 = v16;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v26 = Process;
    if ( (_DWORD)v7 == 3 )
    {
      v3 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v17, (__int64)Process, 0LL, v6, 0LL);
      v2 = *(struct _EX_RUNDOWN_REF **)v17;
      if ( v3 < 0 )
        goto LABEL_19;
    }
    else
    {
      v3 = 0;
      v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v6, 0LL);
    }
    if ( v2 )
    {
      v16 = (unsigned int)v7;
      while ( 1 )
      {
        v3 = ExpWnfLookupNameInstance((__int64)v2, v5, (__int64 *)&v14);
        if ( v3 >= 0 )
        {
          if ( !v8 )
          {
            Ptr = v14[9].Ptr;
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
            v3 = AccessStatus;
            if ( AccessStatus < 0 )
              goto LABEL_19;
            LODWORD(v8) = 1;
          }
          if ( v16 == 3 && (_KPROCESS *)v14[19].Count != v26 )
          {
            v3 = -1073741790;
            goto LABEL_19;
          }
          ExpWnfNotifyNameSubscribers((__int64)v14, 0x10u, 1, PreviousMode != 0);
          LOBYTE(v10) = 1;
          if ( (unsigned int)ExpWnfDeleteNameInstance(v2, v14, v10) )
            v14 = 0LL;
          else
            v3 = -1073741772;
        }
        if ( v16 != 3 )
        {
          if ( v14 )
          {
            ExReleaseRundownProtection(v14 + 1);
            v14 = 0LL;
          }
          v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v6, v2);
          if ( v2 )
            continue;
        }
        break;
      }
    }
    if ( (v5 & 0x400) != 0 )
      ExpWnfDeletePermanentStateData(0LL, v5);
  }
LABEL_19:
  if ( v25 )
    v3 = 0;
  v15 = v3;
  if ( v14 )
    ExReleaseRundownProtection(v14 + 1);
  if ( v2 )
    ExReleaseRundownProtection(v2 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v15;
}
