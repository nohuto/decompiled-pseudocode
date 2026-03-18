/*
 * XREFs of MiGetKernelStackSwapSupport @ 0x14007D9B4
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiAllocateWorkingSetSwapSupport @ 0x14007D2B8 (MiAllocateWorkingSetSwapSupport.c)
 *     MiPageFileLargestBitmapsRun @ 0x14007DC78 (MiPageFileLargestBitmapsRun.c)
 *     MiFindFreePageFileSpace @ 0x14007DD54 (MiFindFreePageFileSpace.c)
 */

__int64 __fastcall MiGetKernelStackSwapSupport(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned int v5; // esi
  unsigned int v6; // edi
  __int64 v8; // rbp
  unsigned int v9; // r12d
  __int64 *v10; // r14
  __int64 v11; // r15
  unsigned int v12; // ebx
  _QWORD *WorkingSetSwapSupport; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v4 = *(unsigned __int16 *)(a2 + 1452);
  v5 = -1;
  v6 = 0;
  v8 = *(_QWORD *)(qword_14036C8F8 + 8 * v4);
  v9 = *(_DWORD *)(v8 + 5592);
  if ( !v9 )
    return 3221225799LL;
  v10 = (__int64 *)(v8 + 5600);
  do
  {
    v11 = *v10;
    if ( (*(_BYTE *)(*v10 + 204) & 0x50) == 0 )
    {
      if ( v5 == -1
        || (v15 = MiPageFileLargestBitmapsRun(*(_QWORD *)(v8 + 8LL * v5 + 5600), a2, v4, a4),
            (unsigned int)MiPageFileLargestBitmapsRun(v11, v16, v17, v18) > v15) )
      {
        v5 = v6;
      }
    }
    ++v6;
    ++v10;
  }
  while ( v6 < v9 );
  if ( v5 == -1 )
    return 3221225799LL;
  v12 = *(_DWORD *)(a2 + 1176);
  if ( !v12 )
    return 3221225738LL;
  if ( v12 > 0x2AAAAAAA )
    v12 = 715827882;
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(2 * v12);
  *(_QWORD *)(a1 + 56) = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
    return 3221225626LL;
  *(_QWORD *)(a1 + 64) ^= (*(_DWORD *)(a1 + 64) ^ (v5 << 12)) & 0xF000;
  *(_DWORD *)(a1 + 72) = MiFindFreePageFileSpace(v8, a1 + 64, 6 * v12, 33LL);
  return 0LL;
}
