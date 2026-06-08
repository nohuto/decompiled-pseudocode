/*
 * XREFs of ProcLibTraceSummary2 @ 0x1C0020158
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EB90 (ProcLibDeviceStart.c)
 *     ProcLibTraceControlCallback @ 0x1C0020770 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0005D20 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0029830 (GetRegistryDwordValueNoDefault.c)
 */

char __fastcall ProcLibTraceSummary2(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdi
  int ProcessorNumber; // eax
  __int64 v5; // r8
  unsigned int v6; // r10d
  int *v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // rdx
  _DWORD *v10; // r11
  __int64 v11; // r9
  int v12; // eax
  int v13; // eax
  unsigned int *v14; // rcx
  unsigned int *v15; // rcx
  int RegistryDwordValueNoDefault; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v24; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-81h] BYREF
  int v27; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v28; // [rsp+40h] [rbp-79h] BYREF
  int v29; // [rsp+44h] [rbp-75h] BYREF
  int v30; // [rsp+48h] [rbp-71h] BYREF
  struct _PROCESSOR_NUMBER v31; // [rsp+4Ch] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 *p_Number; // [rsp+60h] [rbp-59h]
  __int64 v34; // [rsp+68h] [rbp-51h]
  int *v35; // [rsp+70h] [rbp-49h]
  __int64 v36; // [rsp+78h] [rbp-41h]
  int *v37; // [rsp+80h] [rbp-39h]
  __int64 v38; // [rsp+88h] [rbp-31h]
  unsigned int *v39; // [rsp+90h] [rbp-29h]
  __int64 v40; // [rsp+98h] [rbp-21h]
  int *v41; // [rsp+A0h] [rbp-19h]
  __int64 v42; // [rsp+A8h] [rbp-11h]
  unsigned int *v43; // [rsp+B0h] [rbp-9h]
  __int64 v44; // [rsp+B8h] [rbp-1h]
  unsigned int *v45; // [rsp+C0h] [rbp+7h]
  __int64 v46; // [rsp+C8h] [rbp+Fh]
  int *v47; // [rsp+D0h] [rbp+17h]
  __int64 v48; // [rsp+D8h] [rbp+1Fh]

  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_SUMMARY2_RUNDOWN;
  if ( !a2 )
    v3 = EventDescriptor;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, v3);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v31);
    if ( ProcessorNumber >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v5 = *(_QWORD *)(a1 + 264);
      v6 = 100;
      v7 = *(int **)(a1 + 496);
      v8 = *(_QWORD *)(a1 + 512);
      v9 = *(_DWORD **)(a1 + 416);
      v10 = *(_DWORD **)(a1 + 472);
      v11 = 0LL;
      v28 = 0;
      v29 = 0;
      v27 = 0;
      v30 = 100;
      v26 = 100;
      v25 = 100;
      v24 = 0;
      if ( (v5 & 0x300000300LL) != 0 )
      {
        v28 = *(_DWORD *)(a1 + 1100);
        v29 = ((v5 & 0x200000200LL) != 0) + 2;
        goto LABEL_14;
      }
      if ( (v5 & 0xE0000000000LL) != 0 )
      {
        v12 = *(_DWORD *)(v8 + 16);
        v29 = 4;
      }
      else
      {
        if ( (v5 & 0x7F077) == 0 || (v13 = *v7, v28 = v13, v29 = 1, v13) && *((_BYTE *)v7 + 16) == 1 )
        {
LABEL_14:
          if ( (v5 & 0x1000000000LL) != 0 )
          {
            v14 = *(unsigned int **)(a1 + 1160);
            if ( !v14 )
              goto LABEL_40;
            v27 = 4;
            v30 = v14[5];
            v26 = v14[6];
            v25 = v14[7];
            v11 = v14[4];
          }
          else
          {
            if ( (v5 & 0x8000000) == 0 )
            {
              if ( (v5 & 0x80000000) != 0 )
              {
                v27 = 2;
                v11 = *(unsigned int *)(qword_1C00118B0 + 28);
                v24 = v11;
                v26 = 100 * *(_DWORD *)(qword_1C00118B0 + 36) / (unsigned int)v11;
                v25 = 100 * *(_DWORD *)(qword_1C00118B0 + 32) / (unsigned int)v11;
              }
              else
              {
                if ( (v5 & 0x73300000) == 0 )
                  goto LABEL_40;
                v27 = 1;
                if ( (v5 & 0x40000000) != 0 )
                  v9 = *(_DWORD **)(a1 + 424);
                if ( (v5 & 0x70000000) != 0 )
                {
                  v11 = (unsigned int)v9[2];
                  v24 = v11;
                  v6 = 100 * v9[12 * (*v9 - 1) + 2] / (unsigned int)v11;
                  v26 = v6;
                }
                if ( (v5 & 0x3300000) != 0 )
                  v25 = v6 * v10[5 * (*v10 - 1) + 1] / 0x64;
                else
                  v25 = v6;
              }
              goto LABEL_39;
            }
            v15 = *(unsigned int **)(a1 + 240);
            if ( !v15 )
            {
              if ( !*(_QWORD *)(a1 + 368) )
                goto LABEL_40;
              v27 = 3;
              RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                              L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                              L"~MHz",
                                              &v24,
                                              0LL);
              v17 = *(_QWORD *)(a1 + 368);
              v11 = v24;
              if ( RegistryDwordValueNoDefault < 0 )
                v11 = 0LL;
              v18 = 100LL * *(_QWORD *)(a1 + 360);
              v24 = v11;
              v30 = v18 / v17;
              v19 = 100LL * *(_QWORD *)(a1 + 376) / v17;
              v20 = 100LL * *(_QWORD *)(a1 + 384) / v17;
              if ( !(_DWORD)v20 )
                LODWORD(v20) = 1;
              v25 = v20;
              if ( !(_DWORD)v19 )
                LODWORD(v19) = 1;
              v26 = v19;
              goto LABEL_39;
            }
            v27 = 3;
            v30 = v15[17];
            v26 = v15[19];
            v25 = v15[20];
            v11 = v15[16];
          }
          v24 = v11;
LABEL_39:
          if ( (_DWORD)v11 )
          {
LABEL_43:
            UserData.Ptr = (unsigned __int64)&v31;
            *(_QWORD *)&UserData.Size = 2LL;
            p_Number = &v31.Number;
            v34 = 1LL;
            v35 = &v28;
            v36 = 4LL;
            v37 = &v29;
            v39 = &v24;
            v41 = &v30;
            v43 = &v26;
            v45 = &v25;
            v47 = &v27;
            v38 = 4LL;
            v40 = 4LL;
            v42 = 4LL;
            v44 = 4LL;
            v46 = 4LL;
            v48 = 4LL;
            EtwWrite(ProcLibEtwHandle, v3, 0LL, 9u, &UserData);
            LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                        WdfDriverGlobals,
                                        *(_QWORD *)(a1 + 208));
            return ProcessorNumber;
          }
LABEL_40:
          v21 = GetRegistryDwordValueNoDefault(
                  L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                  L"~MHz",
                  &v24,
                  v11);
          v22 = v24;
          if ( v21 < 0 )
            v22 = 0;
          v24 = v22;
          goto LABEL_43;
        }
        v12 = v13 + 1;
      }
      v28 = v12;
      goto LABEL_14;
    }
  }
  return ProcessorNumber;
}
