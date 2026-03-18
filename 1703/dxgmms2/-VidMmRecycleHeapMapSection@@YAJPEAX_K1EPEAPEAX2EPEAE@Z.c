/*
 * XREFs of ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0048200
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C004880C (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0048C88 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C006816C (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00684CC (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C009E5D0 (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C009E980 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmRecycleHeapMapSection(
        PVOID Section,
        __int64 a2,
        __int64 a3,
        char a4,
        void **a5,
        void **a6,
        unsigned __int8 a7,
        unsigned __int8 *ViewSize)
{
  unsigned __int8 *v8; // rsi
  int v11; // ebx
  __int64 CurrentProcess; // rax
  NTSTATUS v13; // edi
  __int64 v14; // rax
  unsigned __int8 v15; // bl
  void **v16; // rcx
  __int64 v17; // rax
  char *v19; // rdx
  char *v20; // rcx
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+40h] BYREF

  v23 = a3;
  v8 = ViewSize;
  v21 = a2;
  MappedBase = 0LL;
  v11 = a4 != 0 ? 4 : 1028;
  if ( ViewSize )
    *ViewSize = 0;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    v13 = -1073741823;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess();
    v13 = MmMapViewOfSection(Section, CurrentProcess, &MappedBase, 0LL, v23, &v21, &v23, 2, 0, v11);
    if ( v13 >= 0 )
    {
      v19 = (char *)MappedBase;
      *a6 = MappedBase;
      v16 = a5;
      *a5 = &v19[a2 - v21];
      goto LABEL_6;
    }
  }
  _InterlockedIncrement(&dword_1C003C660);
  v14 = WdLogNewEntry5_WdLowResource(Section);
  v15 = a7;
  *(_QWORD *)(v14 + 24) = a7;
  WdLogEvent5_WdLowResource(v14);
  if ( !v15 )
  {
    ViewSize = 0LL;
    v13 = MmMapViewInSystemSpace(Section, &MappedBase, (PSIZE_T)&ViewSize);
    if ( v13 < 0 )
      goto LABEL_7;
    if ( v8 )
      *v8 = 1;
    v20 = (char *)MappedBase;
    *a6 = MappedBase;
    v16 = (void **)&v20[a2];
    *a5 = v16;
  }
LABEL_6:
  if ( v13 < 0 )
  {
LABEL_7:
    _InterlockedIncrement(&dword_1C003C660);
    v17 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v17 + 24) = 759LL;
    WdLogEvent5_WdLowResource(v17);
  }
  return (unsigned int)v13;
}
