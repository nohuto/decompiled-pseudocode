/*
 * XREFs of CpcReinitializeHandler @ 0x1C00071B0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0008E5C (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C00090C8 (WriteGenAddrHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcReinitializeHandler(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( *((_BYTE *)a1 + 92) )
  {
    v2 = a1[14];
    v3 = *a1;
    v4 = v2 + 176;
    if ( *(_BYTE *)(v3 + 78) )
    {
      WriteGenAddrHidden(*(unsigned int *)(v3 + 80), v4, 1LL);
    }
    else if ( v4 )
    {
      WriteGenAddr(v4, 1LL);
    }
  }
  if ( *((_BYTE *)a1 + 104) )
  {
    if ( !*(_BYTE *)(*a1 + 78) )
      ((void (*)(void))qword_1C0011598)();
  }
}
