/*
 * XREFs of sub_1800749F4 @ 0x1800749F4
 * Callers:
 *     RtlLookupFunctionEntry @ 0x180034710 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800749F4(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  int v5; // ebx
  unsigned int *v6; // r14
  __int64 v7; // rbp
  int v8; // edx
  unsigned __int64 v9; // rsi
  unsigned int *v10; // rdi
  __int64 result; // rax
  __int64 (__fastcall *v12)(unsigned __int64, __int64); // rdi
  __int64 v13; // rbx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rsi
  bool v16; // sf
  int v17; // edx
  int v18; // r9d
  int v19; // r8d

  RtlAcquireSRWLockShared(&stru_18015A2B0);
  v4 = (_QWORD *)qword_18016B290;
  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_25;
      if ( a1 >= *(v4 - 7) )
        break;
      v4 = (_QWORD *)*v4;
    }
    if ( a1 < *(v4 - 6) )
      break;
    v4 = (_QWORD *)v4[1];
  }
  v6 = (unsigned int *)*(v4 - 9);
  v7 = *(v4 - 5);
  if ( *((_DWORD *)v4 - 2) == 3 || !*((_DWORD *)v4 - 2) )
  {
    v8 = *((_DWORD *)v4 - 1);
    if ( !v8 )
      goto LABEL_19;
    v9 = a1 - v7;
    v10 = &v6[3 * (v8 - 1)];
    if ( v9 < *v10 )
    {
      v16 = v8 - 2 < 0;
      v17 = v8 - 2;
      v18 = 0;
      if ( !v16 )
      {
        do
        {
          v19 = (v17 + v18) >> 1;
          v10 = &v6[3 * v19];
          if ( v9 >= *v10 )
          {
            if ( v9 < v10[3] )
              break;
            v18 = v19 + 1;
          }
          else
          {
            v17 = v19 - 1;
          }
        }
        while ( v17 >= v18 );
      }
    }
    if ( v9 < *v10 || v9 >= v10[1] )
LABEL_19:
      v10 = 0LL;
    RtlReleaseSRWLockShared(&stru_18015A2B0);
    if ( v10 )
      *a2 = v7;
    return (__int64)v10;
  }
  else
  {
    if ( *((_DWORD *)v4 - 2) != 1 )
    {
      v12 = (__int64 (__fastcall *)(unsigned __int64, __int64))*(v4 - 4);
      v13 = *(v4 - 3);
      RtlReleaseSRWLockShared(&stru_18015A2B0);
      *a2 = v7;
      return v12(a1, v13);
    }
    v14 = *((_DWORD *)v4 - 1);
    v15 = a1 - v7;
    if ( !v14 )
    {
LABEL_25:
      RtlReleaseSRWLockShared(&stru_18015A2B0);
      return 0LL;
    }
    while ( v15 < *v6 || v15 >= v6[1] )
    {
      v6 += 3;
      if ( ++v5 >= v14 )
        goto LABEL_25;
    }
    RtlReleaseSRWLockShared(&stru_18015A2B0);
    result = (__int64)v6;
    *a2 = v7;
  }
  return result;
}
