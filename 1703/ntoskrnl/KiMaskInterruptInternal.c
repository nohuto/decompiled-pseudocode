/*
 * XREFs of KiMaskInterruptInternal @ 0x14013D254
 * Callers:
 *     KeMaskInterrupt @ 0x14014BBAC (KeMaskInterrupt.c)
 *     KiMaskInterruptDpc @ 0x140201AF0 (KiMaskInterruptDpc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiMaskInterruptInternal(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // r8
  _QWORD *v5; // r8
  _QWORD *v6; // rax

  v3 = KeGetCurrentPrcb()->InterruptObject[(unsigned __int8)off_14033B328[0]()];
  if ( !v3 )
    return 2147483685LL;
  if ( *((__int64 (__fastcall **)())v3 + 10) == KiChainedDispatch )
  {
    v5 = v3 + 2;
    v6 = v5;
    while ( (v6[12] & 1) != 0 )
    {
      v6 = (_QWORD *)*v6;
      if ( v6 == v5 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_14033B480[0])(a2, 0LL);
    }
  }
  else if ( (v3[26] & 1) != 0 )
  {
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_14033B480[0])(a2, 0LL);
  }
  return 296LL;
}
