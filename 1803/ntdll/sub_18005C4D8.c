/*
 * XREFs of sub_18005C4D8 @ 0x18005C4D8
 * Callers:
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 * Callees:
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     sub_18002AA88 @ 0x18002AA88 (sub_18002AA88.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 */

char __fastcall sub_18005C4D8(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddress,
        unsigned __int64 a8)
{
  unsigned __int64 v9; // r14
  __int64 v11; // r13
  char *v12; // r8
  unsigned __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // r15
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r8
  unsigned __int64 *v21; // rbx
  __int64 *v22; // rax
  ULONG Protect; // eax
  __int64 UserModeGlobalLogger; // rcx
  __int16 v26; // ax
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG NtGlobalFlag; // [rsp+88h] [rbp+48h]

  v9 = a8;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v11 = a3 + 15;
  v12 = BaseAddress;
  v11 &= 0xFFFFFFFFFFFFFFF0uLL;
  a8 = (__int64)(a8 - a6) / 4096;
  v13 = a2 + v11;
  v14 = v11 >> 4;
  if ( v13 + 80 >= (unsigned __int64)BaseAddress )
  {
    if ( v13 + 80 < v9 )
    {
      RegionSize[0] = (v13 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
      Protect = sub_18002AE30((_DWORD *)a1, 1);
      if ( ZwAllocateVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID *)&BaseAddress,
             0LL,
             RegionSize,
             0x1000u,
             Protect) >= 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          UserModeGlobalLogger = 2147353472LL;
        if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FE0A4(a1, BaseAddress, RegionSize[0], 3LL);
        v12 = &BaseAddress[RegionSize[0]];
        BaseAddress += RegionSize[0];
        goto LABEL_3;
      }
      ++*(_DWORD *)(a1 + 600);
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 8) = v14;
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v15 = (__int64)(v9 - (_QWORD)v12) / 4096;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v26 = sub_1800244C4(1u);
    v12 = BaseAddress;
    *(_WORD *)(a2 + 88) = v26;
  }
  v16 = a8;
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  v17 = (unsigned int)(v16 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v17;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v13;
  *(_DWORD *)(a2 + 56) = v16;
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a1 + 544) += v17;
  *(_QWORD *)(a1 + 536) += v17;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v13 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v18 = *(_QWORD *)(a2 + 40);
  if ( v18 == a2 )
  {
    LOBYTE(v19) = 0;
  }
  else
  {
    v19 = ((v13 - a2) >> 16) + 1;
    if ( v19 >= 0xFE )
    {
      sub_18009A5F0(3, v18, v13, a2, 0LL, 0LL);
      v12 = BaseAddress;
    }
  }
  *(_BYTE *)(v13 + 14) = v19;
  sub_18002AA88(a1, a2, (__int64)(v12 - 48), (unsigned int)((_DWORD)v15 << 12), v13, (__int64 *)RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize[0] )
    sub_180012F50(a1, v13, RegionSize[0]);
  v20 = a1 + 288;
  v21 = (unsigned __int64 *)(a2 + 24);
  v22 = *(__int64 **)(a1 + 296);
  if ( *v22 == a1 + 288 )
  {
    *v21 = v20;
    v21[1] = (unsigned __int64)v22;
    *v22 = (__int64)v21;
    *(_QWORD *)(a1 + 296) = v21;
  }
  else
  {
    sub_18009A5F0(13, 0, v20, 0, *v22, 0LL);
  }
  ++*(_DWORD *)(a1 + 568);
  return 1;
}
