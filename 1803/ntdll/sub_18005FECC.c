/*
 * XREFs of sub_18005FECC @ 0x18005FECC
 * Callers:
 *     sub_180002BE0 @ 0x180002BE0 (sub_180002BE0.c)
 *     sub_18005FE60 @ 0x18005FE60 (sub_18005FE60.c)
 * Callees:
 *     sub_18005FF9C @ 0x18005FF9C (sub_18005FF9C.c)
 *     sub_1800606EC @ 0x1800606EC (sub_1800606EC.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005FECC(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  unsigned __int8 v8; // bp
  char v9; // r15
  BOOL v10; // r12d
  int v11; // eax

  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  v6 = 0;
  if ( (a4 & 1) != 0 )
  {
    v8 = *(_BYTE *)(a2 + 45);
    v9 = *(_BYTE *)(a2 + 44);
    v10 = (a4 & 2) != 0;
    v11 = sub_1800606EC(a2, a2, a3, a4);
    if ( v11 )
    {
      if ( v8 > 1u )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
          -(__int64)((unsigned __int64)(unsigned int)(v11 << v9) >> 12));
    }
    return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, BOOL))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 16)))(
             *(_QWORD *)a1,
             a2,
             v8 << v9,
             v10);
  }
  else
  {
    LOBYTE(v6) = (a4 & 2) != 0;
    return sub_18005FF9C(a1 + 112, a1, a2, v6);
  }
}
