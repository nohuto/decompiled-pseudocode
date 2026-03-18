/*
 * XREFs of CmpStartRMLogs @ 0x14042E9F8
 * Callers:
 *     CmpTransInitializeTransaction @ 0x14042E514 (CmpTransInitializeTransaction.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpStartRMLog @ 0x14042EC9C (CmpStartRMLog.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUuidCreate @ 0x14054D440 (CmpUuidCreate.c)
 */

__int64 __fastcall CmpStartRMLogs(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // ebx
  bool v4; // bp
  __int64 v5; // rsi
  int started; // eax
  UUID v8; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 104);
  v3 = 0;
  if ( (v1 & 8) != 0 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( (v1 & 1) == 0 )
  {
    v4 = (int)CmpUuidCreate(&v8) >= 0;
    v5 = (*(_BYTE *)(a1 + 104) & 2) != 0 ? 4 : 0;
    CmpLockRegistryFreezeAware(0LL);
    started = CmpStartRMLog(a1, 0LL);
    v3 = started;
    if ( started < 0 && started != -1073741697 && started != -1073741757 && started != -1073741670 && v4 )
    {
      *(_DWORD *)(a1 + 104) &= ~2u;
      v3 = CmpStartRMLog(a1, &v8);
    }
    CmpUnlockRegistry();
    *(_DWORD *)(a1 + v5 + 108) = v3;
  }
  return v3;
}
