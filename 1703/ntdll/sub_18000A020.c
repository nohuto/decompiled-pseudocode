/*
 * XREFs of sub_18000A020 @ 0x18000A020
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     sub_18001F314 @ 0x18001F314 (sub_18001F314.c)
 * Callees:
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     sub_1800FDF88 @ 0x1800FDF88 (sub_1800FDF88.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 */

unsigned __int64 __fastcall sub_18000A020(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rbx
  int v5; // eax
  int v6; // esi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v26; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v27; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0LL;
  v27 = 0x200000LL;
  v26 = 0LL;
  v23 = 0LL;
  v5 = sub_18001E548(a1, 1LL);
  v6 = ZwAllocateVirtualMemory(-1LL, &v26, 0LL, &v27, 0x2000, v5);
  if ( v6 < 0 )
  {
    v26 = 0LL;
  }
  else
  {
    v7 = v27;
    v8 = (v26 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v9 = v27 + v26;
    v23 = v8;
    v10 = v8 - v26;
    v24 = v8 - v26;
    if ( v8 != v26 )
    {
      ZwFreeVirtualMemory(-1LL, &v26, &v24, 0x8000LL);
      v8 = v23;
      v7 = v27;
      v10 = v24;
    }
    v11 = v7 - v10;
    v12 = v9 - (v8 + 0x100000);
    v27 = v11;
    v24 = v12;
    v26 = v8 + 0x100000;
    if ( v12 )
    {
      ZwFreeVirtualMemory(-1LL, &v26, &v24, 0x8000LL);
      v8 = v23;
      v11 = v27;
      v12 = v24;
    }
    v26 = v8;
    v27 = v11 - v12;
    v25 = (unsigned int)(a2 << 12) + 0x2000LL;
    v13 = sub_18001E548(a1, 1LL);
    v6 = ZwAllocateVirtualMemory(-1LL, &v23, 0LL, &v25, 4096, v13);
    if ( v6 < 0 )
      goto LABEL_22;
    _InterlockedExchangeAdd64(a1, v27 >> 12);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(_InterlockedExchangeAdd64(a1 + 1, v25 >> 12), v14, v15, v16) )
      v20 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v20 = 2147353472LL;
    if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FF834(a1, v23, v25, 12LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v17, v18, v19) )
      v21 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
    else
      v21 = 2147353480LL;
    if ( *(_BYTE *)v21 )
      sub_1800FDF88(a1, v23, 0x100000LL);
  }
  if ( v6 >= 0 )
    return v23;
LABEL_22:
  if ( v26 )
  {
    v24 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v26, &v24, 0x8000LL);
  }
  return v2;
}
