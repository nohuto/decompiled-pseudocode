/*
 * XREFs of sub_180021F28 @ 0x180021F28
 * Callers:
 *     sub_18001EE00 @ 0x18001EE00 (sub_18001EE00.c)
 * Callees:
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_18001EDB4 @ 0x18001EDB4 (sub_18001EDB4.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800FF8DC @ 0x1800FF8DC (sub_1800FF8DC.c)
 *     sub_1800FFA00 @ 0x1800FFA00 (sub_1800FFA00.c)
 */

char __fastcall sub_180021F28(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rcx
  _DWORD *v26; // r8
  unsigned __int64 v27; // rdx
  __int64 v29; // [rsp+60h] [rbp+20h] BYREF
  const void *v30; // [rsp+68h] [rbp+28h] BYREF

  v3 = a1;
  v4 = *(unsigned __int16 *)(a2 + 8);
  v29 = v4;
  *(_BYTE *)(a2 + 10) &= 0xF8u;
  *(_BYTE *)(a2 + 15) = 0;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v26 = (_DWORD *)(a2 + 32);
    v27 = (unsigned __int64)(16 * v4 - 32) >> 2;
    if ( v27 )
    {
      if ( ((unsigned __int8)v26 & 4) != 0 )
      {
        --v27;
        *v26 = -17891602;
        v26 = (_DWORD *)(a2 + 36);
      }
      memset64(v26, 0xFEEEFEEEFEEEFEEEuLL, v27 >> 1);
      a1 = 0LL;
      if ( (v27 & 1) != 0 )
        v26[v27 - 1] = -17891602;
    }
    *(_BYTE *)(a2 + 10) |= 4u;
  }
  v5 = qword_18015BFA8 ^ *(_QWORD *)(v3 + 360);
  if ( !v5 )
  {
    LOBYTE(v5) = sub_18001EDB4(a1, a2, (unsigned __int64 *)&v30, &v29);
    if ( (_BYTE)v5 )
    {
      v9 = sub_18001E5E0(v6, &v30, &v29, 0x4000LL);
      if ( v9 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        LOBYTE(v5) = DbgPrint(
                       "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                       v9,
                       (const void *)v3,
                       v30,
                       v29);
      }
      else
      {
        v15 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v7, v10, v11) )
          v16 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v16 = 2147353472LL;
        if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FFA00(v3, v30, v29, 7LL);
        *(_QWORD *)(v3 + 632) += v29;
        ++*(_DWORD *)(v3 + 596);
        ++*(_DWORD *)(v3 + 628);
        ++*(_DWORD *)(v3 + 612);
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v12, v13, v14) )
          v20 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v20 = 2147353472LL;
        if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v17, v18, v19) )
            v15 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          sub_1800FF8DC(v3, (_DWORD)v30, v29, 16 * *(_QWORD *)(v3 + 192), 0, 0LL, *(unsigned __int8 *)v15);
        }
        LODWORD(v5) = RtlGetCurrentServiceSessionId(v20, v17, v18, v19);
        v24 = 2147353482LL;
        if ( (_DWORD)v5 )
        {
          v5 = (__int64)NtCurrentPeb();
          v25 = *(_QWORD *)(v5 + 144) + 560LL;
        }
        else
        {
          v25 = 2147353482LL;
        }
        if ( *(_BYTE *)v25 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v21, v22, v23) )
            v24 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
          LOBYTE(v5) = sub_1800FF8DC(
                         v3,
                         (_DWORD)v30,
                         v29,
                         16 * (unsigned int)*(_QWORD *)(v3 + 192),
                         0,
                         0LL,
                         *(unsigned __int8 *)v24);
        }
        *(_BYTE *)(a2 + 10) &= 0x13u;
        *(_BYTE *)(a2 + 10) |= 8u;
      }
    }
  }
  if ( *(_DWORD *)(v3 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    LODWORD(v5) = *(_DWORD *)(v3 + 136);
    *(_DWORD *)(a2 + 8) ^= v5;
  }
  return v5;
}
