/*
 * XREFs of DpUnmapMemory @ 0x1C01C21C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpUnmapMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 *v6; // rdi
  char v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 *v13; // rdx
  __int64 **v14; // rcx
  __int64 v15; // rax

  v4 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( a1
    && a2
    && (v8 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v8 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v8 + 20) - 2) <= 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      v9 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
      *(_QWORD *)(v9 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v9);
    }
    KeWaitForSingleObject((PVOID)(v8 + 2384), Executive, 0, 0, 0LL);
    v10 = *(__int64 **)(v8 + 2368);
    v11 = v10;
    if ( (__int64 *)*v10 != v10 )
    {
      while ( 1 )
      {
        v6 = v10;
        if ( v10[8] == a2 )
          break;
        v10 = (__int64 *)*v10;
        if ( (__int64 *)*v10 == v11 )
          goto LABEL_11;
      }
      if ( (*((_DWORD *)v10 + 6))-- == 1 )
      {
        v13 = (__int64 *)*v10;
        v14 = (__int64 **)v10[1];
        if ( *(__int64 **)(*v10 + 8) != v10 || *v14 != v10 )
          __fastfail(3u);
        *v14 = v13;
        v7 = 1;
        v13[1] = (__int64)v14;
      }
    }
LABEL_11:
    KeReleaseMutex((PRKMUTEX)(v8 + 2384), 0);
    if ( v7 == 1 )
    {
      if ( *((_BYTE *)v6 + 72) == 1 )
      {
        if ( *((_BYTE *)v6 + 45) == 1 )
          v4 = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)v6[8]);
        else
          MmUnmapIoSpace((PVOID)v6[8], *((unsigned int *)v6 + 10));
      }
      ExFreePoolWithTag(v6, 0x74727044u);
    }
  }
  else
  {
    v4 = -1073741811;
    v15 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
  }
  return v4;
}
