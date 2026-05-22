/*
 * XREFs of ?IsStartOfCapture@MPCSixDofProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18003DF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MPCSixDofProcessor::IsStartOfCapture(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char v4; // bl
  DWORD v6; // [rsp+60h] [rbp+18h] BYREF

  v4 = 1;
  if ( !byte_180136288 )
  {
    v6 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"CaptureDisabledFor6dof",
      0x10u,
      0LL,
      &dword_180136284,
      &v6);
    byte_180136288 = 1;
  }
  if ( dword_180136284 || (*((_BYTE *)a2 + 1168) & 0x3F) == 0 || *((_BYTE *)this + 3217) )
    return 0;
  return v4;
}
