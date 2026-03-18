/*
 * XREFs of RIMFindConfigDeviceForInput @ 0x1C0009180
 * Callers:
 *     RIMConfigurePointerDevice @ 0x1C000B1CC (RIMConfigurePointerDevice.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1C000A3BC (RIMIsParentCommon.c)
 */

__int64 __fastcall RIMFindConfigDeviceForInput(__int64 a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v4; // edi
  __int64 i; // rbx

  v4 = 0;
  *a4 = 0LL;
  for ( i = *(_QWORD *)(a1 + 552); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (*(_DWORD *)(i + 184) & 0x200) == 0
      && *(_BYTE *)(i + 48) == 3
      && (unsigned int)RIMIsParentCommon(
                         a3,
                         i,
                         a2,
                         *(unsigned __int16 *)(*(_QWORD *)(i + 456) + 110LL),
                         *(_WORD *)(*(_QWORD *)(i + 456) + 112LL)) )
    {
      v4 = 1;
      *a4 = i;
      return v4;
    }
  }
  return v4;
}
