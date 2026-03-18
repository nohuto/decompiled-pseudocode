/*
 * XREFs of NtUserfnOUTLPRECT @ 0x1C0103450
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTLPRECT(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  __int64 result; // rax
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0uLL;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v8,
             a5);
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_OWORD *)MmUserProbeAddress;
  *a4 = v8;
  return result;
}
