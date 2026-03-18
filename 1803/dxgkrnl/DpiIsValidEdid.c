/*
 * XREFs of DpiIsValidEdid @ 0x1C003C5A8
 * Callers:
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C01FB7CC (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C020C0EC (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C020C50C (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?DpiEdidCheckSum@@YAEPEADK@Z @ 0x1C003BF00 (-DpiEdidCheckSum@@YAEPEADK@Z.c)
 */

bool __fastcall DpiIsValidEdid(char *a1)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == -256 && (LOBYTE(v1) = 0, *((_DWORD *)a1 + 1) == 0xFFFFFF) )
  {
    v2 = 128LL;
  }
  else
  {
    if ( (v1 & 0xF0) != 0x20 )
      return 0;
    v2 = 256LL;
  }
  return DpiEdidCheckSum(a1, v2);
}
