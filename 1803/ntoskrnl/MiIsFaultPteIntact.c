/*
 * XREFs of MiIsFaultPteIntact @ 0x140059B20
 * Callers:
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckVirtualAddress @ 0x14003E120 (MiCheckVirtualAddress.c)
 *     MiFindActualFaultingPte @ 0x140059BC4 (MiFindActualFaultingPte.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 ActualFaultingPte; // rax
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-10h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  v8 = 0;
  if ( !ActualFaultingPte )
    return 0LL;
  v10 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
  v11 = v10;
  if ( v12 != a3 )
  {
    if ( (v10 & 0x400) == 0 )
      return 0LL;
    v14 = (unsigned int)MiIsPrototypePteVadLookup(v10)
        ? MiCheckVirtualAddress(a2, &v15, &v16)
        : MiGetPrototypePteDirect(v13);
    if ( v14 != a3 )
      return 0LL;
    v11 = MI_READ_PTE_LOCK_FREE(v14);
  }
  LOBYTE(v8) = v11 == *a4;
  return v8;
}
