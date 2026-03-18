/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0070090
 * Callers:
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006F7E0 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0005640 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C00533DC (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     FastZeroMemory @ 0x1C0053750 (FastZeroMemory.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0071E9C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00AE704 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v4; // rdi
  __int64 v5; // rdx
  unsigned __int8 v6; // r14
  char *v7; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  int v11; // ecx
  struct VIDMM_RECYCLE_RANGE *i; // rsi
  __int64 v13; // rcx
  size_t v14; // rdx
  __m128i *v15; // rcx
  __int64 v16; // r8
  unsigned int *v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rax
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  void *v25; // rcx
  unsigned __int8 v26; // [rsp+70h] [rbp+8h] BYREF
  void *v27; // [rsp+78h] [rbp+10h] BYREF
  void *v28; // [rsp+80h] [rbp+18h] BYREF

  v27 = 0LL;
  v4 = 0LL;
  v5 = *((_QWORD *)this + 10);
  v6 = 0;
  v7 = (char *)*((_QWORD *)this + 4);
  v9 = *((_QWORD *)this + 5);
  v28 = 0LL;
  v10 = v9 - (_QWORD)v7;
  v26 = 0;
  v11 = **(_DWORD **)(v5 + 32);
  if ( (unsigned int)(v11 - 3) <= 3 && (unsigned int)(v11 - 5) > 1 )
  {
    v19 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v5 + 56),
            (unsigned __int64)v7,
            v10,
            ((v11 - 4) & 0xFFFFFFFD) == 0,
            &v27,
            &v28,
            0,
            &v26);
    v22 = v19;
    if ( v19 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20);
      v23[3] = v10;
      v23[4] = *((_QWORD *)this + 4);
      v23[5] = *((_QWORD *)this + 10);
      v23[6] = v22;
      v23[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v23);
      return;
    }
    v7 = (char *)v27;
    v4 = v28;
    v6 = v26;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 21) == 3 )
    {
      v13 = *((_QWORD *)i + 4);
      v14 = *((_QWORD *)i + 5) - v13;
      v15 = (__m128i *)&v7[v13 - *((_QWORD *)this + 4)];
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      *(_QWORD *)(v16 + 200) += v14;
      FastZeroMemory(v15, v14);
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
  v17 = *(unsigned int **)(*((_QWORD *)this + 10) + 32LL);
  v18 = *v17;
  if ( (unsigned int)(v18 - 3) <= 3 && (unsigned int)(v18 - 5) > 1 )
  {
    if ( v6 )
      CurrentProcess = 0LL;
    else
      CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess(v17, v18, a3, a4);
    if ( v10 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0) )
    {
      if ( v25 )
        MmUnmapViewOfSection(v25, v4);
      else
        MmUnmapViewInSystemSpace(v4);
    }
    else
    {
      VidMmUnmapViewAsync(v25, *(PVOID *)(*((_QWORD *)this + 10) + 56LL), v4);
    }
  }
}
