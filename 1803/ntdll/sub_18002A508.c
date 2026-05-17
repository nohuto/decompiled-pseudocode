/*
 * XREFs of sub_18002A508 @ 0x18002A508
 * Callers:
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 * Callees:
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     sub_1800135E0 @ 0x1800135E0 (sub_1800135E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002A7C8 @ 0x18002A7C8 (sub_18002A7C8.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_18005C4D8 @ 0x18005C4D8 (sub_18005C4D8.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     sub_1800EC04C @ 0x1800EC04C (sub_1800EC04C.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1800FC5C4 @ 0x1800FC5C4 (sub_1800FC5C4.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_1800FE318 @ 0x1800FE318 (sub_1800FE318.c)
 */

__int64 __fastcall sub_18002A508(unsigned __int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // edx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // r15d
  int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  int v19; // r9d
  char v20; // al
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // r8d
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+40h] [rbp-10h] BYREF
  __int64 v31; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v32; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v33; // [rsp+A8h] [rbp+58h] BYREF

  v33 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = sub_18002A7C8(a1, &v33);
  if ( v5 )
  {
    v33 >>= 4;
    v6 = sub_1800135E0(a1, v5, &v33, 0);
    sub_180012F50(a1, v6, v33);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v7 = *(_DWORD *)(v6 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v6 + 8) = v7;
      if ( HIBYTE(v7) != ((unsigned __int8)v7 ^ (unsigned __int8)(BYTE1(v7) ^ BYTE2(v7))) )
        sub_1800FC010(a1, v6);
    }
    return v6;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_36;
  v31 = 0LL;
  v9 = a2 + 0x2000;
  v10 = a2 + 0x2000;
  if ( a2 + 0x2000 <= *(_QWORD *)(a1 + 160) )
    v10 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)(a1 + 386) == 2 )
    v11 = *(_QWORD *)(a1 + 376);
  else
    v11 = 0LL;
  if ( !v11 && v10 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  v12 = (v10 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v12 >= 0xFD0000 )
    v12 = 16580608LL;
  v32 = v12;
  v13 = sub_18002AE30(a1, 1LL);
  v14 = ZwAllocateVirtualMemory(-1LL, &v31, 0LL, &v32, 0x2000, v13);
  if ( v14 < 0 )
  {
    while ( 1 )
    {
      v15 = v32;
      if ( v32 == v9 )
        break;
      v28 = v32 >> 1;
      if ( v32 >> 1 < v9 )
        v28 = a2 + 0x2000;
      v32 = v28;
      v14 = ZwAllocateVirtualMemory(-1LL, &v31, 0LL, &v32, 0x2000, v13);
      if ( v14 >= 0 )
      {
        v15 = v32;
        break;
      }
    }
    if ( v14 < 0 )
    {
      ++*(_DWORD *)(a1 + 600);
      goto LABEL_36;
    }
  }
  else
  {
    v15 = v32;
  }
  *(_QWORD *)(a1 + 160) += v15;
  v16 = a2 + 4096;
  if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
    v16 = *(_QWORD *)(a1 + 168);
  v30 = (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v18 = ZwAllocateVirtualMemory(-1LL, &v31, 0LL, &v30, 4096, v13);
  if ( v18 >= 0 )
  {
    v20 = sub_18005C4D8(a1, v31, 112, v19, 2, v31, v31 + v30, v31 + v32 - 4096);
    v17 = 3221225495LL;
    if ( !v20 )
      v18 = -1073741801;
    if ( v18 >= 0 )
    {
      v21 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v22 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v22 = 2147353472LL;
      if ( *(_BYTE *)v22 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        sub_1800FE0A4(a1, v31, v30, 4LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v21 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        sub_1800FE318(a1, *(_QWORD *)(v31 + 64), v30, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v21);
      }
      v23 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v24 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
      else
        v24 = 2147353482LL;
      if ( *(_BYTE *)v24 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v23 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
        sub_1800FE318(a1, *(_QWORD *)(v31 + 64), v30, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v23);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v25 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
      else
        v25 = 2147353480LL;
      if ( *(_BYTE *)v25 )
        sub_1800FC5C4(a1, v31, v32);
      v26 = *(_QWORD *)(v31 + 64);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v27 = *(_DWORD *)(v26 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v26 + 8) = v27;
        if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
          sub_1800FC010(a1, v26);
      }
      return *(_QWORD *)(v31 + 64);
    }
  }
  sub_18005CD8C(v17, &v31, &v32, 0x8000LL);
LABEL_36:
  if ( *(char *)(a1 + 112) < 0 )
  {
    v29 = sub_1800EC04C(a1);
    v4 = (_BYTE *)v29;
    if ( v29 )
    {
      if ( *(unsigned __int16 *)(v29 + 8) >= a2 )
        return v29;
    }
  }
  v6 = 0LL;
  if ( v4 && *(_DWORD *)(a1 + 124) )
  {
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  return v6;
}
