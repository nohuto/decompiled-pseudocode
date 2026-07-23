/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x140582464
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ExpWnfLookupPermanentName @ 0x1404E0E80 (ExpWnfLookupPermanentName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140500318 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14050036C (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x140501678 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140502F44 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x140503078 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140598790 (ExpWnfCheckCrossScopeAccess.c)
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
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // edi
  int v14; // r12d
  ACCESS_MASK v15; // r15d
  struct _KTHREAD *v16; // r8
  _KPROCESS *Process; // rdx
  void *v18; // rcx
  NTSTATUS v20; // [rsp+30h] [rbp-98h]
  int v21; // [rsp+38h] [rbp-90h]
  int v22; // [rsp+3Ch] [rbp-8Ch]
  __int64 v23; // [rsp+40h] [rbp-88h] BYREF
  int v24; // [rsp+48h] [rbp-80h]
  unsigned __int64 v25; // [rsp+50h] [rbp-78h] BYREF
  int v26[2]; // [rsp+58h] [rbp-70h] BYREF
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  PSID Sid[4]; // [rsp+68h] [rbp-60h] BYREF
  PSID v29[3]; // [rsp+88h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v26 = 0LL;
  v23 = 0LL;
  v21 = 0;
  v29[0] = 0LL;
  v29[1] = 0LL;
  v10 = ExpCaptureWnfStateName((__int64 *)StateName, &v25, PreviousMode);
  v20 = v10;
  if ( v10 >= 0 )
  {
    v12 = v25;
    v24 = (v25 >> 4) & 3;
    v21 = (v25 >> 6) & 0xF;
    v10 = ExpWnfCaptureScopeInstanceId(v21, (char *)ExplicitScope, v11, (__int64)Sid, v29);
    v20 = v10;
    if ( v10 >= 0 )
    {
      if ( (unsigned int)NameInfoClass > WnfInfoIsQuiescent )
      {
        v10 = -1073741821;
        v20 = -1073741821;
        goto LABEL_38;
      }
      if ( InfoBufferSize < 4 )
      {
        v10 = -1073741811;
        v20 = -1073741811;
        goto LABEL_38;
      }
      if ( PreviousMode )
        ProbeForWrite(InfoBuffer, InfoBufferSize, 4u);
      v13 = 1;
      if ( NameInfoClass )
      {
        v22 = 0;
      }
      else
      {
        v22 = 1;
        if ( ExplicitScope )
        {
          v10 = -1073741811;
          v20 = -1073741811;
          goto LABEL_38;
        }
      }
      if ( PreviousMode && NameInfoClass )
      {
        v14 = 0;
        if ( ExplicitScope )
        {
          v10 = ExpWnfCheckCrossScopeAccess(v12);
          v20 = v10;
          if ( v10 < 0 )
            goto LABEL_38;
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
        if ( v22 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
        }
        else
        {
          v16 = KeGetCurrentThread();
          Process = v16->ApcState.Process;
        }
        v12 = v25;
      }
      else
      {
        Process = PsInitialSystemProcess;
      }
      v10 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v26, (__int64)Process, (__int64)v16, v21, Sid[0]);
      v20 = v10;
      if ( v10 >= 0 )
      {
        v10 = ExpWnfLookupNameInstance(*(__int64 *)v26, v12, &v23);
        v20 = v10;
        if ( v10 != -1073741772 || v24 == 3 )
        {
          if ( v10 < 0 )
            goto LABEL_38;
          if ( v14 )
          {
LABEL_30:
            if ( NameInfoClass )
            {
              if ( NameInfoClass == WnfInfoSubscribersPresent )
              {
                if ( v23 && *(_DWORD *)(v23 + 160) )
                  goto LABEL_37;
              }
              else if ( !v23 || !*(_DWORD *)(v23 + 164) )
              {
                goto LABEL_37;
              }
              v13 = 0;
            }
LABEL_37:
            *(_DWORD *)InfoBuffer = v13;
            v10 = 0;
            v20 = 0;
            goto LABEL_38;
          }
          v18 = *(void **)(v23 + 72);
        }
        else
        {
          v10 = ExpWnfLookupPermanentName(v12, &P);
          v20 = v10;
          if ( v10 < 0 )
            goto LABEL_38;
          if ( v14 )
            goto LABEL_30;
          v18 = (void *)*((_QWORD *)P + 2);
        }
        v10 = ExpWnfCheckCallerAccess(v18, v15);
        v20 = v10;
        if ( v10 < 0 )
          goto LABEL_38;
        goto LABEL_30;
      }
    }
  }
LABEL_38:
  if ( v10 == -1073741772 && NameInfoClass == WnfInfoStateNameExist )
  {
    *(_DWORD *)InfoBuffer = 0;
    v20 = 0;
  }
  if ( v23 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v23 + 8));
  if ( *(_QWORD *)v26 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v26 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  ExpWnfReleaseCapturedScopeInstanceId(v21, v29, PreviousMode);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v20;
}
