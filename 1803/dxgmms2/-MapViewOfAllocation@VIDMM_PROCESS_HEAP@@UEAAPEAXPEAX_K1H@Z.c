/*
 * XREFs of ?MapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K1H@Z @ 0x1C00B94A0
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
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rbx
  void *v16; // r12
  int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  ULONG_PTR v22; // rax
  __int64 v23; // rbx
  __int64 CurrentProcess; // rax
  char *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rcx
  char *v28; // rdi
  __int64 v29; // rax
  ULONG_PTR ViewSize[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+58h] BYREF

  v34 = a4;
  v5 = (__int64 *)*((_QWORD *)this + 1);
  v6 = 0LL;
  MappedBase = 0LL;
  v9 = *v5;
  if ( PsGetCurrentProcess(this, a2, a3, a4) != v9 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
    v14[3] = 270LL;
    v14[4] = 30LL;
    v14[5] = 0LL;
    v14[6] = 0LL;
    v14[7] = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v15 = a3;
    v16 = (void *)a2[4];
    v17 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  }
  else
  {
    v11 = a2[1];
    v17 = 4;
    v15 = a3 + a2[2];
    v16 = *(void **)(v11 + 88);
    if ( ((*(_DWORD *)(v11 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v17 = 1028;
  }
  v33 = v15;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C0047670);
    v18 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v18 + 24) = 2365LL;
    WdLogEvent5_WdLowResource(v18);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
    if ( (int)MmMapViewOfSection(v16, CurrentProcess, &MappedBase, 0LL, v34, &v33, &v34, 2, 0, v17) >= 0 )
    {
      v25 = (char *)MappedBase;
      *(_DWORD *)a2 |= 2u;
      v26 = v15 - v33;
      a2[11] = v25;
      return &v25[v26];
    }
  }
  _InterlockedIncrement(&dword_1C0047670);
  v20 = WdLogNewEntry5_WdLowResource(v19);
  *(_QWORD *)(v20 + 24) = a5;
  WdLogEvent5_WdLowResource(v20);
  if ( a5 )
    return (char *)MappedBase;
  v21 = *(_DWORD *)a2;
  ViewSize[0] = 0LL;
  if ( (v21 & 1) != 0 )
  {
    v22 = a2[7];
    v23 = 0LL;
  }
  else
  {
    v23 = a2[2];
    v22 = *(_QWORD *)(a2[1] + 40LL);
  }
  ViewSize[0] = v22;
  if ( MmMapViewInSystemSpace(v16, &MappedBase, ViewSize) < 0 )
  {
    _InterlockedIncrement(&dword_1C0047670);
    v29 = WdLogNewEntry5_WdLowResource(v27);
    *(_QWORD *)(v29 + 24) = 2461LL;
    WdLogEvent5_WdLowResource(v29);
  }
  else
  {
    v28 = (char *)MappedBase;
    *(_DWORD *)a2 |= 4u;
    a2[11] = v28;
    return &v28[v23 + a3];
  }
  return (char *)v6;
}
