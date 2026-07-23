/*
 * XREFs of NtDisableLastKnownGood @ 0x1405F3D68
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x1405F7BC4 (IopCreateRegistryKeyEx.c)
 */

NTSTATUS NtDisableLastKnownGood(void)
{
  NTSTATUS CachedContextBaseKey; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+28h] BYREF
  __int64 v5; // [rsp+70h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return -1073741727;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v5);
  if ( CachedContextBaseKey >= 0 )
  {
    ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
    *(_DWORD *)&ValueName.Length = 1572886;
    CachedContextBaseKey = IopCreateRegistryKeyEx(&KeyHandle, v5, &ValueName, 983103LL, 0, 0LL);
    if ( CachedContextBaseKey >= 0 )
    {
      ValueName.Buffer = L"DisableLKG";
      Data = 1;
      *(_DWORD *)&ValueName.Length = 1441812;
      CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return CachedContextBaseKey;
}
