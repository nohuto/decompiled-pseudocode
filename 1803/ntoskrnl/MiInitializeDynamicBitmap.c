/*
 * XREFs of MiInitializeDynamicBitmap @ 0x14060AC60
 * Callers:
 *     MiBuildDynamicRegion @ 0x14017677C (MiBuildDynamicRegion.c)
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 *     MiInitializeSessionPool @ 0x14060ABC4 (MiInitializeSessionPool.c)
 *     MiCreateLargePfnBitMaps @ 0x14064A598 (MiCreateLargePfnBitMaps.c)
 *     MiInitializeMirroring @ 0x14089C980 (MiInitializeMirroring.c)
 *     MiInitializeNonPagedPool @ 0x14089CAE8 (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x1408AC498 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1408AC630 (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x1408AC9D0 (MiInitializePteInfo.c)
 * Callees:
 *     MiSetPfnLink @ 0x1400093E8 (MiSetPfnLink.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiTransformValidPteInPlace @ 0x1400C022C (MiTransformValidPteInPlace.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiPartitionIdToPointer @ 0x1401404D0 (MiPartitionIdToPointer.c)
 *     MiReturnPfnList @ 0x14017C188 (MiReturnPfnList.c)
 *     MiLockPageTable @ 0x140185E74 (MiLockPageTable.c)
 *     MiReturnSplitPageCharges @ 0x140186104 (MiReturnSplitPageCharges.c)
 *     MiUnlockPageTable @ 0x14018626C (MiUnlockPageTable.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 PteAddress; // rsi
  unsigned __int64 v8; // r14
  int SystemRegionType; // eax
  __int64 v10; // r9
  int v11; // ecx
  __int64 v12; // rdx
  signed __int64 v13; // rdi
  char *AnyMultiplexedVm; // rbp
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r13
  unsigned __int64 ValidPte; // rbx
  bool v18; // zf
  unsigned __int8 v19; // r12
  bool v20; // cl
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31[10]; // [rsp+38h] [rbp-50h] BYREF
  bool v35; // [rsp+A8h] [rbp+20h]

  PteAddress = MiGetPteAddress(a2);
  v8 = ((unsigned __int64)(v5 + 7) >> 15) + (((v6 & 0xFFF) + 4095 + (((unsigned __int64)(v5 + 7) >> 3) & 0xFFF)) >> 12);
  SystemRegionType = MiGetSystemRegionType(v6);
  v11 = 9;
  if ( SystemRegionType == 1 )
    v11 = 1;
  v28 = v11;
  if ( (v10 & 2) == 0 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v8 - 1), 1u, v11) )
    return 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    v12 = qword_1403CC420;
    v13 = qword_1403CC490;
  }
  else
  {
    v12 = qword_1403CC408;
    v13 = qword_1403CC4A0;
  }
  AnyMultiplexedVm = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  ValidPte = MiMakeValidPte(PteAddress, v12, ((unsigned __int8)(a4 & 1) << 29) + 1, v10);
  if ( !v8 )
    goto LABEL_21;
  v18 = (a4 & 8) == 0;
  v19 = 17;
  v20 = !v18;
  v35 = !v18;
  do
  {
    if ( (PteAddress & 0xFFF) == 0 && v20 && v8 - v16 >= 0x200 )
    {
      v21 = MiGetPteAddress(PteAddress);
      if ( (_DWORD)InitializationPhase )
      {
        if ( !AnyMultiplexedVm )
        {
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
          v19 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        }
        if ( v15 )
        {
          if ( (v21 & 0xFFF) != 0 )
            goto LABEL_15;
          MiUnlockPageTable((__int64)AnyMultiplexedVm, v15);
        }
        v15 = MiGetPteAddress(v21);
        MiLockPageTable((__int64)AnyMultiplexedVm, v15);
      }
LABEL_15:
      v31[0] = MI_READ_PTE_LOCK_FREE(v21);
      MiTransformValidPteInPlace((volatile signed __int64 *)v21, v21, v13, 1u);
      v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v31);
      MiSetPfnLink((_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v29);
      v29 = v23;
      v30 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v23 + 40)) >> 8) & 0x3FF);
      v16 += 511LL;
      PteAddress = ((v21 << 25) + 0x10000000) >> 16;
      goto LABEL_19;
    }
    *(_QWORD *)PteAddress = ValidPte;
    if ( MiPteInShadowRange(PteAddress) )
      MiWritePteShadow(v25, ValidPte, v24);
    PteAddress += 8LL;
LABEL_19:
    v20 = v35;
    ++v16;
  }
  while ( v16 < v8 );
  if ( AnyMultiplexedVm )
  {
    if ( v15 )
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v15);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v19, v24);
  }
LABEL_21:
  *a1 = a3;
  a1[1] = a2;
  if ( v29 )
  {
    v27 = MiReturnPfnList(v29);
    MiReturnSplitPageCharges(v30, v27, v28);
  }
  return 1LL;
}
