/*
 * XREFs of PopDiagTraceProcessorThrottlePerfTrack @ 0x140231F50
 * Callers:
 *     PpmRegisterPerfCap @ 0x14022D480 (PpmRegisterPerfCap.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceProcessorThrottlePerfTrack(int a1, ULONG a2)
{
  NTSTATUS v3; // eax
  ULONG UserDataCount; // [rsp+30h] [rbp-59h]
  __int16 v6; // [rsp+40h] [rbp-49h] BYREF
  int v7; // [rsp+44h] [rbp-45h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  int *v10; // [rsp+60h] [rbp-29h]
  int v11; // [rsp+68h] [rbp-21h]
  int v12; // [rsp+6Ch] [rbp-1Dh]
  __int16 *v13; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+78h] [rbp-11h]
  int v15; // [rsp+7Ch] [rbp-Dh]
  wchar_t *v16; // [rsp+80h] [rbp-9h]
  int v17; // [rsp+88h] [rbp-1h]
  int v18; // [rsp+8Ch] [rbp+3h]
  wchar_t pszDest[24]; // [rsp+A0h] [rbp+17h] BYREF
  int v20; // [rsp+F0h] [rbp+67h] BYREF

  v20 = a1;
  LOBYTE(v3) = aProcessor99999[20];
  wcscpy(pszDest, L"Processor 9999999999");
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK);
    if ( (_BYTE)v3 )
    {
      UserDataCount = a2;
      v3 = RtlStringCchPrintfExW(pszDest, 0x15uLL, 0LL, &pcchRemaining, 0, L"Processor %u", UserDataCount);
      if ( v3 >= 0 )
      {
        v7 = 0;
        UserData.Reserved = 0;
        v12 = 0;
        v15 = 0;
        v18 = 0;
        UserData.Ptr = (ULONGLONG)&v20;
        v10 = &v7;
        v13 = &v6;
        v16 = pszDest;
        UserData.Size = 4;
        v17 = 2 * (unsigned __int16)(21 - pcchRemaining);
        v11 = 4;
        v6 = 21 - pcchRemaining;
        v14 = 2;
        LOBYTE(v3) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return v3;
}
