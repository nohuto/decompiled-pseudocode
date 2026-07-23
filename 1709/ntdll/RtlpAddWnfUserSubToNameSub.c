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

__int64 __fastcall RtlpAddWnfUserSubToNameSub(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _DWORD *v6; // r8
  unsigned int v7; // edx
  _DWORD *v8; // rcx
  int v9; // eax
  ULONG v10; // edx
  unsigned int i; // ecx
  unsigned int v12; // eax
  NTSTATUS v13; // esi
  __int64 v14; // rdx
  unsigned __int64 SubscriptionId; // [rsp+50h] [rbp+8h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_1801600A8 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 56));
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
  v13 = NtSubscribeWnfStateChange((PCWNF_STATE_NAME)(a1 + 16), *(_DWORD *)(a1 + 24), v10, &SubscriptionId);
  if ( v13 >= 0 )
    *(_QWORD *)(a1 + 8) = SubscriptionId;
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v14 = 2147353486LL;
  if ( *(_BYTE *)v14 && v13 >= 0 )
    RtlpWnfETWEventSubscribe(
      *(_QWORD *)(a1 + 16),
      a2,
      a1,
      *(_DWORD *)(a1 + 108),
      *(_QWORD *)(a2 + 32),
      *(_DWORD *)(a2 + 64));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 56));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801600A8 + 8));
  return (unsigned int)v13;
}
