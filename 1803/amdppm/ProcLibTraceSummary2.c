/*
 * XREFs of ProcLibTraceSummary2 @ 0x1C0028498
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026E8C (ProcLibDeviceStart.c)
 *     ProcLibTraceControlCallback @ 0x1C0028AA0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0009108 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0021D48 (GetRegistryDwordValueNoDefault.c)
 */

char __fastcall ProcLibTraceSummary2(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdi
  int ProcessorNumber; // eax
  __int64 v5; // r8
  unsigned int v6; // r10d
  int *v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v9; // r11
  unsigned int v10; // r9d
  int v11; // eax
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  int RegistryDwordValueNoDefault; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v22; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v23; // [rsp+3Ch] [rbp-75h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-71h] BYREF
  int v25; // [rsp+44h] [rbp-6Dh] BYREF
  int v26; // [rsp+48h] [rbp-69h] BYREF
  int v27; // [rsp+4Ch] [rbp-65h] BYREF
  int v28; // [rsp+50h] [rbp-61h] BYREF
  struct _PROCESSOR_NUMBER v29; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int8 *p_Number; // [rsp+68h] [rbp-49h]
  __int64 v32; // [rsp+70h] [rbp-41h]
  int *v33; // [rsp+78h] [rbp-39h]
  __int64 v34; // [rsp+80h] [rbp-31h]
  int *v35; // [rsp+88h] [rbp-29h]
  __int64 v36; // [rsp+90h] [rbp-21h]
  unsigned int *v37; // [rsp+98h] [rbp-19h]
  __int64 v38; // [rsp+A0h] [rbp-11h]
  int *v39; // [rsp+A8h] [rbp-9h]
  __int64 v40; // [rsp+B0h] [rbp-1h]
  unsigned int *v41; // [rsp+B8h] [rbp+7h]
  __int64 v42; // [rsp+C0h] [rbp+Fh]
  unsigned int *v43; // [rsp+C8h] [rbp+17h]
  __int64 v44; // [rsp+D0h] [rbp+1Fh]
  int *v45; // [rsp+D8h] [rbp+27h]
  __int64 v46; // [rsp+E0h] [rbp+2Fh]

  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_SUMMARY2_RUNDOWN;
  if ( !a2 )
    v3 = EventDescriptor;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, v3);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v29);
    if ( ProcessorNumber >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v5 = *(_QWORD *)(a1 + 264);
      v6 = 100;
      v7 = *(int **)(a1 + 496);
      v8 = *(_DWORD **)(a1 + 416);
      v9 = *(_DWORD **)(a1 + 472);
      v26 = 0;
      v10 = 0;
      v27 = 0;
      v25 = 0;
      v28 = 100;
      v24 = 100;
      v23 = 100;
      v22 = 0;
      if ( (v5 & 0x300000300LL) != 0 )
      {
        v26 = *(_DWORD *)(a1 + 1100);
        v27 = ((v5 & 0x200000200LL) != 0) + 2;
      }
      else if ( (v5 & 0xE0000000000LL) != 0 )
      {
        v26 = *(_DWORD *)(*(_QWORD *)(a1 + 512) + 16LL);
        v27 = 4;
      }
      else if ( (v5 & 0x7F077) != 0 )
      {
        v11 = *v7;
        v26 = v11;
        v27 = 1;
        if ( !v11 || *((_BYTE *)v7 + 16) != 1 )
          v26 = v11 + 1;
      }
      if ( (v5 & 0x1000000000LL) != 0 )
      {
        v12 = *(_DWORD **)(a1 + 1160);
        if ( !v12 )
          goto LABEL_39;
        v25 = 4;
        v28 = v12[5];
        v24 = v12[6];
        v23 = v12[7];
        v10 = v12[4];
      }
      else
      {
        if ( (v5 & 0x8000000) == 0 )
        {
          if ( (v5 & 0x80000000) != 0 )
          {
            v25 = 2;
            v10 = *(_DWORD *)(qword_1C00118E0 + 28);
            v22 = v10;
            v24 = 100 * *(_DWORD *)(qword_1C00118E0 + 36) / v10;
            v23 = 100 * *(_DWORD *)(qword_1C00118E0 + 32) / v10;
          }
          else
          {
            if ( (v5 & 0x73300000) == 0 )
              goto LABEL_39;
            v25 = 1;
            if ( (v5 & 0x40000000) != 0 )
              v8 = *(_DWORD **)(a1 + 424);
            if ( (v5 & 0x70000000) != 0 )
            {
              v10 = v8[2];
              v22 = v10;
              v6 = 100 * v8[12 * (*v8 - 1) + 2] / v10;
              v24 = v6;
            }
            if ( (v5 & 0x3300000) != 0 )
              v23 = v6 * v9[5 * (*v9 - 1) + 1] / 0x64;
            else
              v23 = v6;
          }
          goto LABEL_38;
        }
        v13 = *(_DWORD **)(a1 + 240);
        if ( !v13 )
        {
          if ( !*(_QWORD *)(a1 + 368) )
            goto LABEL_39;
          v25 = 3;
          RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                          (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                          (__int64)L"~MHz",
                                          (__int64)&v22);
          v15 = *(_QWORD *)(a1 + 368);
          v10 = v22;
          if ( RegistryDwordValueNoDefault < 0 )
            v10 = 0;
          v16 = 100LL * *(_QWORD *)(a1 + 360);
          v22 = v10;
          v28 = v16 / v15;
          v17 = 100LL * *(_QWORD *)(a1 + 376) / v15;
          v18 = 100LL * *(_QWORD *)(a1 + 384) / v15;
          if ( !(_DWORD)v18 )
            LODWORD(v18) = 1;
          v23 = v18;
          if ( !(_DWORD)v17 )
            LODWORD(v17) = 1;
          v24 = v17;
          goto LABEL_38;
        }
        v25 = 3;
        v28 = v13[17];
        v24 = v13[19];
        v23 = v13[20];
        v10 = v13[16];
      }
      v22 = v10;
LABEL_38:
      if ( v10 )
      {
LABEL_42:
        UserData.Ptr = (unsigned __int64)&v29;
        *(_QWORD *)&UserData.Size = 2LL;
        p_Number = &v29.Number;
        v32 = 1LL;
        v33 = &v26;
        v34 = 4LL;
        v35 = &v27;
        v37 = &v22;
        v39 = &v28;
        v41 = &v24;
        v43 = &v23;
        v45 = &v25;
        v36 = 4LL;
        v38 = 4LL;
        v40 = 4LL;
        v42 = 4LL;
        v44 = 4LL;
        v46 = 4LL;
        EtwWrite(ProcLibEtwHandle, v3, 0LL, 9u, &UserData);
        LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                    WdfDriverGlobals,
                                    *(_QWORD *)(a1 + 208));
        return ProcessorNumber;
      }
LABEL_39:
      v19 = GetRegistryDwordValueNoDefault(
              (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
              (__int64)L"~MHz",
              (__int64)&v22);
      v20 = v22;
      if ( v19 < 0 )
        v20 = 0;
      v22 = v20;
      goto LABEL_42;
    }
  }
  return ProcessorNumber;
}
