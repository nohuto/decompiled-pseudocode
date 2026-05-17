/*
 * XREFs of sub_1801028AC @ 0x1801028AC
 * Callers:
 *     sub_18001E820 @ 0x18001E820 (sub_18001E820.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlInitializeSListHead_0 @ 0x180073A34 (RtlInitializeSListHead_0.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     sub_1800FE934 @ 0x1800FE934 (sub_1800FE934.c)
 *     sub_1801026A4 @ 0x1801026A4 (sub_1801026A4.c)
 *     sub_180104494 @ 0x180104494 (sub_180104494.c)
 */

__int64 __fastcall sub_1801028AC(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int64 a5, __int64 a6, __int64 a7)
{
  signed __int32 v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  __int16 v17; // ax
  __int64 v18; // rsi
  unsigned int v19; // edx
  unsigned __int64 v20; // rsi
  int v21; // ecx
  int v22; // ecx
  signed __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  signed __int64 v27; // [rsp+30h] [rbp-40h]
  unsigned __int64 v28; // [rsp+40h] [rbp-30h]
  int v29; // [rsp+B8h] [rbp+48h]
  unsigned int i; // [rsp+B8h] [rbp+48h]

  if ( (a4 & 3) == 0 )
    return 0LL;
  v11 = *(_DWORD *)(a2 + 32);
  v12 = *(unsigned __int8 *)(a2 + 43);
  v13 = *(unsigned __int8 *)(a7 + 2);
  if ( (_DWORD)v12 )
    v14 = *(_QWORD *)(a1 + 8 * v13 + 2224) - 192LL + 192 * v12;
  else
    v14 = *(_QWORD *)(a1 + 8 * v13 + 1192);
  *(_QWORD *)a3 = a2;
  v15 = (a3 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  v28 = ((a5 + 4119) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v16 = (((a3 + a6) & 0xFFFFFFFFFFFFF000uLL) - v15) / v28;
  HIWORD(v29) = ((a5 + 4119) & 0xF000) + 4096;
  *(_WORD *)(a2 + 36) = (unsigned __int64)(a5 + 16) >> 4;
  *(_WORD *)(a2 + 40) = v16;
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a7 + 2);
  *(_WORD *)(a2 + 38) = a4;
  v17 = sub_1801026A4(a2, v15);
  v18 = (unsigned __int16)(v17 - a3);
  LOWORD(v29) = v17 - a3;
  *(_DWORD *)(a3 + 24) = v29 ^ qword_18015D458 ^ a3 ^ a1;
  *(_QWORD *)(a3 + 32) = (unsigned int)v16;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  sub_180104494();
  v19 = 0;
  v20 = a3 + v18;
  for ( i = 0; v19 < (unsigned int)v16; i = v19 )
  {
    v21 = *(_DWORD *)(a1 + 24) ^ (v20 >> 4) ^ (((_DWORD)v20 - (_DWORD)a3) << 12);
    *(_DWORD *)(v20 + 12) &= 0xFF0000FF;
    v22 = qword_18015D458 ^ v21;
    *(_DWORD *)(v20 + 12) |= (unsigned __int16)v19 << 8;
    *(_DWORD *)(v20 + 8) = v22;
    *(_BYTE *)(v20 + 15) = 0x80;
    if ( (*(_BYTE *)(a2 + 38) & 1) != 0 || (*(_BYTE *)(a2 + 38) & 2) != 0 )
    {
      ZwProtectVirtualMemory();
      v19 = i;
    }
    ++v19;
    v20 += v28;
  }
  *(_QWORD *)(a2 + 8) = a3;
  RtlInitializeSListHead_0((PSLIST_HEADER)(a2 + 16));
  do
  {
    v23 = *(_QWORD *)(v14 + 160);
    if ( (int)v16 <= 0 )
      v24 = HIDWORD(v23) - 1;
    else
      v24 = HIDWORD(v23) + 1;
    HIDWORD(v27) = v24;
    LODWORD(v27) = v23 + v16;
  }
  while ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 160), v27, v23) );
  v25 = *(_QWORD *)v14;
  *(_DWORD *)(v14 + 168) = ++*(_DWORD *)(v25 + 32);
  *(_DWORD *)(a2 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), (unsigned __int16)v16, v11);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v26 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v26 = 2147353472LL;
  if ( *(_BYTE *)v26 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE934(
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a2 + 36),
        *(unsigned __int16 *)(a2 + 40),
        *(unsigned __int8 *)(a2 + 43));
  }
  return 1LL;
}
