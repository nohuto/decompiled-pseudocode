/*
 * XREFs of NtUserfnINLPDELETEITEMSTRUCT @ 0x1C0137590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPDELETEITEMSTRUCT(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  _OWORD v7[3]; // [rsp+38h] [rbp-30h] BYREF

  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (_OWORD *)W32UserProbeAddress;
  v7[0] = *a4;
  v7[1] = a4[1];
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v7,
           a5);
}
