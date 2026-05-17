/*
 * XREFs of sub_18004983C @ 0x18004983C
 * Callers:
 *     sub_1800496F4 @ 0x1800496F4 (sub_1800496F4.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     ZwSubscribeWnfStateChange @ 0x18009E0F0 (ZwSubscribeWnfStateChange.c)
 *     sub_1800D8D3C @ 0x1800D8D3C (sub_1800D8D3C.c)
 */

__int64 __fastcall sub_18004983C(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _DWORD *v11; // r8
  unsigned int v12; // edx
  _DWORD *v13; // rcx
  int v14; // eax
  unsigned int v15; // r10d
  unsigned int i; // ecx
  __int64 v17; // rdx
  unsigned int v18; // eax
  int v19; // esi
  __int64 v20; // rdx
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  RtlAcquireSRWLockExclusive(qword_18015D058 + 8, a2, a3, a4);
  RtlAcquireSRWLockExclusive(a1 + 56, v6, v7, v8);
  v9 = *(_QWORD **)(a1 + 72);
  v10 = (_QWORD *)(a2 + 8);
  if ( *v9 != a1 + 64 )
    __fastfail(3u);
  *v10 = a1 + 64;
  *(_QWORD *)(a2 + 16) = v9;
  *v9 = v10;
  *(_QWORD *)(a1 + 72) = v10;
  *(_QWORD *)(a2 + 24) = a1;
  if ( *(_DWORD *)(a1 + 128) == 1 && (*(_DWORD *)(a2 + 64) & 0xFFFFFFEE) != 0 )
    *(_DWORD *)(a2 + 160) = 1;
  v11 = (_DWORD *)(a1 + 88);
  v12 = 0;
  v13 = (_DWORD *)(a1 + 88);
  do
  {
    v14 = *(_DWORD *)(a2 + 64);
    if ( _bittest(&v14, v12) )
      ++*v13;
    ++v12;
    ++v13;
  }
  while ( v12 < 5 );
  v15 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v11 )
      v15 |= 1 << i;
    ++v11;
  }
  ++*(_DWORD *)(a1 + 80);
  if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
    ++*(_DWORD *)(a1 + 84);
  v17 = *(unsigned int *)(a1 + 24);
  v18 = *(_DWORD *)(a2 + 56);
  if ( (unsigned int)v17 > v18 )
  {
    *(_DWORD *)(a1 + 24) = v18;
    v17 = v18;
  }
  v19 = ZwSubscribeWnfStateChange(a1 + 16, v17, v15, &v22);
  if ( v19 >= 0 )
    *(_QWORD *)(a1 + 8) = v22;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v20 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
  else
    v20 = 2147353486LL;
  if ( *(_BYTE *)v20 && v19 >= 0 )
    sub_1800D8D3C(*(_QWORD *)(a1 + 16), a2, a1, *(_DWORD *)(a1 + 108), *(_QWORD *)(a2 + 32), *(_DWORD *)(a2 + 64));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18015D058 + 8));
  return (unsigned int)v19;
}
