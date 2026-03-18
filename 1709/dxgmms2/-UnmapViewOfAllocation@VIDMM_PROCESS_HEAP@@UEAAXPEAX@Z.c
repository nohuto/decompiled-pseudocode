/*
 * XREFs of ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z @ 0x1C00B1730
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0081048 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocation(VIDMM_PROCESS_HEAP *this, PVOID *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  int v11; // eax
  void *CurrentProcess; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v5 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2, a3, a4) != v5 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v10[5] = 0LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    v10[3] = 270LL;
    v10[4] = 30LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  v11 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    if ( (v11 & 1) != 0 )
    {
      CurrentProcess = (void *)PsGetCurrentProcess(v7, v6, v8, v9);
      VidMmUnmapViewAsync(CurrentProcess, a2[4], a2[11]);
    }
    else
    {
      v13 = PsGetCurrentProcess(v7, v6, v8, v9);
      MmUnmapViewOfSection(v13, a2[11]);
    }
    *(_DWORD *)a2 &= ~2u;
LABEL_13:
    a2[11] = 0LL;
    return;
  }
  if ( (v11 & 4) != 0 )
  {
    if ( (v11 & 1) != 0 )
      VidMmUnmapViewAsync(0LL, a2[4], a2[11]);
    else
      MmUnmapViewInSystemSpace(a2[11]);
    *(_DWORD *)a2 &= ~4u;
    goto LABEL_13;
  }
  v14 = WdLogNewEntry5_WdAssertion(v7, v6);
  *(_QWORD *)(v14 + 24) = 2510LL;
  WdLogEvent5_WdAssertion(v14);
}
