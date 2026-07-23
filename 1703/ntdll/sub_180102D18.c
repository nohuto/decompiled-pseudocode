/*
 * XREFs of sub_180102D18 @ 0x180102D18
 * Callers:
 *     sub_18002F120 @ 0x18002F120 (sub_18002F120.c)
 * Callees:
 *     sub_18000EECC @ 0x18000EECC (sub_18000EECC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlInitializeSListHead @ 0x1800779F0 (RtlInitializeSListHead.c)
 *     sub_18008AD20 @ 0x18008AD20 (sub_18008AD20.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     sub_1800FFFA8 @ 0x1800FFFA8 (sub_1800FFFA8.c)
 */

__int64 __fastcall sub_180102D18(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int64 a5, __int64 a6, __int64 a7)
{
  signed __int32 v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  unsigned int v16; // edx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  int v19; // ecx
  int v20; // ecx
  ULONG *OldProtect; // rax
  __int64 v22; // rcx
  ULONG_PTR *p_RegionSize; // r8
  PVOID *p_BaseAddress; // rdx
  signed __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rcx
  __int64 UserModeGlobalLogger; // rcx
  signed __int32 v29; // [rsp+30h] [rbp-40h]
  signed __int64 v30; // [rsp+30h] [rbp-40h]
  ULONG v31; // [rsp+38h] [rbp-38h] BYREF
  char v32; // [rsp+3Ch] [rbp-34h] BYREF
  unsigned __int64 v33; // [rsp+40h] [rbp-30h]
  __int64 v34; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-10h] BYREF
  int v38; // [rsp+B8h] [rbp+48h]
  unsigned int v39; // [rsp+B8h] [rbp+48h]

  if ( (a4 & 3) == 0 )
    return 0LL;
  v11 = *(_DWORD *)(a2 + 32);
  v29 = v11;
  v12 = *(unsigned __int8 *)(a7 + 2);
  if ( *(_BYTE *)(a2 + 43) )
    v13 = *(_QWORD *)(a1 + 8 * v12 + 2224) - 192LL + 192LL * *(unsigned __int8 *)(a2 + 43);
  else
    v13 = *(_QWORD *)(a1 + 8 * v12 + 1192);
  *(_QWORD *)a3 = a2;
  v14 = (a3 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  v33 = ((a5 + 4119) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v15 = (((a3 + a6) & 0xFFFFFFFFFFFFF000uLL) - v14) / v33;
  HIWORD(v38) = ((a5 + 4119) & 0xF000) + 4096;
  *(_WORD *)(a2 + 36) = (unsigned __int64)(a5 + 16) >> 4;
  *(_WORD *)(a2 + 40) = v15;
  *(_QWORD *)a2 = v13;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a7 + 2);
  *(_WORD *)(a2 + 38) = a4;
  LOWORD(v38) = sub_18008AD20(a2, v14) - a3;
  *(_DWORD *)(a3 + 24) = v38 ^ a1 ^ qword_18015BFE8 ^ a3;
  *(_QWORD *)(a3 + 32) = (unsigned int)v15;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  sub_18000EECC((unsigned __int64 *)(a3 + 32));
  v16 = 0;
  v17 = a3 + (unsigned __int16)v38;
  v39 = 0;
  if ( !(_DWORD)v15 )
    goto LABEL_15;
  v18 = v33;
  do
  {
    v19 = *(_DWORD *)(a1 + 24) ^ (v17 >> 4) ^ (((_DWORD)v17 - (_DWORD)a3) << 12);
    *(_DWORD *)(v17 + 12) &= 0xFF0000FF;
    v20 = qword_18015BFE8 ^ v19;
    *(_DWORD *)(v17 + 12) |= (unsigned __int16)v16 << 8;
    *(_DWORD *)(v17 + 8) = v20;
    *(_BYTE *)(v17 + 15) = 0x80;
    if ( (*(_BYTE *)(a2 + 38) & 1) != 0 )
    {
      OldProtect = &v31;
      v22 = *(unsigned __int16 *)(a2 + 36) + 1LL;
      v34 = 4096LL;
      p_RegionSize = (ULONG_PTR *)&v34;
      p_BaseAddress = (PVOID *)&v35;
      v35 = v17 + 16 * v22;
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 38) & 2) == 0 )
        goto LABEL_13;
      RegionSize = 4096LL;
      BaseAddress = (PVOID)(v17 - 4096);
      p_RegionSize = &RegionSize;
      OldProtect = (ULONG *)&v32;
      p_BaseAddress = &BaseAddress;
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, p_BaseAddress, p_RegionSize, 1u, OldProtect);
    v16 = v39;
LABEL_13:
    ++v16;
    v17 += v18;
    v39 = v16;
  }
  while ( v16 < (unsigned int)v15 );
  v11 = v29;
LABEL_15:
  *(_QWORD *)(a2 + 8) = a3;
  RtlInitializeSListHead((PSLIST_HEADER)(a2 + 16));
  do
  {
    v25 = *(_QWORD *)(v13 + 160);
    if ( (int)v15 <= 0 )
      v26 = HIDWORD(v25) - 1;
    else
      v26 = HIDWORD(v25) + 1;
    HIDWORD(v30) = v26;
    LODWORD(v30) = v25 + v15;
  }
  while ( v25 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 160), v30, v25) );
  v27 = *(_QWORD *)v13;
  *(_DWORD *)(v13 + 168) = ++*(_DWORD *)(v27 + 32);
  *(_DWORD *)(a2 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), (unsigned __int16)v15, v11);
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FFFA8(
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a2 + 36),
        *(unsigned __int16 *)(a2 + 40),
        *(unsigned __int8 *)(a2 + 43));
  }
  return 1LL;
}
