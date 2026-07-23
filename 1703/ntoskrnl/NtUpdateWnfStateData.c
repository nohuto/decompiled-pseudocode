/*
 * XREFs of NtUpdateWnfStateData @ 0x1404EE944
 * Callers:
 *     PfSnPowerBoostUpdate @ 0x14046740C (PfSnPowerBoostUpdate.c)
 *     SepSecureBootCheckForUpdates @ 0x140835554 (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404584F8 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     ExpWnfWriteStateData @ 0x1404EE2D4 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404EF570 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x1404EF5B8 (ExpCaptureWnfStateName.c)
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1404EF98C (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1404EFED4 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1404EFFA8 (ExpWnfValidatePubSubPreconditions.c)
 */

NTSTATUS __cdecl NtUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  __int64 v7; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // di
  unsigned __int64 v10; // rsi
  struct _KTHREAD *v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  _KPROCESS *Process; // r12
  unsigned __int64 v15; // rbx
  int v16; // r15d
  int v17; // eax
  PVOID v19; // r14
  NTSTATUS NameInstance; // [rsp+30h] [rbp-C8h]
  int v21; // [rsp+38h] [rbp-C0h]
  struct _EX_RUNDOWN_REF *v22; // [rsp+40h] [rbp-B8h] BYREF
  PVOID P; // [rsp+48h] [rbp-B0h] BYREF
  int v24; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v25; // [rsp+58h] [rbp-A0h] BYREF
  PCWNF_TYPE_ID v26; // [rsp+60h] [rbp-98h]
  int v27[2]; // [rsp+68h] [rbp-90h] BYREF
  PSID Sid; // [rsp+70h] [rbp-88h] BYREF
  const void *v29; // [rsp+78h] [rbp-80h]
  _QWORD v30[2]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-58h] BYREF

  v7 = Length;
  v29 = Buffer;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v27 = 0LL;
  v22 = 0LL;
  LODWORD(v10) = 0;
  v30[0] = 0LL;
  v30[1] = 0LL;
  v26 = TypeId;
  LOBYTE(Length) = PreviousMode;
  NameInstance = ExpCaptureWnfStateName(StateName, &v25, Length);
  if ( NameInstance >= 0 )
  {
    v24 = (v25 >> 4) & 3;
    v10 = (v25 >> 6) & 0xF;
    v21 = (v25 >> 6) & 0xF;
    if ( PreviousMode )
    {
      if ( (_DWORD)v7 && (v13 + v7 > 0x7FFFFFFF0000LL || v13 + v7 < v13) )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( v12 )
      {
        if ( v12 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        v31 = *(_OWORD *)v12;
        v26 = (PCWNF_TYPE_ID)&v31;
      }
    }
    LOBYTE(v11) = PreviousMode;
    NameInstance = ExpWnfCaptureScopeInstanceId((v25 >> 6) & 0xF, ExplicitScope, v11, &Sid, v30);
    if ( NameInstance >= 0 )
    {
      if ( PreviousMode )
      {
        if ( ExplicitScope )
        {
          NameInstance = ExpWnfCheckCrossScopeAccess(v25);
          if ( NameInstance < 0 )
            goto LABEL_24;
        }
        v11 = KeGetCurrentThread();
        Process = v11->ApcState.Process;
        LODWORD(v10) = v21;
        if ( v21 == 3 && (!Sid || Process == *(_KPROCESS **)Sid) )
        {
          NameInstance = -1073741811;
          goto LABEL_24;
        }
      }
      else
      {
        LODWORD(v11) = 0;
        LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
      }
      NameInstance = ExpWnfResolveScopeInstance((int)v27, (int)Process, (int)v11, v10, Sid);
      if ( NameInstance < 0 )
        goto LABEL_24;
      v15 = v25;
      v16 = v27[0];
      v17 = ExpWnfLookupNameInstance(*(_QWORD *)v27, v25, &v22);
      NameInstance = v17;
      if ( v17 != -1073741772 || v24 == 3 )
      {
        if ( v17 < 0 )
          goto LABEL_24;
        NameInstance = ExpWnfValidatePubSubPreconditions(2u, PreviousMode == 0);
        if ( NameInstance < 0 )
          goto LABEL_24;
      }
      else
      {
        NameInstance = ExpWnfLookupPermanentName(v15, &P);
        if ( NameInstance < 0 )
          goto LABEL_24;
        v19 = P;
        NameInstance = ExpWnfValidatePubSubPreconditions(2u, PreviousMode == 0);
        if ( NameInstance < 0 )
          goto LABEL_24;
        NameInstance = ExpWnfCreateNameInstance(v16, v15, (_DWORD)v19, (_DWORD)Process, (__int64)&v22);
        ExFreePoolWithTag(v19, 0x20666E57u);
        P = 0LL;
        if ( NameInstance < 0 )
          goto LABEL_24;
      }
      NameInstance = ExpWnfWriteStateData((__int64)v22, v29, v7, MatchingChangeStamp, CheckStamp);
      if ( NameInstance >= 0 )
      {
        ExpWnfNotifyNameSubscribers((__int64)v22, 1u, 1, PreviousMode != 0);
        NameInstance = 0;
      }
    }
  }
LABEL_24:
  if ( v22 )
    ExReleaseRundownProtection(v22 + 1);
  if ( *(_QWORD *)v27 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v27 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  LOBYTE(v11) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v10, v30, v11);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return NameInstance;
}
