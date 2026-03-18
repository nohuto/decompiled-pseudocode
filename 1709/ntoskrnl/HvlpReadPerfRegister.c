/*
 * XREFs of HvlpReadPerfRegister @ 0x14017ADC4
 * Callers:
 *     HvlReadPerfIoPort @ 0x14017ABE0 (HvlReadPerfIoPort.c)
 *     HvlReadPerfMsr @ 0x14017AC60 (HvlReadPerfMsr.c)
 * Callees:
 *     HvcallpExtendedFastHypercallWithOutput @ 0x14018AAD0 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpReadPerfRegister(int a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // ecx
  int v7; // [rsp+20h] [rbp-38h]
  _DWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF

  v8[1] = 0;
  v8[0] = a1;
  v9 = a2;
  v7 = 1;
  v4 = HvcallpExtendedFastHypercallWithOutput(65564, (unsigned int)v8, 1, (unsigned int)&v10, v7);
  v5 = 0;
  if ( v4 )
    return (unsigned int)HvlpHvToNtStatus(v4);
  else
    *a3 = v10;
  return v5;
}
