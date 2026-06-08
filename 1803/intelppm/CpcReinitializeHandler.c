/*
 * XREFs of CpcReinitializeHandler @ 0x1C0008130
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHidden @ 0x1C000456C (WriteGenAddrMaybeHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcReinitializeHandler(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 92) )
    result = WriteGenAddrMaybeHidden(*(_QWORD *)a1, (_BYTE *)(*(_QWORD *)(a1 + 112) + 176LL), 1LL);
  if ( *(_BYTE *)(a1 + 104) )
  {
    result = *(_QWORD *)a1;
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 78LL) )
      return ((__int64 (*)(void))qword_1C001A788)();
  }
  return result;
}
