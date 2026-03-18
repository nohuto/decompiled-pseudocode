/*
 * XREFs of RIMIsParentCommon @ 0x1C0007984
 * Callers:
 *     RIMFindInputDeviceForConfig @ 0x1C00077B0 (RIMFindInputDeviceForConfig.c)
 *     RIMFindSiblingMouseDevice @ 0x1C00078A4 (RIMFindSiblingMouseDevice.c)
 *     RIMFindConfigDeviceForInput @ 0x1C008D440 (RIMFindConfigDeviceForInput.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C01067F0 (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsParentCommon(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5)
{
  __int64 v5; // r10
  unsigned int v6; // edi

  v5 = *(unsigned int *)(a1 + 336);
  v6 = 0;
  if ( *(_WORD *)(a3 + 110) == a4
    && *(_WORD *)(a3 + 112) == a5
    && (_DWORD)v5 == *(_DWORD *)(a2 + 336)
    && (!(_DWORD)v5
     || RtlCompareMemory(*(const void **)(a1 + 328), *(const void **)(a2 + 328), *(unsigned int *)(a1 + 336)) == v5) )
  {
    return 1;
  }
  return v6;
}
