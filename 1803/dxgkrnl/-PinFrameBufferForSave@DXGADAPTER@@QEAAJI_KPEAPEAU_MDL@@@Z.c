/*
 * XREFs of ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z @ 0x1C014D698
 * Callers:
 *     DxgkPinFrameBufferForSaveCB @ 0x1C002F060 (DxgkPinFrameBufferForSaveCB.c)
 * Callees:
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     DpiAddMemoryTracker @ 0x1C0040490 (DpiAddMemoryTracker.c)
 */

__int64 __fastcall DXGADAPTER::PinFrameBufferForSave(DXGADAPTER *this, unsigned int a2, ULONG_PTR a3, struct _MDL **a4)
{
  __int64 v5; // rbx
  char v7; // si
  __int64 v8; // rax
  __int64 v10; // r14
  struct _MDL *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rax
  struct _MDL *Mdl; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  PVOID MappedBase; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp+18h] BYREF

  ViewSize = a3;
  v5 = a2;
  v7 = 0;
  if ( a2 >= *((_DWORD *)this + 62) )
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = v5;
LABEL_3:
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  if ( (a3 & 0xFFF) != 0 )
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = ViewSize;
    goto LABEL_3;
  }
  v10 = *((_QWORD *)this + 295) + 352LL * a2;
  MappedBase = 0LL;
  v11 = 0LL;
  LODWORD(v14) = MmMapViewInSystemSpace(*(PVOID *)(v10 + 56), &MappedBase, &ViewSize);
  if ( (int)v14 >= 0 )
  {
    Mdl = IoAllocateMdl(MappedBase, ViewSize, 0, 0, 0LL);
    v11 = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
      v7 = 1;
      *(_QWORD *)(v10 + 96) = v11;
      *(_DWORD *)(v10 + 88) = 2;
      v20 = DpiAddMemoryTracker(*((_QWORD *)this + 24), (__int64 *)(v10 + 72));
      v14 = v20;
      if ( v20 >= 0 )
      {
        *(_QWORD *)(v10 + 64) = v11;
        *a4 = v11;
        return 0LL;
      }
      v22 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v22 + 24) = v14;
      WdLogEvent5_WdLowResource(v22);
    }
    else
    {
      v19 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v19 + 24) = 9340LL;
      WdLogEvent5_WdLowResource(v19);
      LODWORD(v14) = -1073741801;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v15);
    *(_QWORD *)(v16 + 24) = ViewSize;
    WdLogEvent5_WdWarning(v16);
  }
  if ( v7 )
    MmUnlockPages(v11);
  if ( v11 )
    IoFreeMdl(v11);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  return (unsigned int)v14;
}
