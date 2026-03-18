/*
 * XREFs of ACPIGetConvertToPnpID @ 0x1C0026940
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C000DA00 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIWideStringToAnsiHelper @ 0x1C0026A08 (ACPIWideStringToAnsiHelper.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0026A44 (ACPIGetConvertToPnpIDWide.c)
 */

__int64 __fastcall ACPIGetConvertToPnpID(int a1, int a2, int a3, int a4, _QWORD *a5, unsigned int *a6)
{
  int v6; // ebx
  unsigned int v7; // r11d
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0;
  v6 = ACPIGetConvertToPnpIDWide(a1, a2, a3, a4, (__int64)a5, (__int64)v9);
  if ( v6 >= 0 )
  {
    ACPIWideStringToAnsiHelper(*a5, v9[0]);
    if ( a6 )
      *a6 = v7 >> 1;
  }
  return (unsigned int)v6;
}
