/*
 * XREFs of MiFindLargePageMemory @ 0x1406BE99C
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x1406BE398 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiProtectionToCacheAttribute @ 0x140107AC8 (MiProtectionToCacheAttribute.c)
 *     MiUpdateLargePagePfns @ 0x140221CB0 (MiUpdateLargePagePfns.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFindLargePageMemory(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // r14
  _QWORD *PoolWithTag; // rbx
  _QWORD *v7; // rsi
  int v8; // r13d
  unsigned int v9; // eax
  unsigned __int64 v10; // r12
  int v11; // ebp
  unsigned __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h]
  unsigned int v20; // [rsp+B0h] [rbp+18h]

  v5 = a3;
  if ( a3 <= *(_QWORD *)(a1 + 5760) - 160LL )
  {
    PoolWithTag = 0LL;
    v7 = 0LL;
    v8 = 0;
    v9 = MiProtectionToCacheAttribute(a4);
    v10 = BugCheckParameter3;
    v11 = 1;
    v20 = v9;
    v17 = *(_QWORD *)(a5 + 16);
    while ( 1 )
    {
      if ( v5 < 0x40000 || v8 )
      {
        if ( v11 != 1 )
        {
          v10 = BugCheckParameter3;
          v7 = 0LL;
          v8 = 1;
          v11 = 1;
        }
      }
      else
      {
        v11 = 0;
      }
      v12 = MiLargePageSizes[v11];
      if ( !PoolWithTag )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C4C6D4Du);
        if ( !PoolWithTag )
          break;
      }
      if ( (int)MiFindContiguousPages(a1, v12, v10, v12, v12, v20, a2, 0x80000000, 1611661312, &v16) >= 0 )
      {
        v13 = v16;
        v5 -= v12;
        if ( (unsigned int)MiUpdateLargePagePfns(v17, v16) == 1 )
          *(_DWORD *)(a5 + 24) = 1;
        if ( v7 && (v14 = v7[2], v13 + v12 == v14) )
        {
          v7[3] += v12;
          v7[2] = v14 - v12;
        }
        else
        {
          PoolWithTag[2] = v13;
          PoolWithTag[3] = v12;
          v15 = *(_QWORD **)(a5 + 8);
          if ( *v15 != a5 )
            __fastfail(3u);
          *PoolWithTag = a5;
          v7 = PoolWithTag;
          PoolWithTag[1] = v15;
          *v15 = PoolWithTag;
          *(_QWORD *)(a5 + 8) = PoolWithTag;
          PoolWithTag = 0LL;
        }
        if ( !v5 || (v10 = v13 - 1, v10 <= v12) )
        {
LABEL_22:
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          return;
        }
      }
      else
      {
        if ( v11 == 1 )
          goto LABEL_22;
        v8 = 1;
      }
    }
  }
}
