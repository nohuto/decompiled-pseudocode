/*
 * XREFs of MiFindLargePageMemory @ 0x140755784
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14075522C (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140056EF8 (MiProtectionToCacheAttribute.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiUpdateLargePagePfns @ 0x1402690D8 (MiUpdateLargePagePfns.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiFindLargePageMemory(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v6; // r13
  _QWORD *PoolWithTag; // rbx
  _QWORD *v8; // rsi
  int v9; // r12d
  unsigned int v10; // eax
  unsigned __int64 v11; // r15
  int v12; // ebp
  unsigned __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // [rsp+60h] [rbp-48h] BYREF
  __int64 v18; // [rsp+68h] [rbp-40h]
  unsigned int v21; // [rsp+C0h] [rbp+18h]

  v6 = a3;
  if ( (unsigned int)MiSufficientAvailablePages(a1, a3 + 160) )
  {
    PoolWithTag = 0LL;
    v8 = 0LL;
    v9 = 0;
    v10 = MiProtectionToCacheAttribute(a4);
    v11 = BugCheckParameter3;
    v12 = 1;
    v21 = v10;
    v18 = *(_QWORD *)(a5 + 16);
    while ( 1 )
    {
      if ( v6 < 0x40000 || v9 )
      {
        if ( v12 != 1 )
        {
          v11 = BugCheckParameter3;
          v8 = 0LL;
          v9 = 1;
          v12 = 1;
        }
      }
      else
      {
        v12 = 0;
      }
      v13 = MiLargePageSizes[v12];
      if ( !PoolWithTag )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C4C6D4Du);
        if ( !PoolWithTag )
          break;
      }
      if ( (int)MiFindContiguousPages(a1, v13, v11, v13, v13, v21, a2, 0x80000000, 1611661312, 0LL, &v17) >= 0 )
      {
        v14 = v17;
        v6 -= v13;
        if ( (unsigned int)MiUpdateLargePagePfns(v18, v17) == 1 )
          *(_DWORD *)(a5 + 24) = 1;
        if ( v8 && (v15 = v8[2], v14 + v13 == v15) )
        {
          v8[3] += v13;
          v8[2] = v15 - v13;
        }
        else
        {
          PoolWithTag[2] = v14;
          PoolWithTag[3] = v13;
          v16 = *(_QWORD **)(a5 + 8);
          if ( *v16 != a5 )
            __fastfail(3u);
          *PoolWithTag = a5;
          v8 = PoolWithTag;
          PoolWithTag[1] = v16;
          *v16 = PoolWithTag;
          *(_QWORD *)(a5 + 8) = PoolWithTag;
          PoolWithTag = 0LL;
        }
        if ( !v6 || (v11 = v14 - 1, v11 <= v13) )
        {
LABEL_22:
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          return;
        }
      }
      else
      {
        if ( v12 == 1 )
          goto LABEL_22;
        v9 = 1;
      }
    }
  }
}
