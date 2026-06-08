/*
 * XREFs of ProcLibTraceSummary2 @ 0x1C002277C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 *     ProcLibTraceControlCallback @ 0x1C0023AE0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0003530 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001D7B4 (GetRegistryDwordValueNoDefault.c)
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
  unsigned int v11; // r9d
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int RegistryDwordValueNoDefault; // eax
  unsigned int v23; // ecx
  unsigned int v25; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-81h] BYREF
  int v28; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v29; // [rsp+40h] [rbp-79h] BYREF
  int v30; // [rsp+44h] [rbp-75h] BYREF
  int v31; // [rsp+48h] [rbp-71h] BYREF
  struct _PROCESSOR_NUMBER v32; // [rsp+4Ch] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 *p_Number; // [rsp+60h] [rbp-59h]
  __int64 v35; // [rsp+68h] [rbp-51h]
  int *v36; // [rsp+70h] [rbp-49h]
  __int64 v37; // [rsp+78h] [rbp-41h]
  int *v38; // [rsp+80h] [rbp-39h]
  __int64 v39; // [rsp+88h] [rbp-31h]
  unsigned int *v40; // [rsp+90h] [rbp-29h]
  __int64 v41; // [rsp+98h] [rbp-21h]
  int *v42; // [rsp+A0h] [rbp-19h]
  __int64 v43; // [rsp+A8h] [rbp-11h]
  unsigned int *v44; // [rsp+B0h] [rbp-9h]
  __int64 v45; // [rsp+B8h] [rbp-1h]
  unsigned int *v46; // [rsp+C0h] [rbp+7h]
  __int64 v47; // [rsp+C8h] [rbp+Fh]
  int *v48; // [rsp+D0h] [rbp+17h]
  __int64 v49; // [rsp+D8h] [rbp+1Fh]

  v3 = (const EVENT_DESCRIPTOR *)"8";
  if ( !a2 )
    v3 = EventDescriptor;
  LOBYTE(ProcessorNumber) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v32);
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
      v11 = 0;
      v29 = 0;
      v30 = 0;
      v28 = 0;
      v31 = 100;
      v26 = 100;
      v27 = 100;
      v25 = 0;
      if ( (v5 & 0x300000300LL) != 0 )
      {
        v29 = *(_DWORD *)(a1 + 1100);
        v30 = ((v5 & 0x200000200LL) != 0) + 2;
        goto LABEL_10;
      }
      if ( (v5 & 0xE0000000000LL) != 0 )
      {
        v13 = *(_DWORD *)(v8 + 16);
        v30 = 4;
      }
      else
      {
        if ( (v5 & 0x7F077) == 0 || (v12 = *v7, v29 = v12, v30 = 1, v12) && *((_BYTE *)v7 + 16) == 1 )
        {
LABEL_10:
          if ( (v5 & 0x1000000000LL) != 0 )
          {
            v14 = *(_DWORD **)(a1 + 1160);
            if ( !v14 )
              goto LABEL_41;
            v28 = 4;
            v31 = v14[5];
            v26 = v14[6];
            v27 = v14[7];
            v11 = v14[4];
          }
          else
          {
            if ( (v5 & 0x8000000) == 0 )
            {
              if ( (v5 & 0x80000000) != 0 )
              {
                v28 = 2;
                v11 = *(_DWORD *)(qword_1C0019AA0 + 28);
                v25 = v11;
                v26 = 100 * *(_DWORD *)(qword_1C0019AA0 + 36) / v11;
                v27 = 100 * *(_DWORD *)(qword_1C0019AA0 + 32) / v11;
              }
              else
              {
                if ( (v5 & 0x73300000) == 0 )
                  goto LABEL_41;
                v28 = 1;
                if ( (v5 & 0x40000000) != 0 )
                  v9 = *(_DWORD **)(a1 + 424);
                if ( (v5 & 0x70000000) != 0 )
                {
                  v11 = v9[2];
                  v25 = v11;
                  v6 = 100 * v9[12 * (*v9 - 1) + 2] / v11;
                  v26 = v6;
                }
                if ( (v5 & 0x3300000) != 0 )
                  v27 = v6 * v10[5 * (*v10 - 1) + 1] / 0x64;
                else
                  v27 = v6;
              }
LABEL_20:
              if ( v11 )
              {
LABEL_21:
                UserData.Ptr = (unsigned __int64)&v32;
                *(_QWORD *)&UserData.Size = 2LL;
                p_Number = &v32.Number;
                v35 = 1LL;
                v36 = &v29;
                v37 = 4LL;
                v38 = &v30;
                v40 = &v25;
                v42 = &v31;
                v44 = &v26;
                v46 = &v27;
                v48 = &v28;
                v39 = 4LL;
                v41 = 4LL;
                v43 = 4LL;
                v45 = 4LL;
                v47 = 4LL;
                v49 = 4LL;
                EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3, 0LL, 9u, &UserData);
                LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015
                                                                                                 + 2512))(
                                            WdfDriverGlobals,
                                            *(_QWORD *)(a1 + 208));
                return ProcessorNumber;
              }
LABEL_41:
              RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                              (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                              (__int64)L"~MHz",
                                              (__int64)&v25);
              v23 = v25;
              if ( RegistryDwordValueNoDefault < 0 )
                v23 = 0;
              v25 = v23;
              goto LABEL_21;
            }
            v15 = *(_DWORD **)(a1 + 240);
            if ( !v15 )
            {
              if ( !*(_QWORD *)(a1 + 368) )
                goto LABEL_41;
              v28 = 3;
              v16 = GetRegistryDwordValueNoDefault(
                      (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                      (__int64)L"~MHz",
                      (__int64)&v25);
              v17 = *(_QWORD *)(a1 + 368);
              v11 = v25;
              if ( v16 < 0 )
                v11 = 0;
              v18 = 100LL * *(_QWORD *)(a1 + 360);
              v25 = v11;
              v31 = v18 / v17;
              v19 = 100LL * *(_QWORD *)(a1 + 376) / v17;
              v20 = 100LL * *(_QWORD *)(a1 + 384);
              v26 = v19;
              v21 = v20 / v17;
              if ( !(_DWORD)v21 )
                LODWORD(v21) = 1;
              v27 = v21;
              if ( !(_DWORD)v19 )
                v26 = 1;
              goto LABEL_20;
            }
            v28 = 3;
            v31 = v15[17];
            v26 = v15[19];
            v27 = v15[20];
            v11 = v15[16];
          }
          v25 = v11;
          goto LABEL_20;
        }
        v13 = v12 + 1;
      }
      v29 = v13;
      goto LABEL_10;
    }
  }
  return ProcessorNumber;
}
