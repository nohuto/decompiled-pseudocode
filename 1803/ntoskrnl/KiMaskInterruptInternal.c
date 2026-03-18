/*
 * XREFs of KiMaskInterruptInternal @ 0x1401697E0
 * Callers:
 *     KeMaskInterrupt @ 0x1401688E4 (KeMaskInterrupt.c)
 *     KiMaskInterruptDpc @ 0x140245CF0 (KiMaskInterruptDpc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiMaskInterruptInternal(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // r8
  _QWORD *v5; // r8
  _QWORD *v6; // rax

  v3 = KeGetCurrentPrcb()->InterruptObject[(unsigned __int8)off_1403986F8[0]()];
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
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140398850[0])(a2, 0LL);
    }
  }
  else if ( (v3[26] & 1) != 0 )
  {
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140398850[0])(a2, 0LL);
  }
  return 296LL;
}
