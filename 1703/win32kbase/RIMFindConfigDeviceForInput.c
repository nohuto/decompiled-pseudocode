/*
 * XREFs of RIMFindConfigDeviceForInput @ 0x1C008D440
 * Callers:
 *     RIMConfigurePointerDevice @ 0x1C008D290 (RIMConfigurePointerDevice.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1C0007984 (RIMIsParentCommon.c)
 */

__int64 __fastcall RIMFindConfigDeviceForInput(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
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
                         *(_WORD *)(*(_QWORD *)(i + 456) + 110LL),
                         *(_WORD *)(*(_QWORD *)(i + 456) + 112LL)) )
    {
      v4 = 1;
      *a4 = i;
      return v4;
    }
  }
  return v4;
}
