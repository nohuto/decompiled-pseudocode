/*
 * XREFs of PpmEventHeteroPolicy @ 0x1405C0784
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PpmEventHeteroPolicy(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  REGHANDLE v3; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-59h] BYREF
  int *v6; // [rsp+40h] [rbp-49h]
  int v7; // [rsp+48h] [rbp-41h]
  int v8; // [rsp+4Ch] [rbp-3Dh]
  int *v9; // [rsp+50h] [rbp-39h]
  int v10; // [rsp+58h] [rbp-31h]
  int v11; // [rsp+5Ch] [rbp-2Dh]
  int *v12; // [rsp+60h] [rbp-29h]
  int v13; // [rsp+68h] [rbp-21h]
  int v14; // [rsp+6Ch] [rbp-1Dh]
  int *v15; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  int *v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  int *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  int *v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+ACh] [rbp+23h]
  int *v27; // [rsp+B0h] [rbp+27h]
  int v28; // [rsp+B8h] [rbp+2Fh]
  int v29; // [rsp+BCh] [rbp+33h]

  v1 = &PPM_ETW_HETEROGENEOUS_POLICIES_CHANGED;
  v2 = (const EVENT_DESCRIPTOR *)L"x";
  if ( !a1 )
    v2 = &PPM_ETW_HETEROGENEOUS_POLICIES_CHANGED;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      UserData.Ptr = (ULONGLONG)&PpmHeteroPolicy;
      v6 = &PopHeteroSystem;
      v9 = &KiDesiredHeteroCpuPolicy;
      v12 = &KiDefaultDynamicHeteroCpuPolicy;
      v15 = &KiDynamicHeteroCpuPolicyMask;
      v18 = &KiDynamicHeteroCpuPolicyImportant;
      v21 = &KiDynamicHeteroCpuPolicyImportantShort;
      v24 = &KiDynamicHeteroCpuPolicyImportantPriority;
      v27 = &KiDynamicHeteroCpuPolicyExpectedRuntime;
      UserData.Size = 4;
      v7 = 4;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      LOBYTE(v1) = EtwWrite(v3, v2, 0LL, 9u, &UserData);
    }
  }
  return (char)v1;
}
