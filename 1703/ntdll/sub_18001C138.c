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

__int64 __fastcall sub_18001C138(unsigned __int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v35; // [rsp+50h] [rbp+8h] BYREF

  v4 = sub_18001C638(a1, *a2);
  v5 = v4;
  if ( v4 == a1 + 240 )
    return 0LL;
  if ( dword_18015BFD8 >= 1 && *(_QWORD *)(v4 + 40) < *a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    sub_1800FDDA8(1LL);
  }
  v6 = v5 - 16;
  v7 = *(_BYTE *)(v5 - 16 + 14);
  if ( v7 )
    v8 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
  else
    v8 = a1;
  v35 = *(_QWORD *)(v5 + 32);
  if ( qword_18015BFA8 != *(_QWORD *)(a1 + 360) )
  {
    v11 = ((__int64 (__fastcall *)(unsigned __int64, __int64 *, unsigned __int64 *))(qword_18015BFA8 ^ *(_QWORD *)(a1 + 360)))(
            a1,
            &v35,
            a2);
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 40);
    if ( v9 - *a2 <= 16LL * *(_QWORD *)(a1 + 176) && v9 < 16 * (unsigned __int64)*(unsigned int *)(a1 + 148) )
      *a2 = v9;
    *a2 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v10 = sub_18001E548(a1, 1LL);
    v11 = ZwAllocateVirtualMemory(-1LL, &v35, 0LL, a2, 4096, v10);
    ++*(_DWORD *)(a1 + 592);
  }
  if ( v11 < 0 )
  {
    ++*(_DWORD *)(a1 + 600);
    return 0LL;
  }
  v16 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v12, v14, v15) )
    v17 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v17 = 2147353472LL;
  if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FF834(a1, v35, *a2, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
      sub_1800FDA30(a1, v5 - 16);
  }
  *(_BYTE *)(v6 + 10) = 0;
  *(_BYTE *)(v6 + 15) = 0;
  sub_18001C6C4(a1, v5);
  --*(_DWORD *)(v8 + 84);
  *(_DWORD *)(v8 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  *(_QWORD *)(a1 + 544) += *(_QWORD *)(v5 + 40);
  ++*(_DWORD *)(a1 + 576);
  --*(_DWORD *)(a1 + 572);
  v19 = *(_QWORD *)(v5 + 40);
  if ( v19 >= 0xFF000 )
    *(_QWORD *)(a1 + 552) -= v19;
  v20 = *(_QWORD *)(v5 + 40);
  v21 = *a2;
  if ( v20 > *a2 || (v22 = v20 + *(_QWORD *)(v5 + 32), v22 == *(_QWORD *)(v8 + 72)) )
  {
    sub_18001C3EC(a1, v8, *(_DWORD *)(v5 + 32) + v21 - 48, v20 - v21, v5 - 16, (__int64)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v21 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v23 = *(_QWORD *)(v8 + 40);
  if ( v23 == v8 )
  {
    LOBYTE(v24) = 0;
  }
  else
  {
    v24 = ((v6 - v8) >> 16) + 1;
    if ( (v6 - v8) >> 16 > 0xFC )
      sub_1800A4DFC(3, v23, v6, v8, 0LL, 0LL);
  }
  *(_BYTE *)(v6 + 14) = v24;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v22, v23, v18, v20) )
    v28 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v28 = 2147353472LL;
  if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v28, v25, v26, v27) )
      v16 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    sub_1800FFAA8(a1, v6, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v16);
  }
  v32 = 2147353482LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v28, v25, v26, v27) )
    v33 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
  else
    v33 = 2147353482LL;
  if ( *(_BYTE *)v33 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v33, v29, v30, v31) )
      v32 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
    sub_1800FFAA8(a1, v6, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v32);
  }
  return v6;
}
