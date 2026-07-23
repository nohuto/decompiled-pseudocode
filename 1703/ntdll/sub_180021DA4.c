/*
 * XREFs of sub_180021DA4 @ 0x180021DA4
 * Callers:
 *     sub_18000DDA0 @ 0x18000DDA0 (sub_18000DDA0.c)
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D964 @ 0x18001D964 (sub_18001D964.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_1800EFFE8 @ 0x1800EFFE8 (sub_1800EFFE8.c)
 *     RtlZeroHeap @ 0x1800F1D20 (RtlZeroHeap.c)
 *     sub_180102330 @ 0x180102330 (sub_180102330.c)
 * Callees:
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_18001EDB4 @ 0x18001EDB4 (sub_18001EDB4.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 *     sub_1800FFAA8 @ 0x1800FFAA8 (sub_1800FFAA8.c)
 */

char __fastcall sub_180021DA4(_QWORD *BaseAddress, __int64 a2)
{
  ULONG Protect; // eax
  NTSTATUS v5; // ebx
  __int64 v6; // rbx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v12; // r8
  ULONG_PTR v13; // rdx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+30h] BYREF
  PVOID BaseAddressa; // [rsp+68h] [rbp+38h] BYREF

  sub_18001EDB4((__int64)BaseAddress, a2, (unsigned __int64 *)&BaseAddressa, &RegionSize);
  Protect = sub_18001E548(BaseAddress, 1);
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
  if ( v5 >= 0 )
  {
    v6 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FF834(BaseAddress, BaseAddressa, RegionSize, 8LL);
    BaseAddress[79] -= RegionSize;
    --*((_DWORD *)BaseAddress + 157);
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      v8 = 2147353472LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v6 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      sub_1800FFAA8(
        (int)BaseAddress,
        (int)BaseAddressa,
        RegionSize,
        16 * BaseAddress[24],
        (HANDLE)*(unsigned __int8 *)v6);
    }
    v9 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
    else
      v10 = 2147353482LL;
    if ( *(_BYTE *)v10 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
      sub_1800FFAA8(
        (int)BaseAddress,
        (int)BaseAddressa,
        RegionSize,
        16 * BaseAddress[24],
        (HANDLE)*(unsigned __int8 *)v9);
    }
    ++*((_DWORD *)BaseAddress + 148);
    if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
      goto LABEL_12;
    v12 = (char *)BaseAddressa;
    v13 = RegionSize >> 2;
    if ( !(RegionSize >> 2) )
      goto LABEL_12;
    if ( ((unsigned __int8)BaseAddressa & 4) != 0 )
    {
      *(_DWORD *)BaseAddressa = -17891602;
      if ( !--v13 )
      {
LABEL_12:
        *(_BYTE *)(a2 + 10) &= 0x17u;
        return 1;
      }
      v12 += 4;
    }
    memset64(v12, 0xFEEEFEEEFEEEFEEEuLL, v13 >> 1);
    if ( (v13 & 1) != 0 )
      *(_DWORD *)&v12[4 * v13 - 4] = -17891602;
    goto LABEL_12;
  }
  ++*((_DWORD *)BaseAddress + 151);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
    v5,
    BaseAddress,
    BaseAddressa,
    RegionSize);
  return 0;
}
