/*
 * XREFs of ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00DF04C
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00169DC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00B1388 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

bool __fastcall ndisIsNetSetupV1Interface(const struct _UNICODE_STRING *a1)
{
  bool v3; // bl
  HANDLE Handle[2]; // [rsp+20h] [rbp-228h] BYREF
  wchar_t Dest[256]; // [rsp+30h] [rbp-218h] BYREF

  memset(Dest, 0, 0x100uLL);
  if ( (int)RtlStringCchPrintfW(
              Dest,
              256LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup\\Interfaces\\%wZ",
              a1) < 0 )
    return 0;
  Handle[0] = 0LL;
  v3 = (int)KRegKey::Open((KRegKey *)Handle, 1u, Dest, 0LL) >= 0;
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return v3;
}
