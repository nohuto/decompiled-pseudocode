/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K@Z @ 0x1C00B9690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocationExternal(
        VIDMM_PROCESS_HEAP *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 CurrentProcess; // rax
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  v21 = a3;
  v4 = (__int64 *)*((_QWORD *)this + 1);
  v19 = 0LL;
  v6 = *v4;
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
    v12 = 0LL;
    v13 = a2[4];
    v14 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  }
  else
  {
    v15 = a2[1];
    v12 = a2[2];
    v14 = 4;
    v13 = *(_QWORD *)(v15 + 88);
    if ( ((*(_DWORD *)(v15 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v14 = 1028;
  }
  v20 = v12;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C0047670);
    v16 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v16 + 24) = 2580LL;
    WdLogEvent5_WdLowResource(v16);
    return v19;
  }
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
  if ( (int)MmMapViewOfSection(v13, CurrentProcess, &v19, 0LL, v21, &v20, &v21, 2, 0, v14) < 0 )
    return v19;
  return v12 - v20 + v19;
}
