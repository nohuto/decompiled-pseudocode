/*
 * XREFs of WinSqmEndSession @ 0x1C0065EB4
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0066D40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WinSqmEventEnabled @ 0x1C0065B00 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0065B50 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C0065F5C (-UnregisterWinSqmProvider@@YAKXZ.c)
 *     WinSqmEventWrite @ 0x1C006D1A4 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

int WinSqmEndSession()
{
  struct _GUID *v0; // rbx
  int result; // eax
  int v2; // esi
  void *Data4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData[2]; // [rsp+20h] [rbp-38h] BYREF

  v0 = gSqmSession;
  memset(UserData, 0, sizeof(UserData));
  result = (_DWORD)gSqmSession - 1;
  v2 = 0;
  if ( (unsigned __int64)&gSqmSession[-1].Data4[7] <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(gSqmSession) )
    {
      Data4 = v0[1].Data4;
      v2 = 1;
    }
    else
    {
      Data4 = v0;
    }
    result = WinSqmEventEnabled(&SQM_END_SESSION, Data4);
    if ( result )
    {
      UserData[0].Reserved = 0;
      UserData[1].Reserved = 0;
      UserData[1].Ptr = (ULONGLONG)&unk_1C018E930;
      UserData[0].Ptr = (ULONGLONG)Data4;
      UserData[0].Size = 16;
      UserData[1].Size = 4;
      result = WinSqmEventWrite(&SQM_END_SESSION, 2u, UserData);
    }
    if ( v2 )
    {
      Win32FreePool((__int64)v0);
      return UnregisterWinSqmProvider();
    }
  }
  return result;
}
