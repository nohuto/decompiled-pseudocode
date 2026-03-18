/*
 * XREFs of IsMouseButtonDown @ 0x1C012ED90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

bool IsMouseButtonDown()
{
  __int64 v0; // rcx
  bool result; // al

  v0 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018[0] + 8LL))(qword_1C0186018[0]);
  result = 0;
  if ( v0 )
    return *(_DWORD *)(v0 + 2536) != 0;
  return result;
}
