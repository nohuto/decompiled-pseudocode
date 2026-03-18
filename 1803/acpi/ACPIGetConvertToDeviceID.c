/*
 * XREFs of ACPIGetConvertToDeviceID @ 0x1C0025960
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0001F70 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIGetConvertToDeviceIDWide @ 0x1C00259C0 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIWideStringToAnsiHelper @ 0x1C003F6B8 (ACPIWideStringToAnsiHelper.c)
 */

__int64 __fastcall ACPIGetConvertToDeviceID(int a1, int a2, int a3, int a4, _QWORD *a5, unsigned int *a6)
{
  int v6; // ebx
  unsigned int v7; // r11d
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0;
  v6 = ACPIGetConvertToDeviceIDWide(a1, a2, a3, a4, (__int64)a5, (__int64)v9);
  if ( v6 >= 0 )
  {
    ACPIWideStringToAnsiHelper(*a5, v9[0]);
    if ( a6 )
      *a6 = v7 >> 1;
  }
  return (unsigned int)v6;
}
