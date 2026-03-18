/*
 * XREFs of VslValidateDynamicCodePages @ 0x140230AF0
 * Callers:
 *     <none>
 * Callees:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall VslValidateDynamicCodePages(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int16 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned int v14; // ebx
  _BYTE v15[8]; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-120h]
  __int64 v17; // [rsp+30h] [rbp-118h]
  unsigned __int64 v18; // [rsp+38h] [rbp-110h]
  __int64 v19; // [rsp+40h] [rbp-108h]
  __int64 v20; // [rsp+48h] [rbp-100h]
  __int64 v21; // [rsp+50h] [rbp-F8h]
  struct _MDL MemoryDescriptorList; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-88h]
  struct _MDL v24; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-50h]

  v8 = a1;
  v9 = ((unsigned int)(*(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 44)) + 4095LL + (*(_DWORD *)(a1 + 32) & 0xFFFuLL)) >> 12;
  v10 = ((v8 & 0xFFF) + 4143LL + 8 * v9) >> 12;
  if ( v10 > 1 )
    return 3221225485LL;
  v24.Next = 0LL;
  v24.Size = 8 * (v10 + 6);
  v24.MdlFlags = 0;
  v24.StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v24.ByteOffset = v8 & 0xFFF;
  v24.ByteCount = 8 * v9 + 48;
  MiProbeAndLockPages(&v24, 0, 0);
  v12 = ((unsigned int)(*(_DWORD *)(a4 + 40) + *(_DWORD *)(a4 + 44)) + 4095LL + (*(_DWORD *)(a4 + 32) & 0xFFFuLL)) >> 12;
  v13 = ((a4 & 0xFFF) + 4143 + 8 * v12) >> 12;
  if ( v13 > 1 )
    return 3221225485LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * (v13 + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(a4 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = a4 & 0xFFF;
  MemoryDescriptorList.ByteCount = 8 * v12 + 48;
  MiProbeAndLockPages(&MemoryDescriptorList, 0, 0);
  v16 = a1;
  v17 = v25;
  v18 = a4;
  v19 = v23;
  v20 = a2;
  v21 = a3;
  v14 = VslpEnterIumSecureMode(2u, 30LL, 0, (__int64)v15);
  MmUnlockPages(&MemoryDescriptorList);
  MmUnlockPages(&v24);
  return v14;
}
