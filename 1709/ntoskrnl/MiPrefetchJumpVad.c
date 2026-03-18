/*
 * XREFs of MiPrefetchJumpVad @ 0x14021BF50
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     MiLeapPrefetch @ 0x14010A194 (MiLeapPrefetch.c)
 *     MiUpdatePrefetchPriority @ 0x140113880 (MiUpdatePrefetchPriority.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbp
  int v6; // ecx
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 PteShadow; // rax

  v5 = a3;
  v6 = *(_DWORD *)(a2 + 48);
  v8 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  if ( (v6 & 0x80000) == 0 )
  {
    result = v6 & 7;
    if ( (_DWORD)result != 1 )
    {
      if ( (v6 & 0x8000) != 0 )
      {
        if ( (((_DWORD)result - 3) & 0xFFFFFFFD) != 0 )
        {
          v10 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v11 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v11 > (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
            v11 = ((((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
          while ( v10 < v11 )
          {
            PteShadow = *(_QWORD *)v10;
            if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
              PteShadow = MiReadPteShadow();
            v10 += 8LL;
            if ( PteShadow )
            {
              if ( (PteShadow & 1) != 0 )
                goto LABEL_13;
              if ( (PteShadow & 0x400) != 0 )
                break;
              if ( (PteShadow & 0x800) != 0 )
              {
LABEL_13:
                MiUpdatePrefetchPriority(a1, v5, a2, a4);
              }
              else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow, a2, a3) )
              {
                break;
              }
            }
            v5 += 4096LL;
          }
          v8 = (__int64)(v10 << 25) >> 16;
        }
      }
      else if ( (*(_DWORD *)(a2 + 64) & 0x1000000) == 0 )
      {
        return result;
      }
    }
  }
  result = MiLeapPrefetch((_QWORD *)a1, v8);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
