/*
 * XREFs of NtQueryWnfStateData @ 0x1404FFEEC
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ExpWnfLookupPermanentName @ 0x1404E0E80 (ExpWnfLookupPermanentName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140500318 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14050036C (ExpCaptureWnfStateName.c)
 *     ExpWnfReadStateData @ 0x140500CA8 (ExpWnfReadStateData.c)
 *     ExpWnfCreateNameInstance @ 0x1405010B0 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x140501678 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140502F44 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140503018 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140598790 (ExpWnfCheckCrossScopeAccess.c)
 */

NTSTATUS __cdecl NtQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v9; // r12
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned int *v12; // r10
  unsigned __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rsi
  struct _KTHREAD *v19; // r8
  _KPROCESS *Process; // r13
  int v21; // r15d
  int v22; // eax
  PULONG v23; // rax
  PVOID v25; // rsi
  int NameInstance; // ebx
  NTSTATUS StateData; // [rsp+30h] [rbp-D8h]
  int v28; // [rsp+38h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+40h] [rbp-C8h] BYREF
  int v30; // [rsp+48h] [rbp-C0h]
  unsigned int v31; // [rsp+4Ch] [rbp-BCh]
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  int v33; // [rsp+58h] [rbp-B0h]
  PCWNF_TYPE_ID v34; // [rsp+60h] [rbp-A8h]
  int v35[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  PULONG v37; // [rsp+78h] [rbp-90h]
  PWNF_CHANGE_STAMP v38; // [rsp+80h] [rbp-88h]
  PSID Sid; // [rsp+88h] [rbp-80h] BYREF
  PVOID v40; // [rsp+90h] [rbp-78h]
  _QWORD v41[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v42; // [rsp+B8h] [rbp-50h] BYREF

  v38 = ChangeStamp;
  v40 = Buffer;
  v37 = BufferSize;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v35 = 0LL;
  v29 = 0LL;
  LODWORD(v9) = 0;
  v41[0] = 0LL;
  v41[1] = 0LL;
  v34 = TypeId;
  StateData = ExpCaptureWnfStateName(StateName, &v36);
  if ( StateData >= 0 )
  {
    if ( PreviousMode )
    {
      if ( v11 )
      {
        if ( v11 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v42 = *(_OWORD *)v11;
        v34 = (PCWNF_TYPE_ID)&v42;
      }
      v14 = v13;
      if ( v13 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      v15 = (__int64)v12;
      if ( (unsigned __int64)v12 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      v10 = *(unsigned int *)v15;
      v31 = *(_DWORD *)v15;
      v16 = (__int64)v12;
      if ( (unsigned __int64)v12 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v16 = *(_DWORD *)v16;
      if ( (_DWORD)v10 )
        ProbeForWrite(Buffer, (unsigned int)v10, 1u);
    }
    else
    {
      v31 = *v12;
    }
    v17 = v36;
    v18 = (v36 >> 4) & 3;
    v33 = (v36 >> 4) & 3;
    v9 = (v36 >> 6) & 0xF;
    v28 = (v36 >> 6) & 0xF;
    LOBYTE(v10) = PreviousMode;
    StateData = ExpWnfCaptureScopeInstanceId(v9, ExplicitScope, v10, &Sid, v41);
    if ( StateData >= 0 )
    {
      v30 = PreviousMode == 0;
      if ( PreviousMode )
      {
        if ( ExplicitScope )
        {
          StateData = ExpWnfCheckCrossScopeAccess(v17);
          if ( StateData < 0 )
            goto LABEL_30;
        }
        v19 = KeGetCurrentThread();
        Process = v19->ApcState.Process;
        LODWORD(v9) = v28;
        v17 = v36;
        LODWORD(v18) = v33;
      }
      else
      {
        LODWORD(v19) = 0;
        LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
      }
      StateData = ExpWnfResolveScopeInstance((int)v35, (int)Process, (int)v19, v9, Sid);
      if ( StateData < 0 )
        goto LABEL_30;
      v21 = v35[0];
      v22 = ExpWnfLookupNameInstance(*(_QWORD *)v35, v17, &v29);
      StateData = v22;
      if ( v22 != -1073741772 || (_DWORD)v18 == 3 )
      {
        if ( v22 < 0 )
          goto LABEL_30;
        StateData = ExpWnfValidatePubSubPreconditions(1u, v30);
        if ( StateData < 0 )
          goto LABEL_30;
      }
      else
      {
        StateData = ExpWnfLookupPermanentName(v17, &P);
        if ( StateData < 0 )
          goto LABEL_30;
        v25 = P;
        StateData = ExpWnfValidatePubSubPreconditions(1u, v30);
        if ( StateData < 0 )
          goto LABEL_30;
        if ( (v17 & 0x400) != 0 )
        {
          NameInstance = ExpWnfCreateNameInstance(v21, v17, (_DWORD)v25, (_DWORD)Process, (__int64)&v29);
          StateData = NameInstance;
          ExFreePoolWithTag(v25, 0x20666E57u);
          P = 0LL;
          if ( NameInstance < 0 )
            goto LABEL_30;
        }
      }
      v23 = v37;
      if ( v29 )
      {
        StateData = ExpWnfReadStateData(v29, v38, v40, v31, v37);
      }
      else
      {
        *v38 = 0;
        *v23 = 0;
        StateData = 0;
      }
    }
  }
LABEL_30:
  if ( v29 )
    ExReleaseRundownProtection_0(v29 + 1);
  if ( *(_QWORD *)v35 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v35 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  LOBYTE(v10) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v9, v41, v10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return StateData;
}
