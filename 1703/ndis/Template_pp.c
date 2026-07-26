/*
 * XREFs of Template_pp @ 0x1C00550B0
 * Callers:
 *     ndisMSendPacketCompleteToOpen @ 0x1C0057570 (ndisMSendPacketCompleteToOpen.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS Template_pp(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  va_copy(v5, va1);
  v7 = 0;
  v6 = 8;
  return EtwWrite(Microsoft_Windows_NDISHandle, &SendPacketCompleteToOpen, a3, 2u, &v4);
}
