/*
 * XREFs of MiAllocatePoolPages @ 0x1400D85D8
 * Callers:
 *     ExAllocateHeapPages @ 0x1400D85A4 (ExAllocateHeapPages.c)
 * Callees:
 *     MmAllocatePoolMemory @ 0x140025B30 (MmAllocatePoolMemory.c)
 *     MiFreeExcessSegments @ 0x1400C6548 (MiFreeExcessSegments.c)
 *     MiFindNonPagedPoolVa @ 0x1400D7730 (MiFindNonPagedPoolVa.c)
 *     MiAllocatePagedPoolPages @ 0x1400D9750 (MiAllocatePagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1400DC534 (MiReturnNonPagedPoolVa.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 */

ULONG_PTR __fastcall MiAllocatePoolPages(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  ULONG_PTR result; // rax
  __int64 v5; // rbp
  __int64 v6; // rcx
  _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rax
  unsigned __int64 NonPagedPoolVa; // rdi
  int v10; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v11; // [rsp+70h] [rbp+18h] BYREF
  ULONG_PTR v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  if ( v3 >= 0x100000000LL )
    return 0LL;
  if ( (a1 & 1) != 0 )
    return MiAllocatePagedPoolPages();
  v5 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
  if ( v3 > 3 )
    goto LABEL_12;
  v6 = 25 * v5;
  if ( (a1 & 0x200) != 0 )
    v6 += 3LL;
  v7 = &qword_1403CB6A8[v3 + v6];
  if ( !LOWORD(v7->Alignment) || (v8 = RtlpInterlockedPopEntrySList(v7)) == 0LL )
  {
LABEL_12:
    NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v3, v5, &v10);
    if ( NonPagedPoolVa || (MiFreeExcessSegments(), (NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v3, v5, &v10)) != 0) )
    {
      if ( v10 != 2 )
        return NonPagedPoolVa;
      v12 = NonPagedPoolVa;
      v11 = v3 << 12;
      if ( (int)MmAllocatePoolMemory(&v12, &v11, (v5 + 1) | 0x1000, (a1 & 0x200) != 0 ? 4 : 64, a1) >= 0 )
        return NonPagedPoolVa;
      ++dword_1403CB130;
      MiFreeExcessSegments();
      MiReturnNonPagedPoolVa(NonPagedPoolVa, v3, a1);
    }
    else
    {
      ++dword_1403CB130;
      ++dword_1403CB154;
      MiFreeExcessSegments();
    }
    return 0LL;
  }
  result = (ULONG_PTR)&v8[-1];
  if ( *(_QWORD *)result != (result ^ qword_1403CC500) )
    KeBugCheckEx(0x1Au, 0x5200uLL, result, *(_QWORD *)result, result ^ qword_1403CC500);
  return result;
}
