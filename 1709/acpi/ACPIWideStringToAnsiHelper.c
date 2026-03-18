/*
 * XREFs of ACPIWideStringToAnsiHelper @ 0x1C0026A08
 * Callers:
 *     ACPIGetConvertToCompatibleID @ 0x1C0025FDC (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetConvertToInstanceID @ 0x1C0026318 (ACPIGetConvertToInstanceID.c)
 *     ACPIGetConvertToPnpID @ 0x1C0026940 (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToDeviceID @ 0x1C00269A4 (ACPIGetConvertToDeviceID.c)
 *     ACPIGetConvertToHardwareID @ 0x1C004E700 (ACPIGetConvertToHardwareID.c)
 *     ACPIGetConvertToString @ 0x1C004E824 (ACPIGetConvertToString.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIWideStringToAnsiHelper(_BYTE *a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  char *v5; // r10
  char result; // al

  if ( a1 && a2 > 2 )
  {
    v2 = 0LL;
    v3 = a2 >> 1;
    if ( (_DWORD)v3 )
    {
      v4 = a1;
      v2 = (unsigned int)v3;
      v5 = a1;
      do
      {
        result = *v5;
        v5 += 2;
        *v4++ = result;
        --v3;
      }
      while ( v3 );
    }
    a1[v2] = 0;
  }
  return result;
}
