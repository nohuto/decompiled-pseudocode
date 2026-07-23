/*
 * XREFs of NtQueryWnfStateData @ 0x1404F5B08
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404F5F30 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfCreateNameInstance @ 0x1404F5F84 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1404F62D0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1404F67F8 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x1404F68C4 (ExpCaptureWnfStateName.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1404F693C (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfReadStateData @ 0x1404F6A2C (ExpWnfReadStateData.c)
 *     ExpWnfLookupPermanentName @ 0x1405178D4 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14057CC28 (ExpWnfCheckCrossScopeAccess.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  const void *v6; // r15
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
  NTSTATUS NameInstance; // [rsp+30h] [rbp-D8h]
  int v27; // [rsp+38h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v28; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+48h] [rbp-C0h]
  unsigned int v30; // [rsp+4Ch] [rbp-BCh]
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  int v32; // [rsp+58h] [rbp-B0h]
  PCWNF_TYPE_ID v33; // [rsp+60h] [rbp-A8h]
  int v34[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  PULONG v36; // [rsp+78h] [rbp-90h]
  PWNF_CHANGE_STAMP v37; // [rsp+80h] [rbp-88h]
  PSID Sid; // [rsp+88h] [rbp-80h] BYREF
  PVOID v39; // [rsp+90h] [rbp-78h]
  _QWORD v40[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-50h] BYREF

  v37 = ChangeStamp;
  v6 = ExplicitScope;
  v39 = Buffer;
  v36 = BufferSize;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v34 = 0LL;
  v28 = 0LL;
  LODWORD(v9) = 0;
  v40[0] = 0LL;
  v40[1] = 0LL;
  v33 = TypeId;
  LOBYTE(ExplicitScope) = PreviousMode;
  NameInstance = ExpCaptureWnfStateName(StateName, &v35, ExplicitScope);
  if ( NameInstance >= 0 )
  {
    if ( PreviousMode )
    {
      if ( v11 )
      {
        if ( v11 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v41 = *(_OWORD *)v11;
        v33 = (PCWNF_TYPE_ID)&v41;
      }
      v14 = v13;
      if ( v13 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      v15 = (__int64)v12;
      if ( (unsigned __int64)v12 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      v10 = *(unsigned int *)v15;
      v30 = *(_DWORD *)v15;
      v16 = (__int64)v12;
      if ( (unsigned __int64)v12 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v16 = *(_DWORD *)v16;
      if ( (_DWORD)v10 )
        ProbeForWrite(Buffer, (unsigned int)v10, 1u);
    }
    else
    {
      v30 = *v12;
    }
    v17 = v35;
    v18 = (v35 >> 4) & 3;
    v32 = (v35 >> 4) & 3;
    v9 = (v35 >> 6) & 0xF;
    v27 = (v35 >> 6) & 0xF;
    LOBYTE(v10) = PreviousMode;
    NameInstance = ExpWnfCaptureScopeInstanceId(v9, v6, v10, &Sid, v40);
    if ( NameInstance >= 0 )
    {
      v29 = PreviousMode == 0;
      if ( PreviousMode )
      {
        if ( v6 )
        {
          NameInstance = ExpWnfCheckCrossScopeAccess(v17);
          if ( NameInstance < 0 )
            goto LABEL_30;
        }
        v19 = KeGetCurrentThread();
        Process = v19->ApcState.Process;
        LODWORD(v9) = v27;
        v17 = v35;
        LODWORD(v18) = v32;
      }
      else
      {
        LODWORD(v19) = 0;
        LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
      }
      NameInstance = ExpWnfResolveScopeInstance((int)v34, (int)Process, (int)v19, v9, Sid);
      if ( NameInstance < 0 )
        goto LABEL_30;
      v21 = v34[0];
      v22 = ExpWnfLookupNameInstance(*(_QWORD *)v34, v17, &v28);
      NameInstance = v22;
      if ( v22 != -1073741772 || (_DWORD)v18 == 3 )
      {
        if ( v22 < 0 )
          goto LABEL_30;
        NameInstance = ExpWnfValidatePubSubPreconditions(1u, v29);
        if ( NameInstance < 0 )
          goto LABEL_30;
      }
      else
      {
        NameInstance = ExpWnfLookupPermanentName(v17, &P);
        if ( NameInstance < 0 )
          goto LABEL_30;
        v25 = P;
        NameInstance = ExpWnfValidatePubSubPreconditions(1u, v29);
        if ( NameInstance < 0 )
          goto LABEL_30;
        if ( (v17 & 0x400) != 0 )
        {
          NameInstance = ExpWnfCreateNameInstance(v21, v17, (_DWORD)v25, (_DWORD)Process, (__int64)&v28);
          ExFreePoolWithTag(v25, 0x20666E57u);
          P = 0LL;
          if ( NameInstance < 0 )
            goto LABEL_30;
        }
      }
      v23 = v36;
      if ( v28 )
      {
        NameInstance = ExpWnfReadStateData(v28, v37, v39, v30, v36);
      }
      else
      {
        *v37 = 0;
        *v23 = 0;
        NameInstance = 0;
      }
    }
  }
LABEL_30:
  if ( v28 )
    ExReleaseRundownProtection(v28 + 1);
  if ( *(_QWORD *)v34 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v34 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  LOBYTE(v10) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v9, v40, v10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return NameInstance;
}
