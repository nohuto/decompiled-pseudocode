/*
 * XREFs of HeadlessTerminalAddResources @ 0x14061B4B0
 * Callers:
 *     IoReportHalResourceUsage @ 0x140898810 (IoReportHalResourceUsage.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HeadlessTerminalAddResources(void *Src, size_t Size, char a3, _QWORD *a4, _DWORD *a5)
{
  size_t v5; // rbp
  __int64 result; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rbx
  PHYSICAL_ADDRESS v12; // rax
  ULONG AddressSpace; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER TranslatedAddress; // [rsp+38h] [rbp-30h] BYREF

  v5 = (unsigned int)Size;
  if ( !HeadlessGlobals )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  if ( (HeadlessGlobals[6] & 0x1000) != 0 )
  {
    *a4 = 0LL;
    result = 0LL;
  }
  else
  {
    *a5 = Size + 36;
    if ( (int)Size + 36 >= (unsigned int)Size )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 36), 0x736C6448u);
      *a4 = PoolWithTag;
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Src, v5);
        v12.QuadPart = HeadlessGlobals[8];
        if ( a3 )
        {
          AddressSpace = 1;
          HalTranslateBusAddress(Internal, 0, v12, &AddressSpace, &TranslatedAddress);
          v11 = (_DWORD *)*a4;
        }
        else
        {
          TranslatedAddress.QuadPart = HeadlessGlobals[8];
        }
        ++*v11;
        *(_QWORD *)((char *)v11 + v5) = 1LL;
        *(_DWORD *)((char *)v11 + v5 + 12) = 1;
        *(_DWORD *)((char *)v11 + v5 + 8) = 0;
        *(_DWORD *)((char *)v11 + v5 + 16) = 66049;
        *(LARGE_INTEGER *)((char *)v11 + v5 + 20) = TranslatedAddress;
        *(_DWORD *)((char *)v11 + v5 + 28) = 8;
        return 0LL;
      }
    }
    result = 3221225626LL;
  }
  *a5 = 0;
  return result;
}
