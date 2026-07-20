/*
 * XREFs of SmpUpdatePagingFileSizes @ 0x140008120
 * Callers:
 *     SmpCreateWorkingSetSwapPagingFile @ 0x140007D28 (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpProcessPagefileDescriptor @ 0x140009250 (SmpProcessPagefileDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmpUpdatePagingFileSizes(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  bool result; // al

  v2 = *a1;
  v3 = *a2;
  if ( (unsigned __int64)*a1 > 0xFFFFFFFF000LL )
    v2 = 0xFFFFFFFF000LL;
  result = (unsigned __int64)*a1 > 0xFFFFFFFF000LL;
  if ( v3 > 0xFFFFFFFF000LL )
  {
    result = 1;
    v3 = 0xFFFFFFFF000LL;
  }
  if ( result )
  {
    *a1 = v2;
    *a2 = v3;
  }
  return result;
}
