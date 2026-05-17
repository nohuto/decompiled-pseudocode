/*
 * XREFs of RtlpLookupDynamicFunctionEntry @ 0x180073AF4
 * Callers:
 *     RtlLookupFunctionEntry @ 0x180027C80 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpLookupDynamicFunctionEntry(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  int v7; // ebx
  unsigned int *v8; // r14
  __int64 v9; // rbp
  int v10; // edx
  unsigned __int64 v11; // rsi
  unsigned int *v12; // rdi
  __int64 result; // rax
  __int64 (__fastcall *v14)(unsigned __int64, __int64); // rdi
  __int64 v15; // rbx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rsi
  bool v18; // sf
  int v19; // edx
  int v20; // r9d
  int v21; // r8d

  RtlAcquireSRWLockShared(&RtlpDynamicFunctionTableLock, a2, a3, a4);
  v6 = (_QWORD *)RtlpDynamicFunctionTableTree;
  v7 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v6 )
        goto LABEL_18;
      if ( a1 >= *(v6 - 7) )
        break;
      v6 = (_QWORD *)*v6;
    }
    if ( a1 < *(v6 - 6) )
      break;
    v6 = (_QWORD *)v6[1];
  }
  v8 = (unsigned int *)*(v6 - 9);
  v9 = *(v6 - 5);
  if ( *((_DWORD *)v6 - 2) == 3 || !*((_DWORD *)v6 - 2) )
  {
    v10 = *((_DWORD *)v6 - 1);
    if ( !v10 )
      goto LABEL_32;
    v11 = a1 - v9;
    v12 = &v8[3 * (v10 - 1)];
    if ( v11 < *v12 )
    {
      v18 = v10 - 2 < 0;
      v19 = v10 - 2;
      v20 = 0;
      if ( !v18 )
      {
        do
        {
          v21 = (v19 + v20) >> 1;
          v12 = &v8[3 * v21];
          if ( v11 >= *v12 )
          {
            if ( v11 < v12[3] )
              break;
            v20 = v21 + 1;
          }
          else
          {
            v19 = v21 - 1;
          }
        }
        while ( v19 >= v20 );
      }
    }
    if ( v11 < *v12 || v11 >= v12[1] )
LABEL_32:
      v12 = 0LL;
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    if ( v12 )
      *(_QWORD *)a2 = v9;
    return (__int64)v12;
  }
  else
  {
    if ( *((_DWORD *)v6 - 2) != 1 )
    {
      v14 = (__int64 (__fastcall *)(unsigned __int64, __int64))*(v6 - 4);
      v15 = *(v6 - 3);
      RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
      *(_QWORD *)a2 = v9;
      return v14(a1, v15);
    }
    v16 = *((_DWORD *)v6 - 1);
    v17 = a1 - v9;
    if ( !v16 )
    {
LABEL_18:
      RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
      return 0LL;
    }
    while ( v17 < *v8 || v17 >= v8[1] )
    {
      v8 += 3;
      if ( ++v7 >= v16 )
        goto LABEL_18;
    }
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    result = (__int64)v8;
    *(_QWORD *)a2 = v9;
  }
  return result;
}
