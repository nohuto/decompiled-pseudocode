/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x1400C06B0
 * Callers:
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiSanitizePfnProtection @ 0x140116C20 (MiSanitizePfnProtection.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v8 = 0;
  if ( !MiLockTransitionLeafPage((ULONG_PTR)a2, 0LL) )
    return 2LL;
  MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  if ( a4 || !*(_WORD *)(v9 + 32) )
  {
    v11 = 32 * (MiSanitizePfnProtection(a1, (*(_QWORD *)(v9 + 16) >> 5) & 0x1FLL, a3) & 0x1F);
    *(_QWORD *)(v13 + 16) = v11 | v10 & 0xFFFFFFFFFFFFFC1FuLL;
    *a2 = v11 | v12 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( MiPteInShadowRange((unsigned __int64)a2) )
      MiWritePteShadow(v14, v16, v15);
  }
  else
  {
    v8 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v8;
}
