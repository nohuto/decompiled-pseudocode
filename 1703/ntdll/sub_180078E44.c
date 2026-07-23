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

NTSTATUS __fastcall sub_180078E44(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  PVOID *v3; // rsi
  unsigned __int64 v4; // rbp
  NTSTATUS result; // eax
  _DWORD *v8; // rcx
  ULONG Protect; // eax
  __int64 v10; // rdi
  __int64 UserModeGlobalLogger; // rcx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  v3 = (PVOID *)(a1 + 5);
  v4 = a2 + a1[4];
  if ( v4 <= a1[5] )
  {
LABEL_2:
    *a3 = a1[4];
    result = 0;
    a1[4] = v4;
    return result;
  }
  v8 = (_DWORD *)a1[3];
  RegionSize = (v4 - (_QWORD)*v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Protect = sub_18001E548(v8, 1);
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3, 0LL, &RegionSize, 0x1000u, Protect);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1[3] + 544LL) += RegionSize;
    v10 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      sub_1800FFAA8(a1[3], (int)*v3, RegionSize, 16 * *(_QWORD *)(a1[3] + 192LL), (HANDLE)*(unsigned __int8 *)v10);
      sub_1800FF834(a1[3], *v3, RegionSize, 9LL);
    }
    *v3 = (char *)*v3 + RegionSize;
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}
