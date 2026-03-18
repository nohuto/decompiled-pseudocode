/*
 * XREFs of ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B8C80
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1C0025884 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0pxqqt @ 0x1C0025D10 (McTemplateK0pxqqt.c)
 *     McTemplateK0qpxp @ 0x1C0025DB8 (McTemplateK0qpxp.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0055E88 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B9010 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::Free(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v5; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // eax
  _QWORD *v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // [rsp+28h] [rbp-20h]
  __int64 v24; // [rsp+30h] [rbp-18h]

  v5 = (_DWORD *)*((_QWORD *)a2 + 3);
  v7 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2, a3, a4) != v7 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    v11[3] = 270LL;
    v11[4] = 30LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( (*v5 & 1) != 0 )
  {
    v12 = v5[6];
    if ( (unsigned int)(v12 - 3) > 3 )
    {
      MmUnsecureVirtualMemory(*((HANDLE *)v5 + 6));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 1, (PSIZE_T)v5 + 7, 0x8000u);
    }
    else
    {
      if ( (unsigned int)(v12 - 5) <= 1 )
        MmUnmapViewInSystemSpace(*((PVOID *)v5 + 1));
      ObCloseHandle(*((HANDLE *)v5 + 5), (*((_QWORD *)v5 + 5) & 0xFFFFFFFF80000000uLL) == 0);
      VidMmDereferenceObjectAsync(*((PVOID *)v5 + 4), v13, v14);
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *((_QWORD *)v5 + 7);
    *(_QWORD *)(*((_QWORD *)this + 1) + 128LL) -= *((_QWORD *)v5 + 7);
    --*(_DWORD *)(*((_QWORD *)this + 1) + 148LL);
    v16 = v5[6];
    v17 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v16 == 1 )
    {
      v17[19] -= *((_QWORD *)v5 + 7);
      *(_QWORD *)(*((_QWORD *)this + 1) + 160LL) -= *((_QWORD *)v5 + 7);
    }
    else
    {
      v18 = v16 == 2;
      v19 = *((_QWORD *)v5 + 7);
      if ( v18 )
      {
        v17[21] -= v19;
        *(_QWORD *)(*((_QWORD *)this + 1) + 176LL) -= *((_QWORD *)v5 + 7);
      }
      else
      {
        v17[23] -= v19;
        *(_QWORD *)(*((_QWORD *)this + 1) + 192LL) -= *((_QWORD *)v5 + 7);
      }
    }
    if ( bTracingEnabled )
    {
      if ( (unsigned int)(v5[6] - 3) > 3 )
        v20 = *((_QWORD *)v5 + 1);
      else
        v20 = *((_QWORD *)v5 + 4);
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp(
          *((_QWORD *)this + 1),
          &EventDestroyProcessAllocationDetails,
          v15,
          *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
          (char)v5,
          *((_QWORD *)v5 + 7),
          v20);
      if ( bTracingEnabled )
      {
        v21 = (unsigned int)v5[6];
        if ( (unsigned int)(v21 - 3) > 3 )
          v22 = *((_QWORD *)v5 + 1);
        else
          v22 = *((_QWORD *)v5 + 4);
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          LODWORD(v24) = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
          LODWORD(v23) = v5[6];
          McTemplateK0pxqqt(v21, &EventDestroyProcessAllocation, v15, v22, *((_QWORD *)v5 + 7), v23, v24, 0);
        }
      }
    }
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), v5);
  }
  else
  {
    VIDMM_PROCESS_HEAP::FreeSmallAllocation(this, a2);
  }
}
