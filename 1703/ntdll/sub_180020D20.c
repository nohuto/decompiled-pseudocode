/*
 * XREFs of sub_180020D20 @ 0x180020D20
 * Callers:
 *     sub_180007334 @ 0x180007334 (sub_180007334.c)
 *     sub_180009E2C @ 0x180009E2C (sub_180009E2C.c)
 *     sub_18001FA18 @ 0x18001FA18 (sub_18001FA18.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_180020EF0 @ 0x180020EF0 (sub_180020EF0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 */

__int64 __fastcall sub_180020D20(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // edi
  unsigned int v16; // esi
  bool v17; // zf
  int v18; // r14d
  __int64 result; // rax
  char *v20; // rdx
  unsigned __int64 v21; // rcx
  char v22; // al
  char v23; // al
  _DWORD *HotpatchInformation; // rcx
  __int64 v25; // rcx
  __int64 v26[4]; // [rsp+30h] [rbp-58h] BYREF
  int v27; // [rsp+54h] [rbp-34h]
  __int64 v28; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp+10h] BYREF
  int v30; // [rsp+A0h] [rbp+18h]

  v4 = a2 & 0xFFFFFFFFFFF00000uLL;
  v7 = sub_180020EF0(a1, a2);
  v8 = a3;
  v9 = 0LL;
  v10 = v7;
  v11 = (unsigned int)((a2 - v4) >> 12);
  v12 = 0LL;
  v13 = v4 + 32 * v11;
  v14 = v13 + 32 * (v8 >> 12);
  v15 = 0;
  if ( v13 == v14 )
    return 0LL;
  do
  {
    if ( (*(_BYTE *)(v13 + 24) & 2) == 0 )
    {
      v9 = v13;
      if ( !v12 )
        v12 = v13;
      ++v15;
    }
    v13 += 32LL;
  }
  while ( v13 != v14 );
  v16 = v12 ? ((__int64)(v9 - v12) >> 5) + 1 : v30;
  if ( !v15 )
    return 0LL;
  v29 = (v12 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v12 - (v12 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  v17 = *(_DWORD *)(a1 + 16) == -571548178;
  v28 = v16 << 12;
  if ( v17 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0x40000000) == 0 )
      goto LABEL_12;
  }
  else if ( (*(_DWORD *)(a1 + 112) & 0x40000) == 0 )
  {
    goto LABEL_12;
  }
  v18 = 64;
  if ( (int)ZwQueryVirtualMemory(-1LL, a1, 0LL, v26, 48LL, 0LL) >= 0 && (v27 & 0x60) != 0 && v26[0] == a1 )
    goto LABEL_13;
  sub_1800A4DFC(0, a1, 1, v27, 0LL, 0LL);
LABEL_12:
  v18 = 4;
LABEL_13:
  result = ZwAllocateVirtualMemory(-1LL, &v29, 0LL, &v28, 4096, v18);
  if ( (int)result < 0 )
    return result;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), v15);
  if ( v12 < v12 + 32LL * v16 )
  {
    v20 = (char *)(v12 + 24);
    v21 = ((32 * (unsigned __int64)v16 - 1) >> 5) + 1;
    do
    {
      v22 = *v20;
      if ( v15 <= 0 )
        v23 = v22 & 0xFD;
      else
        v23 = v22 | 2;
      *v20 = v23;
      v20 += 32;
      --v21;
    }
    while ( v21 );
  }
  *(_BYTE *)(v10 + 26) = ~(v15 + ~*(_BYTE *)(v10 + 26));
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v25 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v25 = 2147353472LL;
  if ( *(_BYTE *)v25 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FF834(a1, v29, v28, 10LL);
  }
  return 0LL;
}
