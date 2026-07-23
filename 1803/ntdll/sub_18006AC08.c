/*
 * XREFs of sub_18006AC08 @ 0x18006AC08
 * Callers:
 *     RtlLookupFunctionEntry @ 0x18000EBA0 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18006AFAC @ 0x18006AFAC (sub_18006AFAC.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006AC08(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  int v5; // ebx
  int v6; // eax
  unsigned int *v7; // r14
  __int64 v8; // r15
  __int64 (__fastcall *v9)(__int64, __int64); // rdi
  __int64 v10; // rbx
  __int64 result; // rax
  int v12; // edx
  unsigned __int64 v13; // rbp
  unsigned int *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rbp
  int v18; // r8d
  int i; // r9d
  int v20; // edx

  RtlAcquireSRWLockShared(&stru_18015B2B0);
  v4 = (_QWORD *)qword_18016F2A0;
  v5 = 0;
  if ( !qword_18016F2A0 )
    goto LABEL_25;
  do
  {
    v6 = sub_18006AFAC(a1, v4);
    if ( v6 < 0 )
    {
      v4 = (_QWORD *)*v4;
    }
    else
    {
      if ( v6 <= 0 )
        break;
      v4 = (_QWORD *)v4[1];
    }
  }
  while ( v4 );
  if ( !v4 )
    goto LABEL_25;
  v7 = (unsigned int *)*(v4 - 9);
  v8 = *(v4 - 5);
  if ( *((_DWORD *)v4 - 2) != 3 && *((_DWORD *)v4 - 2) )
  {
    if ( *((_DWORD *)v4 - 2) != 1 )
    {
      v9 = (__int64 (__fastcall *)(__int64, __int64))*(v4 - 4);
      v10 = *(v4 - 3);
      RtlReleaseSRWLockShared(&stru_18015B2B0);
      *a2 = v8;
      return v9(a1, v10);
    }
    v16 = *((_DWORD *)v4 - 1);
    v17 = a1 - v8;
    if ( v16 )
    {
      while ( v17 < *v7 || v17 >= v7[1] )
      {
        v7 += 3;
        if ( ++v5 >= v16 )
          goto LABEL_25;
      }
      RtlReleaseSRWLockShared(&stru_18015B2B0);
      result = (__int64)v7;
      *a2 = v8;
      return result;
    }
LABEL_25:
    RtlReleaseSRWLockShared(&stru_18015B2B0);
    return 0LL;
  }
  v12 = *((_DWORD *)v4 - 1);
  if ( !v12 )
    goto LABEL_19;
  v13 = a1 - v8;
  v14 = &v7[3 * (v12 - 1)];
  v15 = *v14;
  if ( v13 < v15 )
  {
    v18 = v12 - 2;
    for ( i = 0; v18 >= i; LODWORD(v15) = *v14 )
    {
      v20 = (v18 + i) >> 1;
      v14 = &v7[3 * v20];
      if ( v13 >= *v14 )
      {
        LODWORD(v15) = *v14;
        if ( v13 < v14[3] )
          break;
        i = v20 + 1;
      }
      else
      {
        v18 = v20 - 1;
      }
    }
  }
  if ( v13 < (unsigned int)v15 || v13 >= v14[1] )
LABEL_19:
    v14 = 0LL;
  RtlReleaseSRWLockShared(&stru_18015B2B0);
  if ( v14 )
    *a2 = v8;
  return (__int64)v14;
}
