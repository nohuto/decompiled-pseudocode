/*
 * XREFs of CpcReinitializeHandler @ 0x1C0006EC0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0008B1C (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C0008D64 (WriteGenAddrHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcReinitializeHandler(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( *((_BYTE *)a1 + 92) )
  {
    v2 = a1[14];
    v3 = *a1;
    if ( *(_BYTE *)(v3 + 78) )
      WriteGenAddrHidden(*(unsigned int *)(v3 + 80), v2 + 176, 1LL);
    else
      WriteGenAddr(v2 + 176, 1LL);
  }
  if ( *((_BYTE *)a1 + 104) )
  {
    if ( !*(_BYTE *)(*a1 + 78) )
      ((void (*)(void))qword_1C0011598)();
  }
}
