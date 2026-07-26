/*
 * XREFs of ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00B670C
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001A5E8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00BB394 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

bool __fastcall ndisIsNetSetupV2Interface(const struct _UNICODE_STRING *a1)
{
  bool v2; // bl
  HANDLE Handle[2]; // [rsp+20h] [rbp-228h] BYREF
  wchar_t Dest[256]; // [rsp+30h] [rbp-218h] BYREF

  memset(Dest, 0, 0x100uLL);
  if ( (int)RtlStringCchPrintfW(
              Dest,
              256LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces\\%wZ",
              a1) < 0 )
    return 0;
  Handle[0] = 0LL;
  v2 = (int)KRegKey::Open((KRegKey *)Handle, 1u, Dest, 0LL) >= 0;
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return v2;
}
