/*
 * XREFs of MiGetPageForEnclave @ 0x140752384
 * Callers:
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiGetPfnLink @ 0x1400D1210 (MiGetPfnLink.c)
 *     MiGetEnclavePage @ 0x140264534 (MiGetEnclavePage.c)
 */

__int64 __fastcall MiGetPageForEnclave(__int64 a1, _QWORD *a2)
{
  __int64 PfnLink; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx

  if ( !*(_QWORD *)(a1 + 104) )
    return MiGetEnclavePage(a2, 0);
  PfnLink = MiGetPfnLink(*(_QWORD *)(a1 + 96));
  *(_QWORD *)(v3 + 96) = PfnLink;
  *(_QWORD *)(v3 + 104) = v4 - 1;
  return (v5 + 0x58000000000LL) / 48;
}
