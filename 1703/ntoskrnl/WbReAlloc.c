/*
 * XREFs of WbReAlloc @ 0x140441428
 * Callers:
 *     WbAddLookupEntryEx @ 0x140441338 (WbAddLookupEntryEx.c)
 *     sub_14053C76C @ 0x14053C76C (sub_14053C76C.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 */

__int64 __fastcall WbReAlloc(PVOID P, size_t Size, SIZE_T NumberOfBytes, _QWORD *a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // esi
  int v8; // r15d

  v4 = Size;
  v7 = NumberOfBytes;
  v8 = WbAlloc((unsigned int)NumberOfBytes);
  if ( v8 >= 0 )
  {
    if ( P )
    {
      if ( v4 )
      {
        if ( v7 >= v4 )
          v7 = v4;
        memmove(0LL, P, v7);
      }
      ExFreePoolWithTag(P, 0x42524157u);
    }
    if ( a4 )
      *a4 = 0LL;
  }
  return (unsigned int)v8;
}
