/*
 * XREFs of MiComputeFaultCluster @ 0x140107E44
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiIsPteInStore @ 0x140074CBC (MiIsPteInStore.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiAdvanceFaultList @ 0x1401084A0 (MiAdvanceFaultList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r11
  __int64 v13; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  int v20; // r12d
  unsigned __int64 v21; // rsi
  __int64 result; // rax
  __int64 v23; // rax
  unsigned __int16 v24; // r9
  int IsPteInStore; // eax
  unsigned int v26; // eax
  unsigned __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+88h] [rbp+10h] BYREF
  int v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v4 = a2[3];
  v6 = a2[4];
  v7 = a2[2];
  v8 = a3;
  v28 = v4;
  v9 = *(_QWORD *)(a2[1] + 16 * v4) + (v6 << 12);
  v27 = v7;
  MiAdvanceFaultList(a2, a2, a3);
  v14 = *(_QWORD *)(v13 + 24);
  v15 = 1LL;
  if ( v14 < v7 )
  {
    LODWORD(v30) = 0;
    v16 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    v17 = 256LL;
    if ( v31 )
    {
      v26 = *(_DWORD *)(a1 + 1196);
      if ( v26 < 0x100 )
        v17 = v26;
    }
    if ( v8 )
    {
      v18 = (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) - (v9 >> 12) + 1;
      if ( v17 <= v18 )
        v18 = v17;
      v17 = v18;
      v19 = *(unsigned int *)(v8 + 52);
      LODWORD(v19) = v19 & 0x7FFFFFFF;
      if ( v19 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 34) << 31) )
      {
        v8 = 0LL;
        LODWORD(v30) = 1;
      }
    }
    if ( v17 > 1 )
    {
      v20 = v30;
      while ( 1 )
      {
        if ( !v8 )
        {
          if ( (v16 & 0xFFF) == 0 || (v23 = MI_READ_PTE_LOCK_FREE(v16), v30 = v23, (v23 & 1) != 0) )
          {
LABEL_14:
            v4 = v28;
            break;
          }
          if ( v20 )
          {
            if ( (v23 & 0x400) == 0 )
              goto LABEL_14;
          }
          else
          {
            if ( (v23 & 0x400) != 0 )
              goto LABEL_14;
            if ( (v23 & 0x800) != 0 )
              goto LABEL_14;
            if ( !(unsigned int)MiGetPagingFileOffset((__int64)&v30) )
              goto LABEL_14;
            IsPteInStore = MiIsPteInStore(a1, v24);
            if ( v31 != IsPteInStore )
              goto LABEL_14;
          }
          v16 += 8LL;
        }
        v21 = *(_QWORD *)(v12[1] + 16 * v14) + (v12[4] << 12);
        if ( (v21 & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v9 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v15;
          MiAdvanceFaultList(v12, v10, v11);
          v14 = v12[3];
          if ( v14 != v27 )
          {
            v9 = v21;
            if ( v15 < v17 )
              continue;
          }
        }
        goto LABEL_14;
      }
    }
  }
  result = (unsigned int)v15;
  v12[3] = v4;
  v12[4] = v6;
  return result;
}
