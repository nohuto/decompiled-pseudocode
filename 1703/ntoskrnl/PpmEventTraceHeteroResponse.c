/*
 * XREFs of PpmEventTraceHeteroResponse @ 0x1402365B8
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x140233CA0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char PpmEventTraceHeteroResponse(__int64 a1, __int64 a2, _QWORD *a3, ...)
{
  _UNKNOWN **v3; // rax
  unsigned __int64 v4; // rbx
  REGHANDLE v8; // rsi
  unsigned __int8 v9; // r8
  char v10; // al
  _QWORD *v11; // rcx
  __int64 v12; // r9
  unsigned __int8 v14; // [rsp+48h] [rbp-C0h] BYREF
  char v15; // [rsp+49h] [rbp-BFh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h]
  __int64 v18; // [rsp+70h] [rbp-98h]
  char *v19; // [rsp+78h] [rbp-90h]
  __int64 v20; // [rsp+80h] [rbp-88h]
  __int64 v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+90h] [rbp-78h]
  int v23; // [rsp+94h] [rbp-74h]
  _QWORD *v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A4h] [rbp-64h]
  va_list v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  char *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  va_list v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int64 v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  va_list v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF
  unsigned __int64 v40; // [rsp+170h] [rbp+68h] BYREF
  va_list va; // [rsp+170h] [rbp+68h]
  __int64 v42; // [rsp+178h] [rbp+70h] BYREF
  va_list va1; // [rsp+178h] [rbp+70h]
  va_list va2; // [rsp+180h] [rbp+78h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v40 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  v3 = &retaddr;
  v4 = v40;
  if ( PpmEtwRegistered )
  {
    v8 = PpmEtwHandle;
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_RESPONSE);
    if ( (_BYTE)v3 )
    {
      v9 = *(_BYTE *)(a1 + 6);
      v10 = *(_BYTE *)(a1 + 124);
      v14 = v9;
      v15 = v10;
      if ( v4 > 1 && v9 )
      {
        v11 = a3;
        v12 = v9;
        do
        {
          *v11++ /= v4;
          --v12;
        }
        while ( v12 );
        v8 = PpmEtwHandle;
      }
      UserData.Ptr = a1 + 4;
      *(_QWORD *)&UserData.Size = 2LL;
      v17 = a1 + 8;
      v18 = 8LL;
      v19 = (char *)&v14;
      v20 = 1LL;
      v22 = 4 * v9;
      v25 = 8 * v9;
      va_copy(v27, va);
      v29 = a1 + 123;
      v31 = &v15;
      va_copy(v33, va1);
      v35 = a1 + 115;
      va_copy(v37, va2);
      v21 = a2;
      v23 = 0;
      v24 = a3;
      v26 = 0;
      v28 = 8LL;
      v30 = 1LL;
      v32 = 1LL;
      v34 = 1LL;
      v36 = 1LL;
      v38 = 4LL;
      LOBYTE(v3) = EtwWriteEx(v8, &PPM_ETW_HETERO_RESPONSE, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
    }
  }
  return (char)v3;
}
