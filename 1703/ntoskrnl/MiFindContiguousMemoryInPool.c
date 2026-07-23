/*
 * XREFs of MiFindContiguousMemoryInPool @ 0x1401241D8
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140123DD8 (MiAllocateContiguousMemory.c)
 * Callees:
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     MiScanNonPagedPoolVa @ 0x1400AC920 (MiScanNonPagedPoolVa.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MiPhysicalPoolCheck @ 0x140134638 (MiPhysicalPoolCheck.c)
 */

ULONG_PTR __fastcall MiFindContiguousMemoryInPool(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  _SLIST_ENTRY *v6; // rbx
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
  char v21; // [rsp+A8h] [rbp+20h] BYREF

  if ( a4 > 0x200000 )
    return 0LL;
  if ( MmProtectFreedNonPagedPool == 1 )
    return 0LL;
  v6 = (_SLIST_ENTRY *)((a4 >> 12) + ((a4 & 0xFFF) != 0));
  if ( (unsigned __int64)v6 >= 0x200 )
    return 0LL;
  if ( a3 )
  {
    v11 = a3 & 0x1FF;
    if ( (a3 & 0x1FF) != 0 )
    {
      v15 = 512 - v11;
      if ( v11 <= 512 - v11 )
        v15 = a3 & 0x1FF;
      if ( (unsigned __int64)v6 > v15 )
        return 0LL;
    }
  }
  v7 = a5;
  v8 = &qword_14036C1C8[25 * a5];
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
  v13 = MiExpandNonPagedPool(512, (_DWORD)v6, v7, -1, 1, (__int64)&v21);
  if ( v13 == -1 )
    return 0LL;
  v14 = v8[20].Alignment + (v13 << 12);
  if ( MiPhysicalPoolCheck(0, v13, (_DWORD)v6, (_DWORD)v6, v17, v18, v19, v7) == -1 )
  {
    MiFreePoolPages(v14);
    return 0LL;
  }
  return v14;
}
