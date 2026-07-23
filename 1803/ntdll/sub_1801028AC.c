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
  unsigned __int64 v21; // rbx
  int v22; // ecx
  int v23; // ecx
  ULONG *OldProtect; // rax
  __int64 v25; // rcx
  ULONG_PTR *p_RegionSize; // r8
  PVOID *p_BaseAddress; // rdx
  signed __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rcx
  __int64 UserModeGlobalLogger; // rcx
  signed __int32 v32; // [rsp+30h] [rbp-40h]
  signed __int64 v33; // [rsp+30h] [rbp-40h]
  ULONG v34; // [rsp+38h] [rbp-38h] BYREF
  char v35; // [rsp+3Ch] [rbp-34h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-30h]
  __int64 v37; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-10h] BYREF
  int v41; // [rsp+B8h] [rbp+48h]
  unsigned int v42; // [rsp+B8h] [rbp+48h]

  if ( (a4 & 3) == 0 )
    return 0LL;
  v11 = *(_DWORD *)(a2 + 32);
  v12 = *(unsigned __int8 *)(a2 + 43);
  v32 = v11;
  v13 = *(unsigned __int8 *)(a7 + 2);
  if ( (_DWORD)v12 )
    v14 = *(_QWORD *)(a1 + 8 * v13 + 2224) - 192LL + 192 * v12;
  else
    v14 = *(_QWORD *)(a1 + 8 * v13 + 1192);
  *(_QWORD *)a3 = a2;
  v15 = (a3 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  v36 = ((a5 + 4119) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v16 = (((a3 + a6) & 0xFFFFFFFFFFFFF000uLL) - v15) / v36;
  HIWORD(v41) = ((a5 + 4119) & 0xF000) + 4096;
  *(_WORD *)(a2 + 36) = (unsigned __int64)(a5 + 16) >> 4;
  *(_WORD *)(a2 + 40) = v16;
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a7 + 2);
  *(_WORD *)(a2 + 38) = a4;
  v17 = sub_1801026A4(a2, v15);
  v18 = (unsigned __int16)(v17 - a3);
  LOWORD(v41) = v17 - a3;
  *(_DWORD *)(a3 + 24) = v41 ^ qword_18015D458 ^ a3 ^ a1;
  *(_QWORD *)(a3 + 32) = (unsigned int)v16;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  sub_180104494();
  v19 = 0;
  v20 = a3 + v18;
  v42 = 0;
  if ( !(_DWORD)v16 )
    goto LABEL_15;
  v21 = v36;
  do
  {
    v22 = *(_DWORD *)(a1 + 24) ^ (v20 >> 4) ^ (((_DWORD)v20 - (_DWORD)a3) << 12);
    *(_DWORD *)(v20 + 12) &= 0xFF0000FF;
    v23 = qword_18015D458 ^ v22;
    *(_DWORD *)(v20 + 12) |= (unsigned __int16)v19 << 8;
    *(_DWORD *)(v20 + 8) = v23;
    *(_BYTE *)(v20 + 15) = 0x80;
    if ( (*(_BYTE *)(a2 + 38) & 1) != 0 )
    {
      OldProtect = &v34;
      v25 = *(unsigned __int16 *)(a2 + 36) + 1LL;
      v37 = 4096LL;
      p_RegionSize = (ULONG_PTR *)&v37;
      p_BaseAddress = (PVOID *)&v38;
      v38 = v20 + 16 * v25;
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 38) & 2) == 0 )
        goto LABEL_13;
      RegionSize = 4096LL;
      BaseAddress = (PVOID)(v20 - 4096);
      p_RegionSize = &RegionSize;
      OldProtect = (ULONG *)&v35;
      p_BaseAddress = &BaseAddress;
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, p_BaseAddress, p_RegionSize, 1u, OldProtect);
    v19 = v42;
LABEL_13:
    ++v19;
    v20 += v21;
    v42 = v19;
  }
  while ( v19 < (unsigned int)v16 );
  v11 = v32;
LABEL_15:
  *(_QWORD *)(a2 + 8) = a3;
  RtlInitializeSListHead_0((PSLIST_HEADER)(a2 + 16));
  do
  {
    v28 = *(_QWORD *)(v14 + 160);
    if ( (int)v16 <= 0 )
      v29 = HIDWORD(v28) - 1;
    else
      v29 = HIDWORD(v28) + 1;
    HIDWORD(v33) = v29;
    LODWORD(v33) = v28 + v16;
  }
  while ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 160), v33, v28) );
  v30 = *(_QWORD *)v14;
  *(_DWORD *)(v14 + 168) = ++*(_DWORD *)(v30 + 32);
  *(_DWORD *)(a2 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), (unsigned __int16)v16, v11);
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger )
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
