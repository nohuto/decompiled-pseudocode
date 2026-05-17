/*
 * XREFs of sub_1800717CC @ 0x1800717CC
 * Callers:
 *     sub_1800717A0 @ 0x1800717A0 (sub_1800717A0.c)
 *     sub_1800717CC @ 0x1800717CC (sub_1800717CC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800717CC @ 0x1800717CC (sub_1800717CC.c)
 *     sub_180071914 @ 0x180071914 (sub_180071914.c)
 *     sub_180071960 @ 0x180071960 (sub_180071960.c)
 */

signed __int64 __fastcall sub_1800717CC(__int64 a1, _DWORD *a2, unsigned __int64 **a3, __int64 a4)
{
  unsigned __int64 *v4; // rsi
  int v5; // eax
  _QWORD *v8; // rbp
  signed __int64 result; // rax
  unsigned __int64 *v10; // rdx
  __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned __int64 *v13; // r8
  unsigned __int64 *v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  _DWORD *v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = a2;
  ++*a2;
  v4 = (unsigned __int64 *)(a1 + 64);
  v5 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 64) = *a3;
  v8 = *(_QWORD **)(a1 + 40);
  *a3 = (unsigned __int64 *)(a1 + 64);
  if ( v8 )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)*v8;
      v11 = v8[1];
      if ( *(int *)(v11 + 56) <= 5 )
        break;
LABEL_10:
      if ( v8 == *(_QWORD **)(a1 + 40) )
      {
        v4 = (unsigned __int64 *)(a1 + 64);
        goto LABEL_2;
      }
    }
    v12 = *(_DWORD *)(v11 + 72);
    if ( v12 )
    {
      if ( !*(_QWORD *)(v11 + 64) )
      {
LABEL_16:
        if ( *(_DWORD *)(v11 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_10;
      }
    }
    else
    {
      sub_1800717CC(v8[1], a2, a3);
      v12 = *(_DWORD *)(v11 + 32);
      a2 = v17;
    }
    if ( *(_DWORD *)(a1 + 32) > v12 )
      *(_DWORD *)(a1 + 32) = v12;
    goto LABEL_16;
  }
LABEL_2:
  result = *(unsigned int *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 32) == (_DWORD)result )
  {
    v10 = *a3;
    if ( *a3 )
      *a3 = (unsigned __int64 *)*v10;
    result = 0LL;
    if ( v4 != v10 )
    {
      do
      {
        v13 = *a3;
        *v10 = result;
        result = (signed __int64)v10;
        if ( v13 )
          *a3 = (unsigned __int64 *)*v13;
        v14 = v10;
        v10 = v13;
      }
      while ( v4 != v13 );
      v17 = (_DWORD *)result;
      if ( v14 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, (unsigned __int64)v13, v13, a4);
        sub_180071960(a1, &v17);
        result = RtlReleaseSRWLockExclusive(&qword_18015D070);
        v15 = v17;
        while ( v15 )
        {
          v16 = v15;
          v15 = (_QWORD *)*v15;
          result = sub_180071914(v16 - 8);
        }
      }
    }
    *v4 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
