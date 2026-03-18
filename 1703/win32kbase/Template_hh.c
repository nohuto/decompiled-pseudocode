/*
 * XREFs of Template_hh @ 0x1C00DC018
 * Callers:
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C00D9A00 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C00D9F60 (EtwTraceEndPointerMessageGeneration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_hh(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, __int16 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  __int16 v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v6.Ptr = (ULONGLONG)&v10;
  v6.Size = 2;
  v6.Reserved = 0;
  v7 = &a5;
  v8 = 2;
  v9 = 0;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 2u, &v6);
}
