/*
 * XREFs of WbVerifyVirtualAddressSignature @ 0x140539FCC
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlock @ 0x14048A758 (WbDecryptWarbirdEncryptionSegmentBlock.c)
 *     sub_14048A988 @ 0x14048A988 (sub_14048A988.c)
 *     sub_14048AC0C @ 0x14048AC0C (sub_14048AC0C.c)
 *     WbCreateHeapExecutedBlock @ 0x140539C10 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1401A7920 (ZwQueryVirtualMemory.c)
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 */

__int64 __fastcall WbVerifyVirtualAddressSignature(PVOID BaseAddress, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  NTSTATUS v6; // r9d
  ULONG_PTR v8; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+38h] [rbp-50h] BYREF
  _QWORD MemoryInformation[4]; // [rsp+50h] [rbp-38h] BYREF
  int v11; // [rsp+74h] [rbp-14h]
  ULONG_PTR ReturnLength; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a2;
  v6 = ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         &v9,
         0x18uLL,
         &ReturnLength);
  if ( v6 >= 0 )
  {
    if ( (unsigned int)SeCompareSigningLevels() )
    {
      v6 = 0;
      if ( a3 )
      {
        v6 = ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               MemoryBasicInformation,
               MemoryInformation,
               0x30uLL,
               &v8);
        if ( v6 >= 0
          && ((unsigned __int64)BaseAddress < MemoryInformation[0]
           || (unsigned __int64)BaseAddress + v3 > MemoryInformation[3] + MemoryInformation[0]
           || v11 != 32) )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
    else
    {
      return (unsigned int)-1073740760;
    }
  }
  return (unsigned int)v6;
}
