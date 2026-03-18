/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerEnd @ 0x140068680
 * Callers:
 *     PopPepWork @ 0x140069FFC (PopPepWork.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDefaultPepWorkerEnd(__int64 a1, int a2, char a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  REGHANDLE v10; // rbx
  UINT32 cData; // r9d
  UINT32 v12; // r9d
  char v13; // al
  char v15; // [rsp+48h] [rbp-71h] BYREF
  char v16; // [rsp+49h] [rbp-70h] BYREF
  char v17; // [rsp+4Ah] [rbp-6Fh] BYREF
  int v18; // [rsp+4Ch] [rbp-6Dh] BYREF
  __int64 v19; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-61h] BYREF
  char *v21; // [rsp+68h] [rbp-51h]
  __int64 v22; // [rsp+70h] [rbp-49h]
  char *v23; // [rsp+78h] [rbp-41h]
  __int64 v24; // [rsp+80h] [rbp-39h]
  char *v25; // [rsp+88h] [rbp-31h]
  __int64 v26; // [rsp+90h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-11h] BYREF
  int *v28; // [rsp+C8h] [rbp+Fh]
  __int64 v29; // [rsp+D0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( a4 == 2 )
  {
    if ( hProvider.LevelPlus1 > 5 )
    {
      LOBYTE(v5) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
      if ( (_BYTE)v5 )
      {
        v18 = a5;
        v28 = &v18;
        v29 = 4LL;
        LOBYTE(v5) = TlgWrite(&hProvider, &unk_1402AD849, 0LL, 0LL, v12, &pData);
      }
    }
  }
  else if ( a4 == 3 && hProvider.LevelPlus1 > 5 )
  {
    LOBYTE(v5) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
    if ( (_BYTE)v5 )
    {
      v18 = a5;
      v28 = &v18;
      v29 = 4LL;
      LOBYTE(v5) = TlgWrite(&hProvider, &unk_1402AD782, 0LL, 0LL, cData, &pData);
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
          v15 = -1;
        }
        else
        {
          v13 = a3;
          if ( a2 == 3 )
            v13 = -2;
          v15 = v13;
        }
      }
      else
      {
        v15 = -3;
      }
      v19 = 0LL;
      if ( a1 )
        v19 = *(_QWORD *)(a1 + 48);
      v22 = 1LL;
      UserData.Ptr = (ULONGLONG)&v19;
      v24 = 1LL;
      v21 = &v15;
      v23 = &v16;
      v26 = 1LL;
      v25 = &v17;
      v16 = a4;
      v17 = a5;
      *(_QWORD *)&UserData.Size = 8LL;
      LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END);
      if ( (_BYTE)v5 )
      {
        LOBYTE(v5) = EtwWriteEx(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END, 0LL, 0, 0LL, 0LL, 4u, &UserData);
        v10 = PopDiagHandle;
      }
      if ( a4 == 2 )
      {
        LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED);
        if ( !(_BYTE)v5 )
          return (char)v5;
        LOBYTE(v5) = EtwWriteEx(
                       v10,
                       &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       4u,
                       &UserData);
        v10 = PopDiagHandle;
      }
      if ( a4 == 3 )
      {
        LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED);
        if ( (_BYTE)v5 )
          LOBYTE(v5) = EtwWriteEx(
                         v10,
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
