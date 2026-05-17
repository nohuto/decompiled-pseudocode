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

char __fastcall sub_18005CA3C(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  char *v15; // [rsp+60h] [rbp+30h] BYREF

  sub_18005CD40(a1, a2, &v15, &v14);
  v4 = sub_180011A6C(a1, (*(_DWORD *)(a1 + 112) & 0x40000) != 0 ? 64 : 4);
  v5 = ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v14, 4096, v4);
  if ( v5 >= 0 )
  {
    v6 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v7 = 2147353472LL;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE0A4(a1, v15, v14, 8LL);
    *(_QWORD *)(a1 + 632) -= v14;
    --*(_DWORD *)(a1 + 628);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v8 = 2147353472LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      sub_1800FE318(a1, (_DWORD)v15, v14, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v6);
    }
    v9 = 2147353482LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
    else
      v10 = 2147353482LL;
    if ( *(_BYTE *)v10 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
      sub_1800FE318(a1, (_DWORD)v15, v14, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v9);
    }
    ++*(_DWORD *)(a1 + 592);
    if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
      goto LABEL_12;
    v12 = v15;
    v13 = v14 >> 2;
    if ( !(v14 >> 2) )
      goto LABEL_12;
    if ( ((unsigned __int8)v15 & 4) != 0 )
    {
      *(_DWORD *)v15 = -17891602;
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
  ++*(_DWORD *)(a1 + 604);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v5, (const void *)a1, v15, v14);
  return 0;
}
