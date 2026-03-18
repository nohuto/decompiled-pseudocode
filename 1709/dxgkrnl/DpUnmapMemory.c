/*
 * XREFs of DpUnmapMemory @ 0x1C01DB9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpUnmapMemory(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rdi
  char v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v12; // rcx
  __int64 **v13; // rdx
  __int64 v14; // rax

  v3 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( a1
    && a2
    && (v7 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v7 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v7 + 20) - 2) <= 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      v8 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v8 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v8);
    }
    KeWaitForSingleObject((PVOID)(v7 + 2384), Executive, 0, 0, 0LL);
    v9 = *(__int64 **)(v7 + 2368);
    v10 = v9;
    if ( (__int64 *)*v9 != v9 )
    {
      while ( 1 )
      {
        v5 = v9;
        if ( v9[8] == a2 )
          break;
        v9 = (__int64 *)*v9;
        if ( (__int64 *)*v9 == v10 )
          goto LABEL_11;
      }
      if ( (*((_DWORD *)v9 + 6))-- == 1 )
      {
        v12 = (__int64 *)*v9;
        if ( *(__int64 **)(*v9 + 8) != v9 || (v13 = (__int64 **)v9[1], *v13 != v9) )
          __fastfail(3u);
        *v13 = v12;
        v6 = 1;
        v12[1] = (__int64)v13;
      }
    }
LABEL_11:
    KeReleaseMutex((PRKMUTEX)(v7 + 2384), 0);
    if ( v6 == 1 )
    {
      if ( *((_BYTE *)v5 + 72) == 1 )
      {
        if ( *((_BYTE *)v5 + 45) == 1 )
          v3 = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)v5[8]);
        else
          MmUnmapIoSpace((PVOID)v5[8], *((unsigned int *)v5 + 10));
      }
      ExFreePoolWithTag(v5, 0x74727044u);
    }
  }
  else
  {
    v3 = -1073741811;
    v14 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
  }
  return v3;
}
