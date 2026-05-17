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

__int64 __fastcall sub_180072F9C(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-10h] BYREF

  v6 = a3;
  LOBYTE(a3) = 1;
  v7 = sub_1800730C0(v6, a4, a3, (unsigned int)&v12, (__int64)&v11);
  if ( v7 )
  {
    v14 = (v12 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v12 - (v12 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
    v13 = (unsigned int)(v11 << 12);
    v8 = sub_18001E548(a1, 1);
    result = ZwAllocateVirtualMemory(-1LL, &v14, 0LL, &v13, 4096, v8);
    if ( (int)result < 0 )
      return result;
    sub_180073128((_DWORD)a1, a2, v12, v11, v7);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v10 = 2147353472LL;
    if ( *(_BYTE *)v10 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FF834(a1, v14, v13, 10LL);
    }
  }
  return 0LL;
}
