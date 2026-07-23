/*
 * XREFs of sub_1800631EC @ 0x1800631EC
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlRbRemoveNode @ 0x180021260 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 *     sub_18006337C @ 0x18006337C (sub_18006337C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC524 @ 0x1800FC524 (sub_1800FC524.c)
 */

ULONG_PTR __fastcall sub_1800631EC(__int64 a1, void *a2, char a3)
{
  _RTL_SRWLOCK *v3; // rsi
  int v5; // edi
  _RTL_BALANCED_NODE *v6; // rax
  int v7; // r10d
  __int64 v8; // r14
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rax
  ULONG_PTR v13; // rdi
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+38h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+48h] BYREF

  BaseAddress = a2;
  v3 = (_RTL_SRWLOCK *)(a1 + 72);
  v5 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  v6 = (_RTL_BALANCED_NODE *)sub_18006337C(a1);
  v8 = (__int64)v6;
  if ( v6 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 80), v6);
    if ( !v5 )
      RtlReleaseSRWLockExclusive(v3);
    v10 = *(_QWORD *)(v8 + 32);
    v11 = (unsigned __int8)v10 >> 2;
    v16 = *(_OWORD *)a1;
    v12 = (((v10 >> 12) + ((v10 >> 1) & 1)) << 12) - 1;
    RegionSize = (1LL << v11) - (((1LL << v11) - 1) & ((1LL << v11) + v12)) + v12;
    sub_1800624DC(&BaseAddress, &RegionSize, 0x8000, &v16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), -(*(_QWORD *)(v8 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(__int64)(RegionSize >> 12));
    v17 = *(_OWORD *)a1;
    sub_18005F840(v8, &v17);
    v13 = RegionSize;
    v9 = RegionSize;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v13 = RegionSize;
      v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
    }
    else
    {
      v14 = 2147353480LL;
    }
    if ( *(_BYTE *)v14 )
      sub_1800FC524(a1, BaseAddress, v13);
  }
  else
  {
    if ( !v5 )
    {
      RtlReleaseSRWLockExclusive(v3);
      v7 = (int)BaseAddress;
    }
    sub_18009A5F0(8, a1, v7, 0, 0LL, 0LL);
    return 0LL;
  }
  return v9;
}
