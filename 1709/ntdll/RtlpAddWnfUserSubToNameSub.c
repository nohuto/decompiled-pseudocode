/*
 * XREFs of RtlpAddWnfUserSubToNameSub @ 0x18006DCFC
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006DBB4 (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     NtSubscribeWnfStateChange @ 0x1800A36B0 (NtSubscribeWnfStateChange.c)
 *     RtlpWnfETWEventSubscribe @ 0x1800DDE3C (RtlpWnfETWEventSubscribe.c)
 */

__int64 __fastcall RtlpAddWnfUserSubToNameSub(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
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
  unsigned int v15; // edx
  unsigned int i; // ecx
  unsigned int v17; // eax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  RtlAcquireSRWLockExclusive(qword_1801600A8 + 8, a2, a3, a4);
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
  v17 = *(_DWORD *)(a2 + 56);
  if ( *(_DWORD *)(a1 + 24) > v17 )
    *(_DWORD *)(a1 + 24) = v17;
  v18 = NtSubscribeWnfStateChange(a1 + 16, *(unsigned int *)(a1 + 24), v15, &v21);
  if ( v18 >= 0 )
    *(_QWORD *)(a1 + 8) = v21;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v19 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v19 = 2147353486LL;
  if ( *(_BYTE *)v19 && v18 >= 0 )
    RtlpWnfETWEventSubscribe(
      *(_QWORD *)(a1 + 16),
      a2,
      a1,
      *(_DWORD *)(a1 + 108),
      *(_QWORD *)(a2 + 32),
      *(_DWORD *)(a2 + 64));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801600A8 + 8));
  return (unsigned int)v18;
}
