/*
 * XREFs of NtCreateWnfStateName @ 0x1404C2738
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExpWnfRegisterPermanentName @ 0x14045CAAC (ExpWnfRegisterPermanentName.c)
 *     ExpWnfGenerateStateName @ 0x1404C2A70 (ExpWnfGenerateStateName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1404C2B6C (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x14050B5A0 (SeCaptureSecurityDescriptor.c)
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
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  _KPROCESS *Process; // rdi
  NTSTATUS NameInstance; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR v20; // [rsp+40h] [rbp-A8h] BYREF
  int v21[2]; // [rsp+48h] [rbp-A0h] BYREF
  PCWNF_TYPE_ID v22; // [rsp+50h] [rbp-98h]
  _QWORD v23[3]; // [rsp+58h] [rbp-90h] BYREF
  struct _EX_RUNDOWN_REF *v24; // [rsp+70h] [rbp-78h] BYREF
  ULONG v25; // [rsp+80h] [rbp-68h] BYREF
  PCWNF_TYPE_ID v26; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v27; // [rsp+90h] [rbp-58h]
  __int128 v28; // [rsp+98h] [rbp-50h] BYREF

  v10 = StateName;
  v11 = (__int64)TypeId;
  v23[1] = SecurityDescriptor;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v21 = 0LL;
  v20 = 0LL;
  v22 = TypeId;
  if ( !PreviousMode )
  {
    NameInstance = SeCaptureSecurityDescriptor(SecurityDescriptor, 0LL, 1LL, 1);
    if ( NameInstance < 0 )
      goto LABEL_27;
LABEL_13:
    ExpWnfSpecializeSecurityDescriptor(v20);
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
          goto LABEL_27;
        }
        goto LABEL_20;
      }
      if ( DataScope != WnfDataScopeProcess )
      {
LABEL_20:
        LOBYTE(v15) = PersistData;
        NameInstance = ExpWnfGenerateStateName(v23, (unsigned int)NameLifetime, (unsigned int)DataScope, v15, &v20);
        if ( NameInstance >= 0 )
        {
          v16 = v23[0];
          *v10 = (_WNF_STATE_NAME)(v23[0] ^ 0x41C64E6DA3BC0074LL);
          v25 = MaximumStateSize;
          v26 = v22;
          v27 = v20;
          if ( NameLifetime == WnfTemporaryStateName )
          {
            if ( PreviousMode )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              LODWORD(v16) = v23[0];
            }
            else
            {
              LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
            }
            NameInstance = ExpWnfResolveScopeInstance((int)v21, (int)Process, 0, DataScope, 0LL);
            if ( NameInstance >= 0 )
            {
              NameInstance = ExpWnfCreateNameInstance(v21[0], v16, (unsigned int)&v25, (_DWORD)Process, (__int64)&v24);
              if ( NameInstance >= 0 )
                ExReleaseRundownProtection(v24 + 1);
            }
          }
          else
          {
            NameInstance = ExpWnfRegisterPermanentName(v16, (__int64)&v25);
          }
        }
        goto LABEL_27;
      }
    }
    NameInstance = -1073741811;
    goto LABEL_27;
  }
  v14 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)StateName >= 0x7FFFFFFF0000LL )
    StateName = (PWNF_STATE_NAME)0x7FFFFFFF0000LL;
  LOBYTE(StateName->Data[0]) = StateName->Data[0];
  HIBYTE(StateName->Data[1]) = HIBYTE(StateName->Data[1]);
  if ( TypeId )
  {
    if ( (unsigned __int64)TypeId >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v28 = *(_OWORD *)v11;
    v22 = (PCWNF_TYPE_ID)&v28;
  }
  if ( !SecurityDescriptor )
  {
    NameInstance = -1073741819;
    goto LABEL_27;
  }
  LOBYTE(v11) = PreviousMode;
  NameInstance = SeCaptureSecurityDescriptor(SecurityDescriptor, v11, 1LL, 1);
  if ( NameInstance >= 0 )
    goto LABEL_13;
LABEL_27:
  if ( *(_QWORD *)v21 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v21 + 8LL));
  if ( v20 && v20 != SecurityDescriptor )
  {
    LOBYTE(v14) = 1;
    LOBYTE(v11) = PreviousMode;
    SeReleaseSecurityDescriptor(v20, v11, v14);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return NameInstance;
}
