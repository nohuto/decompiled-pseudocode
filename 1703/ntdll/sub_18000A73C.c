/*
 * XREFs of sub_18000A73C @ 0x18000A73C
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 * Callees:
 *     sub_18000EEA8 @ 0x18000EEA8 (sub_18000EEA8.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 */

volatile signed __int64 *__fastcall sub_18000A73C(int a1, unsigned int a2)
{
  __int64 v2; // rax
  int v4; // ebx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  volatile signed __int64 *result; // rax
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int64 *v13; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-8h] BYREF
  volatile signed __int64 *v16; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+28h] BYREF

  v12 = 0LL;
  v2 = 64LL;
  v13 = 0LL;
  if ( a2 <= 0x40 )
    v2 = a2;
  v17 = 129
      * (((v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
       + ((56LL * (unsigned int)v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
       + 8LL * (unsigned int)v2)
      + 15968;
  v12 = (sub_18000EEA8() & 0x1F) << 16;
  v14 = v17 + v12;
  if ( v17 + v12 < v17 )
  {
    v12 = 0LL;
    v14 = v17;
  }
  v4 = (a1 & 0x40000000) != 0 ? 64 : 4;
  v5 = ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &v14, 0x2000, v4);
  if ( v5 < 0 )
  {
    result = 0LL;
    v16 = 0LL;
    goto LABEL_13;
  }
  v16 = v13;
  v17 = v14;
  if ( v12 )
  {
    ZwFreeVirtualMemory(-1LL, &v13, &v12, 0x8000LL);
    v17 = v14 - v12;
    v16 = (volatile signed __int64 *)((char *)v13 + v12);
  }
  v15 = 1520LL;
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v16, 0LL, &v15, 4096, v4) >= 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v7, v6, v8, v9) )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v10 = 2147353472LL;
    if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FF834(v16, v16, v15, 11LL);
    _InterlockedExchangeAdd64(v16, v17 >> 12);
    _InterlockedExchangeAdd64(v16 + 1, v15 >> 12);
    *((_QWORD *)v16 + 19) = v16 + 190;
    *((_QWORD *)v16 + 20) = (char *)v16 + v15;
    *((_QWORD *)v16 + 21) = (char *)v16 + v17;
    v5 = 0;
    result = v16;
LABEL_13:
    if ( v5 >= 0 )
      return result;
    goto LABEL_20;
  }
  result = v16;
LABEL_20:
  if ( result )
  {
    v17 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v16, &v17, 0x8000LL);
    return 0LL;
  }
  return result;
}
