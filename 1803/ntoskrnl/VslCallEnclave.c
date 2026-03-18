/*
 * XREFs of VslCallEnclave @ 0x140717FA8
 * Callers:
 *     PsCallEnclave @ 0x14077EDB0 (PsCallEnclave.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     KeAlertThreadByThreadId @ 0x140062644 (KeAlertThreadByThreadId.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
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
  __int64 v13; // rdx
  struct _MDL MemoryDescriptorList; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+70h] [rbp-C8h]
  _BYTE v19[4]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v20; // [rsp+84h] [rbp-B4h]
  int v21; // [rsp+88h] [rbp-B0h]
  int v22; // [rsp+8Ch] [rbp-ACh]
  __int64 v23; // [rsp+90h] [rbp-A8h]
  __int64 v24; // [rsp+98h] [rbp-A0h]
  __int64 v25; // [rsp+A0h] [rbp-98h]
  __int64 v26; // [rsp+A8h] [rbp-90h]
  __int64 v27; // [rsp+B0h] [rbp-88h]
  int v28; // [rsp+B8h] [rbp-80h]
  char v29; // [rsp+BCh] [rbp-7Ch]
  char v30; // [rsp+BDh] [rbp-7Bh]

  CurrentThread = (__int64)KeGetCurrentThread();
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * ((((unsigned __int64)(CurrentThread & 0xFFF) + 6167) >> 12) + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(CurrentThread & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = CurrentThread & 0xFFF;
  MemoryDescriptorList.ByteCount = 2072;
  MmProbeAndLockPages(&MemoryDescriptorList, 0, IoWriteAccess);
  v21 = a4;
  v22 = *(_DWORD *)(a1 + 40);
  v23 = *a3;
  v24 = *a5;
  v25 = v18;
  v29 = 0;
  v26 = *a6;
  v27 = *a7;
  v12 = VslpEnterIumSecureMode(1u, 0LL, *a2, (__int64)v19);
  if ( v12 < 0 )
  {
    *a9 = 0;
  }
  else
  {
    *a2 = v20;
    *a3 = v23;
    *a5 = v24;
    *a8 = v28;
    *a6 = v26;
    *a7 = v27;
    *a9 = v30;
  }
  MmUnlockPages(&MemoryDescriptorList);
  if ( v29 )
    KeAlertThreadByThreadId(CurrentThread, v13);
  return (unsigned int)v12;
}
