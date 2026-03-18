/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0069074
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C006861C (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     Template_qpxp @ 0x1C0021384 (Template_qpxp.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064A6C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064AF0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0068964 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // r11
  int *v5; // r8
  char v6; // r9
  char v7; // r10
  VIDMM_RECYCLE_HEAP_MGR *v8; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rbx
  __int64 v10; // rdx
  void *v11; // rdx
  int v12; // ecx
  ULONG Protect; // esi
  int v14; // eax
  __int64 v15; // rcx
  NTSTATUS v16; // ebx
  __int64 v17; // r8
  bool v18; // zf
  _QWORD *v20; // rax
  int v21; // eax
  ULONG AllocationType; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  v3 = *((int *)this + 16);
  v4 = a2;
  v5 = *(int **)(*((_QWORD *)this + 9) + 32LL);
  v6 = *((_BYTE *)v5 + 16);
  v7 = *((_BYTE *)v5 + 17);
  if ( (_DWORD)v3 )
  {
    v8 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v3 - 4);
    if ( (_DWORD)v3 == 4 )
    {
      v9 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v5 + 1);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, this);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v9, this);
      v10 = 3LL;
LABEL_18:
      VIDMM_RECYCLE_RANGE::Transition((__int64)this, v10);
      return 0LL;
    }
    if ( (_DWORD)v3 != 5 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2, v5);
      v20[5] = 0LL;
      v20[7] = 0LL;
      v20[3] = 270LL;
      v20[4] = 52LL;
      v20[6] = v3;
      WdLogEvent5_WdCriticalError(v20);
      return 0LL;
    }
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, this);
LABEL_17:
    v10 = 1LL;
    goto LABEL_18;
  }
  v11 = (void *)*((_QWORD *)this + 4);
  RegionSize = *((_QWORD *)this + 5) - (_QWORD)v11;
  v12 = *v5;
  if ( (unsigned int)(*v5 - 3) <= 3 )
    goto LABEL_17;
  if ( v12 == 2 || (Protect = 1028, v12 == 8) )
    Protect = 4;
  if ( v12 == 2 || v12 == 8 || v6 || (v14 = 8392704, v7) )
    v14 = 4096;
  *((_DWORD *)this + 20) = v14;
  BaseAddress = v11;
  if ( v4 )
    *((_DWORD *)this + 20) = v14 | 0x800000;
  if ( v6 )
    *((_DWORD *)this + 20) |= 0x20400000u;
  v16 = ZwAllocateVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          &RegionSize,
          *((_DWORD *)this + 20),
          Protect);
  if ( v16 >= 0 )
    goto LABEL_16;
  v21 = *((_DWORD *)this + 20);
  if ( (v21 & 0x800000) != 0 )
  {
    AllocationType = v21 & 0xFF7FFFFF;
    *((_DWORD *)this + 20) = AllocationType;
    v16 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, Protect);
  }
  if ( v16 >= 0 )
  {
LABEL_16:
    v18 = bTracingEnabled == 0;
    *((_BYTE *)this + 84) = 1;
    if ( !v18 )
    {
      v24 = *((_QWORD *)this + 9);
      v25 = *(_QWORD *)(v24 + 32);
      if ( (unsigned int)(*(_DWORD *)v25 - 3) > 3 )
        v26 = *((_QWORD *)this + 4);
      else
        v26 = *(_QWORD *)(v24 + 56);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_qpxp(
          *(_QWORD *)(*(_QWORD *)(v25 + 8) + 8LL),
          &EventCreateProcessAllocationDetails,
          v17,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) + 8LL) + 8LL),
          (char)this,
          RegionSize,
          v26);
    }
    goto LABEL_17;
  }
  _InterlockedIncrement(&dword_1C003C63C);
  v23 = WdLogNewEntry5_WdLowResource(v15);
  *(_QWORD *)(v23 + 24) = 981LL;
  WdLogEvent5_WdLowResource(v23);
  return (unsigned int)v16;
}
