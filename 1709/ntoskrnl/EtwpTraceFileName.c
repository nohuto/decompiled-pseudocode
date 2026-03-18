/*
 * XREFs of EtwpTraceFileName @ 0x14027D090
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceFileName(__int64 a1, unsigned __int16 *a2, unsigned int a3, unsigned __int16 a4)
{
  unsigned int v5; // r8d
  __int16 v7; // [rsp+48h] [rbp+7h] BYREF
  __int64 v8; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v10; // [rsp+70h] [rbp+2Fh]
  unsigned int v11; // [rsp+78h] [rbp+37h]
  int v12; // [rsp+7Ch] [rbp+3Bh]
  __int16 *v13; // [rsp+80h] [rbp+3Fh]
  __int64 v14; // [rsp+88h] [rbp+47h]

  v8 = a1;
  *(_QWORD *)&UserData.Size = 8LL;
  v5 = *a2;
  v14 = 2LL;
  v7 = 0;
  v12 = 0;
  if ( v5 > 0x2000 )
    v5 = 0x2000;
  UserData.Ptr = (ULONGLONG)&v8;
  v10 = *((_QWORD *)a2 + 1);
  v13 = &v7;
  v11 = v5;
  if ( EtwpHostSiloState != -4464 && (*(_DWORD *)(EtwpHostSiloState + 4464) & 0x200) != 0 )
  {
    if ( a4 == 1056 )
    {
      EtwWriteEx(EtwpFileProvRegHandle, &KFileEvt_NameCreate, 0LL, 0, 0LL, 0LL, 3u, &UserData);
LABEL_7:
      EtwTraceKernelEvent((__int64)&UserData, 3u, 0x200u, a4, 0x401802u);
      return;
    }
    if ( a4 == 1059 )
      EtwWriteEx(EtwpFileProvRegHandle, &KFileEvt_NameDelete, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  if ( a4 != 1060 )
    goto LABEL_7;
  EtwpLogKernelEvent((__int64)&UserData, EtwpHostSiloState, a3, 3u, 0x424u, 0x401802u);
}
