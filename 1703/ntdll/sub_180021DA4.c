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

char __fastcall sub_180021DA4(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rcx
  char *v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // [rsp+60h] [rbp+30h] BYREF
  char *v28; // [rsp+68h] [rbp+38h] BYREF

  sub_18001EDB4(a1, a2, (unsigned __int64 *)&v28, &v27);
  v4 = sub_18001E548((_DWORD *)a1, 1);
  v7 = ZwAllocateVirtualMemory(-1LL, &v28, 0LL, &v27, 4096, v4);
  if ( v7 >= 0 )
  {
    v13 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, v5, v8, v9) )
      v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v14 = 2147353472LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FF834(a1, v28, v27, 8LL);
    *(_QWORD *)(a1 + 632) -= v27;
    --*(_DWORD *)(a1 + 628);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v10, v11, v12) )
      v18 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v18 = 2147353472LL;
    if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v18, v15, v16, v17) )
        v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      sub_1800FFAA8(a1, (_DWORD)v28, v27, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v13);
    }
    v22 = 2147353482LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v18, v15, v16, v17) )
      v23 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
    else
      v23 = 2147353482LL;
    if ( *(_BYTE *)v23 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v23, v19, v20, v21) )
        v22 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
      sub_1800FFAA8(a1, (_DWORD)v28, v27, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v22);
    }
    ++*(_DWORD *)(a1 + 592);
    if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
      goto LABEL_12;
    v25 = v28;
    v26 = v27 >> 2;
    if ( !(v27 >> 2) )
      goto LABEL_12;
    if ( ((unsigned __int8)v28 & 4) != 0 )
    {
      *(_DWORD *)v28 = -17891602;
      if ( !--v26 )
      {
LABEL_12:
        *(_BYTE *)(a2 + 10) &= 0x17u;
        return 1;
      }
      v25 += 4;
    }
    memset64(v25, 0xFEEEFEEEFEEEFEEEuLL, v26 >> 1);
    if ( (v26 & 1) != 0 )
      *(_DWORD *)&v25[4 * v26 - 4] = -17891602;
    goto LABEL_12;
  }
  ++*(_DWORD *)(a1 + 604);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v7, (const void *)a1, v28, v27);
  return 0;
}
