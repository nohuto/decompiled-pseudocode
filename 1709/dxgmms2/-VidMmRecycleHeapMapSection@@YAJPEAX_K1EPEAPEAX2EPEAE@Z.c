/*
 * XREFs of ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0074858
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C004C7D8 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C004CC3C (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006C234 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C007470C (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00A6660 (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C00A6A40 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z.c)
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
  __int64 CurrentProcess; // rax
  NTSTATUS v13; // edi
  char *v14; // rdx
  void **v15; // rcx
  char *v16; // rdx
  __int64 v18; // rax
  unsigned __int8 v19; // bl
  char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF

  v24 = a3;
  v8 = ViewSize;
  LOBYTE(a4) = -(char)a4;
  v22 = a2;
  MappedBase = 0LL;
  v11 = (_BYTE)a4 != 0 ? 4 : 1028;
  if ( ViewSize )
    *ViewSize = 0;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    v13 = -1073741823;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(Section, a2, a3, a4);
    v13 = MmMapViewOfSection(Section, CurrentProcess, &MappedBase, 0LL, v24, &v22, &v24, 2, 0, v11);
    if ( v13 >= 0 )
    {
      v14 = (char *)MappedBase;
      *a6 = MappedBase;
      v15 = a5;
      v16 = &v14[a2 - v22];
      *a5 = v16;
      goto LABEL_6;
    }
  }
  _InterlockedIncrement(&dword_1C0040670);
  v18 = WdLogNewEntry5_WdLowResource(Section, a2);
  v19 = a7;
  *(_QWORD *)(v18 + 24) = a7;
  WdLogEvent5_WdLowResource(v18);
  if ( !v19 )
  {
    ViewSize = 0LL;
    v13 = MmMapViewInSystemSpace(Section, &MappedBase, (PSIZE_T)&ViewSize);
    if ( v13 < 0 )
      goto LABEL_14;
    if ( v8 )
      *v8 = 1;
    v20 = (char *)MappedBase;
    *a6 = MappedBase;
    v15 = (void **)&v20[a2];
    *a5 = v15;
  }
LABEL_6:
  if ( v13 < 0 )
  {
LABEL_14:
    _InterlockedIncrement(&dword_1C0040670);
    v21 = WdLogNewEntry5_WdLowResource(v15, v16);
    *(_QWORD *)(v21 + 24) = 781LL;
    WdLogEvent5_WdLowResource(v21);
  }
  return (unsigned int)v13;
}
