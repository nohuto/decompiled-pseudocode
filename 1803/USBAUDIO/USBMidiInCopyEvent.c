/*
 * XREFs of USBMidiInCopyEvent @ 0x1C00263EC
 * Callers:
 *     USBMidiInProcessPin @ 0x1C0006690 (USBMidiInProcessPin.c)
 * Callees:
 *     memmove @ 0x1C000A240 (memmove.c)
 */

_DWORD *__fastcall USBMidiInCopyEvent(_DWORD *a1, _BYTE *a2, unsigned __int64 a3, unsigned __int64 a4, _DWORD *a5)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rdx
  _DWORD *result; // rax

  v8 = USBMidiInConvertCINToBytes[*a2 & 0xF];
  memmove((char *)a1 + (unsigned int)a1[1] + 8, a2 + 1, v8);
  if ( a4 >= a3 )
    v9 = (a4 - a3) / 0x2710;
  else
    LODWORD(v9) = 0;
  result = a5;
  *a1 = v9;
  a1[1] += v8;
  *a5 = a1[1] + 8;
  return result;
}
