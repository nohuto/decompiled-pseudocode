/*
 * XREFs of HvlSvmAttachPasidSpace @ 0x1401E8100
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x14018AD70 (HvcallpExtendedFastHypercall.c)
 *     HvlpDepositPages @ 0x1401E567C (HvlpDepositPages.c)
 *     HvlpAttachRootSvmDevice @ 0x1401E8A20 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401E8ADC (HvlpDetachRootSvmDevice.c)
 *     HvlpHvToNtStatus @ 0x1401EA4A4 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmAttachPasidSpace(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  char v4; // si
  unsigned int v7; // edi
  int v8; // ebx
  unsigned __int16 v9; // ax
  _DWORD v11[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]

  v4 = 0;
  v7 = a1;
  if ( (HvlpFlags & 2) != 0 )
  {
    v8 = HvlpAttachRootSvmDevice(a1, a4);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v4 = 1;
  }
  v11[0] = v7;
  v11[1] = a2;
  v12 = a3;
  while ( 1 )
  {
    v9 = HvcallpExtendedFastHypercall(65698LL, (__int64)v11, 16LL);
    if ( (HvlpFlags & 2) == 0 || v9 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
    {
      v8 = -1073741670;
      goto LABEL_10;
    }
  }
  v8 = HvlpHvToNtStatus(v9);
  if ( v8 >= 0 )
    return (unsigned int)v8;
LABEL_10:
  if ( v4 )
    HvlpDetachRootSvmDevice(v7);
  return (unsigned int)v8;
}
