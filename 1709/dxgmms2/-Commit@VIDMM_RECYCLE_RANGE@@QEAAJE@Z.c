/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C006CD38
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C006C2E4 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     McTemplateK0qpxp @ 0x1C0023408 (McTemplateK0qpxp.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00684B0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068534 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C006C5D8 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // r11
  int *v5; // r8
  char v6; // r9
  char v7; // r10
  void *v8; // rdx
  int v9; // ecx
  ULONG Protect; // esi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  NTSTATUS v14; // ebx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v21; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v22; // rbx
  _QWORD *v23; // rax
  int v24; // eax
  ULONG AllocationType; // eax
  __int64 v26; // rax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  v3 = *((int *)this + 16);
  v4 = a2;
  v5 = *(int **)(*((_QWORD *)this + 9) + 32LL);
  v6 = *((_BYTE *)v5 + 16);
  v7 = *((_BYTE *)v5 + 17);
  if ( (_DWORD)v3 )
  {
    v21 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v3 - 4);
    if ( (_DWORD)v3 == 4 )
    {
      v22 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v5 + 1);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v21, this);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v22, this);
      v19 = 3LL;
      goto LABEL_20;
    }
    if ( (_DWORD)v3 != 5 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, a2, v5);
      v23[5] = 0LL;
      v23[7] = 0LL;
      v23[3] = 270LL;
      v23[4] = 52LL;
      v23[6] = v3;
      WdLogEvent5_WdCriticalError(v23);
      return 0LL;
    }
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v21, this);
LABEL_19:
    v19 = 1LL;
LABEL_20:
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, v19);
    return 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 4);
  RegionSize = *((_QWORD *)this + 5) - (_QWORD)v8;
  v9 = *v5;
  if ( (unsigned int)(*v5 - 3) <= 3 )
    goto LABEL_19;
  if ( v9 == 2 || (Protect = 1028, v9 == 8) )
    Protect = 4;
  if ( v9 == 2 || v9 == 8 || v6 || (v11 = 8392704, v7) )
    v11 = 4096;
  *((_DWORD *)this + 20) = v11;
  BaseAddress = v8;
  if ( v4 )
    *((_DWORD *)this + 20) = v11 | 0x800000;
  if ( v6 )
    *((_DWORD *)this + 20) |= 0x20400000u;
  v14 = ZwAllocateVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          &RegionSize,
          *((_DWORD *)this + 20),
          Protect);
  if ( v14 >= 0 )
    goto LABEL_14;
  v24 = *((_DWORD *)this + 20);
  if ( (v24 & 0x800000) != 0 )
  {
    AllocationType = v24 & 0xFF7FFFFF;
    *((_DWORD *)this + 20) = AllocationType;
    v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, Protect);
  }
  if ( v14 >= 0 )
  {
LABEL_14:
    *((_BYTE *)this + 84) |= 1u;
    if ( bTracingEnabled )
    {
      v16 = *((_QWORD *)this + 9);
      v17 = *(_QWORD *)(v16 + 32);
      if ( (unsigned int)(*(_DWORD *)v17 - 3) <= 3 )
        v18 = *(_QWORD *)(v16 + 56);
      else
        v18 = *((_QWORD *)this + 4);
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp(
          *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL),
          &EventCreateProcessAllocationDetails,
          v15,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 8LL),
          (char)this,
          RegionSize,
          v18);
    }
    goto LABEL_19;
  }
  _InterlockedIncrement(&dword_1C004064C);
  v26 = WdLogNewEntry5_WdLowResource(v13, v12);
  *(_QWORD *)(v26 + 24) = 1004LL;
  WdLogEvent5_WdLowResource(v26);
  return (unsigned int)v14;
}
