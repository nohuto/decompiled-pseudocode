/*
 * XREFs of MiReturnSystemVa @ 0x1400F6A90
 * Callers:
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     MiExpandSystemCache @ 0x1400F52C8 (MiExpandSystemCache.c)
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MiExpandPtes @ 0x1400F5BA0 (MiExpandPtes.c)
 *     MiReturnSystemPtes @ 0x1400F60D0 (MiReturnSystemPtes.c)
 *     MiExpandPagedPool @ 0x1400F7CD0 (MiExpandPagedPool.c)
 *     MiDeleteBootRange @ 0x140142F9C (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x14014F450 (MiMapWithLargePages.c)
 *     MiExpandSpecialPool @ 0x14022042C (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x140220644 (MiRemoveSpecialPoolRange.c)
 *     MiReleaseLargePteMappings @ 0x14022BEB8 (MiReleaseLargePteMappings.c)
 *     MiUnmapLargePages @ 0x14022E928 (MiUnmapLargePages.c)
 *     MiReleaseDriverPtes @ 0x1405413F0 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140541558 (MiReserveDriverPtes.c)
 *     MiFreeBootDriverPage @ 0x140837C4C (MiFreeBootDriverPage.c)
 *     MiMapBBTMemory @ 0x14085826C (MiMapBBTMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReturnSystemCharges @ 0x1400C3258 (MiReturnSystemCharges.c)
 *     MiFreeUnmappedPageTables @ 0x1400F6C7C (MiFreeUnmappedPageTables.c)
 *     MiMakeSystemRangeAvailable @ 0x1400F6D54 (MiMakeSystemRangeAvailable.c)
 *     MiDeleteSystemPageTables @ 0x1400F6F60 (MiDeleteSystemPageTables.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  ULONG_PTR v10; // r13
  ULONG_PTR v11; // r12
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rdx
  char *AnyMultiplexedVm; // rbx
  int v16; // esi
  unsigned __int64 v17; // rbp
  ULONG_PTR *v18; // rbx
  int v19; // ecx
  _QWORD v20[4]; // [rsp+30h] [rbp-48h] BYREF

  memset(v20, 0, sizeof(v20));
  v7 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  v8 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v7 >= v8 )
    return;
  v9 = 0LL;
  v10 = (__int64)(v7 << 25) >> 16;
  v11 = ((__int64)(v8 << 25) >> 16) - v10;
  v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = (v8 >> 9) & 0x7FFFFFFFF8LL;
  v14 = a4;
  AnyMultiplexedVm = 0LL;
  v16 = 1;
  if ( a4 )
  {
    if ( a3 == 1 )
    {
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
      goto LABEL_8;
    }
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
      {
        v19 = 2;
      }
      else if ( a3 == 8 )
      {
        v19 = 0;
      }
      else
      {
        if ( a3 != 12 )
          goto LABEL_8;
        v19 = 1;
      }
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(v19);
    }
LABEL_8:
    v9 = MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, v14, v12, v13, v14);
  }
  MiMakeSystemRangeAvailable(v10, v11);
  MiFreeUnmappedPageTables(v9, v20, 0LL);
  v17 = v20[3];
  if ( v20[3] && qword_14038B9E8 )
  {
    if ( AnyMultiplexedVm )
      v18 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 86));
    else
      v18 = &MiSystemPartition;
    MiReturnCommit((__int64)v18, v20[3] - v20[1]);
    if ( a3 != 1 )
      v16 = a3;
    MiReturnSystemCharges((__int64)v18, v17, v16);
  }
}
