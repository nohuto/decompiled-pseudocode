/*
 * XREFs of LockProcessByClientId @ 0x1C00921C0
 * Callers:
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0012C30 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     UserFindBaseWindowHandle @ 0x1C00EC0BC (UserFindBaseWindowHandle.c)
 * Callees:
 *     LockProcessByClientIdEx @ 0x1C0092324 (LockProcessByClientIdEx.c)
 */

__int64 __fastcall LockProcessByClientId(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = -1;
  result = LockProcessByClientIdEx(a1, a2, &v4);
  if ( (int)result >= 0 && v4 != gSessionId )
  {
    ObfDereferenceObject(*a2);
    *a2 = 0LL;
    return 3221225473LL;
  }
  return result;
}
