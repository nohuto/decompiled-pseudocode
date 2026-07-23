/*
 * XREFs of MiFindContiguousMemoryInPool @ 0x1400BE770
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400BE350 (MiAllocateContiguousMemory.c)
 * Callees:
 *     MiExpandNonPagedPool @ 0x1400BE8FC (MiExpandNonPagedPool.c)
 *     MiScanNonPagedPoolVa @ 0x1400D79E0 (MiScanNonPagedPoolVa.c)
 *     MiFreePoolPages @ 0x1400E1834 (MiFreePoolPages.c)
 *     MiPhysicalPoolCheck @ 0x140162CAC (MiPhysicalPoolCheck.c)
 */

ULONG_PTR __fastcall MiFindContiguousMemoryInPool(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rbx
  _SLIST_HEADER *v7; // rdi
  unsigned __int64 Alignment; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  ULONG_PTR v13; // rsi
  unsigned __int64 v14; // rax
  _BYTE v15[8]; // [rsp+40h] [rbp-48h] BYREF
  int v16; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-38h]
  unsigned __int64 v18; // [rsp+58h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp-28h]
  char v20; // [rsp+78h] [rbp-10h]

  if ( MmProtectFreedNonPagedPool == 1 )
    return 0LL;
  v6 = (a4 >> 12) + ((a4 & 0xFFF) != 0);
  if ( v6 >= 0x200 )
    return 0LL;
  if ( a3 )
  {
    v11 = a3 & 0x1FF;
    if ( (a3 & 0x1FF) != 0 )
    {
      v14 = 512 - v11;
      if ( v11 <= 512 - v11 )
        v14 = a3 & 0x1FF;
      if ( v6 > v14 )
        return 0LL;
    }
  }
  v7 = &qword_1403CB6A8[25 * a5];
  Alignment = v7[16].Alignment;
  if ( !Alignment
    || a2 < Alignment
    || a1 > v7[16].Region
    || !*(_QWORD *)(1984LL * a5 + qword_1403CDF50 + 1808) && (_DWORD)InitializationPhase )
  {
    return 0LL;
  }
  v17 = a2;
  v19 = a3;
  v16 = 1;
  v18 = a1;
  v20 = 0;
  v10 = MiScanNonPagedPoolVa(v6, a5, 0LL, &v16);
  if ( v10 != -1 )
    return v7[20].Alignment + (v10 << 12);
  v12 = MiExpandNonPagedPool(512, v6, a5, 1, (__int64)v15);
  if ( v12 == -1 )
    return 0LL;
  v13 = v7[20].Alignment + (v12 << 12);
  if ( MiPhysicalPoolCheck(0, v12, v6, v6, v17, v18, v19, a5) == -1 )
  {
    MiFreePoolPages(v13);
    return 0LL;
  }
  return v13;
}
