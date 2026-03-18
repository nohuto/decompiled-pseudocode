/*
 * XREFs of KsepDsEventPoolAllocate @ 0x1402096CC
 * Callers:
 *     KseDsHookExAllocatePool @ 0x1402089E0 (KseDsHookExAllocatePool.c)
 *     KseDsHookExAllocatePoolWithTag @ 0x140208A40 (KseDsHookExAllocatePoolWithTag.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char KsepDsEventPoolAllocate(__int64 a1, __int64 a2, int a3, ...)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-21h]
  int v8; // [rsp+60h] [rbp-19h]
  int v9; // [rsp+64h] [rbp-15h]
  int *v10; // [rsp+68h] [rbp-11h]
  int v11; // [rsp+70h] [rbp-9h]
  int v12; // [rsp+74h] [rbp-5h]
  va_list v13; // [rsp+78h] [rbp-1h]
  int v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+84h] [rbp+Bh]
  va_list v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+94h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+57h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v21; // [rsp+E0h] [rbp+67h] BYREF
  int v22; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+F0h] [rbp+77h] BYREF
  va_list va; // [rsp+F0h] [rbp+77h]
  va_list va1; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v3 = &retaddr;
  v22 = a3;
  v21 = a2;
  v20 = a1;
  v4 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v3) = EtwEventEnabled(KseEtwHandle, &KseDsEventPoolAllocate);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      UserData.Ptr = (ULONGLONG)&v20;
      v7 = &v21;
      UserData.Size = 8;
      v10 = &v22;
      va_copy(v13, va);
      va_copy(v16, va1);
      v8 = 8;
      v11 = 4;
      v14 = 8;
      v17 = 4;
      LOBYTE(v3) = EtwWriteEx(v4, &KseDsEventPoolAllocate, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return (char)v3;
}
