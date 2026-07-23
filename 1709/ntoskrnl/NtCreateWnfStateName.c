/*
 * XREFs of NtCreateWnfStateName @ 0x140504994
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1404BBCD0 (SeCaptureSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x1405010B0 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x1405035C4 (ExpWnfGenerateStateName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x140504CCC (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfRegisterPermanentName @ 0x14059E368 (ExpWnfRegisterPermanentName.c)
 */

NTSTATUS __cdecl NtCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  PWNF_STATE_NAME v10; // r13
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  unsigned __int64 v14; // rbx
  struct _KPROCESS *Process; // rdi
  NTSTATUS v17; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR v18; // [rsp+40h] [rbp-A8h] BYREF
  int v19[2]; // [rsp+48h] [rbp-A0h] BYREF
  PCWNF_TYPE_ID v20; // [rsp+50h] [rbp-98h]
  __int64 v21[3]; // [rsp+58h] [rbp-90h] BYREF
  struct _EX_RUNDOWN_REF *v22; // [rsp+70h] [rbp-78h] BYREF
  ULONG v23; // [rsp+80h] [rbp-68h] BYREF
  PCWNF_TYPE_ID v24; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v25; // [rsp+90h] [rbp-58h]
  __int128 v26; // [rsp+98h] [rbp-50h] BYREF

  v10 = StateName;
  v11 = (__int64)TypeId;
  v21[1] = (__int64)SecurityDescriptor;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v19 = 0LL;
  v18 = 0LL;
  v20 = TypeId;
  if ( !PreviousMode )
  {
    v17 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v18);
    if ( v17 < 0 )
      goto LABEL_17;
    goto LABEL_3;
  }
  if ( (unsigned __int64)StateName >= 0x7FFFFFFF0000LL )
    StateName = (PWNF_STATE_NAME)0x7FFFFFFF0000LL;
  LOBYTE(StateName->Data[0]) = StateName->Data[0];
  HIBYTE(StateName->Data[1]) = HIBYTE(StateName->Data[1]);
  if ( TypeId )
  {
    if ( (unsigned __int64)TypeId >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v26 = *(_OWORD *)v11;
    v20 = (PCWNF_TYPE_ID)&v26;
  }
  if ( !SecurityDescriptor )
  {
    v17 = -1073741819;
    goto LABEL_17;
  }
  v17 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 1, &v18);
  if ( v17 >= 0 )
  {
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(v18);
    if ( (unsigned int)NameLifetime <= WnfTemporaryStateName
      && NameLifetime
      && (unsigned int)DataScope <= WnfDataScopeMachine
      && (!PersistData || (DataScope & 0xFFFFFFFB) == 0 && NameLifetime == WnfPermanentStateName)
      && MaximumStateSize <= 0x1000 )
    {
      if ( NameLifetime != WnfTemporaryStateName )
      {
        if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
        {
          v17 = -1073741727;
          goto LABEL_17;
        }
        goto LABEL_10;
      }
      if ( DataScope != WnfDataScopeProcess )
      {
LABEL_10:
        v17 = ExpWnfGenerateStateName(v21, NameLifetime, DataScope, PersistData);
        if ( v17 >= 0 )
        {
          v14 = v21[0];
          *v10 = (_WNF_STATE_NAME)(v21[0] ^ 0x41C64E6DA3BC0074LL);
          v23 = MaximumStateSize;
          v24 = v20;
          v25 = v18;
          if ( NameLifetime == WnfTemporaryStateName )
          {
            if ( PreviousMode )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              v14 = v21[0];
            }
            else
            {
              Process = PsInitialSystemProcess;
            }
            v17 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v19, (__int64)Process, 0LL, DataScope, 0LL);
            if ( v17 >= 0 )
            {
              v17 = ExpWnfCreateNameInstance(*(unsigned __int64 *)v19, v14, (__int64)&v23, Process, &v22);
              if ( v17 >= 0 )
                ExReleaseRundownProtection_0(v22 + 1);
            }
          }
          else
          {
            v17 = ExpWnfRegisterPermanentName(v14, &v23);
          }
        }
        goto LABEL_17;
      }
    }
    v17 = -1073741811;
  }
LABEL_17:
  if ( *(_QWORD *)v19 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v19 + 8LL));
  if ( v18 && v18 != SecurityDescriptor )
    SeReleaseSecurityDescriptor(v18, PreviousMode, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v17;
}
