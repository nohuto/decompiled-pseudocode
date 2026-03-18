/*
 * XREFs of NtUserfnCOPYDATA @ 0x1C0104760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnCOPYDATA(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4, __int64 a5, char a6)
{
  unsigned __int64 v6; // r11
  __int64 v10; // r10
  SIZE_T Length[2]; // [rsp+38h] [rbp-20h] BYREF
  volatile void *Address; // [rsp+48h] [rbp-10h]

  v6 = a4;
  v10 = 0LL;
  if ( a4 )
  {
    if ( a4 >= W32UserProbeAddress )
      v6 = W32UserProbeAddress;
    *(_OWORD *)Length = *(_OWORD *)v6;
    Address = *(volatile void **)(v6 + 16);
    if ( Address )
      ProbeForRead(Address, LODWORD(Length[1]), 1u);
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, SIZE_T *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             Length,
             a5);
  }
  return v10;
}
