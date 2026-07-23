/*
 * XREFs of sub_180009164 @ 0x180009164
 * Callers:
 *     sub_1800096A8 @ 0x1800096A8 (sub_1800096A8.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180058688 @ 0x180058688 (sub_180058688.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800FDF88 @ 0x1800FDF88 (sub_1800FDF88.c)
 */

PVOID __fastcall sub_180009164(char *BaseAddress, __int16 a2, ULONG_PTR a3, char a4)
{
  PVOID v4; // rsi
  _RTL_BALANCED_NODE *v9; // rax
  _RTL_BALANCED_NODE *v10; // rdi
  ULONG Protect; // eax
  ULONG v12; // eax
  int v13; // r15d
  BOOLEAN v14; // r8
  _RTL_BALANCED_NODE *v15; // rdx
  _RTL_BALANCED_NODE *v16; // rax
  __int64 v17; // rcx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddressa; // [rsp+48h] [rbp-8h] BYREF

  v4 = 0LL;
  BaseAddressa = 0LL;
  v9 = (_RTL_BALANCED_NODE *)sub_1800093FC(0x28uLL);
  v10 = v9;
  if ( !v9 )
  {
LABEL_32:
    if ( BaseAddressa )
    {
      sub_180058688(&stru_180159600, 0LL, 0);
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
    }
    return v4;
  }
  memset(v9, 0, 0x28uLL);
  RegionSize = a3 + 4096;
  if ( a3 + 4096 < a3 )
    goto LABEL_30;
  Protect = sub_18001E548(BaseAddress);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
  {
    BaseAddressa = 0LL;
    goto LABEL_30;
  }
  RegionSize = a3;
  v12 = sub_18001E548(BaseAddress);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, v12) < 0
    || (v10[1].Children[0] = (_RTL_BALANCED_NODE *)BaseAddressa,
        v10[1].Children[1] = (_RTL_BALANCED_NODE *)(RegionSize ^ ((unsigned __int16)RegionSize ^ (unsigned __int16)v10[1].Children[1]) & 0xFFF),
        LOWORD(v10[1].Children[0]) = RegionSize - a2,
        (int)sub_180058688(&stru_180159600, 0LL, 1) < 0) )
  {
LABEL_30:
    if ( v10 )
      sub_18000913C((int)v10);
    goto LABEL_32;
  }
  v13 = a4 & 1;
  if ( !v13 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 6);
  v14 = 0;
  v15 = (_RTL_BALANCED_NODE *)*((_QWORD *)BaseAddress + 7);
  if ( v15 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)BaseAddressa < ((unsigned __int64)v15[1].Children[0] & 0xFFFFFFFFFFFF0000uLL) )
      {
        v16 = v15->Children[0];
        if ( (BaseAddress[64] & 1) != 0 )
        {
          if ( !v16 )
          {
LABEL_22:
            v14 = 0;
            break;
          }
          v16 = (_RTL_BALANCED_NODE *)((unsigned __int64)v15 ^ (unsigned __int64)v16);
        }
        if ( !v16 )
          goto LABEL_22;
      }
      else
      {
        v16 = v15->Children[1];
        if ( (BaseAddress[64] & 1) != 0 )
        {
          if ( !v16 )
          {
LABEL_13:
            v14 = 1;
            break;
          }
          v16 = (_RTL_BALANCED_NODE *)((unsigned __int64)v15 ^ (unsigned __int64)v16);
        }
        if ( !v16 )
          goto LABEL_13;
      }
      v15 = v16;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(BaseAddress + 56), v15, v14, v10);
  if ( !v13 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 6);
  _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 9, (RegionSize >> 12) + 1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 10, RegionSize >> 12);
  v4 = BaseAddressa;
  v10 = 0LL;
  BaseAddressa = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v17 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v17 = 2147353480LL;
  if ( *(_BYTE *)v17 )
  {
    sub_1800FDF88(BaseAddress, v4, RegionSize + 4096);
    goto LABEL_30;
  }
  return v4;
}
