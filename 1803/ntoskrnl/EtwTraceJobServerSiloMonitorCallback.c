/*
 * XREFs of EtwTraceJobServerSiloMonitorCallback @ 0x1401822E8
 * Callers:
 *     PspInvokeCreateCallback @ 0x140647D84 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x14077D50C (PspInvokeTerminateCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1407A8228 (EtwpCopyJobGuidSafe.c)
 *     EtwpCopyJobIdSafe @ 0x1407A824C (EtwpCopyJobIdSafe.c)
 */

BOOLEAN __fastcall EtwTraceJobServerSiloMonitorCallback(int a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  const EVENT_DESCRIPTOR *v7; // rbx
  REGHANDLE v8; // r14
  BOOLEAN result; // al
  __int64 v10; // rcx
  unsigned int v11; // r8d
  ULONGLONG v12; // rax
  __int64 v13; // rax
  _BYTE v14[8]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v15[24]; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  _BYTE *v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+84h] [rbp+3h]
  int *v20; // [rsp+88h] [rbp+7h]
  int v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+94h] [rbp+13h]
  int v23; // [rsp+100h] [rbp+7Fh] BYREF

  v23 = a4;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v7 = &ServerSiloCreateCallbackStop;
    }
    else if ( a1 == 2 )
    {
      v7 = (const EVENT_DESCRIPTOR *)&ServerSiloTerminateCallbackStart;
    }
    else
    {
      v7 = (const EVENT_DESCRIPTOR *)&ServerSiloTerminateCallbackStop;
    }
  }
  else
  {
    v7 = (const EVENT_DESCRIPTOR *)&ServerSiloCreateCallbackStart;
  }
  v8 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, v7);
  if ( result )
  {
    EtwpCopyJobGuidSafe(v15, a2);
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)v15;
    UserData.Size = 16;
    EtwpCopyJobIdSafe(v14);
    v19 = 0;
    v17 = v14;
    v18 = 4;
    if ( a1 == 1 )
    {
      v22 = 0;
      v20 = &v23;
      v21 = 4;
    }
    v10 = 3 - (unsigned int)(a1 != 1);
    v11 = v10 + 1;
    v12 = *((_QWORD *)a3 + 1);
    v10 *= 2LL;
    *(&UserData.Reserved + 2 * v10) = 0;
    *(&UserData.Ptr + v10) = v12;
    *(&UserData.Size + 2 * v10) = *a3;
    v13 = 2LL * v11;
    *(&UserData.Reserved + 2 * v13) = 0;
    *(&UserData.Ptr + v13) = (ULONGLONG)&EtwpNull;
    *(&UserData.Size + 2 * v13) = 2;
    return EtwWriteEx(v8, v7, 0LL, 0, 0LL, 0LL, v11 + 1, &UserData);
  }
  return result;
}
