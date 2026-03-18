/*
 * XREFs of _wcsupr @ 0x14016A3E0
 * Callers:
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 *     PfSnParametersRead @ 0x1405C8650 (PfSnParametersRead.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140737D3C (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140738B00 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsupr(wchar_t *String)
{
  wchar_t *i; // rdx

  for ( i = String; *i; ++i )
  {
    if ( (unsigned __int16)(*i - 97) <= 0x19u )
      *i -= 32;
  }
  return String;
}
