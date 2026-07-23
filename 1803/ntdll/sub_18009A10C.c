/*
 * XREFs of sub_18009A10C @ 0x18009A10C
 * Callers:
 *     sub_18009924C @ 0x18009924C (sub_18009924C.c)
 *     sub_180099698 @ 0x180099698 (sub_180099698.c)
 *     sub_1800996E8 @ 0x1800996E8 (sub_1800996E8.c)
 * Callees:
 *     AlpcMaxAllowedMessageLength @ 0x1800833A0 (AlpcMaxAllowedMessageLength.c)
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

ULONG __fastcall sub_18009A10C(unsigned __int16 **a1)
{
  ULONG result; // eax
  bool v3; // sf
  unsigned __int16 *v4; // rcx

  if ( a1 )
  {
    v3 = *((_DWORD *)a1 + 2) - 2 < 0;
    *((_DWORD *)a1 + 2) -= 2;
    if ( v3 )
    {
      return AlpcMaxAllowedMessageLength();
    }
    else
    {
      v4 = *a1;
      result = *v4;
      *a1 = v4 + 1;
    }
  }
  else
  {
    sub_18008B020();
    return 0xFFFF;
  }
  return result;
}
