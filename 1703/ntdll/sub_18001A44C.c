/*
 * XREFs of sub_18001A44C @ 0x18001A44C
 * Callers:
 *     sub_18001A44C @ 0x18001A44C (sub_18001A44C.c)
 *     sub_18001A7FC @ 0x18001A7FC (sub_18001A7FC.c)
 * Callees:
 *     sub_18001A44C @ 0x18001A44C (sub_18001A44C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_18007BB68 @ 0x18007BB68 (sub_18007BB68.c)
 *     sub_180081E98 @ 0x180081E98 (sub_180081E98.c)
 */

__int64 __fastcall sub_18001A44C(__int64 a1, _DWORD *a2, __int64 **a3)
{
  __int64 *v3; // rsi
  int v4; // eax
  _QWORD *v7; // rbp
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 *v10; // rdx
  unsigned int v11; // eax
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  _DWORD *v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  ++*a2;
  v3 = (__int64 *)(a1 + 64);
  v4 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 64) = *a3;
  v7 = *(_QWORD **)(a1 + 40);
  *a3 = (__int64 *)(a1 + 64);
  if ( v7 )
  {
    while ( 1 )
    {
      v7 = (_QWORD *)*v7;
      v8 = v7[1];
      if ( *(int *)(v8 + 56) <= 5 )
        break;
LABEL_3:
      if ( v7 == *(_QWORD **)(a1 + 40) )
      {
        v3 = (__int64 *)(a1 + 64);
        goto LABEL_5;
      }
    }
    v11 = *(_DWORD *)(v8 + 72);
    if ( v11 )
    {
      if ( !*(_QWORD *)(v8 + 64) )
      {
LABEL_16:
        if ( *(_DWORD *)(v8 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_3;
      }
    }
    else
    {
      sub_18001A44C(v7[1], a2, a3);
      v11 = *(_DWORD *)(v8 + 32);
      a2 = v14;
    }
    if ( *(_DWORD *)(a1 + 32) > v11 )
      *(_DWORD *)(a1 + 32) = v11;
    goto LABEL_16;
  }
LABEL_5:
  result = *(unsigned int *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 32) == (_DWORD)result )
  {
    v10 = *a3;
    if ( *a3 )
      *a3 = (__int64 *)*v10;
    result = 0LL;
    if ( v3 != v10 )
    {
      do
      {
        *v10 = result;
        result = (__int64)v10;
        v10 = *a3;
        if ( *a3 )
          *a3 = (__int64 *)*v10;
      }
      while ( v3 != v10 );
      v14 = (_DWORD *)result;
      if ( result )
      {
        RtlAcquireSRWLockExclusive(&qword_18015C040);
        sub_18007BB68(a1, &v14);
        result = RtlReleaseSRWLockExclusive(&qword_18015C040);
        v12 = v14;
        while ( v12 )
        {
          v13 = v12;
          v12 = (_QWORD *)*v12;
          result = sub_180081E98(v13 - 8);
        }
      }
    }
    *v3 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
