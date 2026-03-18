/*
 * XREFs of MiExpandPagedPool @ 0x1400C631C
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x1400D9750 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MmAllocatePoolMemory @ 0x140025B30 (MmAllocatePoolMemory.c)
 *     MiSplitBitmapPages @ 0x1400465B8 (MiSplitBitmapPages.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiFreeExcessSegments @ 0x1400C6548 (MiFreeExcessSegments.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 */

__int64 __fastcall MiExpandPagedPool(ULONG_PTR *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v5; // rbx
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r9
  ULONG_PTR v10; // r15
  ULONG_PTR v11; // rdi
  ULONG_PTR *v12; // r12
  unsigned __int64 v13; // r15
  ULONG_PTR v15; // rax
  __int64 v16; // r15
  ULONG_PTR v17; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v18; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-18h]
  unsigned int v20; // [rsp+A0h] [rbp+48h]
  unsigned int v21; // [rsp+A8h] [rbp+50h]
  int v22; // [rsp+B0h] [rbp+58h]
  ULONG_PTR v23; // [rsp+B8h] [rbp+60h] BYREF

  v2 = 1;
  v21 = 1;
  if ( a1 == &BugCheckParameter2 )
  {
    MiFreeExcessSegments();
    v5 = 0LL;
    v20 = 6;
LABEL_3:
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    goto LABEL_4;
  }
  v20 = 1;
  v2 = 33;
  v21 = 33;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( !v5 )
    goto LABEL_3;
  AnyMultiplexedVm = (char *)(v5 + 3008);
LABEL_4:
  v23 = 0LL;
  v7 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v8 = KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
  v19 = v7 >> 9;
  LODWORD(v8) = *(unsigned __int16 *)(*(_QWORD *)(v8 + 192) + 146LL);
  v17 = (unsigned __int64)(unsigned int)(v7 >> 9) << 21;
  v22 = v8 + 1;
  if ( (int)MmAllocatePoolMemory(&v23, &v17, (v8 + 1) | 0x2000, 4u, v2) < 0 )
  {
    if ( !v5 )
    {
      ++dword_1403CB160;
      goto LABEL_21;
    }
    ++dword_1403CB164;
LABEL_32:
    if ( v5 )
    {
      ++dword_1403CB148;
      ++*(_DWORD *)(v5 + 92);
      return -1LL;
    }
LABEL_21:
    ++dword_1403CB13C;
    return -1LL;
  }
  v10 = v23;
  v11 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 >= 0x80000 )
  {
    v16 = *(_QWORD *)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 87));
    if ( !(unsigned int)MiChargeCommit(v16, a2, 1LL, v9) )
    {
      ++dword_1403CB168;
LABEL_26:
      if ( v5 )
        ++dword_1403CB16C;
      else
        ++dword_1403CB168;
      if ( v23 )
        MiReturnSystemVa(v23, (__int64)((v7 << 28) + (v11 << 25)) >> 16, v20);
      goto LABEL_32;
    }
    MiReturnCommit(v16, a2);
    v10 = v23;
  }
  v12 = a1 + 1;
  v13 = (__int64)(((v10 >> 9) & 0x7FFFFFFFF8LL) - a1[3] - 0x98000000000LL) >> 3;
  if ( !(unsigned int)MiSplitBitmapPages(v20, a1[2] + (v13 >> 3), v7 + (v13 & 7)) )
    goto LABEL_26;
  if ( v13 + v7 > *v12 )
  {
    v15 = a1[4];
    if ( v13 + v7 <= v15 )
      v15 = v13 + v7;
    *v12 = v15;
  }
  v17 = a2 << 12;
  v18 = v23;
  if ( (int)MmAllocatePoolMemory(&v18, &v17, v22 | 0x1000u, 4u, v21) < 0 )
    goto LABEL_26;
  if ( v5 )
    *(_DWORD *)(v5 + 8124) += v19;
  if ( v7 != a2 )
    RtlClearBitsEx((__int64)(a1 + 1), v13 + a2, v7 - a2);
  return v13;
}
