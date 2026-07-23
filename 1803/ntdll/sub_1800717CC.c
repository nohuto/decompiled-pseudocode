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

void __fastcall sub_1800717CC(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  int v4; // eax
  _QWORD *v7; // rbp
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  _QWORD *v12; // r8
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  _DWORD *v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = a2;
  ++*a2;
  v3 = (_QWORD *)(a1 + 64);
  v4 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 64) = *a3;
  v7 = *(_QWORD **)(a1 + 40);
  *a3 = a1 + 64;
  if ( v7 )
  {
    while ( 1 )
    {
      v7 = (_QWORD *)*v7;
      v10 = v7[1];
      if ( *(int *)(v10 + 56) <= 5 )
        break;
LABEL_10:
      if ( v7 == *(_QWORD **)(a1 + 40) )
      {
        v3 = (_QWORD *)(a1 + 64);
        goto LABEL_2;
      }
    }
    v11 = *(_DWORD *)(v10 + 72);
    if ( v11 )
    {
      if ( !*(_QWORD *)(v10 + 64) )
      {
LABEL_16:
        if ( *(_DWORD *)(v10 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_10;
      }
    }
    else
    {
      sub_1800717CC(v7[1], a2, a3);
      v11 = *(_DWORD *)(v10 + 32);
      a2 = v16;
    }
    if ( *(_DWORD *)(a1 + 32) > v11 )
      *(_DWORD *)(a1 + 32) = v11;
    goto LABEL_16;
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 72) )
  {
    v8 = (_QWORD *)*a3;
    if ( *a3 )
      *a3 = *v8;
    v9 = 0LL;
    if ( v3 != v8 )
    {
      do
      {
        v12 = (_QWORD *)*a3;
        *v8 = v9;
        v9 = v8;
        if ( v12 )
          *a3 = *v12;
        v13 = v8;
        v8 = v12;
      }
      while ( v3 != v12 );
      v16 = v9;
      if ( v13 )
      {
        RtlAcquireSRWLockExclusive(&stru_18015D070);
        sub_180071960(a1, &v16);
        RtlReleaseSRWLockExclusive(&stru_18015D070);
        v14 = v16;
        while ( v14 )
        {
          v15 = v14;
          v14 = (_QWORD *)*v14;
          sub_180071914(v15 - 8);
        }
      }
    }
    *v3 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
}
