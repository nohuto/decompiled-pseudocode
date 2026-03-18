/*
 * XREFs of MiIsFaultPteIntact @ 0x14002CD68
 * Callers:
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x14002CEA0 (MiFindActualFaultingPte.c)
 *     MiCheckVirtualAddress @ 0x140109690 (MiCheckVirtualAddress.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 */

_BOOL8 __fastcall MiIsFaultPteIntact(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *ActualFaultingPte; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 *v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 PteShadow; // r9
  __int64 v15; // rax
  char v16[40]; // [rsp+20h] [rbp-28h] BYREF
  char v17; // [rsp+68h] [rbp+20h] BYREF

  ActualFaultingPte = (__int64 *)MiFindActualFaultingPte();
  if ( !ActualFaultingPte )
    return 0LL;
  if ( ActualFaultingPte == a2 )
  {
    PteShadow = *ActualFaultingPte;
    if ( (unsigned __int64)ActualFaultingPte >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)ActualFaultingPte <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow(ActualFaultingPte, PteShadow);
    }
    v15 = *a3;
    if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
      v15 = MiReadPteShadow(a3, *a3);
    return PteShadow == v15;
  }
  else
  {
    v8 = *ActualFaultingPte;
    if ( (unsigned __int64)ActualFaultingPte >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)ActualFaultingPte <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v8 = MiReadPteShadow(ActualFaultingPte, v8);
    }
    if ( (v8 & 0x400) == 0 )
      return 0LL;
    v10 = (__int64 *)((unsigned int)MiIsPrototypePteVadLookup(v8)
                    ? MiCheckVirtualAddress(a1, &v17, v16)
                    : MiGetPrototypePteDirect(v9));
    v11 = (unsigned __int64)v10;
    if ( v10 != a2 )
      return 0LL;
    v12 = *v10;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
      v12 = MiReadPteShadow(v11, v12);
    return v12 == *a3;
  }
}
