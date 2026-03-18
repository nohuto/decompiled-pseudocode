/*
 * XREFs of ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00AE704
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C00584DC (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0058920 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0070090 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C00AD944 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00ADA50 (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C00ADE30 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmRecycleHeapMapSection(
        PVOID Section,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        unsigned __int8 a7,
        unsigned __int8 *ViewSize)
{
  unsigned __int8 *v8; // rsi
  int v11; // ebx
  NTSTATUS v12; // edi
  __int64 v13; // rax
  unsigned __int8 v14; // bl
  void **v15; // rcx
  char *v16; // rcx
  __int64 v17; // rax
  __int64 CurrentProcess; // rax
  char *v20; // rdx
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+40h] BYREF

  v23 = a3;
  v8 = ViewSize;
  LOBYTE(a4) = -(char)a4;
  v21 = a2;
  MappedBase = 0LL;
  v11 = (_BYTE)a4 != 0 ? 4 : 1028;
  if ( ViewSize )
    *ViewSize = 0;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    v12 = -1073741823;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(Section, a2, a3, a4);
    v12 = MmMapViewOfSection(Section, CurrentProcess, &MappedBase, 0LL, v23, &v21, &v23, 2, 0, v11);
    if ( v12 >= 0 )
    {
      v20 = (char *)MappedBase;
      *a6 = MappedBase;
      v15 = a5;
      *a5 = &v20[a2 - v21];
      goto LABEL_10;
    }
  }
  _InterlockedIncrement(&dword_1C0047670);
  v13 = WdLogNewEntry5_WdLowResource(Section);
  v14 = a7;
  *(_QWORD *)(v13 + 24) = a7;
  WdLogEvent5_WdLowResource(v13);
  if ( !v14 )
  {
    ViewSize = 0LL;
    v12 = MmMapViewInSystemSpace(Section, &MappedBase, (PSIZE_T)&ViewSize);
    if ( v12 < 0 )
    {
LABEL_11:
      _InterlockedIncrement(&dword_1C0047670);
      v17 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v17 + 24) = 781LL;
      WdLogEvent5_WdLowResource(v17);
      return (unsigned int)v12;
    }
    if ( v8 )
      *v8 = 1;
    v16 = (char *)MappedBase;
    *a6 = MappedBase;
    v15 = (void **)&v16[a2];
    *a5 = v15;
  }
LABEL_10:
  if ( v12 < 0 )
    goto LABEL_11;
  return (unsigned int)v12;
}
