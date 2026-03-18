/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K@Z @ 0x1C00A8750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocationExternal(VIDMM_PROCESS_HEAP *this, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 CurrentProcess; // rax
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = a3;
  v3 = (__int64 *)*((_QWORD *)this + 1);
  v17 = 0LL;
  v5 = *v3;
  if ( PsGetCurrentProcess(this) != v5 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v9[5] = 0LL;
    v9[6] = 0LL;
    v9[7] = 0LL;
    v9[3] = 270LL;
    v9[4] = 30LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  v10 = 4;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v11 = 0LL;
    v12 = a2[4];
    v10 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) == 0 ? 4 : 1028;
  }
  else
  {
    v13 = a2[1];
    v11 = a2[2];
    v12 = *(_QWORD *)(v13 + 88);
    if ( ((*(_DWORD *)(v13 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v10 = 1028;
  }
  v18 = v11;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C003C660);
    v14 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v14 + 24) = 2564LL;
    WdLogEvent5_WdLowResource(v14);
    return v17;
  }
  CurrentProcess = PsGetCurrentProcess(v7);
  if ( (int)MmMapViewOfSection(v12, CurrentProcess, &v17, 0LL, v19, &v18, &v19, 2, 0, v10) < 0 )
    return v17;
  return v11 - v18 + v17;
}
