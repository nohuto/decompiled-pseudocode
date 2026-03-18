/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x140078AD0
 * Callers:
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400FA3B0 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiSanitizePfnProtection @ 0x1401071F0 (MiSanitizePfnProtection.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  unsigned int v8; // ebx
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // rcx

  v8 = 0;
  if ( !MiLockTransitionLeafPage((ULONG_PTR)a2) )
    return 2LL;
  v10 = MI_READ_PTE_LOCK_FREE(a2);
  if ( a4 || !*(_WORD *)(v11 + 32) )
  {
    v13 = 32 * (MiSanitizePfnProtection(a1, (*(_QWORD *)(v11 + 16) >> 5) & 0x1FLL, a3, v10) & 0x1F);
    *(_QWORD *)(v15 + 16) = v13 | v12 & 0xFFFFFFFFFFFFFC1FuLL;
    *a2 = v13 | v14 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( (unsigned int)MiPteInShadowRange(a2) )
      MiWritePteShadow(v16);
  }
  else
  {
    v8 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v8;
}
