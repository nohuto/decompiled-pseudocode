/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1404476C4
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404584F8 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404EF570 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x1404EF5B8 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1404EF98C (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1404EFED4 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x1404F0008 (ExpWnfCheckCallerAccess.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _DWORD *v5; // rsi
  const void *v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  int v13; // esi
  int v14; // r13d
  ACCESS_MASK v15; // r12d
  struct _KTHREAD *v16; // r8
  _KPROCESS *Process; // rdx
  NTSTATUS v19; // [rsp+30h] [rbp-98h]
  unsigned int v20; // [rsp+38h] [rbp-90h]
  int v21; // [rsp+3Ch] [rbp-8Ch]
  __int64 v22; // [rsp+40h] [rbp-88h] BYREF
  int v23; // [rsp+48h] [rbp-80h]
  unsigned __int64 v24; // [rsp+50h] [rbp-78h] BYREF
  int v25[2]; // [rsp+58h] [rbp-70h] BYREF
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  int v27; // [rsp+68h] [rbp-60h]
  int v28; // [rsp+6Ch] [rbp-5Ch]
  PSID Sid[4]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v30[7]; // [rsp+90h] [rbp-38h] BYREF

  v5 = InfoBuffer;
  v6 = ExplicitScope;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v25 = 0LL;
  v22 = 0LL;
  v20 = 0;
  v30[0] = 0LL;
  v30[1] = 0LL;
  LOBYTE(ExplicitScope) = PreviousMode;
  v10 = ExpCaptureWnfStateName(StateName, &v24, ExplicitScope);
  v19 = v10;
  if ( v10 >= 0 )
  {
    v12 = v24;
    v23 = (v24 >> 4) & 3;
    v20 = (v24 >> 6) & 0xF;
    v10 = ExpWnfCaptureScopeInstanceId((v24 >> 6) & 0xF, v6, v11, Sid, v30);
    v19 = v10;
    if ( v10 >= 0 )
    {
      if ( (unsigned int)NameInfoClass > WnfInfoIsQuiescent )
      {
        v10 = -1073741821;
        v19 = -1073741821;
      }
      else
      {
        v11 = 4LL;
        v27 = 4;
        v28 = 4;
        if ( InfoBufferSize >= 4 )
        {
          if ( PreviousMode )
            ProbeForWrite(v5, InfoBufferSize, 4u);
          v13 = 1;
          if ( NameInfoClass )
          {
            v21 = 0;
          }
          else
          {
            v21 = 1;
            if ( v6 )
            {
              v10 = -1073741811;
              v19 = -1073741811;
              goto LABEL_51;
            }
          }
          if ( PreviousMode && NameInfoClass )
          {
            v14 = 0;
            if ( v6 )
            {
              v10 = ExpWnfCheckCrossScopeAccess(v12);
              v19 = v10;
              if ( v10 < 0 )
                goto LABEL_51;
            }
          }
          else
          {
            v14 = 1;
          }
          v15 = 0;
          if ( !v14 && (unsigned int)(NameInfoClass - 1) <= 1 )
            v15 = 2;
          LODWORD(v16) = 0;
          if ( PreviousMode )
          {
            if ( v21 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
            }
            else
            {
              v16 = KeGetCurrentThread();
              Process = v16->ApcState.Process;
            }
            v12 = v24;
          }
          else
          {
            LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
          }
          v10 = ExpWnfResolveScopeInstance((int)v25, (int)Process, (int)v16, v20, Sid[0]);
          v19 = v10;
          if ( v10 < 0 )
            goto LABEL_51;
          v10 = ExpWnfLookupNameInstance(*(_QWORD *)v25, v12, &v22);
          v19 = v10;
          if ( v10 != -1073741772 || v23 == 3 )
          {
            if ( v10 >= 0 )
            {
              if ( v14 )
                goto LABEL_29;
              v10 = ExpWnfCheckCallerAccess(*(PSECURITY_DESCRIPTOR *)(v22 + 72), v15);
              v19 = v10;
              if ( v10 >= 0 )
                goto LABEL_29;
            }
          }
          else
          {
            v10 = ExpWnfLookupPermanentName(v12, &P);
            v19 = v10;
            if ( v10 >= 0 )
            {
              if ( v14 || (v10 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v15), v19 = v10, v10 >= 0) )
              {
LABEL_29:
                if ( NameInfoClass )
                {
                  if ( NameInfoClass == WnfInfoSubscribersPresent )
                  {
                    if ( v22 && *(_DWORD *)(v22 + 160) )
                      goto LABEL_36;
                  }
                  else if ( !v22 || !*(_DWORD *)(v22 + 164) )
                  {
                    goto LABEL_36;
                  }
                  v13 = 0;
                }
LABEL_36:
                *(_DWORD *)InfoBuffer = v13;
                v10 = 0;
                v19 = 0;
                v5 = InfoBuffer;
                goto LABEL_37;
              }
            }
          }
LABEL_51:
          v5 = InfoBuffer;
          goto LABEL_37;
        }
        v10 = -1073741811;
        v19 = -1073741811;
      }
    }
  }
LABEL_37:
  if ( v10 == -1073741772 && NameInfoClass == WnfInfoStateNameExist )
  {
    *v5 = 0;
    v19 = 0;
  }
  if ( v22 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v22 + 8));
  if ( *(_QWORD *)v25 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v25 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  LOBYTE(v11) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId(v20, v30, v11);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v19;
}
