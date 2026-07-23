/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x14056F7C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404F5F30 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfLookupNameInstance @ 0x1404F62D0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1404F67F8 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x1404F68C4 (ExpCaptureWnfStateName.c)
 *     ExpWnfCheckCallerAccess @ 0x1404F699C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfLookupPermanentName @ 0x1405178D4 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14057CC28 (ExpWnfCheckCrossScopeAccess.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  int v10; // eax
  char v11; // r8
  __int64 v12; // rbx
  int v13; // edi
  int v14; // r12d
  ACCESS_MASK v15; // r15d
  __int64 v16; // r8
  struct _KTHREAD *v17; // rax
  PEPROCESS Process; // rdx
  void *v19; // rcx
  NTSTATUS v21; // [rsp+30h] [rbp-98h]
  int v22; // [rsp+38h] [rbp-90h]
  int v23; // [rsp+3Ch] [rbp-8Ch]
  __int64 v24; // [rsp+40h] [rbp-88h] BYREF
  int v25; // [rsp+48h] [rbp-80h]
  unsigned __int64 v26; // [rsp+50h] [rbp-78h] BYREF
  int v27[2]; // [rsp+58h] [rbp-70h] BYREF
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  PSID Sid[4]; // [rsp+68h] [rbp-60h] BYREF
  PVOID v30[3]; // [rsp+88h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v27 = 0LL;
  v24 = 0LL;
  v22 = 0;
  v30[0] = 0LL;
  v30[1] = 0LL;
  v10 = ExpCaptureWnfStateName((__int64 *)StateName, &v26, PreviousMode);
  v21 = v10;
  if ( v10 >= 0 )
  {
    v12 = v26;
    v25 = (v26 >> 4) & 3;
    v22 = (v26 >> 6) & 0xF;
    v10 = ExpWnfCaptureScopeInstanceId(v22, ExplicitScope, v11, (__int64 *)Sid, (__int64)v30);
    v21 = v10;
    if ( v10 >= 0 )
    {
      if ( (unsigned int)NameInfoClass > WnfInfoIsQuiescent )
      {
        v10 = -1073741821;
        v21 = -1073741821;
        goto LABEL_37;
      }
      if ( InfoBufferSize < 4 )
      {
        v10 = -1073741811;
        v21 = -1073741811;
        goto LABEL_37;
      }
      if ( PreviousMode )
        ProbeForWrite(InfoBuffer, InfoBufferSize, 4u);
      v13 = 1;
      if ( NameInfoClass )
      {
        v23 = 0;
      }
      else
      {
        v23 = 1;
        if ( ExplicitScope )
        {
          v10 = -1073741811;
          v21 = -1073741811;
          goto LABEL_37;
        }
      }
      if ( PreviousMode && NameInfoClass )
      {
        v14 = 0;
        if ( ExplicitScope )
        {
          v10 = ExpWnfCheckCrossScopeAccess(v12);
          v21 = v10;
          if ( v10 < 0 )
            goto LABEL_37;
        }
      }
      else
      {
        v14 = 1;
      }
      v15 = 0;
      if ( !v14 && (unsigned int)(NameInfoClass - 1) <= 1 )
        v15 = 2;
      v16 = 0LL;
      if ( PreviousMode )
      {
        v17 = KeGetCurrentThread();
        Process = v17->ApcState.Process;
        v12 = v26;
        if ( !v23 )
          v16 = (__int64)v17;
      }
      else
      {
        Process = PsInitialSystemProcess;
      }
      v10 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v27, (__int64)Process, v16, v22, Sid[0]);
      v21 = v10;
      if ( v10 >= 0 )
      {
        v10 = ExpWnfLookupNameInstance(*(__int64 *)v27, v12, &v24);
        v21 = v10;
        if ( v10 != -1073741772 || v25 == 3 )
        {
          if ( v10 < 0 )
            goto LABEL_37;
          if ( v14 )
          {
LABEL_29:
            if ( NameInfoClass )
            {
              if ( NameInfoClass == WnfInfoSubscribersPresent )
              {
                if ( v24 && *(_DWORD *)(v24 + 160) )
                  goto LABEL_36;
              }
              else if ( !v24 || !*(_DWORD *)(v24 + 164) )
              {
                goto LABEL_36;
              }
              v13 = 0;
            }
LABEL_36:
            *(_DWORD *)InfoBuffer = v13;
            v10 = 0;
            v21 = 0;
            goto LABEL_37;
          }
          v19 = *(void **)(v24 + 72);
        }
        else
        {
          v10 = ExpWnfLookupPermanentName(v12, &P);
          v21 = v10;
          if ( v10 < 0 )
            goto LABEL_37;
          if ( v14 )
            goto LABEL_29;
          v19 = (void *)*((_QWORD *)P + 2);
        }
        v10 = ExpWnfCheckCallerAccess(v19, v15);
        v21 = v10;
        if ( v10 < 0 )
          goto LABEL_37;
        goto LABEL_29;
      }
    }
  }
LABEL_37:
  if ( v10 == -1073741772 && NameInfoClass == WnfInfoStateNameExist )
  {
    *(_DWORD *)InfoBuffer = 0;
    v21 = 0;
  }
  if ( v24 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v24 + 8));
  if ( *(_QWORD *)v27 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v27 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  ExpWnfReleaseCapturedScopeInstanceId(v22, v30, PreviousMode);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v21;
}
