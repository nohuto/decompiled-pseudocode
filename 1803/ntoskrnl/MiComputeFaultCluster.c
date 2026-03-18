/*
 * XREFs of MiComputeFaultCluster @ 0x140056C60
 * Callers:
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAdvanceFaultList @ 0x140056E8C (MiAdvanceFaultList.c)
 *     MiIsPteInStore @ 0x1400C62F4 (MiIsPteInStore.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 */

__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r12d
  unsigned __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // rax
  __int16 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r9
  int IsPteInStore; // eax
  unsigned __int64 v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+88h] [rbp+10h] BYREF
  int v29; // [rsp+98h] [rbp+20h]

  v29 = a4;
  v4 = a2[3];
  v6 = a2[4];
  v7 = a2[2];
  v26 = v4;
  v9 = *(_QWORD *)(a2[1] + 16 * v4) + (v6 << 12);
  v25 = v7;
  MiAdvanceFaultList(a2);
  v11 = v10[3];
  v12 = 1LL;
  if ( v11 < v7 )
  {
    LODWORD(v28) = 0;
    v13 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    v14 = 256LL;
    if ( v29 && *(unsigned int *)(a1 + 1148) < 0x100uLL )
      v14 = *(unsigned int *)(a1 + 1148);
    if ( a3 )
    {
      v15 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v9 >> 12) + 1;
      if ( v14 <= v15 )
        v15 = v14;
      v14 = v15;
      v16 = *(unsigned int *)(a3 + 52);
      LODWORD(v16) = v16 & 0x7FFFFFFF;
      if ( v16 | ((unsigned __int64)*(unsigned __int8 *)(a3 + 34) << 31) )
      {
        a3 = 0LL;
        LODWORD(v28) = 1;
      }
    }
    if ( v14 > 1 )
    {
      v17 = v28;
      while ( 1 )
      {
        if ( !a3 )
        {
          if ( (v13 & 0xFFF) == 0 || (v20 = MI_READ_PTE_LOCK_FREE(v13), v28 = v20, v21 = v20, (v20 & 1) != 0) )
          {
LABEL_14:
            v4 = v26;
            break;
          }
          v22 = v20 & 0x400;
          if ( v17 )
          {
            if ( !v22 )
              goto LABEL_14;
          }
          else
          {
            if ( v22 )
              goto LABEL_14;
            if ( (v21 & 0x800) != 0 )
              goto LABEL_14;
            if ( !(unsigned int)MiGetPagingFileOffset(&v28) )
              goto LABEL_14;
            IsPteInStore = MiIsPteInStore(a1, v23);
            if ( v29 != IsPteInStore )
              goto LABEL_14;
          }
          v13 += 8LL;
        }
        v18 = *(_QWORD *)(v10[1] + 16 * v11) + (v10[4] << 12);
        if ( (v18 & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v9 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v12;
          MiAdvanceFaultList(v10);
          v11 = v10[3];
          if ( v11 != v25 )
          {
            v9 = v18;
            if ( v12 < v14 )
              continue;
          }
        }
        goto LABEL_14;
      }
    }
  }
  result = (unsigned int)v12;
  v10[3] = v4;
  v10[4] = v6;
  return result;
}
