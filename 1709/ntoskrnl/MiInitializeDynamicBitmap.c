/*
 * XREFs of MiInitializeDynamicBitmap @ 0x1405B70F8
 * Callers:
 *     MiBuildDynamicRegion @ 0x140138F04 (MiBuildDynamicRegion.c)
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 *     MiCreateLargePfnBitMaps @ 0x1405B4DC8 (MiCreateLargePfnBitMaps.c)
 *     MiInitializeSessionPool @ 0x1405B705C (MiInitializeSessionPool.c)
 *     MiInitializePteInfo @ 0x14082D63C (MiInitializePteInfo.c)
 *     MiInitializeNonPagedPool @ 0x14082D7A8 (MiInitializeNonPagedPool.c)
 *     MiInitializeMirroring @ 0x14082ED28 (MiInitializeMirroring.c)
 *     MiInitializeSystemPtes @ 0x14082F554 (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x14082F958 (MiBuildPagedPool.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x1400379C4 (MiSetPfnLink.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1400A5D30 (MiInitializeTbFlushList.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiPartitionIdToPointer @ 0x14012862C (MiPartitionIdToPointer.c)
 *     MiReturnSplitPageCharges @ 0x14013907C (MiReturnSplitPageCharges.c)
 *     MiReturnPfnList @ 0x1401390C4 (MiReturnPfnList.c)
 *     MiFillGapAddresses @ 0x14014BDC0 (MiFillGapAddresses.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  _QWORD *v4; // r13
  unsigned __int64 v7; // r14
  __int64 v8; // r8
  unsigned __int64 PteAddress; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  int SystemRegionType; // eax
  __int64 v13; // rdx
  char v14; // r9
  int v15; // ecx
  PVOID *v16; // r8
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned __int64 v20; // r12
  _KPROCESS *v21; // rdx
  unsigned __int64 ValidPte; // rbx
  __int64 v23; // r14
  unsigned __int64 v24; // rsi
  __int64 PteShadow; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-138h] BYREF
  int v33; // [rsp+28h] [rbp-130h]
  __int64 v34; // [rsp+30h] [rbp-128h]
  unsigned __int64 v35; // [rsp+38h] [rbp-120h]
  _QWORD *v36; // [rsp+40h] [rbp-118h]
  __int64 v37; // [rsp+48h] [rbp-110h]
  int v38[48]; // [rsp+50h] [rbp-108h] BYREF

  v4 = a1;
  v36 = a1;
  v35 = a2;
  v37 = a3;
  v7 = a2;
  PteAddress = MiGetPteAddress(a2);
  v11 = ((unsigned __int64)(v8 + 7) >> 15)
      + (((((unsigned __int64)(v8 + 7) >> 3) & 0xFFF) + (unsigned int)(v10 & 0xFFF) + 4095) >> 12);
  SystemRegionType = MiGetSystemRegionType(v10);
  v15 = 3;
  if ( SystemRegionType == 1 )
    v15 = 1;
  v33 = v15;
  if ( (v14 & 2) == 0 )
  {
    if ( (a4 & 4) != 0 )
    {
      v16 = &qword_1403891E8;
      if ( (a4 & 8) == 0 )
        v16 = (PVOID *)&unk_1403891C8;
      MiFillGapAddresses(v7, (v11 << 12) + v13 - 1, (int)v16);
      result = 1LL;
      *v4 = a3;
      v4[1] = v7;
      return result;
    }
    result = MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v11 - 1), 1, v15);
    if ( !(_DWORD)result )
      return result;
  }
  v32 = 0LL;
  v34 = 0LL;
  MiInitializeTbFlushList((__int64)v38, 0, 20);
  if ( (a4 & 8) != 0 )
  {
    v18 = qword_1403891A0;
    v19 = qword_140389210;
  }
  else
  {
    v18 = qword_140389188;
    v19 = qword_140389220;
  }
  v20 = 0LL;
  ValidPte = MiMakeValidPte(PteAddress, v18, ((unsigned __int8)(a4 & 1) << 29) + 1);
  if ( v11 )
  {
    v23 = v32;
    do
    {
      if ( (PteAddress & 0xFFF) != 0 || v11 - v20 < 0x200 || (a4 & 0x10) == 0 )
      {
        *(_QWORD *)PteAddress = ValidPte;
        if ( PteAddress >= 0xFFFFF6FB7DBED000uLL && PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
        PteAddress += 8LL;
      }
      else
      {
        v24 = MiGetPteAddress(PteAddress);
        PteShadow = *(_QWORD *)v24;
        if ( v24 >= v26 && v24 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
        v32 = PteShadow;
        MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v24, v19);
        v27 = v24 << 25;
        MiInsertTbFlushEntry(v38, v27 >> 16, 1LL, 0);
        v28 = (_QWORD *)MI_GET_PFN_FROM_PTE((unsigned __int64 *)&v32);
        MiSetPfnLink(v28, v23);
        v23 = v29;
        v20 += 511LL;
        v34 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v29 + 40)) >> 8) & 0x3FF);
        PteAddress = (v27 + 0x10000000) >> 16;
      }
      ++v20;
      v21 = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
    }
    while ( v20 < v11 );
    v4 = v36;
    v32 = v23;
    v7 = v35;
  }
  v30 = v32;
  *v4 = v37;
  v4[1] = v7;
  if ( v30 )
  {
    MiFlushTbList((__int64)v38, v21);
    v31 = MiReturnPfnList(v30);
    MiReturnSplitPageCharges(v34, v31, v33);
  }
  return 1LL;
}
