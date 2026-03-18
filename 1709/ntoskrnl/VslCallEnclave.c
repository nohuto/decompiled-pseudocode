/*
 * XREFs of VslCallEnclave @ 0x1406B3378
 * Callers:
 *     PsCallEnclave @ 0x14071B2E0 (PsCallEnclave.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     KeAlertThreadByThreadId @ 0x1400893F0 (KeAlertThreadByThreadId.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall VslCallEnclave(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3,
        int a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  __int64 CurrentThread; // rsi
  NTSTATUS v12; // ebx
  struct _MDL MemoryDescriptorList; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-C8h]
  _BYTE v18[4]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v19; // [rsp+84h] [rbp-B4h]
  int v20; // [rsp+88h] [rbp-B0h]
  int v21; // [rsp+8Ch] [rbp-ACh]
  __int64 v22; // [rsp+90h] [rbp-A8h]
  __int64 v23; // [rsp+98h] [rbp-A0h]
  __int64 v24; // [rsp+A0h] [rbp-98h]
  __int64 v25; // [rsp+A8h] [rbp-90h]
  __int64 v26; // [rsp+B0h] [rbp-88h]
  int v27; // [rsp+B8h] [rbp-80h]
  char v28; // [rsp+BCh] [rbp-7Ch]
  char v29; // [rsp+BDh] [rbp-7Bh]

  CurrentThread = (__int64)KeGetCurrentThread();
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * ((((unsigned __int64)(CurrentThread & 0xFFF) + 6167) >> 12) + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(CurrentThread & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = CurrentThread & 0xFFF;
  MemoryDescriptorList.ByteCount = 2072;
  MmProbeAndLockPages(&MemoryDescriptorList, 0, IoWriteAccess);
  v20 = a4;
  v21 = *(_DWORD *)(a1 + 40);
  v22 = *a3;
  v23 = *a5;
  v24 = v17;
  v28 = 0;
  v25 = *a6;
  v26 = *a7;
  v12 = VslpEnterIumSecureMode(1u, 0LL, *a2, (__int64)v18);
  if ( v12 < 0 )
  {
    *a9 = 0;
  }
  else
  {
    *a2 = v19;
    *a3 = v22;
    *a5 = v23;
    *a8 = v27;
    *a6 = v25;
    *a7 = v26;
    *a9 = v29;
  }
  MmUnlockPages(&MemoryDescriptorList);
  if ( v28 )
    KeAlertThreadByThreadId(CurrentThread);
  return (unsigned int)v12;
}
