/*
 * XREFs of _PnpObjectRaiseCreateEvent @ 0x140596494
 * Callers:
 *     _CmRaiseCreateEvent @ 0x140596434 (_CmRaiseCreateEvent.c)
 *     _PnpCreateObjectDispatch @ 0x14073D640 (_PnpCreateObjectDispatch.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PnpObjectRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(__int64, __int64, __int64, __int64, _QWORD *)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, _QWORD *); // rax
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(a1 + 320);
  if ( result )
  {
    v5[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD *))result(a1, a2, a3, 2LL, v5);
  }
  return result;
}
