/*
 * XREFs of ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A7D30
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1C0020FC4 (ExFreeToPagedLookasideList.c)
 *     Template_pxqqt @ 0x1C00212D8 (Template_pxqqt.c)
 *     Template_qpxp @ 0x1C0021384 (Template_qpxp.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0050370 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A80B0 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::Free(VIDMM_PROCESS_HEAP *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  _DWORD *v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // eax
  _QWORD *v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  char v18; // cl
  __int64 v19; // rdx
  __int16 v20; // ax
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // [rsp+28h] [rbp-20h]
  __int64 v24; // [rsp+30h] [rbp-18h]

  v3 = (_DWORD *)*((_QWORD *)a2 + 3);
  v5 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this) != v5 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v9[5] = 0LL;
    v9[6] = 0LL;
    v9[7] = 0LL;
    v9[3] = 270LL;
    v9[4] = 30LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  if ( (*v3 & 1) != 0 )
  {
    v10 = v3[6];
    if ( (unsigned int)(v10 - 3) > 3 )
    {
      MmUnsecureVirtualMemory(*((HANDLE *)v3 + 6));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v3 + 1, (PSIZE_T)v3 + 7, 0x8000u);
    }
    else
    {
      if ( (unsigned int)(v10 - 5) <= 1 )
        MmUnmapViewInSystemSpace(*((PVOID *)v3 + 1));
      ObCloseHandle(*((HANDLE *)v3 + 5), (*((_QWORD *)v3 + 5) & 0xFFFFFFFF80000000uLL) == 0);
      VidMmDereferenceObjectAsync(*((PVOID *)v3 + 4), v11, v12);
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 96LL) -= *((_QWORD *)v3 + 7);
    *(_QWORD *)(*((_QWORD *)this + 1) + 88LL) -= *((_QWORD *)v3 + 7);
    --*(_DWORD *)(*((_QWORD *)this + 1) + 108LL);
    v14 = v3[6];
    v15 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v14 == 1 )
    {
      v15[14] -= *((_QWORD *)v3 + 7);
      *(_QWORD *)(*((_QWORD *)this + 1) + 120LL) -= *((_QWORD *)v3 + 7);
    }
    else
    {
      v16 = v14 == 2;
      v17 = *((_QWORD *)v3 + 7);
      if ( v16 )
      {
        v15[16] -= v17;
        *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *((_QWORD *)v3 + 7);
      }
      else
      {
        v15[18] -= v17;
        *(_QWORD *)(*((_QWORD *)this + 1) + 152LL) -= *((_QWORD *)v3 + 7);
      }
    }
    v18 = bTracingEnabled;
    if ( bTracingEnabled )
    {
      if ( (unsigned int)(v3[6] - 3) > 3 )
        v19 = *((_QWORD *)v3 + 1);
      else
        v19 = *((_QWORD *)v3 + 4);
      v20 = Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        Template_qpxp(
          *((_QWORD *)this + 1),
          &EventDestroyProcessAllocationDetails,
          v13,
          *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
          (char)v3,
          *((_QWORD *)v3 + 7),
          v19);
        v18 = bTracingEnabled;
        v20 = Microsoft_Windows_DxgKrnlEnableBits;
      }
      if ( v18 )
      {
        v21 = (unsigned int)(v3[6] - 3);
        if ( (unsigned int)v21 > 3 )
          v22 = *((_QWORD *)v3 + 1);
        else
          v22 = *((_QWORD *)v3 + 4);
        if ( v20 < 0 )
        {
          LODWORD(v24) = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
          LODWORD(v23) = v3[6];
          Template_pxqqt(v21, &EventDestroyProcessAllocation, v13, v22, *((_QWORD *)v3 + 7), v23, v24, 0);
        }
      }
    }
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), v3);
  }
  else
  {
    VIDMM_PROCESS_HEAP::FreeSmallAllocation(this, a2);
  }
}
