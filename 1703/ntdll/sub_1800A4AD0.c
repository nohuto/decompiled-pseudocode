/*
 * XREFs of sub_1800A4AD0 @ 0x1800A4AD0
 * Callers:
 *     sub_1800A3C94 @ 0x1800A3C94 (sub_1800A3C94.c)
 *     sub_1800A40C8 @ 0x1800A40C8 (sub_1800A40C8.c)
 *     sub_1800A4118 @ 0x1800A4118 (sub_1800A4118.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 */

ULONG __fastcall sub_1800A4AD0(unsigned __int16 **a1)
{
  ULONG result; // eax
  int v3; // eax
  unsigned __int16 *v4; // rcx

  if ( a1 )
  {
    v3 = *((_DWORD *)a1 + 2) - 2;
    *((_DWORD *)a1 + 2) = v3;
    if ( v3 < 0 )
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
    sub_180095DE0();
    return 0xFFFF;
  }
  return result;
}
