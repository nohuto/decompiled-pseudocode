/*
 * XREFs of RtlGetNonVolatileToken @ 0x1800F3F50
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 */

DWORD __cdecl RtlGetNonVolatileToken(PVOID NvBuffer, SIZE_T Size, PVOID *NvToken)
{
  DWORD result; // eax
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v6; // [rsp+78h] [rbp+20h] BYREF

  result = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, NvBuffer, MemoryRegionInformationEx, v5, 0x20uLL, &v6);
  if ( (result & 0x80000000) == 0 )
  {
    if ( (v5[12] & 0x20) != 0 )
    {
      *NvToken = (PVOID)3;
      return 0;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
