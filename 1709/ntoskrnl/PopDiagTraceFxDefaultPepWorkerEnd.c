/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerEnd @ 0x1400FD544
 * Callers:
 *     PopPepWork @ 0x1400FD200 (PopPepWork.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDefaultPepWorkerEnd(__int64 a1, int a2, char a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  REGHANDLE v10; // rdi
  UINT32 cData; // r9d
  UINT32 v12; // r9d
  char v13; // al
  REGHANDLE v14; // rdi
  REGHANDLE v15; // rbx
  char v17; // [rsp+48h] [rbp-61h] BYREF
  char v18; // [rsp+49h] [rbp-60h] BYREF
  char v19; // [rsp+4Ah] [rbp-5Fh] BYREF
  int v20; // [rsp+4Ch] [rbp-5Dh] BYREF
  __int64 v21; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-51h] BYREF
  char *v23; // [rsp+68h] [rbp-41h]
  __int64 v24; // [rsp+70h] [rbp-39h]
  char *v25; // [rsp+78h] [rbp-31h]
  __int64 v26; // [rsp+80h] [rbp-29h]
  char *v27; // [rsp+88h] [rbp-21h]
  __int64 v28; // [rsp+90h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-11h] BYREF
  int *v30; // [rsp+B8h] [rbp+Fh]
  __int64 v31; // [rsp+C0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( a4 == 2 )
  {
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      LOBYTE(v5) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( (_BYTE)v5 )
      {
        v20 = a5;
        v30 = &v20;
        v31 = 4LL;
        LOBYTE(v5) = TlgWrite(&pCallbackContext, &unk_1402D26D1, 0LL, 0LL, v12, &pData);
      }
    }
  }
  else if ( a4 == 3 && pCallbackContext.LevelPlus1 > 5 )
  {
    LOBYTE(v5) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( (_BYTE)v5 )
    {
      v20 = a5;
      v30 = &v20;
      v31 = 4LL;
      LOBYTE(v5) = TlgWrite(&pCallbackContext, &unk_1402D2693, 0LL, 0LL, cData, &pData);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v10 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END)
      || EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED)
      || (LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED), (_BYTE)v5) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          v17 = -1;
        }
        else
        {
          v13 = a3;
          if ( a2 == 3 )
            v13 = -2;
          v17 = v13;
        }
      }
      else
      {
        v17 = -3;
      }
      v21 = 0LL;
      if ( a1 )
        v21 = *(_QWORD *)(a1 + 48);
      v24 = 1LL;
      UserData.Ptr = (ULONGLONG)&v21;
      v26 = 1LL;
      v23 = &v17;
      v25 = &v18;
      v28 = 1LL;
      v27 = &v19;
      v18 = a4;
      v19 = a5;
      *(_QWORD *)&UserData.Size = 8LL;
      LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END);
      if ( (_BYTE)v5 )
        LOBYTE(v5) = EtwWriteEx(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      if ( a4 == 2 )
      {
        v14 = PopDiagHandle;
        LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED);
        if ( !(_BYTE)v5 )
          return (char)v5;
        LOBYTE(v5) = EtwWriteEx(
                       v14,
                       &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       4u,
                       &UserData);
      }
      if ( a4 == 3 )
      {
        v15 = PopDiagHandle;
        LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED);
        if ( (_BYTE)v5 )
          LOBYTE(v5) = EtwWriteEx(
                         v15,
                         &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED,
                         0LL,
                         0,
                         0LL,
                         0LL,
                         4u,
                         &UserData);
      }
    }
  }
  return (char)v5;
}
