/*
 * XREFs of ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z @ 0x1C00A90A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006E9F4 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocation(VIDMM_PROCESS_HEAP *this, PVOID *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax
  int v8; // eax
  void *CurrentProcess; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this) != v3 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4, v6);
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    v7[3] = 270LL;
    v7[4] = 30LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  v8 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      CurrentProcess = (void *)PsGetCurrentProcess(v5);
      VidMmUnmapViewAsync(CurrentProcess, a2[4], a2[11]);
    }
    else
    {
      v10 = PsGetCurrentProcess(v5);
      MmUnmapViewOfSection(v10, a2[11]);
    }
    *(_DWORD *)a2 &= ~2u;
LABEL_13:
    a2[11] = 0LL;
    return;
  }
  if ( (v8 & 4) != 0 )
  {
    if ( (v8 & 1) != 0 )
      VidMmUnmapViewAsync(0LL, a2[4], a2[11]);
    else
      MmUnmapViewInSystemSpace(a2[11]);
    *(_DWORD *)a2 &= ~4u;
    goto LABEL_13;
  }
  v11 = WdLogNewEntry5_WdAssertion(v5, v4);
  *(_QWORD *)(v11 + 24) = 2495LL;
  WdLogEvent5_WdAssertion(v11);
}
