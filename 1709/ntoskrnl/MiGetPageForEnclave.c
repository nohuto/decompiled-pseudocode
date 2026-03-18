/*
 * XREFs of MiGetPageForEnclave @ 0x1406E8908
 * Callers:
 *     MiAddPagesToEnclave @ 0x1406E74B8 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiGetPfnLink @ 0x14012FE20 (MiGetPfnLink.c)
 *     MiGetEnclavePage @ 0x140229730 (MiGetEnclavePage.c)
 */

__int64 __fastcall MiGetPageForEnclave(__int64 a1, _QWORD *a2)
{
  __int64 PfnLink; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx

  if ( !*(_QWORD *)(a1 + 88) )
    return MiGetEnclavePage(a2, 0);
  PfnLink = MiGetPfnLink(*(_QWORD *)(a1 + 80));
  *(_QWORD *)(v3 + 80) = PfnLink;
  *(_QWORD *)(v3 + 88) = v4 - 1;
  return (v5 + 0x58000000000LL) / 48;
}
