/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0071CF0
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C0070168 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     McTemplateK0qpxp @ 0x1C0025DB8 (McTemplateK0qpxp.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D968 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D9EC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00714B0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // r10
  unsigned int *v5; // r8
  char v6; // r9
  char v7; // r11
  VIDMM_RECYCLE_HEAP_MGR *v8; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  void *v14; // rdx
  __int64 v15; // rcx
  ULONG Protect; // ebx
  ULONG AllocationType; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS v20; // esi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  int v29; // eax
  ULONG v30; // eax
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((int *)this + 16);
  v4 = a2;
  v5 = *(unsigned int **)(*((_QWORD *)this + 9) + 32LL);
  v6 = *((_BYTE *)v5 + 16);
  v7 = *((_BYTE *)v5 + 17);
  if ( (_DWORD)v2 )
  {
    v8 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v2 - 4);
    if ( (_DWORD)v2 == 4 )
    {
      v9 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v5 + 1);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, this);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v9, this);
      if ( *((_DWORD *)this + 21) <= 1u && g_IsInternalRelease )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
        v28[3] = 270LL;
        v28[4] = 9LL;
        v28[5] = 0LL;
        v28[6] = 0LL;
        v28[7] = 0LL;
        WdLogEvent5_WdCriticalError(v28);
      }
      v13 = 3LL;
      goto LABEL_19;
    }
    if ( (_DWORD)v2 != 5 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2, v5);
      v27[3] = 270LL;
      v27[4] = 52LL;
      v27[5] = 0LL;
      v27[6] = v2;
      v27[7] = 0LL;
      WdLogEvent5_WdCriticalError(v27);
      goto LABEL_20;
    }
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, this);
    goto LABEL_27;
  }
  v14 = (void *)*((_QWORD *)this + 4);
  RegionSize = *((_QWORD *)this + 5) - (_QWORD)v14;
  v15 = *v5;
  if ( (unsigned int)(v15 - 9) <= 1 )
  {
    *((_DWORD *)this + 20) = 8392704;
  }
  else if ( (unsigned int)(v15 - 3) > 3 )
  {
    if ( (_DWORD)v15 == 2 || (Protect = 1028, (_DWORD)v15 == 8) )
      Protect = 4;
    BaseAddress = v14;
    *((_DWORD *)this + 20) = 4096;
    AllocationType = 4096;
    if ( v4 )
    {
      if ( v6 )
      {
LABEL_38:
        AllocationType |= 0x20400000u;
        *((_DWORD *)this + 20) = AllocationType;
LABEL_11:
        v20 = ZwAllocateVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                &RegionSize,
                AllocationType,
                Protect);
        if ( v20 < 0 )
        {
          v29 = *((_DWORD *)this + 20);
          if ( (v29 & 0x800000) != 0 )
          {
            v30 = v29 & 0xFF7FFFFF;
            *((_DWORD *)this + 20) = v30;
            v20 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, v30, Protect);
          }
          if ( v20 < 0 )
          {
            _InterlockedIncrement(&dword_1C004764C);
            v31 = WdLogNewEntry5_WdLowResource(v19);
            *(_QWORD *)(v31 + 24) = 1013LL;
            WdLogEvent5_WdLowResource(v31);
            return (unsigned int)v20;
          }
        }
        if ( *((_DWORD *)this + 21) && g_IsInternalRelease )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v21);
          v32[3] = 270LL;
          v32[4] = 9LL;
          v32[5] = 0LL;
          v32[6] = 0LL;
          v32[7] = 0LL;
          WdLogEvent5_WdCriticalError(v32);
        }
        if ( bTracingEnabled )
        {
          v22 = *((_QWORD *)this + 9);
          v23 = *(_QWORD *)(v22 + 32);
          v24 = (unsigned int)(*(_DWORD *)v23 - 3) <= 3 ? *(_QWORD *)(v22 + 56) : *((_QWORD *)this + 4);
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            McTemplateK0qpxp(
              *(_QWORD *)(*(_QWORD *)(v23 + 8) + 8LL),
              &EventCreateProcessAllocationDetails,
              v21,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) + 8LL) + 8LL),
              (char)this,
              RegionSize,
              v24);
        }
        goto LABEL_18;
      }
      if ( !v7 )
      {
        AllocationType = 8392704;
        *((_DWORD *)this + 20) = 8392704;
      }
    }
    if ( !v6 )
      goto LABEL_11;
    goto LABEL_38;
  }
LABEL_27:
  if ( !*((_DWORD *)this + 21) && g_IsInternalRelease )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v5);
    v33[3] = 270LL;
    v33[4] = 9LL;
    v33[5] = 0LL;
    v33[6] = 0LL;
    v33[7] = 0LL;
    WdLogEvent5_WdCriticalError(v33);
  }
LABEL_18:
  v13 = 1LL;
LABEL_19:
  VIDMM_RECYCLE_RANGE::Transition((__int64)this, v13);
LABEL_20:
  v25 = *((_DWORD *)this + 21);
  if ( v25 )
  {
    if ( v25 == 2 )
      *((_DWORD *)this + 21) = 3;
  }
  else
  {
    *((_DWORD *)this + 21) = 1;
  }
  return 0LL;
}
