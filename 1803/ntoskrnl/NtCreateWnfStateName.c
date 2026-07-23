/*
 * XREFs of NtCreateWnfStateName @ 0x1404F47EC
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C7830 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ExpWnfGenerateStateName @ 0x1404F4B24 (ExpWnfGenerateStateName.c)
 *     ExpWnfCreateNameInstance @ 0x1404F5F84 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1404F7A40 (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfRegisterPermanentName @ 0x140583CA8 (ExpWnfRegisterPermanentName.c)
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
  __int64 v14; // r9
  __int64 v15; // rbx
  _KPROCESS *Process; // rdi
  NTSTATUS NameInstance; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR v19; // [rsp+40h] [rbp-A8h] BYREF
  int v20[2]; // [rsp+48h] [rbp-A0h] BYREF
  PCWNF_TYPE_ID v21; // [rsp+50h] [rbp-98h]
  _QWORD v22[3]; // [rsp+58h] [rbp-90h] BYREF
  struct _EX_RUNDOWN_REF *v23; // [rsp+70h] [rbp-78h] BYREF
  ULONG v24; // [rsp+80h] [rbp-68h] BYREF
  PCWNF_TYPE_ID v25; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v26; // [rsp+90h] [rbp-58h]
  __int128 v27; // [rsp+98h] [rbp-50h] BYREF

  v10 = StateName;
  v11 = (__int64)TypeId;
  v22[1] = SecurityDescriptor;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v20 = 0LL;
  v19 = 0LL;
  v21 = TypeId;
  if ( !PreviousMode )
  {
    NameInstance = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v19);
    if ( NameInstance < 0 )
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
    v27 = *(_OWORD *)v11;
    v21 = (PCWNF_TYPE_ID)&v27;
  }
  if ( !SecurityDescriptor )
  {
    NameInstance = -1073741819;
    goto LABEL_17;
  }
  NameInstance = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 1, &v19);
  if ( NameInstance >= 0 )
  {
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(v19);
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
          NameInstance = -1073741727;
          goto LABEL_17;
        }
        goto LABEL_10;
      }
      if ( DataScope != WnfDataScopeProcess )
      {
LABEL_10:
        LOBYTE(v14) = PersistData;
        NameInstance = ExpWnfGenerateStateName(v22, (unsigned int)NameLifetime, (unsigned int)DataScope, v14);
        if ( NameInstance >= 0 )
        {
          v15 = v22[0];
          *v10 = (_WNF_STATE_NAME)(v22[0] ^ 0x41C64E6DA3BC0074LL);
          v24 = MaximumStateSize;
          v25 = v21;
          v26 = v19;
          if ( NameLifetime == WnfTemporaryStateName )
          {
            if ( PreviousMode )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              LODWORD(v15) = v22[0];
            }
            else
            {
              LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
            }
            NameInstance = ExpWnfResolveScopeInstance((int)v20, (int)Process, 0, DataScope, 0LL);
            if ( NameInstance >= 0 )
            {
              NameInstance = ExpWnfCreateNameInstance(v20[0], v15, (unsigned int)&v24, (_DWORD)Process, (__int64)&v23);
              if ( NameInstance >= 0 )
                ExReleaseRundownProtection(v23 + 1);
            }
          }
          else
          {
            NameInstance = ExpWnfRegisterPermanentName(v15, &v24);
          }
        }
        goto LABEL_17;
      }
    }
    NameInstance = -1073741811;
  }
LABEL_17:
  if ( *(_QWORD *)v20 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v20 + 8LL));
  if ( v19 && v19 != SecurityDescriptor )
    SeReleaseSecurityDescriptor(v19, PreviousMode, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return NameInstance;
}
