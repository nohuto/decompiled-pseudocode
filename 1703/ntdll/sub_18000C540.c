/*
 * XREFs of sub_18000C540 @ 0x18000C540
 * Callers:
 *     sub_18000C298 @ 0x18000C298 (sub_18000C298.c)
 * Callees:
 *     sub_18000C718 @ 0x18000C718 (sub_18000C718.c)
 *     sub_18000EE68 @ 0x18000EE68 (sub_18000EE68.c)
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 *     sub_1800FFAA8 @ 0x1800FFAA8 (sub_1800FFAA8.c)
 */

__int64 __fastcall sub_18000C540(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rcx
  int v19; // [rsp+70h] [rbp+38h] BYREF
  __int64 v20; // [rsp+78h] [rbp+40h] BYREF
  __int64 v21; // [rsp+80h] [rbp+48h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp+50h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v19, 4LL) >= 0 && v19 <= 10 )
    v2 = 3;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v4 = 0LL;
  }
  else
  {
    v3 = dword_1801593E0;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v4 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  v20 = 0LL;
  v21 = v4;
  v5 = sub_18001E548(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v20, 0LL, &v21, 0x2000, v5) < 0 )
    return 0LL;
  v6 = dword_1801593E0;
  if ( (v2 & 1) != 0 )
    v6 = 1;
  v7 = 48LL * (unsigned int)(v6 - 1);
  v22 = (v7 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v8 = sub_18001E548(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v20, 0LL, &v22, 4096, v8) < 0 )
  {
    v21 = 0LL;
    sub_18001E5E0(v10, &v20, &v21, 0x8000LL);
    return 0LL;
  }
  v16 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, v9, v11, v12) )
    v17 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v17 = 2147353472LL;
  if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v13, v14, v15) )
      v16 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    sub_1800FFAA8(a1, v20, v22, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v16);
    sub_1800FF834(a1, v20, v22, 9LL);
  }
  sub_18000C718(a1, v2, v20);
  *(_QWORD *)(*(_QWORD *)(v20 + 24) + 536LL) += v21;
  *(_QWORD *)(*(_QWORD *)(v20 + 24) + 544LL) += v22;
  *(_QWORD *)(v20 + 48) = v20 + v21;
  *(_QWORD *)(v20 + 40) = v20 + v22;
  *(_QWORD *)(v20 + 32) = v7 + v20 + 3312;
  if ( (dword_18015BFDC & 3) == 0 )
  {
    dword_18015BFDC |= 1u;
    sub_18000EE68();
  }
  *(_DWORD *)(v20 + 672) = v2;
  return v20;
}
