/*
 * XREFs of UsbhD3ColdSupportInterfaceSetD3ColdSupport @ 0x1C0054DD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall UsbhD3ColdSupportInterfaceSetD3ColdSupport(__int64 a1, char a2))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 2976);
  if ( result )
    result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 2952));
  if ( a2 )
    *(_DWORD *)(a1 + 1412) |= 0x400000u;
  else
    *(_DWORD *)(a1 + 1412) &= ~0x400000u;
  return result;
}
