/*
 * XREFs of CpcReinitializeHandler @ 0x1C0007AB0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHidden @ 0x1C00042FC (WriteGenAddrMaybeHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcReinitializeHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 92) )
    WriteGenAddrMaybeHidden(*(_QWORD *)a1, (_BYTE *)(*(_QWORD *)(a1 + 112) + 176LL), 1LL);
  if ( *(_BYTE *)(a1 + 104) )
  {
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 78LL) )
      ((void (*)(void))qword_1C0015F48)();
  }
}
