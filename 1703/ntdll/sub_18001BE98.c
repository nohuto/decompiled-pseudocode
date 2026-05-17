/*
 * XREFs of sub_18001BE98 @ 0x18001BE98
 * Callers:
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 * Callees:
 *     sub_18000EA74 @ 0x18000EA74 (sub_18000EA74.c)
 *     sub_18001C138 @ 0x18001C138 (sub_18001C138.c)
 *     sub_18001D350 @ 0x18001D350 (sub_18001D350.c)
 *     sub_18001D964 @ 0x18001D964 (sub_18001D964.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800EFFE8 @ 0x1800EFFE8 (sub_1800EFFE8.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_1800FDF88 @ 0x1800FDF88 (sub_1800FDF88.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 *     sub_1800FFAA8 @ 0x1800FFAA8 (sub_1800FFAA8.c)
 */

__int64 __fastcall sub_18001BE98(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // r15d
  int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // r9
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned __int64 v41; // [rsp+40h] [rbp-10h] BYREF
  __int64 v42; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v43; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v44; // [rsp+A8h] [rbp+58h] BYREF

  v44 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = sub_18001C138(a1, &v44);
  if ( v5 )
  {
    v44 >>= 4;
    v6 = sub_18001D964(a1, v5, &v44, 0LL);
    sub_18001D350(a1, v6, v44);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
        sub_1800FDA30(a1, v6);
    }
    return v6;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_36;
  v42 = 0LL;
  v8 = a2 + 0x2000;
  v9 = *(_QWORD *)(a1 + 160);
  if ( a2 + 0x2000 > v9 )
    v9 = a2 + 0x2000;
  if ( *(_BYTE *)(a1 + 386) == 2 )
    v10 = *(_QWORD *)(a1 + 376);
  else
    v10 = 0LL;
  if ( !v10 && v9 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  v11 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v11 >= 0xFD0000 )
    v11 = 16580608LL;
  v43 = v11;
  v12 = sub_18001E548(a1, 1LL);
  v13 = ZwAllocateVirtualMemory(-1LL, &v42, 0LL, &v43, 0x2000, v12);
  if ( v13 < 0 )
  {
    while ( 1 )
    {
      v14 = v43;
      if ( v43 == v8 )
        break;
      v35 = v43 >> 1;
      if ( v43 >> 1 < v8 )
        v35 = a2 + 0x2000;
      v43 = v35;
      v13 = ZwAllocateVirtualMemory(-1LL, &v42, 0LL, &v43, 0x2000, v12);
      if ( v13 >= 0 )
      {
        v14 = v43;
        break;
      }
    }
    if ( v13 < 0 )
    {
      ++*(_DWORD *)(a1 + 600);
      goto LABEL_36;
    }
  }
  else
  {
    v14 = v43;
  }
  *(_QWORD *)(a1 + 160) += v14;
  v15 = *(_QWORD *)(a1 + 168);
  if ( a2 + 4096 > v15 )
    v15 = a2 + 4096;
  v41 = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v17 = ZwAllocateVirtualMemory(-1LL, &v42, 0LL, &v41, 4096, v12);
  if ( v17 >= 0 )
  {
    v19 = sub_18000EA74(a1, v42, 112LL, v18, 2, v42, v42 + v41, v42 + v43 - 4096);
    v16 = 3221225495LL;
    if ( !v19 )
      v17 = -1073741801;
    if ( v17 >= 0 )
    {
      v26 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(3221225495LL, v20, v21, v22) )
        v27 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v27 = 2147353472LL;
      if ( *(_BYTE *)v27 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        sub_1800FF834(a1, v42, v41, 4LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v37, v36, v38, v39) )
          v26 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        sub_1800FFAA8(a1, *(_QWORD *)(v42 + 64), v41, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v26);
      }
      v31 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v27, v23, v24, v25) )
        v32 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
      else
        v32 = 2147353482LL;
      if ( *(_BYTE *)v32 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v32, v28, v29, v30) )
          v31 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
        sub_1800FFAA8(a1, *(_QWORD *)(v42 + 64), v41, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v31);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v32, v28, v29, v30) )
        v33 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
      else
        v33 = 2147353480LL;
      if ( *(_BYTE *)v33 )
        sub_1800FDF88(a1, v42, v43);
      v34 = *(_QWORD *)(v42 + 64);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v34 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v34 + 11) != (*(_BYTE *)(v34 + 8) ^ (unsigned __int8)(*(_BYTE *)(v34 + 9) ^ *(_BYTE *)(v34 + 10))) )
          sub_1800FDA30(a1, v34);
      }
      return *(_QWORD *)(v42 + 64);
    }
  }
  sub_18001E5E0(v16, &v42, &v43, 0x8000LL);
LABEL_36:
  if ( *(char *)(a1 + 112) < 0 )
  {
    v40 = sub_1800EFFE8(a1);
    v4 = (_BYTE *)v40;
    if ( v40 )
    {
      if ( *(unsigned __int16 *)(v40 + 8) >= a2 )
        return v40;
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
