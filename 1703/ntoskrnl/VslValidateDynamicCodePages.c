/*
 * XREFs of VslValidateDynamicCodePages @ 0x14026A750
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall VslValidateDynamicCodePages(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned int v13; // ebx
  _BYTE v14[8]; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-120h]
  __int64 v16; // [rsp+30h] [rbp-118h]
  unsigned __int64 v17; // [rsp+38h] [rbp-110h]
  __int64 v18; // [rsp+40h] [rbp-108h]
  __int64 v19; // [rsp+48h] [rbp-100h]
  __int64 v20; // [rsp+50h] [rbp-F8h]
  struct _MDL MemoryDescriptorList; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-88h]
  struct _MDL v23; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-50h]

  v8 = 8
     * (((unsigned int)(*(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 44)) + (*(_DWORD *)(a1 + 32) & 0xFFFuLL) + 4095) >> 12)
     + 48;
  v9 = (v8 + (a1 & 0xFFF) + 4095) >> 12;
  if ( v9 > 1 )
    return 3221225485LL;
  v23.Next = 0LL;
  v23.Size = 8 * (v9 + 6);
  v23.MdlFlags = 0;
  v23.StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v23.ByteOffset = a1 & 0xFFF;
  v23.ByteCount = v8;
  MiProbeAndLockPages(&v23, 0, 0);
  v11 = 8
      * (((*(_DWORD *)(a4 + 32) & 0xFFFLL)
        + 4095
        + (unsigned __int64)(unsigned int)(*(_DWORD *)(a4 + 40) + *(_DWORD *)(a4 + 44))) >> 12)
      + 48;
  v12 = (v11 + (a4 & 0xFFF) + 4095) >> 12;
  if ( v12 > 1 )
    return 3221225485LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * (v12 + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(a4 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = a4 & 0xFFF;
  MemoryDescriptorList.ByteCount = v11;
  MiProbeAndLockPages(&MemoryDescriptorList, 0, 0);
  v15 = a1;
  v16 = v24;
  v17 = a4;
  v18 = v22;
  v19 = a2;
  v20 = a3;
  v13 = VslpEnterIumSecureMode(1, 30LL, 0LL, (__int64)v14);
  MmUnlockPages(&MemoryDescriptorList);
  MmUnlockPages(&v23);
  return v13;
}
