/*
 * XREFs of MiIsFaultPteIntact @ 0x1401182D8
 * Callers:
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x1400C20D0 (MiCheckVirtualAddress.c)
 *     MiFindActualFaultingPte @ 0x140118380 (MiFindActualFaultingPte.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiIsFaultPteIntact(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 ActualFaultingPte; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF
  int v17; // [rsp+58h] [rbp+20h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  if ( !ActualFaultingPte )
    return 0LL;
  if ( ActualFaultingPte == a2 )
  {
    MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    v14 = MI_READ_PTE_LOCK_FREE(a3);
    return v15 == v14;
  }
  else
  {
    v8 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    if ( (v8 & 0x400) == 0 )
      return 0LL;
    v12 = (unsigned int)MiIsPrototypePteVadLookup(v8)
        ? MiCheckVirtualAddress(a1, &v17, v16)
        : MiGetPrototypePteDirect(v11, v9, v10, v11);
    if ( v12 != a2 )
      return 0LL;
    return MI_READ_PTE_LOCK_FREE(v12) == *a3;
  }
}
