/*
 * XREFs of MiValidVirtualizationFault @ 0x14021C39C
 * Callers:
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiLargePageFault @ 0x14021C114 (MiLargePageFault.c)
 * Callees:
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiCompleteSecureProcessFault @ 0x14021BE20 (MiCompleteSecureProcessFault.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiValidVirtualizationFault(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 v5; // r9
  __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a2);
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v8) >> 12) & 0xFFFFFFFFFLL;
  if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
  {
    v6 = 48 * v4 - 0x58000000000LL;
    if ( *(__int64 *)(v6 + 8) >= 0 )
    {
      if ( !(unsigned int)MiCopyOnWriteEx(a2 << 25 >> 16, a2, 0xFFFFFFFFFFFFFFFFuLL, v5, 0) )
        return;
      v4 = MI_GET_PAGE_FRAME_FROM_PTE(a2);
      v6 = 48 * v4 - 0x58000000000LL;
    }
    MiCompleteSecureProcessFault(v6);
  }
  v7 = v8;
  *(_QWORD *)(a1 + 40) = v4;
  if ( (v7 & 0x20) == 0 )
    MiWriteValidPteNewProtection(a2);
}
