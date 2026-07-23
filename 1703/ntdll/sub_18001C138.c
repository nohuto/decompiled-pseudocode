/*
 * XREFs of sub_18001C138 @ 0x18001C138
 * Callers:
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 * Callees:
 *     sub_18001C3EC @ 0x18001C3EC (sub_18001C3EC.c)
 *     sub_18001C638 @ 0x18001C638 (sub_18001C638.c)
 *     sub_18001C6C4 @ 0x18001C6C4 (sub_18001C6C4.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_1800FDDA8 @ 0x1800FDDA8 (sub_1800FDDA8.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 *     sub_1800FFAA8 @ 0x1800FFAA8 (sub_1800FFAA8.c)
 */

unsigned __int64 __fastcall sub_18001C138(_QWORD *BaseAddress, PSIZE_T RegionSize)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int8 v7; // al
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rdx
  ULONG Protect; // eax
  NTSTATUS v11; // eax
  __int64 v12; // r15
  __int64 UserModeGlobalLogger; // rcx
  unsigned __int64 v14; // rax
  ULONG_PTR v15; // r9
  ULONG_PTR v16; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  PVOID BaseAddressa; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_QWORD *)sub_18001C638(BaseAddress, *RegionSize);
  v5 = v4;
  if ( v4 == BaseAddress + 30 )
    return 0LL;
  if ( dword_18015BFD8 >= 1 && v4[5] < *RegionSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    sub_1800FDDA8(1LL);
  }
  v6 = (unsigned __int64)(v5 - 2);
  v7 = *((_BYTE *)v5 - 2);
  if ( v7 )
    v8 = (_QWORD *)((v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000);
  else
    v8 = BaseAddress;
  BaseAddressa = (PVOID)v5[4];
  if ( qword_18015BFA8 != BaseAddress[45] )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD *, PVOID *, PSIZE_T))(qword_18015BFA8 ^ BaseAddress[45]))(
            BaseAddress,
            &BaseAddressa,
            RegionSize);
  }
  else
  {
    v9 = v5[5];
    if ( v9 - *RegionSize <= 16LL * BaseAddress[22] && v9 < 16 * (unsigned __int64)*((unsigned int *)BaseAddress + 37) )
      *RegionSize = v9;
    *RegionSize = (*RegionSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = sub_18001E548(BaseAddress);
    v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, RegionSize, 0x1000u, Protect);
    ++*((_DWORD *)BaseAddress + 148);
  }
  if ( v11 < 0 )
  {
    ++*((_DWORD *)BaseAddress + 150);
    return 0LL;
  }
  v12 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FF834(BaseAddress, BaseAddressa, *RegionSize, 2LL);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v6 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
      sub_1800FDA30(BaseAddress, v5 - 2);
  }
  *(_BYTE *)(v6 + 10) = 0;
  *(_BYTE *)(v6 + 15) = 0;
  sub_18001C6C4(BaseAddress, v5);
  --*((_DWORD *)v8 + 21);
  *((_DWORD *)v8 + 20) -= v5[5] >> 12;
  BaseAddress[68] += v5[5];
  ++*((_DWORD *)BaseAddress + 144);
  --*((_DWORD *)BaseAddress + 143);
  v14 = v5[5];
  if ( v14 >= 0xFF000 )
    BaseAddress[69] -= v14;
  v15 = v5[5];
  v16 = *RegionSize;
  if ( v15 > *RegionSize || v15 + v5[4] == v8[9] )
  {
    sub_18001C3EC(
      (_DWORD)BaseAddress,
      (_DWORD)v8,
      *((_DWORD *)v5 + 8) + v16 - 48,
      v15 - v16,
      (__int64)(v5 - 2),
      (__int64)RegionSize);
    *RegionSize *= 16LL;
  }
  else
  {
    *RegionSize = v16 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v17 = (_QWORD *)v8[5];
  if ( v17 == v8 )
  {
    LOBYTE(v18) = 0;
  }
  else
  {
    v18 = ((v6 - (unsigned __int64)v8) >> 16) + 1;
    if ( (v6 - (unsigned __int64)v8) >> 16 > 0xFC )
      sub_1800A4DFC(3, (_DWORD)v17, v6, (_DWORD)v8, 0LL, 0LL);
  }
  *(_BYTE *)(v6 + 14) = v18;
  if ( RtlGetCurrentServiceSessionId() )
    v19 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v19 = 2147353472LL;
  if ( *(_BYTE *)v19 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    sub_1800FFAA8((int)BaseAddress, v6, *RegionSize, 16 * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v12);
  }
  v20 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v21 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
  else
    v21 = 2147353482LL;
  if ( *(_BYTE *)v21 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v20 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
    sub_1800FFAA8((int)BaseAddress, v6, *RegionSize, 16 * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v20);
  }
  return v6;
}
