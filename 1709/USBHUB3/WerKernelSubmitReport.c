/*
 * XREFs of WerKernelSubmitReport @ 0x1C0038338
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C0075A48 (TelemetryData_SubmitReport.c)
 * Callees:
 *     WerpGetRegistryKey @ 0x1C0037B2C (WerpGetRegistryKey.c)
 *     WerpAllocateAndInitializeSid @ 0x1C0037BE4 (WerpAllocateAndInitializeSid.c)
 *     WerpParseKeyName @ 0x1C0037CCC (WerpParseKeyName.c)
 *     WerStartSystemErrorHandler @ 0x1C003817C (WerStartSystemErrorHandler.c)
 *     WerWaitForSystemErrorHandler @ 0x1C0038288 (WerWaitForSystemErrorHandler.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall WerKernelSubmitReport(HANDLE KeyHandle)
{
  __int64 v2; // rsi
  __int64 v3; // r12
  unsigned int v4; // r15d
  unsigned int v5; // r13d
  int RegistryKey; // eax
  int v8; // ebx
  NTSTATUS Key; // eax
  _DWORD *PoolWithTag; // r14
  int started; // eax
  __int64 v12; // r9
  const CHAR *v13; // r8
  int v14; // eax
  ULONG v15; // eax
  __int64 *v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rsi
  _WORD *v22; // rcx
  __int16 v23; // ax
  __int64 v24; // r9
  const CHAR *v25; // r8
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r12
  _WORD *v29; // rcx
  __int16 v30; // ax
  int v31; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-E0h]
  ULONG Length[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandlea; // [rsp+70h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-70h] BYREF
  int SystemInformation; // [rsp+A0h] [rbp-68h] BYREF
  int v41; // [rsp+A4h] [rbp-64h]
  __int64 v42; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  int v45; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-38h]
  __int64 v47; // [rsp+D8h] [rbp-30h]
  int v48; // [rsp+E0h] [rbp-28h]
  __int128 v49; // [rsp+E8h] [rbp-20h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v51[10]; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v52[352]; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v53[352]; // [rsp+6D8h] [rbp+5D0h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Handle = 0LL;
  P = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v38 = 0LL;
  v2 = 0LL;
  v39 = 0LL;
  v3 = 0LL;
  v35 = 0LL;
  v4 = 0;
  v5 = 0;
  KeyHandlea = 0LL;
  memset(v51, 0, 0x48uLL);
  if ( !KeyHandle )
    return 3221225485LL;
  RegistryKey = WerpGetRegistryKey(KeyHandle, L"Busy", &KeyHandlea);
  if ( RegistryKey >= 0 )
  {
    ZwDeleteKey(KeyHandlea);
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
    Key = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, Length);
    v8 = Key;
    if ( Key != -2147483643 && Key != -1073741789 )
    {
      DbgPrintEx(
        0x96u,
        0,
        "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed while determining the size with 0x%x\n",
        1008,
        Key);
      goto LABEL_68;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (int)Length[0], 0x7765726Bu);
    if ( !PoolWithTag )
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR OOM\n", 1016);
      v8 = -1073741801;
      goto LABEL_68;
    }
    started = ZwQueryKey(KeyHandle, KeyNameInformation, PoolWithTag, Length[0], Length);
    v8 = started;
    if ( started < 0 )
    {
      v12 = 1034LL;
      v13 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed with 0x%x\n";
LABEL_12:
      LODWORD(ResultLength) = started;
      DbgPrintEx(0x96u, 0, v13, v12, ResultLength);
      goto LABEL_67;
    }
    if ( PoolWithTag == (_DWORD *)-4LL )
    {
      v8 = -1073741811;
    }
    else
    {
      v14 = WerpParseKeyName(
              (unsigned __int64)(PoolWithTag + 1),
              *PoolWithTag >> 1,
              &v38,
              &v35,
              &v39,
              (_DWORD *)&v35 + 1);
      v2 = v38;
      v8 = v14;
      v3 = v39;
      v4 = v35;
      v5 = HIDWORD(v35);
    }
    if ( v8 < 0 )
    {
      LODWORD(ResultLength) = v8;
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ParseKeyName failed with 0x%x\n", 1047LL, ResultLength);
LABEL_67:
      ExFreePoolWithTag(PoolWithTag, 0);
      goto LABEL_68;
    }
    RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
    memset(v51, 0, 0x48uLL);
    v51[2] = 1400LL;
    v15 = RtlLengthRequiredSid(1u);
    v8 = WerpAllocateAndInitializeSid(&IdentifierAuthority, &P, v15);
    if ( v8 < 0 )
      goto LABEL_67;
    started = WerStartSystemErrorHandler();
    v8 = started;
    if ( started < 0 )
    {
      v12 = 1080LL;
      v13 = "WERLIVEKERNELREPORTING:%u: ERROR WerStartSystemErrorHandler failed with 0x%x\n";
      goto LABEL_12;
    }
    started = ZwQuerySystemInformation(MaxSystemInfoClass|SystemObjectInformation, &SystemInformation, 8u, 0LL);
    v8 = started;
    if ( started < 0 )
    {
      v12 = 1094LL;
      v13 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQuerySysInfo(ErrorPortTimeouts) failed with 0x%x\n";
      goto LABEL_12;
    }
    started = WerWaitForSystemErrorHandler(SystemInformation);
    v8 = started;
    if ( started < 0 )
    {
      v12 = 1101LL;
      v13 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler failed with 0x%x\n";
      goto LABEL_12;
    }
    if ( started == 258 )
    {
      started = -1073740973;
      v13 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler timed out, failing the call with 0x%x\n";
      v8 = -1073740973;
      v12 = 1108LL;
      goto LABEL_12;
    }
    v45 = 48;
    v46 = 0LL;
    v48 = 512;
    v47 = 0LL;
    v49 = 0LL;
    if ( v41 != -1 )
      v42 = -10000LL * v41;
    v16 = &v42;
    if ( v41 == -1 )
      v16 = 0LL;
    v17 = ZwAlpcConnectPort(&Handle, &DestinationString, &v45, v51, 0x20000, P, 0LL, 0LL, 0LL, 0LL, v16);
    v8 = v17;
    if ( v17 < 0 )
    {
      LODWORD(ResultLength) = v17;
      DbgPrintEx(
        0x96u,
        0,
        "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort failed with 0x%x\n",
        1138LL,
        ResultLength);
      goto LABEL_67;
    }
    if ( v17 == 258 )
    {
      started = -1073740973;
      v13 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort timed out, failing the call with 0x%x\n";
      v8 = -1073740973;
      v12 = 1145LL;
      goto LABEL_12;
    }
    memset(v52, 0, 0x578uLL);
    v18 = v4;
    v52[0] = 91751760;
    v52[10] = 1610612736;
    LOWORD(v52[1]) = 0;
    v52[12] = 0;
    if ( v4 > 0xF )
      v18 = 15LL;
    if ( v18 <= 0x7FFFFFFE )
    {
      v20 = 16LL;
      v21 = v2 - (_QWORD)&v52[14];
      v22 = &v52[14];
      v19 = 0;
      do
      {
        if ( !(v18 + v20 - 16) )
          break;
        v23 = *(_WORD *)((char *)v22 + v21);
        if ( !v23 )
          break;
        *v22++ = v23;
        --v20;
      }
      while ( v20 );
      if ( !v20 )
      {
        --v22;
        v19 = -2147024774;
      }
      *v22 = 0;
      if ( v19 >= 0 )
      {
        v26 = v5;
        if ( v5 > 0x1F )
          v26 = 31LL;
        if ( v26 <= 0x7FFFFFFE )
        {
          v27 = 32LL;
          v28 = v3 - (_QWORD)&v52[22];
          v29 = &v52[22];
          v19 = 0;
          do
          {
            if ( !(v26 + v27 - 32) )
              break;
            v30 = *(_WORD *)((char *)v29 + v28);
            if ( !v30 )
              break;
            *v29++ = v30;
            --v27;
          }
          while ( v27 );
          if ( !v27 )
          {
            --v29;
            v19 = -2147024774;
          }
          *v29 = 0;
          if ( v19 >= 0 )
          {
            memset(v53, 0, 0x578uLL);
            v53[0] = 91751760;
            v43 = 1400LL;
            v31 = ZwAlpcSendWaitReceivePort(Handle, 0LL, v52, 0LL, v53, &v43, 0LL, v16);
            v8 = v31;
            if ( v31 < 0 || v31 == 258 )
            {
              DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcSendWaitReceivePort failed\n", 1205);
            }
            else if ( v53[11] >= 0 )
            {
              v8 = 0;
            }
            else
            {
              DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Service returned failure\n", 1211);
              v8 = -1073741823;
            }
            goto LABEL_67;
          }
        }
        else
        {
          v19 = -2147024809;
          LOWORD(v52[22]) = 0;
        }
        v24 = 1184LL;
        v25 = "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for id with 0x%x\n";
        goto LABEL_48;
      }
    }
    else
    {
      v19 = -2147024809;
      LOWORD(v52[14]) = 0;
    }
    v24 = 1170LL;
    v25 = "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for key with 0x%x\n";
LABEL_48:
    LODWORD(ResultLength) = v19;
    DbgPrintEx(0x96u, 0, v25, v24, ResultLength);
    v8 = v19 | 0x80070000;
    goto LABEL_67;
  }
  DbgPrintEx(
    0x96u,
    0,
    "WERLIVEKERNELREPORTING:%u: ERROR WerpGetRegistryKey failed for the busy key 0x%x\n",
    985,
    RegistryKey);
  v8 = -2147019873;
LABEL_68:
  if ( KeyHandlea )
  {
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
