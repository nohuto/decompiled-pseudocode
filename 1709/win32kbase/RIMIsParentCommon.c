/*
 * XREFs of RIMIsParentCommon @ 0x1C000A3BC
 * Callers:
 *     RIMFindInputDeviceForConfig @ 0x1C0008DD8 (RIMFindInputDeviceForConfig.c)
 *     RIMFindConfigDeviceForInput @ 0x1C0009180 (RIMFindConfigDeviceForInput.c)
 *     RIMFindSiblingMouseDevice @ 0x1C000A2DC (RIMFindSiblingMouseDevice.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C01074D8 (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsParentCommon(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5)
{
  unsigned int v5; // edi
  unsigned int v7; // eax

  v5 = 0;
  if ( *(_WORD *)(a3 + 110) == a4 && *(_WORD *)(a3 + 112) == a5 )
  {
    v7 = *(_DWORD *)(a1 + 336);
    if ( v7 == *(_DWORD *)(a2 + 336)
      && (!v7 || RtlCompareMemory(*(const void **)(a1 + 328), *(const void **)(a2 + 328), v7) == v7) )
    {
      return 1;
    }
  }
  return v5;
}
