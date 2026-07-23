/*
 * XREFs of sub_180072F9C @ 0x180072F9C
 * Callers:
 *     sub_18001EFB4 @ 0x18001EFB4 (sub_18001EFB4.c)
 * Callees:
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800730C0 @ 0x1800730C0 (sub_1800730C0.c)
 *     sub_180073128 @ 0x180073128 (sub_180073128.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 */

NTSTATUS __fastcall sub_180072F9C(_DWORD *BaseAddress, int a2, int a3, int a4)
{
  int v6; // ecx
  int v7; // edi
  ULONG Protect; // eax
  NTSTATUS result; // eax
  __int64 UserModeGlobalLogger; // rcx
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-18h] BYREF
  PVOID BaseAddressa; // [rsp+48h] [rbp-10h] BYREF

  v6 = a3;
  LOBYTE(a3) = 1;
  v7 = sub_1800730C0(v6, a4, a3, (unsigned int)&v12, (__int64)&v11);
  if ( v7 )
  {
    BaseAddressa = (PVOID)((v12 & 0xFFFFFFFFFFF00000uLL)
                         + ((unsigned int)((__int64)(v12 - (v12 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
    RegionSize = (unsigned int)(v11 << 12);
    Protect = sub_18001E548(BaseAddress, 1);
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
    if ( result < 0 )
      return result;
    sub_180073128((_DWORD)BaseAddress, a2, v12, v11, v7);
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FF834(BaseAddress, BaseAddressa, RegionSize, 10LL);
    }
  }
  return 0;
}
