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

__int64 __fastcall sub_18006AC08(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rsi
  int v7; // ebx
  int v8; // eax
  unsigned int *v9; // r14
  __int64 v10; // r15
  __int64 (__fastcall *v11)(__int64, __int64); // rdi
  __int64 v12; // rbx
  __int64 result; // rax
  int v14; // edx
  unsigned __int64 v15; // rbp
  unsigned int *v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rbp
  int v20; // r8d
  int i; // r9d
  int v22; // edx

  RtlAcquireSRWLockShared(&qword_18015B2B0, a2, a3, a4);
  v6 = (_QWORD *)qword_18016F2A0;
  v7 = 0;
  if ( !qword_18016F2A0 )
    goto LABEL_25;
  do
  {
    v8 = sub_18006AFAC(a1, v6);
    if ( v8 < 0 )
    {
      v6 = (_QWORD *)*v6;
    }
    else
    {
      if ( v8 <= 0 )
        break;
      v6 = (_QWORD *)v6[1];
    }
  }
  while ( v6 );
  if ( !v6 )
    goto LABEL_25;
  v9 = (unsigned int *)*(v6 - 9);
  v10 = *(v6 - 5);
  if ( *((_DWORD *)v6 - 2) != 3 && *((_DWORD *)v6 - 2) )
  {
    if ( *((_DWORD *)v6 - 2) != 1 )
    {
      v11 = (__int64 (__fastcall *)(__int64, __int64))*(v6 - 4);
      v12 = *(v6 - 3);
      RtlReleaseSRWLockShared(&qword_18015B2B0);
      *(_QWORD *)a2 = v10;
      return v11(a1, v12);
    }
    v18 = *((_DWORD *)v6 - 1);
    v19 = a1 - v10;
    if ( v18 )
    {
      while ( v19 < *v9 || v19 >= v9[1] )
      {
        v9 += 3;
        if ( ++v7 >= v18 )
          goto LABEL_25;
      }
      RtlReleaseSRWLockShared(&qword_18015B2B0);
      result = (__int64)v9;
      *(_QWORD *)a2 = v10;
      return result;
    }
LABEL_25:
    RtlReleaseSRWLockShared(&qword_18015B2B0);
    return 0LL;
  }
  v14 = *((_DWORD *)v6 - 1);
  if ( !v14 )
    goto LABEL_19;
  v15 = a1 - v10;
  v16 = &v9[3 * (v14 - 1)];
  v17 = *v16;
  if ( v15 < v17 )
  {
    v20 = v14 - 2;
    for ( i = 0; v20 >= i; LODWORD(v17) = *v16 )
    {
      v22 = (v20 + i) >> 1;
      v16 = &v9[3 * v22];
      if ( v15 >= *v16 )
      {
        LODWORD(v17) = *v16;
        if ( v15 < v16[3] )
          break;
        i = v22 + 1;
      }
      else
      {
        v20 = v22 - 1;
      }
    }
  }
  if ( v15 < (unsigned int)v17 || v15 >= v16[1] )
LABEL_19:
    v16 = 0LL;
  RtlReleaseSRWLockShared(&qword_18015B2B0);
  if ( v16 )
    *(_QWORD *)a2 = v10;
  return (__int64)v16;
}
