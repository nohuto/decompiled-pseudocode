/*
 * XREFs of sub_18005CA3C @ 0x18005CA3C
 * Callers:
 *     sub_1800135E0 @ 0x1800135E0 (sub_1800135E0.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18005B944 @ 0x18005B944 (sub_18005B944.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     sub_1800EC04C @ 0x1800EC04C (sub_1800EC04C.c)
 *     RtlZeroHeap @ 0x1800EEA80 (RtlZeroHeap.c)
 *     sub_1801019C4 @ 0x1801019C4 (sub_1801019C4.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18005CD40 @ 0x18005CD40 (sub_18005CD40.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_1800FE318 @ 0x1800FE318 (sub_1800FE318.c)
 */

char __fastcall sub_18005CA3C(PVOID BaseAddress, __int64 a2)
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
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+20h] BYREF
  PVOID BaseAddressa; // [rsp+60h] [rbp+30h] BYREF

  sub_18005CD40(BaseAddress, a2, &BaseAddressa, &RegionSize);
  Protect = sub_180011A6C(BaseAddress, (*((_DWORD *)BaseAddress + 28) & 0x40000) != 0 ? 64 : 4);
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
  if ( v5 >= 0 )
  {
    v6 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE0A4(BaseAddress, BaseAddressa, RegionSize, 8LL);
    *((_QWORD *)BaseAddress + 79) -= RegionSize;
    --*((_DWORD *)BaseAddress + 157);
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      v8 = 2147353472LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v6 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      sub_1800FE318(
        (int)BaseAddress,
        (int)BaseAddressa,
        RegionSize,
        16 * *((_QWORD *)BaseAddress + 24),
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
      sub_1800FE318(
        (int)BaseAddress,
        (int)BaseAddressa,
        RegionSize,
        16 * *((_QWORD *)BaseAddress + 24),
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
