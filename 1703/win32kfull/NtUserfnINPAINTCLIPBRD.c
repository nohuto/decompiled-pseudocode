/*
 * XREFs of NtUserfnINPAINTCLIPBRD @ 0x1C01E2990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINPAINTCLIPBRD(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, char a6)
{
  _OWORD v7[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v8; // [rsp+80h] [rbp-28h]

  if ( a4 >= W32UserProbeAddress )
    a4 = W32UserProbeAddress;
  v7[0] = *(_OWORD *)a4;
  v7[1] = *(_OWORD *)(a4 + 16);
  v7[2] = *(_OWORD *)(a4 + 32);
  v7[3] = *(_OWORD *)(a4 + 48);
  v8 = *(_QWORD *)(a4 + 64);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v7,
           a5);
}
