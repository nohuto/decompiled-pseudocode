/*
 * XREFs of sub_18000EA74 @ 0x18000EA74
 * Callers:
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 * Callees:
 *     sub_18000F3C8 @ 0x18000F3C8 (sub_18000F3C8.c)
 *     sub_18001C3EC @ 0x18001C3EC (sub_18001C3EC.c)
 *     sub_18001D350 @ 0x18001D350 (sub_18001D350.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 */

char __fastcall sub_18000EA74(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  unsigned __int64 v9; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // r8
  __int64 v13; // r14
  __int64 v14; // r12
  signed __int64 v15; // rsi
  __int64 v16; // r15
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r8
  _QWORD *v22; // rbx
  __int64 *v23; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int16 v31; // ax
  _QWORD v32[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int NtGlobalFlag; // [rsp+88h] [rbp+48h]

  v9 = a8;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v11 = a3 + 15;
  v12 = a7;
  v11 &= 0xFFFFFFFFFFFFFFF0uLL;
  a8 = (__int64)(a8 - a6) / 4096;
  v13 = v11 + a2;
  v14 = v11 >> 4;
  if ( v13 + 80 >= a7 )
  {
    if ( v13 + 80 < v9 )
    {
      v32[0] = (v13 - a7 + 4111) & 0xFFFFFFFFFFFFF000uLL;
      v25 = sub_18001E548(a1, 1LL);
      if ( (int)ZwAllocateVirtualMemory(-1LL, &a7, 0LL, v32, 4096, v25) >= 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v27, v26, v28, v29) )
          v30 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v30 = 2147353472LL;
        if ( *(_BYTE *)v30 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FF834(a1, a7, v32[0], 3LL);
        v12 = v32[0] + a7;
        a7 += v32[0];
        goto LABEL_3;
      }
      ++*(_DWORD *)(a1 + 600);
    }
    return 0;
  }
LABEL_3:
  v15 = v9 - v12;
  *(_WORD *)(a2 + 8) = v14;
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v16 = v15 / 4096;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v31 = sub_18000F3C8(1LL, v15 % 4096);
    LODWORD(v12) = a7;
    *(_WORD *)(a2 + 88) = v31;
  }
  v17 = a8;
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  *(_DWORD *)(a2 + 56) = v17;
  v18 = (unsigned int)(v17 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v18;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v13;
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a1 + 544) += v18;
  *(_QWORD *)(a1 + 536) += v18;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v13 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v19 = *(_QWORD *)(a2 + 40);
  if ( v19 == a2 )
  {
    LOBYTE(v20) = 0;
  }
  else
  {
    v20 = ((unsigned __int64)(v13 - a2) >> 16) + 1;
    if ( (unsigned __int64)(v13 - a2) >> 16 > 0xFC )
    {
      sub_1800A4DFC(3, v19, v13, a2, 0LL, 0LL);
      LODWORD(v12) = a7;
    }
  }
  *(_BYTE *)(v13 + 14) = v20;
  sub_18001C3EC(a1, a2, v12 - 48, (_DWORD)v16 << 12, v13, (__int64)v32);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v32[0] )
    sub_18001D350(a1, v13, v32[0]);
  v21 = a1 + 288;
  v22 = (_QWORD *)(a2 + 24);
  v23 = *(__int64 **)(a1 + 296);
  if ( *v23 == a1 + 288 )
  {
    *v22 = v21;
    v22[1] = v23;
    *v23 = (__int64)v22;
    *(_QWORD *)(a1 + 296) = v22;
  }
  else
  {
    sub_1800A4DFC(12, 0, v21, 0, *v23, 0LL);
  }
  ++*(_DWORD *)(a1 + 568);
  return 1;
}
