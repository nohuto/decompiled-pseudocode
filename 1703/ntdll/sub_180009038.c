/*
 * XREFs of sub_180009038 @ 0x180009038
 * Callers:
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 * Callees:
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     sub_180009380 @ 0x180009380 (sub_180009380.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlRbRemoveNode @ 0x180028010 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180058688 @ 0x180058688 (sub_180058688.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     sub_1800FDEE8 @ 0x1800FDEE8 (sub_1800FDEE8.c)
 */

ULONG_PTR __fastcall sub_180009038(__int64 a1, void *a2, char a3)
{
  int v4; // edi
  _RTL_BALANCED_NODE *v5; // rax
  _RTL_BALANCED_NODE *v6; // rsi
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // rsi
  __int64 v9; // rcx
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = a2;
  v4 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 48));
  v5 = (_RTL_BALANCED_NODE *)sub_180009380(a1);
  v6 = v5;
  if ( v5 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 56), v5);
    if ( !v4 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 48));
    sub_180058688(&stru_180159600, 0LL, 0);
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -((unsigned __int64)v6[1].Children[1] >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)(RegionSize >> 12));
    sub_18000913C((_DWORD)v6);
    v7 = RegionSize;
    v8 = RegionSize;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v7 = RegionSize;
      v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
    }
    else
    {
      v9 = 2147353480LL;
    }
    if ( *(_BYTE *)v9 )
      sub_1800FDEE8(a1, BaseAddress, v7);
  }
  else
  {
    if ( !v4 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 48));
    sub_1800A4DFC(8, a1, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    return 0LL;
  }
  return v8;
}
