/*
 * XREFs of HvlSvmAttachPasidSpace @ 0x14022AB30
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 *     HvlpAttachRootSvmDevice @ 0x14022B4A4 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x14022B568 (HvlpDetachRootSvmDevice.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmAttachPasidSpace(unsigned int a1, int a2, int a3, unsigned int a4)
{
  char v4; // si
  __int64 v5; // rdi
  int v8; // ebx
  unsigned __int16 v9; // ax
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+3Ch] [rbp-Ch]

  v4 = 0;
  v5 = a1;
  if ( (HvlpFlags & 2) != 0 )
  {
    v8 = HvlpAttachRootSvmDevice(a1, a4);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v4 = 1;
  }
  v12 = a2;
  v13 = a3;
  v11 = v5;
  while ( 1 )
  {
    v9 = HvcallpExtendedFastHypercall(65698LL, (__int64)&v11, 16LL);
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
    HvlpDetachRootSvmDevice((unsigned int)v5);
  return (unsigned int)v8;
}
