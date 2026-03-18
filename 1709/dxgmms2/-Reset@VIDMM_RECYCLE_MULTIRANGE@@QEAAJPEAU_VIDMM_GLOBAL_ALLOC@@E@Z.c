/*
 * XREFs of ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B880
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C0068870 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00684B0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068534 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C006C9B4 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0072A58 (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C007470C (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00747C4 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Reset(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  int v3; // r14d
  ULONG_PTR v4; // r9
  __int64 v6; // rsi
  __int64 v7; // rax
  int *v8; // rcx
  __int64 v9; // r8
  char v10; // r15
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v12; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v13; // r13
  ULONG Protect; // ebx
  int v15; // edx
  int v16; // eax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // eax
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  PVOID v31; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytesToUnlock[2]; // [rsp+38h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+48h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v34; // [rsp+98h] [rbp+50h]
  char v35; // [rsp+A0h] [rbp+58h]
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+60h] BYREF

  v35 = a3;
  v34 = a2;
  v3 = 0;
  v4 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  BaseAddress = 0LL;
  RegionSize = v4;
  LODWORD(v6) = 0;
  v7 = WdLogNewEntry5_WdEvent(this, a2);
  *(_QWORD *)(v7 + 24) = this;
  WdLogEvent5_WdEvent(v7);
  if ( *((_BYTE *)this + 153) )
  {
    LODWORD(v6) = -1071775472;
LABEL_30:
    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((__int64)v8, (__int64)&EventPerformanceWarning, v9, 18);
    goto LABEL_15;
  }
  v10 = 0;
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v12 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL);
  v13 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v12 + 1);
  do
  {
    if ( *((_DWORD *)NextRange + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v12, NextRange);
      v23 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(NextRange);
      v24 = v23;
      if ( v23 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v12);
        v29[3] = NextRange;
        v29[4] = v24;
        v29[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v29);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v13, NextRange);
        v10 = 1;
      }
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      v10 = 1;
    else
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  while ( !v10 );
  Protect = 1028;
  v8 = *(int **)(*((_QWORD *)this + 10) + 32LL);
  v15 = *v8;
  if ( (unsigned int)(*v8 - 3) <= 3 )
  {
    if ( v15 != 3 )
      Protect = 4;
    VIDMM_RECYCLE_MULTIRANGE::Map(this, 0LL, RegionSize, 1);
    if ( *((_BYTE *)this + 152) && (v8 = (int *)*((_QWORD *)this + 20)) != 0LL )
    {
      v8 = (int *)((char *)v8 + *((_QWORD *)this + 21));
      v3 = 1;
      BaseAddress = v8;
    }
    else
    {
      LODWORD(v6) = -1071775472;
    }
  }
  else
  {
    BaseAddress = (PVOID)*((_QWORD *)this + 6);
    v16 = 4;
    if ( v15 != 2 )
      v16 = 1028;
    Protect = v16;
  }
  if ( (int)v6 >= 0 )
  {
    v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x80000u, Protect);
    v6 = v17;
    if ( v17 < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v19, v18, v20, v21);
      *(_QWORD *)(v30 + 24) = v6;
      WdLogEvent5_WdError(v30);
    }
    else
    {
      VidMmiSetPriorityForMemoryPages(v34, BaseAddress, RegionSize);
      if ( v35 && !v3 )
      {
        v31 = BaseAddress;
        NumberOfBytesToUnlock[0] = RegionSize;
        v25 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v31, NumberOfBytesToUnlock, 1u);
        v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v27, v26);
        v28[3] = v31;
        v28[4] = NumberOfBytesToUnlock[0];
        v28[5] = v25;
        WdLogEvent5_WdEvent(v28);
      }
    }
  }
  if ( (_DWORD)v6 == -1071775472 )
    goto LABEL_30;
LABEL_15:
  if ( v3 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(this);
  return (unsigned int)v6;
}
