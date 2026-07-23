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

NTSTATUS __fastcall sub_18007488C(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  PVOID *v4; // rsi
  __int64 v7; // rbp
  NTSTATUS result; // eax
  _DWORD *v9; // rcx
  ULONG Protect; // eax
  __int64 v11; // rdi
  __int64 UserModeGlobalLogger; // rcx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[4];
  v4 = (PVOID *)(a1 + 5);
  v7 = v3 + a2;
  if ( (unsigned __int64)(v3 + a2) <= a1[5] )
  {
LABEL_2:
    *a3 = v3;
    result = 0;
    a1[4] = v7;
    return result;
  }
  v9 = (_DWORD *)a1[3];
  RegionSize = (v7 - (_QWORD)*v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Protect = sub_18002AE30(v9, 1);
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4, 0LL, &RegionSize, 0x1000u, Protect);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1[3] + 544LL) += RegionSize;
    v11 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      sub_1800FE318(a1[3], (int)*v4, RegionSize, 16 * *(_QWORD *)(a1[3] + 192LL), (HANDLE)*(unsigned __int8 *)v11);
      sub_1800FE0A4(a1[3], *v4, RegionSize, 9LL);
    }
    *v4 = (char *)*v4 + RegionSize;
    v3 = a1[4];
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}
