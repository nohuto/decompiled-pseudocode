/*
 * XREFs of ?UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAX0@Z @ 0x1C00B1810
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0081048 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocationExternal(
        VIDMM_PROCESS_HEAP *this,
        PVOID *a2,
        void *a3,
        __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  void *CurrentProcess; // rax
  __int64 v13; // rax

  v6 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2, a3, a4) != v6 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9);
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    v11[3] = 270LL;
    v11[4] = 30LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    CurrentProcess = (void *)PsGetCurrentProcess(v8, v7, v9, v10);
    VidMmUnmapViewAsync(CurrentProcess, a2[4], a3);
  }
  else
  {
    v13 = PsGetCurrentProcess(v8, v7, v9, v10);
    MmUnmapViewOfSection(v13, a3);
  }
}
