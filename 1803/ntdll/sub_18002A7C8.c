/*
 * XREFs of sub_18002A7C8 @ 0x18002A7C8
 * Callers:
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002AA88 @ 0x18002AA88 (sub_18002AA88.c)
 *     sub_18002ACD0 @ 0x18002ACD0 (sub_18002ACD0.c)
 *     sub_18002AD5C @ 0x18002AD5C (sub_18002AD5C.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1800FC3E4 @ 0x1800FC3E4 (sub_1800FC3E4.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_1800FE318 @ 0x1800FE318 (sub_1800FE318.c)
 */

__int64 __fastcall sub_18002A7C8(unsigned __int64 a1, PSIZE_T RegionSize)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  ULONG Protect; // eax
  NTSTATUS v12; // eax
  __int64 v13; // r15
  __int64 UserModeGlobalLogger; // rcx
  int v15; // edx
  ULONG_PTR v16; // r9
  ULONG_PTR v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rcx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  v4 = sub_18002ACD0(a1, *RegionSize);
  v5 = v4;
  if ( v4 == a1 + 240 )
    return 0LL;
  if ( dword_18015D450 >= 1 && *(_QWORD *)(v4 + 40) < *RegionSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    sub_1800FC3E4(1LL);
  }
  v6 = v5 - 16;
  v7 = *(_BYTE *)(v5 - 16 + 14);
  if ( v7 )
    v8 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
  else
    v8 = a1;
  BaseAddress = *(PVOID *)(v5 + 32);
  if ( qword_18015D758 != *(_QWORD *)(a1 + 360) )
  {
    v12 = ((__int64 (__fastcall *)(unsigned __int64, PVOID *, PSIZE_T))(qword_18015D758 ^ *(_QWORD *)(a1 + 360)))(
            a1,
            &BaseAddress,
            RegionSize);
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 40);
    v10 = *RegionSize;
    if ( v9 - *RegionSize <= 16LL * *(_QWORD *)(a1 + 176) && v9 < 16 * (unsigned __int64)*(unsigned int *)(a1 + 148) )
    {
      *RegionSize = v9;
      v10 = v9;
    }
    *RegionSize = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = sub_18002AE30(a1, 1LL);
    v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, Protect);
    ++*(_DWORD *)(a1 + 592);
  }
  if ( v12 < 0 )
  {
    ++*(_DWORD *)(a1 + 600);
    return 0LL;
  }
  v13 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FE0A4(a1, BaseAddress, *RegionSize, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v15 = *(_DWORD *)(v6 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v6 + 8) = v15;
    if ( HIBYTE(v15) != ((unsigned __int8)v15 ^ (unsigned __int8)(BYTE1(v15) ^ BYTE2(v15))) )
      sub_1800FC010(a1, v5 - 16);
  }
  *(_BYTE *)(v6 + 10) = 0;
  *(_BYTE *)(v6 + 15) = 0;
  sub_18002AD5C(a1, v5);
  --*(_DWORD *)(v8 + 84);
  *(_DWORD *)(v8 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  *(_QWORD *)(a1 + 544) += *(_QWORD *)(v5 + 40);
  ++*(_DWORD *)(a1 + 576);
  --*(_DWORD *)(a1 + 572);
  v16 = *(_QWORD *)(v5 + 40);
  if ( v16 >= 0xFF000 )
  {
    *(_QWORD *)(a1 + 552) -= v16;
    v16 = *(_QWORD *)(v5 + 40);
  }
  v17 = *RegionSize;
  if ( v16 > *RegionSize || v16 + *(_QWORD *)(v5 + 32) == *(_QWORD *)(v8 + 72) )
  {
    sub_18002AA88(a1, v8, *(_DWORD *)(v5 + 32) + v17 - 48, v16 - v17, v5 - 16, (__int64)RegionSize);
    *RegionSize *= 16LL;
  }
  else
  {
    *RegionSize = v17 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v18 = *(_QWORD *)(v8 + 40);
  if ( v18 == v8 )
  {
    LOBYTE(v19) = 0;
  }
  else
  {
    v19 = ((v6 - v8) >> 16) + 1;
    if ( v19 >= 0xFE )
      sub_18009A5F0(3, v18, v6, v8, 0LL, 0LL);
  }
  *(_BYTE *)(v6 + 14) = v19;
  if ( RtlGetCurrentServiceSessionId() )
    v20 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v20 = 2147353472LL;
  if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    sub_1800FE318(a1, v6, *RegionSize, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v13);
  }
  v21 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v22 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
  else
    v22 = 2147353482LL;
  if ( *(_BYTE *)v22 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v21 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
    sub_1800FE318(a1, v6, *RegionSize, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v21);
  }
  return v6;
}
