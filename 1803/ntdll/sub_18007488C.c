/*
 * XREFs of sub_18007488C @ 0x18007488C
 * Callers:
 *     sub_1800746F8 @ 0x1800746F8 (sub_1800746F8.c)
 *     sub_18007483C @ 0x18007483C (sub_18007483C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_1800FE318 @ 0x1800FE318 (sub_1800FE318.c)
 */

__int64 __fastcall sub_18007488C(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rsi
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[4];
  v4 = a1 + 5;
  v7 = v3 + a2;
  if ( (unsigned __int64)(v3 + a2) <= a1[5] )
  {
LABEL_2:
    *a3 = v3;
    result = 0LL;
    a1[4] = v7;
    return result;
  }
  v9 = a1[3];
  v13 = (v7 - *v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v10 = sub_18002AE30(v9, 1);
  result = ZwAllocateVirtualMemory(-1LL, v4, 0LL, &v13, 4096, v10);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1[3] + 544LL) += v13;
    v11 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      sub_1800FE318(a1[3], *v4, v13, 16 * *(_QWORD *)(a1[3] + 192LL), *(unsigned __int8 *)v11);
      sub_1800FE0A4(a1[3], *v4, v13, 9LL);
    }
    *v4 += v13;
    v3 = a1[4];
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}
