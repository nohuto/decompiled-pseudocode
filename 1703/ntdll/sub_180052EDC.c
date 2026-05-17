/*
 * XREFs of sub_180052EDC @ 0x180052EDC
 * Callers:
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 * Callees:
 *     sub_18005304C @ 0x18005304C (sub_18005304C.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 */

ULONG __fastcall sub_180052EDC(__int64 a1)
{
  NTSTATUS v2; // eax
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  unsigned int v12; // ecx
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  int v16; // [rsp+48h] [rbp-50h]

  v14 = 0LL;
  v2 = ZwQuerySystemInformation(0LL, &v15, 64LL, 0LL);
  if ( v2 < 0 )
    return RtlNtStatusToDosError(v2);
  v3 = *(_DWORD *)(a1 + 204);
  v4 = 2 * v3;
  if ( *(_DWORD *)(a1 + 216) < (unsigned int)(2 * v3) )
    *(_DWORD *)(a1 + 216) = v4 + 22;
  v5 = *(_DWORD *)(a1 + 220);
  if ( v5 < v4 || v5 > *(_DWORD *)(a1 + 216) )
    *(_DWORD *)(a1 + 220) = v4;
  v6 = *(_DWORD *)(a1 + 216);
  v7 = *(_DWORD *)(a1 + 220);
  if ( v6 > 0x400 )
    v6 = 1024;
  *(_DWORD *)(a1 + 216) = v6;
  if ( v7 > 0x400 )
    v7 = 1024;
  *(_DWORD *)(a1 + 220) = v7;
  v8 = *(_DWORD *)(a1 + 368);
  if ( v8 )
  {
    v12 = v6 - v3 - 1;
    if ( v8 > v12 )
      *(_DWORD *)(a1 + 368) = v12;
  }
  v9 = ~(v16 - 1) & (*(_DWORD *)(a1 + 208) + v16 - 1);
  *(_DWORD *)(a1 + 208) = v9;
  if ( (*(_DWORD *)(a1 + 324) & 0x400) != 0 )
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 220);
  v13 = (unsigned int)(v9 * *(_DWORD *)(a1 + 216));
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v14, 0LL, &v13, 0x2000, 4) >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 220);
    *(_QWORD *)(a1 + 424) = v14;
    if ( (unsigned int)sub_18005304C(a1, v10) == v10 )
      return 0;
    v13 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 424, &v13, 0x8000LL);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  return 8;
}
