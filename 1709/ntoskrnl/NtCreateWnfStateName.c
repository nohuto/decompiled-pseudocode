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

__int64 __fastcall NtCreateWnfStateName(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int64 a5,
        unsigned int a6,
        PSECURITY_DESCRIPTOR a7)
{
  _QWORD *v10; // r13
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  unsigned __int64 v14; // rbx
  struct _KPROCESS *Process; // rdi
  int StateName; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-A8h] BYREF
  int v19[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int128 *v20; // [rsp+50h] [rbp-98h]
  __int64 v21[3]; // [rsp+58h] [rbp-90h] BYREF
  struct _EX_RUNDOWN_REF *v22; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+80h] [rbp-68h] BYREF
  __int128 *v24; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v25; // [rsp+90h] [rbp-58h]
  __int128 v26; // [rsp+98h] [rbp-50h] BYREF

  v10 = (_QWORD *)a1;
  v11 = a5;
  v21[1] = (__int64)a7;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v19 = 0LL;
  SecurityDescriptor = 0LL;
  v20 = (__int128 *)a5;
  if ( !PreviousMode )
  {
    StateName = SeCaptureSecurityDescriptor((__int64)a7, 0, PagedPool, 1, &SecurityDescriptor);
    if ( StateName < 0 )
      goto LABEL_17;
    goto LABEL_3;
  }
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_BYTE *)a1 = *(_BYTE *)a1;
  *(_BYTE *)(a1 + 7) = *(_BYTE *)(a1 + 7);
  if ( a5 )
  {
    if ( a5 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v26 = *(_OWORD *)v11;
    v20 = &v26;
  }
  if ( !a7 )
  {
    StateName = -1073741819;
    goto LABEL_17;
  }
  StateName = SeCaptureSecurityDescriptor((__int64)a7, PreviousMode, PagedPool, 1, &SecurityDescriptor);
  if ( StateName >= 0 )
  {
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(SecurityDescriptor);
    if ( a2 <= 3 && a2 && a3 <= 4 && (!a4 || (a3 & 0xFFFFFFFB) == 0 && a2 == 1) && a6 <= 0x1000 )
    {
      if ( a2 != 3 )
      {
        if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
        {
          StateName = -1073741727;
          goto LABEL_17;
        }
        goto LABEL_10;
      }
      if ( a3 != 3 )
      {
LABEL_10:
        StateName = ExpWnfGenerateStateName(v21, a2, a3, a4);
        if ( StateName >= 0 )
        {
          v14 = v21[0];
          *v10 = v21[0] ^ 0x41C64E6DA3BC0074LL;
          v23 = a6;
          v24 = v20;
          v25 = SecurityDescriptor;
          if ( a2 == 3 )
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
            StateName = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v19, (__int64)Process, 0LL, a3, 0LL);
            if ( StateName >= 0 )
            {
              StateName = ExpWnfCreateNameInstance(*(unsigned __int64 *)v19, v14, (__int64)&v23, Process, &v22);
              if ( StateName >= 0 )
                ExReleaseRundownProtection_0(v22 + 1);
            }
          }
          else
          {
            StateName = ExpWnfRegisterPermanentName(v14, &v23);
          }
        }
        goto LABEL_17;
      }
    }
    StateName = -1073741811;
  }
LABEL_17:
  if ( *(_QWORD *)v19 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v19 + 8LL));
  if ( SecurityDescriptor && SecurityDescriptor != a7 )
    SeReleaseSecurityDescriptor(SecurityDescriptor, PreviousMode, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)StateName;
}
