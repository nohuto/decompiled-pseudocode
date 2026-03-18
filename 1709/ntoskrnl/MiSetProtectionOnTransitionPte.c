/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x1400E4CF4
 * Callers:
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiSanitizePfnProtection @ 0x1400384C0 (MiSanitizePfnProtection.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  unsigned int v8; // edi
  __int64 v9; // r11
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int64 v14; // r9

  v8 = 0;
  v9 = MiLockTransitionLeafPage((ULONG_PTR)a2);
  if ( !v9 )
    return 2LL;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    MiReadPteShadow(a2, *a2);
  if ( a4 || !*(_WORD *)(v9 + 32) )
  {
    v12 = 32 * (MiSanitizePfnProtection(a1, (*(_QWORD *)(v9 + 16) >> 5) & 0x1F, a3) & 0x1F);
    v14 = v12 | v13 & 0xFFFFFFFFFFFFFC1FuLL;
    *(_QWORD *)(v9 + 16) = v12 | v11 & 0xFFFFFFFFFFFFFC1FuLL;
    *a2 = v14;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(a2, v14);
  }
  else
  {
    v8 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v8;
}
