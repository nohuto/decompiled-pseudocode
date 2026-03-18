/*
 * XREFs of ?MapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K1H@Z @ 0x1C00A8550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocation(
        VIDMM_PROCESS_HEAP *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rbx
  void *v15; // r12
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rbx
  __int64 CurrentProcess; // rax
  char *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  char *v26; // rdi
  __int64 v27; // rax
  __int64 v29; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+58h] BYREF

  v32 = a4;
  v5 = (__int64 *)*((_QWORD *)this + 1);
  v6 = 0LL;
  MappedBase = 0LL;
  v9 = *v5;
  if ( PsGetCurrentProcess(this) != v9 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
    v13[3] = 270LL;
    v13[4] = 30LL;
    v13[5] = 0LL;
    v13[6] = 0LL;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v14 = a3;
    v15 = (void *)a2[4];
    v16 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) == 0 ? 4 : 1028;
  }
  else
  {
    v11 = a2[1];
    v16 = 4;
    v14 = a3 + a2[2];
    v15 = *(void **)(v11 + 88);
    if ( ((*(_DWORD *)(v11 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v16 = 1028;
  }
  v29 = v14;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C003C660);
    v17 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v17 + 24) = 2349LL;
    WdLogEvent5_WdLowResource(v17);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v11);
    if ( (int)MmMapViewOfSection(v15, CurrentProcess, &MappedBase, 0LL, v32, &v29, &v32, 2, 0, v16) >= 0 )
    {
      v23 = (char *)MappedBase;
      *(_DWORD *)a2 |= 2u;
      v24 = v14 - v29;
      a2[11] = v23;
      return &v23[v24];
    }
  }
  _InterlockedIncrement(&dword_1C003C660);
  v19 = WdLogNewEntry5_WdLowResource(v18);
  *(_QWORD *)(v19 + 24) = a5;
  WdLogEvent5_WdLowResource(v19);
  if ( a5 )
    return (char *)MappedBase;
  v20 = *(_DWORD *)a2;
  ViewSize = 0LL;
  if ( (v20 & 1) != 0 )
  {
    v21 = 0LL;
    ViewSize = a2[7];
  }
  else
  {
    v21 = a2[2];
    ViewSize = *(_QWORD *)(a2[1] + 40LL);
  }
  if ( MmMapViewInSystemSpace(v15, &MappedBase, &ViewSize) < 0 )
  {
    _InterlockedIncrement(&dword_1C003C660);
    v27 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v27 + 24) = 2445LL;
    WdLogEvent5_WdLowResource(v27);
  }
  else
  {
    v26 = (char *)MappedBase;
    *(_DWORD *)a2 |= 4u;
    a2[11] = v26;
    return &v26[v21 + a3];
  }
  return (char *)v6;
}
