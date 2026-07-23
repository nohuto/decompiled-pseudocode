/*
 * XREFs of MiFindContiguousMemoryInPool @ 0x140119800
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140119418 (MiAllocateContiguousMemory.c)
 * Callees:
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 *     MiScanNonPagedPoolVa @ 0x1400C1BA0 (MiScanNonPagedPoolVa.c)
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MiPhysicalPoolCheck @ 0x140119F00 (MiPhysicalPoolCheck.c)
 */

ULONG_PTR __fastcall MiFindContiguousMemoryInPool(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // ebp
  _SLIST_HEADER *v8; // rdi
  unsigned __int64 Alignment; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  ULONG_PTR v14; // rsi
  unsigned __int64 v15; // rax
  int v16; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]
  unsigned __int64 v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h]
  char v20; // [rsp+70h] [rbp-18h]
  int v21; // [rsp+A8h] [rbp+20h] BYREF

  if ( a4 > 0x200000 )
    return 0LL;
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
      v15 = 512 - v11;
      if ( v11 <= 512 - v11 )
        v15 = a3 & 0x1FF;
      if ( v6 > v15 )
        return 0LL;
    }
  }
  v7 = a5;
  v8 = &qword_140388510[25 * a5];
  Alignment = v8[16].Alignment;
  if ( !Alignment || a2 < Alignment || a1 > v8[16].Region )
    return 0LL;
  v17 = a2;
  v19 = a3;
  v16 = 1;
  v18 = a1;
  v20 = 0;
  v12 = MiScanNonPagedPoolVa(v6, a5, 0LL, (__int64)&v16);
  if ( v12 != -1 )
    return v8[20].Alignment + (v12 << 12);
  v13 = MiExpandNonPagedPool(512, v6, v7, -1LL, 1, &v21);
  if ( v13 == -1 )
    return 0LL;
  v14 = v8[20].Alignment + (v13 << 12);
  if ( MiPhysicalPoolCheck(0, v13, v6, v6, v17, v18, v19, v7) == -1 )
  {
    MiFreePoolPages(v14, v6 << 12);
    return 0LL;
  }
  return v14;
}
