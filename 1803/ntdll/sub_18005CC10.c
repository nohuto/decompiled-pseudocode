/*
 * XREFs of sub_18005CC10 @ 0x18005CC10
 * Callers:
 *     sub_18005CB44 @ 0x18005CB44 (sub_18005CB44.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18005CD40 @ 0x18005CD40 (sub_18005CD40.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     sub_1800FE14C @ 0x1800FE14C (sub_1800FE14C.c)
 *     sub_1800FE270 @ 0x1800FE270 (sub_1800FE270.c)
 */

int __fastcall sub_18005CC10(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rdi
  __int64 UserModeGlobalLogger; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  const void *v17; // [rsp+68h] [rbp+28h] BYREF

  v3 = a1;
  v4 = *(unsigned __int16 *)(a2 + 8);
  v16 = v4;
  *(_BYTE *)(a2 + 10) &= 0xF8u;
  *(_BYTE *)(a2 + 15) = 0;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v13 = (_DWORD *)(a2 + 32);
    v14 = (unsigned __int64)(16 * v4 - 32) >> 2;
    if ( v14 )
    {
      if ( ((unsigned __int8)v13 & 4) != 0 )
      {
        --v14;
        *v13 = -17891602;
        v13 = (_DWORD *)(a2 + 36);
      }
      memset64(v13, 0xFEEEFEEEFEEEFEEEuLL, v14 >> 1);
      a1 = 0LL;
      if ( (v14 & 1) != 0 )
        v13[v14 - 1] = -17891602;
    }
    *(_BYTE *)(a2 + 10) |= 4u;
  }
  v5 = qword_18015D758 ^ *(_QWORD *)(v3 + 360);
  if ( !v5 )
  {
    LODWORD(v5) = sub_18005CD40(a1, a2, &v17, &v16);
    if ( (_BYTE)v5 )
    {
      v7 = sub_18005CD8C(v6, &v17, &v16, 0x4000LL);
      if ( v7 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        LODWORD(v5) = DbgPrint(
                        "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                        v7,
                        (const void *)v3,
                        v17,
                        v16);
      }
      else
      {
        v8 = 2147353472LL;
        if ( RtlGetCurrentServiceSessionId() )
          UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          UserModeGlobalLogger = 2147353472LL;
        if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FE270(v3, v17, v16, 7LL);
        *(_QWORD *)(v3 + 632) += v16;
        ++*(_DWORD *)(v3 + 596);
        ++*(_DWORD *)(v3 + 628);
        ++*(_DWORD *)(v3 + 612);
        if ( RtlGetCurrentServiceSessionId() )
          v10 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          v10 = 2147353472LL;
        if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v8 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          sub_1800FE14C(v3, (int)v17, v16, 16 * *(_QWORD *)(v3 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v8);
        }
        LODWORD(v5) = RtlGetCurrentServiceSessionId();
        v11 = 2147353482LL;
        if ( (_DWORD)v5 )
        {
          v5 = (__int64)NtCurrentPeb();
          v12 = *(_QWORD *)(v5 + 144) + 560LL;
        }
        else
        {
          v12 = 2147353482LL;
        }
        if ( *(_BYTE *)v12 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
          LODWORD(v5) = sub_1800FE14C(
                          v3,
                          (int)v17,
                          v16,
                          16 * (unsigned int)*(_QWORD *)(v3 + 192),
                          0,
                          0LL,
                          (HANDLE)*(unsigned __int8 *)v11);
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
