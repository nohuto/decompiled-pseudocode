/*
 * XREFs of EtwpTraceFileName @ 0x140028630
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceFileName(__int64 a1, unsigned __int16 *a2, int a3, unsigned __int16 a4)
{
  unsigned int v5; // r8d
  __int16 v8; // [rsp+40h] [rbp-9h] BYREF
  __int64 v9; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  unsigned int v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+74h] [rbp+2Bh]
  __int16 *v14; // [rsp+78h] [rbp+2Fh]
  __int64 v15; // [rsp+80h] [rbp+37h]

  v9 = a1;
  *(_QWORD *)&UserData.Size = 8LL;
  v5 = *a2;
  v15 = 2LL;
  v8 = 0;
  v13 = 0;
  if ( v5 > 0x2000 )
    v5 = 0x2000;
  v12 = v5;
  UserData.Ptr = (ULONGLONG)&v9;
  v11 = *((_QWORD *)a2 + 1);
  v14 = &v8;
  if ( (dword_140345000 & 0x200) != 0 )
  {
    if ( a4 == 1056 )
    {
      EtwWriteEx(EtwpFileProvRegHandle, &KFileEvt_NameCreate, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      return EtwTraceKernelEvent((unsigned int)&UserData, 3, 512, a4, 4200450);
    }
    if ( a4 == 1059 )
      EtwWriteEx(EtwpFileProvRegHandle, &KFileEvt_NameDelete, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  if ( a4 == 1060 )
    return EtwpLogKernelEvent((unsigned int)&UserData, (_DWORD)a2, a3, 3, 1060, 4200450);
  return EtwTraceKernelEvent((unsigned int)&UserData, 3, 512, a4, 4200450);
}
