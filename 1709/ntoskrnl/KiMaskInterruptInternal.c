/*
 * XREFs of KiMaskInterruptInternal @ 0x140205188
 * Callers:
 *     KeMaskInterrupt @ 0x140129578 (KeMaskInterrupt.c)
 *     KiMaskInterruptDpc @ 0x1402080C0 (KiMaskInterruptDpc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiMaskInterruptInternal(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall **v3)(); // r8
  _QWORD *v5; // r8
  _QWORD *v6; // rax

  v3 = (__int64 (__fastcall **)())KeGetCurrentPrcb()->InterruptObject[(unsigned __int8)off_140353358[0]()];
  if ( !v3 )
    return 2147483685LL;
  if ( v3[10] == KiChainedDispatch )
  {
    v5 = v3 + 1;
    v6 = v5;
    while ( (v6[12] & 1) != 0 )
    {
      v6 = (_QWORD *)*v6;
      if ( v6 == v5 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_1403534B0[0])(a2, 0LL);
    }
    return 296LL;
  }
  if ( ((_DWORD)v3[13] & 1) == 0 )
    return 296LL;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_1403534B0[0])(a2, 0LL);
}
