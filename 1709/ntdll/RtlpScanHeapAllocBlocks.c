/*
 * XREFs of RtlpScanHeapAllocBlocks @ 0x1800F4548
 * Callers:
 *     RtlpScanProcessVirtualMemory @ 0x1800F4778 (RtlpScanProcessVirtualMemory.c)
 * Callees:
 *     RtlSizeHeap @ 0x180045BB0 (RtlSizeHeap.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpGetBlockInfo @ 0x1800F3FDC (RtlpGetBlockInfo.c)
 *     RtlpGetHeapBlock @ 0x1800F4020 (RtlpGetHeapBlock.c)
 */

char RtlpScanHeapAllocBlocks()
{
  __int64 *v0; // rbx
  _QWORD *v1; // rsi
  unsigned __int64 *v2; // rcx
  __int64 *v3; // rbp
  __int64 v4; // rax
  unsigned __int64 *v5; // rax
  unsigned __int64 *i; // rdi
  __int64 HeapBlock; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 *v10; // rcx
  __int64 j; // rdi
  __int64 BlockInfo; // rax
  int v13; // r9d
  __int64 v14; // rbx
  SIZE_T v15; // rax
  _DWORD *v16; // rsi
  char *v17; // r8
  unsigned __int8 *v18; // rbx
  int v19; // eax

  v0 = (__int64 *)RtlpBusyList;
  while ( v0 != &RtlpBusyList )
  {
    v1 = v0 + 2;
    v2 = (unsigned __int64 *)v0[2];
    v3 = v0;
    v4 = v0[3];
    v0 = (__int64 *)*v0;
    v5 = (unsigned __int64 *)((char *)v2 + v4);
    for ( i = v2 + 1; i <= v5; ++i )
    {
      HeapBlock = RtlpGetHeapBlock(*v2);
      if ( HeapBlock )
      {
        if ( !*(_DWORD *)(HeapBlock + 32) )
        {
          v8 = *(_QWORD *)HeapBlock;
          if ( *(_QWORD *)(*(_QWORD *)HeapBlock + 8LL) != HeapBlock
            || (v9 = *(_QWORD **)(HeapBlock + 8), *v9 != HeapBlock) )
          {
            __fastfail(3u);
          }
          *v9 = v8;
          *(_QWORD *)(v8 + 8) = v9;
          v10 = (__int64 *)qword_18015DA88;
          if ( *(__int64 **)qword_18015DA88 != &RtlpBusyList )
            __fastfail(3u);
          *(_QWORD *)HeapBlock = &RtlpBusyList;
          *(_QWORD *)(HeapBlock + 8) = v10;
          *v10 = HeapBlock;
          qword_18015DA88 = HeapBlock;
        }
        ++*(_DWORD *)(HeapBlock + 32);
        if ( !*(_QWORD *)(HeapBlock + 16) )
          __debugbreak();
      }
      v2 = i;
      v5 = (unsigned __int64 *)(*v1 + v3[3]);
    }
  }
  for ( j = RtlpLeakList; (__int64 *)j != &RtlpLeakList; j = *(_QWORD *)j )
  {
    BlockInfo = RtlpGetBlockInfo((_QWORD *)RtlpProcessMemoryMap, *(_QWORD *)(j + 16));
    v14 = BlockInfo;
    if ( BlockInfo )
    {
      if ( qword_18015DBC8 )
      {
        v15 = RtlSizeHeap(*(PVOID *)(BlockInfo + 8), 0, *(PVOID *)(j + 16));
        qword_18015DBC8(0LL, *(_QWORD *)(v14 + 8), *(_QWORD *)(j + 16), v15, 0, 0LL);
      }
      else
      {
        if ( !v13 )
        {
          DbgPrint("Below is a list of potentially leaked heap entries \nuse !heap -i Entry -h Heap for more information\n\n");
          DbgPrint("Entry     Heap              Size       \n");
          DbgPrint("---------------------------------------\n");
        }
        v16 = *(_DWORD **)(v14 + 8);
        v17 = *(char **)(j + 16);
        if ( v16[4] == -571548178 )
        {
          v18 = *(unsigned __int8 **)(j + 16);
        }
        else
        {
          v18 = (unsigned __int8 *)(v17 - 16);
          _m_prefetchw(v17 - 16);
          if ( *(v17 - 1) == 5 )
            v18 -= 16 * v18[14];
        }
        v19 = RtlSizeHeap(v16, 0, v17);
        DbgPrint("%p  %-16Ix  %Id", v18, (_DWORD)v16, v19);
        DbgPrint("\n");
      }
      ++RtlpLeaksCount;
    }
  }
  if ( qword_18015DBC8 )
    qword_18015DBC8(0LL, 0LL, 0LL, 0LL, 0, 0LL);
  return 1;
}
