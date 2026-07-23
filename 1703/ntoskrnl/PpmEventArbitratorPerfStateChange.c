/*
 * XREFs of PpmEventArbitratorPerfStateChange @ 0x140146EBC
 * Callers:
 *     PpmPerfArbitratorApplyProcessorState @ 0x140146DA0 (PpmPerfArbitratorApplyProcessorState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeGetProcessorNumberFromIndex @ 0x14008B4A0 (KeGetProcessorNumberFromIndex.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventArbitratorPerfStateChange(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  REGHANDLE v5; // rdi
  BOOLEAN result; // al
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-C0h] BYREF
  int v8; // [rsp+4Ch] [rbp-BCh] BYREF
  int v9; // [rsp+50h] [rbp-B8h] BYREF
  int v10; // [rsp+54h] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v12; // [rsp+68h] [rbp-A0h]
  __int64 v13; // [rsp+70h] [rbp-98h]
  _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+78h] [rbp-90h]
  __int64 v15; // [rsp+80h] [rbp-88h]
  unsigned __int8 *p_Number; // [rsp+88h] [rbp-80h]
  __int64 v17; // [rsp+90h] [rbp-78h]
  __int64 v18; // [rsp+98h] [rbp-70h]
  __int64 v19; // [rsp+A0h] [rbp-68h]
  __int64 v20; // [rsp+A8h] [rbp-60h]
  __int64 v21; // [rsp+B0h] [rbp-58h]
  __int64 v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-48h]
  __int64 v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  __int64 v26; // [rsp+D8h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-28h]
  __int64 v28; // [rsp+E8h] [rbp-20h]
  __int64 v29; // [rsp+F0h] [rbp-18h]
  int *v30; // [rsp+F8h] [rbp-10h]
  __int64 v31; // [rsp+100h] [rbp-8h]
  int *v32; // [rsp+108h] [rbp+0h]
  __int64 v33; // [rsp+110h] [rbp+8h]
  int *v34; // [rsp+118h] [rbp+10h]
  __int64 v35; // [rsp+120h] [rbp+18h]
  int v36; // [rsp+170h] [rbp+68h] BYREF
  int v37; // [rsp+178h] [rbp+70h] BYREF

  v37 = a3;
  v36 = a2;
  v3 = *(_QWORD *)(a1 + 24312);
  v5 = PpmEtwHandle;
  v8 = *(_DWORD *)(v3 + 88);
  v9 = *(_DWORD *)(v3 + 100);
  if ( PpmEtwRegistered || (result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PERF_STATE_CHANGE)) != 0 )
  {
    KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 36), &ProcNumber);
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v8;
    v13 = 4LL;
    v12 = &v9;
    v15 = 2LL;
    p_ProcNumber = &ProcNumber;
    v17 = 1LL;
    p_Number = &ProcNumber.Number;
    v19 = 4LL;
    v18 = v3 + 96;
    v20 = v3 + 112;
    v22 = v3 + 104;
    v24 = v3 + 108;
    v26 = v3 + 116;
    v28 = v3 + 120;
    v21 = 4LL;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 4LL;
    v29 = 4LL;
    v10 = *(unsigned __int8 *)(v3 + 124);
    v30 = &v10;
    v32 = &v36;
    v34 = &v37;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    return EtwWriteEx(v5, &PPM_ETW_PROCESSOR_PERF_STATE_CHANGE, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
  }
  return result;
}
