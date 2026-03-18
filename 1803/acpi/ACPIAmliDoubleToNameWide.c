/*
 * XREFs of ACPIAmliDoubleToNameWide @ 0x1C00096D4
 * Callers:
 *     ACPIGetConvertToDeviceIDWide @ 0x1C00259C0 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C00260AC (ACPIGetConvertToPnpIDWide.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIAmliDoubleToNameWide(_WORD *a1, unsigned int a2, char a3)
{
  _WORD *v3; // r9
  __int64 result; // rax

  v3 = a1;
  if ( a3 )
  {
    v3 = a1 + 1;
    *a1 = 42;
  }
  *v3 = ((a2 >> 2) & 0x1F) + 64;
  v3[1] = ((a2 >> 13) & 7) + 8 * ((a2 & 3) + 8);
  v3[2] = ((a2 >> 8) & 0x1F) + 64;
  v3[3] = a0123456789abcd[BYTE2(a2) >> 4];
  v3[4] = a0123456789abcd[BYTE2(a2) & 0xF];
  v3[5] = a0123456789abcd[(unsigned __int64)HIWORD(a2) >> 12];
  result = a0123456789abcd[((unsigned __int64)HIWORD(a2) >> 8) & 0xF];
  *((_DWORD *)v3 + 3) = (unsigned __int16)result;
  return result;
}
