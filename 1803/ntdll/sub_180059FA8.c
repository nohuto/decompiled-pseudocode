/*
 * XREFs of sub_180059FA8 @ 0x180059FA8
 * Callers:
 *     sub_180059DC0 @ 0x180059DC0 (sub_180059DC0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_18005A184 @ 0x18005A184 (sub_18005A184.c)
 *     RtlQueryResourcePolicy @ 0x18005A240 (RtlQueryResourcePolicy.c)
 *     sub_18005C734 @ 0x18005C734 (sub_18005C734.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_1800FE318 @ 0x1800FE318 (sub_1800FE318.c)
 */

__int64 __fastcall sub_180059FA8(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // esi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF
  __int64 v16; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v14, 4LL) >= 0 && v14 <= 10 )
    v2 = 3;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v5 = 0LL;
    v4 = v2 & 1;
  }
  else
  {
    v3 = qword_18015A580[0];
    v4 = v2 & 1;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v5 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  v15 = 0LL;
  v16 = v5;
  v6 = sub_18002AE30(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v16, 0x2000, v6) < 0 )
    return 0LL;
  v7 = qword_18015A580[0];
  if ( v4 )
    v7 = 1;
  v8 = 48LL * (unsigned int)(v7 - 1);
  v17 = (v8 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v9 = sub_18002AE30(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v17, 4096, v9) < 0 )
  {
    v16 = 0LL;
    sub_18005CD8C(v10, &v15, &v16, 0x8000LL);
    return 0LL;
  }
  v11 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v12 = 2147353472LL;
  if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    sub_1800FE318(a1, v15, v17, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v11);
    sub_1800FE0A4(a1, v15, v17, 9LL);
  }
  sub_18005A184(a1, v2, v15);
  *(_QWORD *)(*(_QWORD *)(v15 + 24) + 536LL) += v16;
  *(_QWORD *)(*(_QWORD *)(v15 + 24) + 544LL) += v17;
  *(_QWORD *)(v15 + 48) = v15 + v16;
  *(_QWORD *)(v15 + 40) = v15 + v17;
  *(_QWORD *)(v15 + 32) = v8 + v15 + 3312;
  if ( (dword_18015D040 & 3) == 0 )
  {
    dword_18015D040 |= 1u;
    sub_18005C734();
  }
  *(_DWORD *)(v15 + 672) = v2;
  return v15;
}
