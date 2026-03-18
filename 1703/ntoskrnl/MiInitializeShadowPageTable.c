/*
 * XREFs of MiInitializeShadowPageTable @ 0x14041D49C
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14041D6E8 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiInitializePfnForOtherProcess @ 0x14010A008 (MiInitializePfnForOtherProcess.c)
 *     MiMarkPageActive @ 0x14010A760 (MiMarkPageActive.c)
 *     MiReplicatePteChange @ 0x140164BE0 (MiReplicatePteChange.c)
 *     MiMarkPxeAsShadowed @ 0x14017C994 (MiMarkPxeAsShadowed.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14017CABC (MiReadWriteAnyLevelShadowPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInitializeShadowPageTable(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 PteAddress; // rax
  int v9; // edx
  unsigned __int64 v10; // r11
  int v11; // ebp
  int v12; // r12d
  unsigned __int64 v13; // rax
  int v14; // edx
  unsigned __int64 v15; // r15
  unsigned int v16; // r12d
  int v17; // r8d
  unsigned __int64 v18; // rbx
  __int64 result; // rax
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v5 = a1;
  if ( !a3 )
  {
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1 << 25 >> 16) )
    {
      PteAddress = v5;
      do
        PteAddress = MiGetPteAddress(PteAddress);
      while ( v9 != 1 );
      v6 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v7 = MiVaToPfn(v10);
    }
    else
    {
      v20 = MI_READ_PTE_LOCK_FREE(v5);
      v6 = v20;
      v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL;
    }
    v11 = 3;
    v12 = ((v6 & 0x800) != 0 ? 4 : 1) | 2;
    if ( v6 < 0 )
      v12 = (v6 & 0x800) != 0 ? 4 : 1;
    goto LABEL_11;
  }
  v12 = 6;
  v11 = 3;
  v7 = (a2 + 0x58000000000LL) / 48;
  if ( a3 != 3 )
  {
LABEL_11:
    v13 = MiGetPteAddress(v5);
    v20 = MiReadWriteAnyLevelShadowPte(v13, v14, 0, ZeroPte);
    v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL;
    goto LABEL_13;
  }
  v15 = -1LL;
LABEL_13:
  v16 = v12 | 0x90000000;
  v17 = v16 | 0x8000000;
  if ( !a3 )
    v17 = v16;
  v18 = MiMakeValidPte(v5, v7, v17) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( a3 )
  {
    if ( a3 == 3 )
      v15 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    *(_QWORD *)(a2 + 40) ^= (v15 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
    MiInitializePfnForOtherProcess(v7, v5, -1LL, 0);
    MiMarkPageActive(a2);
  }
  result = MiReadWriteAnyLevelShadowPte(v5, a3, 1, v18);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(v5);
    do
    {
      v5 = v5 << 25 >> 16;
      --v11;
    }
    while ( v11 );
    return MiReplicatePteChange(v5, v5);
  }
  return result;
}
