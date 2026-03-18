/*
 * XREFs of IopLiveDumpTraceDumpFileWriteEnd @ 0x1401FBEAC
 * Callers:
 *     IoCaptureLiveDump @ 0x1406B9C84 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406BA268 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401FBC50 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceDumpFileWriteEnd(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  int v4; // edx
  __int64 v5; // rcx
  const EVENT_DESCRIPTOR *v6; // r10
  _QWORD *v7; // rax
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h] BYREF
  __int64 v11; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  __int64 *v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  __int64 *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]
  __int64 *v19; // [rsp+A0h] [rbp+37h]
  __int64 v20; // [rsp+A8h] [rbp+3Fh]
  int v21; // [rsp+E0h] [rbp+77h] BYREF

  v21 = a3;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v6 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_WRITE_DUMPDATA_TO_FILE_END;
    if ( v4 )
      v6 = &LIVEDUMP_EVENT_WRITE_DEFERRED_DUMPDATA_TO_FILE_END;
    v7 = *(_QWORD **)(v5 + 384);
    if ( v21 < 0 )
    {
      v8 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
    }
    else
    {
      v8 = v7[500];
      v9 = v7[1028];
      v10 = v7[1029] << 12;
      v11 = v8 - v10 - v9;
    }
    UserData.Ptr = (ULONGLONG)&v21;
    *(_QWORD *)&UserData.Size = 4LL;
    v13 = &v8;
    v14 = 8LL;
    v15 = &v9;
    v17 = &v10;
    v19 = &v11;
    v16 = 8LL;
    v18 = 8LL;
    v20 = 8LL;
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v6, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
