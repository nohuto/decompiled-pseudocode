/*
 * XREFs of WbVerifyVirtualAddressSignature @ 0x140503C14
 * Callers:
 *     sub_14044AA3C @ 0x14044AA3C (sub_14044AA3C.c)
 *     sub_14044AC38 @ 0x14044AC38 (sub_14044AC38.c)
 *     sub_14044AEBC @ 0x14044AEBC (sub_14044AEBC.c)
 *     WbCreateHeapExecutedBlock @ 0x140503894 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x14017DD20 (ZwQueryVirtualMemory.c)
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 */

__int64 __fastcall WbVerifyVirtualAddressSignature(PVOID BaseAddress, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  NTSTATUS v7; // r9d
  __int64 v8; // rcx
  ULONG_PTR v10; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v11[6]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD MemoryInformation[4]; // [rsp+50h] [rbp-38h] BYREF
  int v13; // [rsp+74h] [rbp-14h]
  ULONG_PTR ReturnLength; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a2;
  v7 = ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         v11,
         0x18uLL,
         &ReturnLength);
  if ( v7 >= 0 )
  {
    LOBYTE(v6) = 12;
    v8 = v11[4] >> 2;
    LOBYTE(v8) = v8 & 0xF;
    if ( (unsigned int)SeCompareSigningLevels(v8, v6) )
    {
      v7 = 0;
      if ( a3 )
      {
        v7 = ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               MemoryBasicInformation,
               MemoryInformation,
               0x30uLL,
               &v10);
        if ( v7 >= 0
          && ((unsigned __int64)BaseAddress < MemoryInformation[0]
           || (unsigned __int64)BaseAddress + v3 > MemoryInformation[3] + MemoryInformation[0]
           || v13 != 32) )
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
  return (unsigned int)v7;
}
