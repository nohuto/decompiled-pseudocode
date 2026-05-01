/*
 * XREFs of ?GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z @ 0x180175B2C
 * Callers:
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180011630 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 * Callees:
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180177134 (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromWindow(CallerIdentity *this, _QWORD *a2, void **a3)
{
  void **v4; // r8
  signed int LastError; // eax
  signed int v6; // ecx
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( GetWindowThreadProcessId((HWND)this, &dwProcessId) )
  {
    return (unsigned int)CallerIdentity::GetPackageSidFromProcess(dwProcessId, a2, v4);
  }
  else
  {
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( v6 >= 0 )
      return (unsigned int)-2147467259;
  }
  return (unsigned int)v6;
}
