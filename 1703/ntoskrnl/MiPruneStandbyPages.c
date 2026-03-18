/*
 * XREFs of MiPruneStandbyPages @ 0x14021FA24
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x14021FC00 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePages @ 0x1402249F0 (MiRebuildLargePages.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiNodeFreeZeroPages @ 0x1400B8330 (MiNodeFreeZeroPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 */

unsigned __int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v7; // ebx
  int i; // ebp
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  int v20; // [rsp+68h] [rbp+10h]

  v4 = 0LL;
  v7 = a3;
  for ( i = *(_DWORD *)(2184LL * a2 + *(_QWORD *)(a1 + 48) + 2136) & 1; v4 < a4; v7 = a3 )
  {
    v10 = MiRemoveLowestPriorityStandbyPage(a1, 8u, 0);
    v11 = v10;
    if ( v10 == -1 )
      break;
    v20 = 0;
    v12 = 48 * v10 - 0x58000000000LL;
    ++v4;
    v13 = *(_QWORD *)(v12 + 40);
    v14 = v13 >> 36;
    v15 = v13 >> 58;
    v16 = v14 & 3;
    if ( (unsigned __int16)v15 != a2 || v16 != v7 && i )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages(
                               (_QWORD *)(*(_QWORD *)(a1 + 48) + 2184LL * (unsigned __int16)v15),
                               v16,
                               1024) >= 0x200 )
      {
        v17 = MiSwapNumaStandbyPage(v11, a2, v7, 16LL);
        if ( v17 == v11 )
        {
          v20 = 1;
        }
        else
        {
          v11 = v17;
          v12 = 48 * v17 - 0x58000000000LL;
        }
      }
      else
      {
        --v4;
      }
    }
    v18 = (unsigned __int8)MiLockPageInline(v12);
    *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v11, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v18);
    if ( v20 == 1 )
      break;
  }
  return v4;
}
