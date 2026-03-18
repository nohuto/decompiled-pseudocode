/*
 * XREFs of MiUseLargeDriverPage @ 0x1405F83BC
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiFreeContiguousPages @ 0x1400C98C4 (MiFreeContiguousPages.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiMapWithLargePages @ 0x140177EDC (MiMapWithLargePages.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402547CC (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1402602EC (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x14026B6B8 (MiRoundUpToPowerOf2SizeT.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     MiChargeSystemImageCommitment @ 0x1405F8AB4 (MiChargeSystemImageCommitment.c)
 *     LdrRelocateImageWithBias @ 0x14062BD04 (LdrRelocateImageWithBias.c)
 *     MiUnmapLargeDriver @ 0x140755F38 (MiUnmapLargeDriver.c)
 */

void *__fastcall MiUseLargeDriverPage(__int64 a1, unsigned int a2, const void *a3, const UNICODE_STRING *a4)
{
  __int64 v5; // rsi
  int v7; // edi
  __int64 i; // rbx
  unsigned __int64 v10; // r13
  unsigned __int64 j; // rdx
  __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  void *v15; // rax
  void *v16; // rbx
  unsigned int v17; // r12d
  PIMAGE_NT_HEADERS v18; // rax
  LONGLONG v19; // rdx
  const CHAR *v20; // r8
  ULONG v21; // r9d
  PIMAGE_NT_HEADERS v22; // rsi
  unsigned int VirtualAddress; // ecx
  bool v24; // cc
  void *v25; // rcx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v27; // r8
  unsigned int inited; // eax
  ULONG Conflict; // [rsp+20h] [rbp-98h]
  ULONG Invalid; // [rsp+28h] [rbp-90h]
  __int64 v31[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v32[4]; // [rsp+70h] [rbp-48h] BYREF

  v5 = a2;
  memset(v32, 0, sizeof(v32));
  if ( (MiFlags & 0x10000) != 0 )
    return 0LL;
  if ( !byte_1403CB54D )
  {
    v7 = 0;
    for ( i = qword_1403CB558; (__int64 *)i != &qword_1403CB558; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString(a4, (PCUNICODE_STRING)(i + 16), 1u) )
      {
        v7 = 1;
        break;
      }
    }
    if ( !v7 )
      return 0LL;
  }
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
  v12 = v5;
  v13 = (v5 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v14 = MiRoundUpToPowerOf2SizeT(v13);
  if ( (int)MiFindContiguousPages(
              (__int64)&MiSystemPartition,
              0x200uLL,
              qword_1403CB780,
              v14,
              v14,
              1u,
              0x80000000,
              0x80000000,
              0x100000,
              0LL,
              v31) < 0 )
    return 0LL;
  if ( v14 > v13 )
    MiFreeContiguousPages((__int64)&MiSystemPartition, v13 + v31[0], v14 - v13);
  v15 = (void *)MiMapWithLargePages(v31[0], (v5 + 511) & 0xFFFFFFFFFFFFFE00uLL, 6, 1, 12);
  v16 = v15;
  v31[1] = (__int64)v15;
  if ( !v15 )
  {
    MiFreeContiguousPages((__int64)&MiSystemPartition, v31[0], (v5 + 511) & 0xFFFFFFFFFFFFFE00uLL);
    return 0LL;
  }
  v17 = (_DWORD)v5 << 12;
  memmove(v15, a3, (unsigned int)((_DWORD)v5 << 12));
  v18 = RtlImageNtHeader(v16);
  v22 = v18;
  if ( v18->OptionalHeader.NumberOfRvaAndSizes <= 5 )
    goto LABEL_26;
  VirtualAddress = v18->OptionalHeader.DataDirectory[5].VirtualAddress;
  if ( VirtualAddress )
  {
    v24 = v18->OptionalHeader.DataDirectory[5].Size + VirtualAddress <= v17;
    v25 = v16;
    if ( !v24 )
    {
LABEL_27:
      MiUnmapLargeDriver(v25, v12);
      return 0LL;
    }
    if ( (LdrRelocateImageWithBias(v16, v19, v20, v21, Conflict, Invalid) & 0x80000000) != 0 )
    {
LABEL_26:
      v25 = v16;
      goto LABEL_27;
    }
  }
  v22->OptionalHeader.ImageBase = (unsigned __int64)v16;
  if ( a1 )
  {
    MiGetPteAddress((unsigned __int64)a3);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v10, v27, v12, 1, v32);
    MiChargeSystemImageCommitment(a1, 0LL);
  }
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 6);
    MiLogPerfMemoryRangeEvent((__int64)v16, 0LL, inited, v13);
  }
  return v16;
}
