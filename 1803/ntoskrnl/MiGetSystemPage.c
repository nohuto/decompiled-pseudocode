/*
 * XREFs of MiGetSystemPage @ 0x14004DEB4
 * Callers:
 *     MiGetPageForHeader @ 0x14004DD9C (MiGetPageForHeader.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 * Callees:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 Page; // rax
  __int64 v5; // rbx
  unsigned __int8 v6; // al

  v2 = a1;
  v3 = *(unsigned __int16 *)(a2 + 10) | (unsigned __int16)(_InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u) & *(_WORD *)(a2 + 8));
  while ( 1 )
  {
    Page = MiGetPage(a1, v3, 0x302u);
    if ( Page != -1 )
    {
      v5 = 48 * Page - 0x58000000000LL;
      v6 = MiLockPageInline(v5);
      *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v6);
      return v5;
    }
    if ( KeGetCurrentIrql() == 2 )
      break;
    MiWaitForFreePage(v2);
    a1 = v2;
  }
  return 0LL;
}
