/*
 * XREFs of _lambda_11806f6ea1ea80dc87cf8ad0dd8eb00d_::_lambda_invoker_cdecl_ @ 0x18008B0D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall lambda_11806f6ea1ea80dc87cf8ad0dd8eb00d_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm0
  char result; // al
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8, v5);
  result = 1;
  *(_OWORD *)(a2 + 4) = v3;
  return result;
}
