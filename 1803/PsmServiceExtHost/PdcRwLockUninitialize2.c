/*
 * XREFs of PdcRwLockUninitialize2 @ 0x18006BEBC
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180038768 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientUnregister @ 0x18006B394 (Pdcv2ActivationClientUnregister.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall PdcRwLockUninitialize2(HANDLE *a1)
{
  DWORD result; // eax

  result = CloseHandle(*a1);
  if ( !result )
    return GetLastError();
  *a1 = 0LL;
  return result;
}
