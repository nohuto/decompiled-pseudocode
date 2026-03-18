/*
 * XREFs of MiInitializeShadowPageTable @ 0x14062B9A4
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14062B8BC (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiVaToPfn @ 0x14003C4FC (MiVaToPfn.c)
 *     MiInitializePfnForOtherProcess @ 0x140071528 (MiInitializePfnForOtherProcess.c)
 *     MiReplicatePteChange @ 0x14016B45C (MiReplicatePteChange.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x140176218 (MiReadWriteAnyLevelShadowPte.c)
 *     MiMarkPxeAsShadowed @ 0x1401765C4 (MiMarkPxeAsShadowed.c)
 */

__int64 __fastcall MiInitializeShadowPageTable(__int64 a1, _QWORD *a2, int a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  int v9; // r14d
  int v10; // ebx
  unsigned __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rbp
  unsigned int v14; // ebx
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  __int64 result; // rax
  unsigned __int64 PteAddress; // rax
  int v19; // edx
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v5 = a1;
  if ( !a3 )
  {
    v6 = a1 << 25 >> 16;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
    {
      PteAddress = v5;
      do
        PteAddress = MiGetPteAddress(PteAddress);
      while ( v19 != 1 );
      v7 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v8 = MiVaToPfn(v6);
    }
    else
    {
      v20 = MI_READ_PTE_LOCK_FREE(v5);
      v7 = v20;
      v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL;
    }
    v9 = 3;
    v10 = ((v7 & 0x800) != 0 ? 4 : 1) | 2;
    if ( v7 < 0 )
      v10 = (v7 & 0x800) != 0 ? 4 : 1;
    goto LABEL_6;
  }
  v10 = 6;
  *a2 = 0LL;
  v9 = 3;
  v8 = (__int64)(a2 + 0xB000000000LL) / 48;
  if ( a3 != 3 )
  {
LABEL_6:
    v11 = MiGetPteAddress(v5);
    v20 = MiReadWriteAnyLevelShadowPte(v11, v12, 0, ZeroPte);
    v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL;
    goto LABEL_7;
  }
  v13 = -1LL;
LABEL_7:
  v14 = v10 | 0x90000000;
  v15 = v14;
  LODWORD(v15) = v14 | 0x8000000;
  if ( !a3 )
    v15 = v14;
  v16 = MiMakeValidPte(v5, v8, v15, a4) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( a3 )
  {
    if ( a3 == 3 )
      v13 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    MiInitializePfnForOtherProcess(v8, v5, v13, 2560);
  }
  result = MiReadWriteAnyLevelShadowPte(v5, a3, 1, v16);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(v5);
    do
    {
      v5 = v5 << 25 >> 16;
      --v9;
    }
    while ( v9 );
    return MiReplicatePteChange(v5, v5);
  }
  return result;
}
