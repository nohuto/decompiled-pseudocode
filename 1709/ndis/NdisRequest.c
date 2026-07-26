/*
 * XREFs of NdisRequest @ 0x1C005CD30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisRequest(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, __int64))(a2 + 184))(a2, a3);
  *a1 = result;
  return result;
}
