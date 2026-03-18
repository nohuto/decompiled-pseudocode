/*
 * XREFs of MiUseLargeDriverPage @ 0x140542AC8
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiFreeContiguousPages @ 0x140118318 (MiFreeContiguousPages.c)
 *     MiMapWithLargePages @ 0x14014F450 (MiMapWithLargePages.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140216D54 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x14022138C (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x1402303D0 (MiRoundUpToPowerOf2SizeT.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     MiChargeSystemImageCommitment @ 0x1404F5E38 (MiChargeSystemImageCommitment.c)
 *     LdrRelocateImageWithBias @ 0x1405BE60C (LdrRelocateImageWithBias.c)
 *     MiUnmapLargeDriver @ 0x1406EC428 (MiUnmapLargeDriver.c)
 */

void *__fastcall MiUseLargeDriverPage(__int64 a1, unsigned int a2, const void *a3, const UNICODE_STRING *a4)
{
  __int64 v4; // rbp
  __int64 i; // rbx
  unsigned __int64 v10; // r13
  unsigned __int64 j; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r14
  void *v16; // rax
  void *v17; // rbx
  size_t v18; // r14
  PIMAGE_NT_HEADERS v19; // rax
  LONGLONG v20; // rdx
  const CHAR *v21; // r8
  ULONG v22; // r9d
  PIMAGE_NT_HEADERS v23; // rbp
  unsigned int VirtualAddress; // ecx
  bool v25; // cc
  void *v26; // rcx
  char *AnyMultiplexedVm; // rax
  ULONG_PTR v28; // r8
  unsigned int inited; // eax
  ULONG Conflict; // [rsp+20h] [rbp-98h]
  ULONG Invalid; // [rsp+28h] [rbp-90h]
  unsigned __int64 v32; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v33[5]; // [rsp+68h] [rbp-50h] BYREF

  v4 = a2;
  memset(v33, 0, 0x20uLL);
  if ( (MiFlags & 0x10000) != 0 )
    return 0LL;
  if ( !byte_1403883CD )
  {
    for ( i = qword_1403883D8; (__int64 *)i != &qword_1403883D8; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString(a4, (PCUNICODE_STRING)(i + 16), 1u) )
        goto LABEL_8;
    }
    return 0LL;
  }
LABEL_8:
  if ( a1 )
  {
    v10 = MiSectionControlArea(a1);
    for ( j = v10 + 128; j; j = *(_QWORD *)(j + 16) )
    {
      if ( (*(_BYTE *)(j + 32) & 0x3E) == 0 )
        return 0LL;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v12 = v4;
  v13 = (v4 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v14 = MiRoundUpToPowerOf2SizeT(v13);
  if ( (int)MiFindContiguousPages(
              (__int64)&MiSystemPartition,
              0x200uLL,
              qword_1403885E0,
              v14,
              v14,
              1u,
              0x80000000,
              0x80000000,
              0x100000,
              0LL,
              (__int64 *)&v32) < 0 )
    return 0LL;
  v15 = v32;
  if ( v14 > v13 )
    MiFreeContiguousPages((__int64)&MiSystemPartition, v32 + v13, v14 - v13);
  v16 = (void *)MiMapWithLargePages(v15, (v4 + 511) & 0xFFFFFFFFFFFFFE00uLL, 6LL, 1, 12);
  v17 = v16;
  if ( !v16 )
  {
    MiFreeContiguousPages((__int64)&MiSystemPartition, v15, (v4 + 511) & 0xFFFFFFFFFFFFFE00uLL);
    return 0LL;
  }
  v18 = (unsigned int)((_DWORD)v4 << 12);
  memmove(v16, a3, v18);
  v19 = RtlImageNtHeader(v17);
  v23 = v19;
  if ( v19->OptionalHeader.NumberOfRvaAndSizes <= 5 )
    goto LABEL_24;
  VirtualAddress = v19->OptionalHeader.DataDirectory[5].VirtualAddress;
  if ( VirtualAddress )
  {
    v25 = v19->OptionalHeader.DataDirectory[5].Size + VirtualAddress <= (unsigned int)v18;
    v26 = v17;
    if ( !v25 )
    {
LABEL_25:
      MiUnmapLargeDriver(v26, v12);
      return 0LL;
    }
    if ( (LdrRelocateImageWithBias(v17, v20, v21, v22, Conflict, Invalid) & 0x80000000) != 0 )
    {
LABEL_24:
      v26 = v17;
      goto LABEL_25;
    }
  }
  v23->OptionalHeader.ImageBase = (unsigned __int64)v17;
  if ( a1 )
  {
    MiGetPteAddress((unsigned __int64)a3);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v10, v28, v12, 1, v33);
    MiChargeSystemImageCommitment(a1);
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 6);
    MiLogPerfMemoryRangeEvent((__int64)v17, 0LL, inited, v13);
  }
  return v17;
}
