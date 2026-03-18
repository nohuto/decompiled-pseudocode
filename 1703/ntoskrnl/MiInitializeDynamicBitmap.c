/*
 * XREFs of MiInitializeDynamicBitmap @ 0x14057E66C
 * Callers:
 *     MiBuildDynamicRegion @ 0x14015A518 (MiBuildDynamicRegion.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MiInitializeSessionPool @ 0x14057E5D0 (MiInitializeSessionPool.c)
 *     MiCreateLargePfnBitMaps @ 0x1405BA7C0 (MiCreateLargePfnBitMaps.c)
 *     MiInitializeMirroring @ 0x140803C7C (MiInitializeMirroring.c)
 *     MiInitializeNonPagedPool @ 0x140803DE4 (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x14081450C (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x14081469C (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x140824BAC (MiInitializePteInfo.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140031BC0 (MiPartitionIdToPointer.c)
 *     MiInitializeTbFlushList @ 0x14007F890 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiFillGapAddresses @ 0x14015A700 (MiFillGapAddresses.c)
 *     MiReturnPfnList @ 0x14015B5D8 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x1401677FC (MiReturnSplitPageCharges.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x14020D3B4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v7; // r14
  __int64 v8; // r8
  __int64 PteAddress; // rsi
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
  _QWORD *v23; // r14
  signed __int64 v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-138h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-130h]
  __int64 v30; // [rsp+30h] [rbp-128h]
  unsigned __int64 v31; // [rsp+38h] [rbp-120h]
  __int64 v32; // [rsp+40h] [rbp-118h]
  _BYTE v33[192]; // [rsp+50h] [rbp-108h] BYREF

  v31 = a2;
  v32 = a3;
  v7 = a2;
  PteAddress = MiGetPteAddress(a2);
  v11 = ((unsigned __int64)(v8 + 7) >> 15)
      + (((((unsigned __int64)(v8 + 7) >> 3) & 0xFFF) + (unsigned int)(v10 & 0xFFF) + 4095) >> 12);
  SystemRegionType = MiGetSystemRegionType(v10);
  v15 = 3;
  if ( SystemRegionType == 1 )
    v15 = 1;
  v29 = v15;
  if ( (v14 & 2) == 0 )
  {
    if ( (a4 & 4) != 0 )
    {
      v16 = &qword_14036CF28;
      if ( (a4 & 8) == 0 )
        v16 = (PVOID *)&unk_14036CF08;
      MiFillGapAddresses(v7, (v11 << 12) + v13 - 1, (int)v16);
      result = 1LL;
      *a1 = a3;
      a1[1] = v7;
      return result;
    }
    result = MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v11 - 1), 1, v15);
    if ( !(_DWORD)result )
      return result;
  }
  v28 = 0LL;
  v30 = 0LL;
  MiInitializeTbFlushList((__int64)v33, 0, 20);
  if ( (a4 & 8) != 0 )
  {
    v18 = qword_14036CEE0;
    v19 = qword_14036CF50;
  }
  else
  {
    v18 = qword_14036CEC8;
    v19 = qword_14036CF60;
  }
  v20 = 0LL;
  ValidPte = MiMakeValidPte(PteAddress, v18, ((unsigned __int8)(a4 & 1) << 29) + 1);
  if ( v11 )
  {
    v23 = (_QWORD *)v28;
    do
    {
      if ( (PteAddress & 0xFFF) != 0 || v11 - v20 < 0x200 || (a4 & 0x10) == 0 )
      {
        *(_QWORD *)PteAddress = ValidPte;
        if ( MiPteInShadowRange(PteAddress) )
          MiWritePteShadow();
        PteAddress += 8LL;
      }
      else
      {
        v24 = MiGetPteAddress(PteAddress);
        v28 = MI_READ_PTE_LOCK_FREE(v24);
        MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v24, v19);
        v24 <<= 25;
        MiInsertTbFlushEntry((__int64)v33, v24 >> 16, 1LL, 0);
        v25 = (_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v28) - 0x58000000000LL);
        *v25 = v23;
        v23 = v25;
        v20 += 511LL;
        v30 = MiPartitionIdToPointer(((unsigned int)HIDWORD(v25[5]) >> 8) & 0x3FF);
        PteAddress = (v24 + 0x10000000) >> 16;
      }
      ++v20;
    }
    while ( v20 < v11 );
    v28 = (__int64)v23;
    v7 = v31;
  }
  v26 = v28;
  *a1 = v32;
  a1[1] = v7;
  if ( v26 )
  {
    MiFlushTbList((__int64)v33, v21);
    v27 = MiReturnPfnList(v26);
    MiReturnSplitPageCharges(v30, v27, v29);
  }
  return 1LL;
}
