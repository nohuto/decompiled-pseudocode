/*
 * XREFs of Template_dp @ 0x1C0023DE4
 * Callers:
 *     VidSchiResetEngine @ 0x1C0026D04 (VidSchiResetEngine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_dp(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v6.Ptr = (ULONGLONG)&v10;
  v6.Reserved = 0;
  v6.Size = 4;
  v7 = &a5;
  v9 = 0;
  v8 = 8;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventBlockGpuAccess, 0LL, 2u, &v6);
}
