/*
 * XREFs of sub_180078E44 @ 0x180078E44
 * Callers:
 *     sub_180078CB0 @ 0x180078CB0 (sub_180078CB0.c)
 *     sub_180078DF4 @ 0x180078DF4 (sub_180078DF4.c)
 * Callees:
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 *     sub_1800FFAA8 @ 0x1800FFAA8 (sub_1800FFAA8.c)
 */

__int64 __fastcall sub_180078E44(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 result; // rax
  _DWORD *v8; // rcx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1 + 5;
  v4 = a2 + a1[4];
  if ( v4 <= a1[5] )
  {
LABEL_2:
    *a3 = a1[4];
    result = 0LL;
    a1[4] = v4;
    return result;
  }
  v8 = (_DWORD *)a1[3];
  v12 = (v4 - *v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v9 = sub_18001E548(v8, 1);
  result = ZwAllocateVirtualMemory(-1LL, v3, 0LL, &v12, 4096, v9);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1[3] + 544LL) += v12;
    v10 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      sub_1800FFAA8(a1[3], *v3, v12, 16 * *(_QWORD *)(a1[3] + 192LL), *(unsigned __int8 *)v10);
      sub_1800FF834(a1[3], *v3, v12, 9LL);
    }
    *v3 += v12;
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}
