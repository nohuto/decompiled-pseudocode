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

__int64 __fastcall sub_18004983C(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _DWORD *v6; // r8
  unsigned int v7; // edx
  _DWORD *v8; // rcx
  int v9; // eax
  ULONG v10; // r10d
  unsigned int i; // ecx
  WNF_CHANGE_STAMP v12; // edx
  WNF_CHANGE_STAMP v13; // eax
  NTSTATUS v14; // esi
  __int64 v15; // rdx
  unsigned __int64 SubscriptionId; // [rsp+50h] [rbp+8h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_18015D058 + 8));
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
  v12 = *(_DWORD *)(a1 + 24);
  v13 = *(_DWORD *)(a2 + 56);
  if ( v12 > v13 )
  {
    *(_DWORD *)(a1 + 24) = v13;
    v12 = v13;
  }
  v14 = ZwSubscribeWnfStateChange((PCWNF_STATE_NAME)(a1 + 16), v12, v10, &SubscriptionId);
  if ( v14 >= 0 )
    *(_QWORD *)(a1 + 8) = SubscriptionId;
  if ( RtlGetCurrentServiceSessionId() )
    v15 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
  else
    v15 = 2147353486LL;
  if ( *(_BYTE *)v15 && v14 >= 0 )
    sub_1800D8D3C(*(_QWORD *)(a1 + 16), a2, a1, *(_DWORD *)(a1 + 108), *(_QWORD *)(a2 + 32), *(_DWORD *)(a2 + 64));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 56));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18015D058 + 8));
  return (unsigned int)v14;
}
