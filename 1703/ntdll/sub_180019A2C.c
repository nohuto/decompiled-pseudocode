/*
 * XREFs of sub_180019A2C @ 0x180019A2C
 * Callers:
 *     sub_1800198E4 @ 0x1800198E4 (sub_1800198E4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwSubscribeWnfStateChange @ 0x1800A8890 (ZwSubscribeWnfStateChange.c)
 *     sub_1800DF4BC @ 0x1800DF4BC (sub_1800DF4BC.c)
 */

__int64 __fastcall sub_180019A2C(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _DWORD *v6; // r8
  unsigned int v7; // edx
  _DWORD *v8; // rcx
  int v9; // eax
  unsigned int v10; // edx
  unsigned int i; // ecx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  RtlAcquireSRWLockExclusive(qword_18015C008 + 8);
  RtlAcquireSRWLockExclusive(a1 + 56);
  v4 = *(_QWORD **)(a1 + 72);
  v5 = (_QWORD *)(a2 + 8);
  if ( *v4 != a1 + 64 )
    __fastfail(3u);
  *v5 = a1 + 64;
  *(_QWORD *)(a2 + 16) = v4;
  *v4 = v5;
  *(_QWORD *)(a1 + 72) = v5;
  *(_QWORD *)(a2 + 24) = a1;
  if ( *(_DWORD *)(a1 + 128) == 1 && (*(_DWORD *)(a2 + 64) & 0xFFFFFFEE) != 0 )
    *(_DWORD *)(a2 + 160) = 1;
  v6 = (_DWORD *)(a1 + 88);
  v7 = 0;
  v8 = (_DWORD *)(a1 + 88);
  do
  {
    v9 = *(_DWORD *)(a2 + 64);
    if ( _bittest(&v9, v7) )
      ++*v8;
    ++v7;
    ++v8;
  }
  while ( v7 < 5 );
  v10 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v6 )
      v10 |= 1 << i;
    ++v6;
  }
  ++*(_DWORD *)(a1 + 80);
  if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
    ++*(_DWORD *)(a1 + 84);
  v12 = *(_DWORD *)(a2 + 56);
  if ( *(_DWORD *)(a1 + 24) > v12 )
    *(_DWORD *)(a1 + 24) = v12;
  v15 = ZwSubscribeWnfStateChange(a1 + 16, *(unsigned int *)(a1 + 24), v10, &v20);
  if ( v15 >= 0 )
  {
    v14 = v20;
    *(_QWORD *)(a1 + 8) = v20;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v13, v16, v17) )
    v18 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
  else
    v18 = 2147353486LL;
  if ( *(_BYTE *)v18 && v15 >= 0 )
    sub_1800DF4BC(*(_QWORD *)(a1 + 16), a2, a1, *(_DWORD *)(a1 + 108), *(_QWORD *)(a2 + 32), *(_DWORD *)(a2 + 64));
  RtlReleaseSRWLockExclusive(a1 + 56);
  RtlReleaseSRWLockExclusive(qword_18015C008 + 8);
  return (unsigned int)v15;
}
