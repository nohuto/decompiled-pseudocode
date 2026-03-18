/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006C234
 * Callers:
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00665D0 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0067F20 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006B5D4 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0002360 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     FastZeroMemory @ 0x1C006CF00 (FastZeroMemory.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0074858 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0081048 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v4; // rsi
  __int64 v5; // rdx
  unsigned __int8 v6; // r14
  char *v7; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  int v11; // ecx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  unsigned int *v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  void *v20; // rcx
  unsigned __int8 v21; // [rsp+70h] [rbp+8h] BYREF
  void *v22; // [rsp+78h] [rbp+10h] BYREF
  void *v23; // [rsp+80h] [rbp+18h] BYREF

  v22 = 0LL;
  v4 = 0LL;
  v5 = *((_QWORD *)this + 10);
  v6 = 0;
  v7 = (char *)*((_QWORD *)this + 4);
  v9 = *((_QWORD *)this + 5);
  v23 = 0LL;
  v10 = v9 - (_QWORD)v7;
  v21 = 0;
  v11 = **(_DWORD **)(v5 + 32);
  if ( (unsigned int)(v11 - 3) <= 3 && (unsigned int)(v11 - 5) > 1 )
  {
    v15 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v5 + 56),
            (unsigned __int64)v7,
            v10,
            ((v11 - 4) & 0xFFFFFFFD) == 0,
            &v22,
            &v23,
            0,
            &v21);
    v17 = v15;
    if ( v15 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16);
      v18[3] = v10;
      v18[4] = *((_QWORD *)this + 4);
      v18[5] = *((_QWORD *)this + 10);
      v18[6] = v17;
      v18[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v18);
      return;
    }
    v7 = (char *)v22;
    v4 = v23;
    v6 = v21;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( (*((_BYTE *)i + 84) & 2) != 0 )
    {
      FastZeroMemory(
        &v7[*((_QWORD *)i + 4) - *((_QWORD *)this + 4)],
        (unsigned int)(*((_DWORD *)i + 10) - *((_DWORD *)i + 8)));
      *((_BYTE *)i + 84) &= ~2u;
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
  v13 = *(unsigned int **)(*((_QWORD *)this + 10) + 32LL);
  v14 = *v13;
  if ( (unsigned int)(v14 - 3) <= 3 && (unsigned int)(v14 - 5) > 1 )
  {
    if ( v6 )
      CurrentProcess = 0LL;
    else
      CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess(v13, v14, a3, a4);
    if ( v10 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0) )
    {
      if ( v20 )
        MmUnmapViewOfSection(v20, v4);
      else
        MmUnmapViewInSystemSpace(v4);
    }
    else
    {
      VidMmUnmapViewAsync(v20, *(PVOID *)(*((_QWORD *)this + 10) + 56LL), v4);
    }
  }
}
