/*
 * XREFs of MiUseLargeDriverPage @ 0x1404B0F54
 * Callers:
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiFreeContiguousPages @ 0x1401233D4 (MiFreeContiguousPages.c)
 *     MiMapWithLargePages @ 0x14014734C (MiMapWithLargePages.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14020F010 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x140217AC0 (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x14022397C (MiRoundUpToPowerOf2SizeT.c)
 *     MiChargeSystemImageCommitment @ 0x1404B0FE4 (MiChargeSystemImageCommitment.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     LdrRelocateImageWithBias @ 0x1405BAA74 (LdrRelocateImageWithBias.c)
 *     MiUnmapLargeDriver @ 0x1406BF148 (MiUnmapLargeDriver.c)
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
  __int64 v15; // r14
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
  ULONG Conflict; // [rsp+20h] [rbp-88h]
  ULONG Invalid; // [rsp+28h] [rbp-80h]
  __int64 v32; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v33[5]; // [rsp+58h] [rbp-50h] BYREF

  v4 = a2;
  memset(v33, 0, 0x20uLL);
  if ( (MiFlags & 0x10000) != 0 )
    return 0LL;
  if ( !byte_14036C08D )
  {
    for ( i = qword_14036C098; (__int64 *)i != &qword_14036C098; i = *(_QWORD *)i )
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
              qword_14036C290,
              v14,
              v14,
              1u,
              0x80000000,
              0x80000000,
              0x100000,
              &v32) < 0 )
    return 0LL;
  v15 = v32;
  if ( v14 > v13 )
    MiFreeContiguousPages((__int64)&MiSystemPartition, v32 + v13, v14 - v13);
  v16 = (void *)MiMapWithLargePages(v15, (v4 + 511) & 0xFFFFFFFFFFFFFE00uLL, 6, 1, 12);
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
    MiChargeSystemImageCommitment(a1, 0LL);
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 6);
    MiLogPerfMemoryRangeEvent((__int64)v17, 0LL, inited, v13);
  }
  return v17;
}
