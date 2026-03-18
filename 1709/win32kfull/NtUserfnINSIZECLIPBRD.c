/*
 * XREFs of NtUserfnINSIZECLIPBRD @ 0x1C01EED20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINSIZECLIPBRD(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF

  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (__int128 *)MmUserProbeAddress;
  v7 = *a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           &v7,
           a5);
}
