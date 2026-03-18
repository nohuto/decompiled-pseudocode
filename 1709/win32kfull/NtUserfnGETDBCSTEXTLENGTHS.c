/*
 * XREFs of NtUserfnGETDBCSTEXTLENGTHS @ 0x1C0100990
 * Callers:
 *     NtUserfnOUTCBOXSTRING @ 0x1C0100680 (NtUserfnOUTCBOXSTRING.c)
 *     NtUserfnOUTLBOXSTRING @ 0x1C0100810 (NtUserfnOUTLBOXSTRING.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnGETDBCSTEXTLENGTHS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           a7,
           a5);
}
