/*
 * XREFs of _wcsupr @ 0x14015EE20
 * Callers:
 *     PfFileInfoNotify @ 0x140011F60 (PfFileInfoNotify.c)
 *     PfSnParametersRead @ 0x1405DC620 (PfSnParametersRead.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14077C3A8 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14077D278 (BiUpdateObjectReferenceInEfiEntry.c)
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
