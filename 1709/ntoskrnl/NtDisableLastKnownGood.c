/*
 * XREFs of NtDisableLastKnownGood @ 0x1405F11C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x14055A49C (IopCreateRegistryKeyEx.c)
 */

NTSTATUS NtDisableLastKnownGood(void)
{
  NTSTATUS CachedContextBaseKey; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+28h] BYREF
  void *v5; // [rsp+70h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return -1073741727;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v5);
  if ( CachedContextBaseKey >= 0 )
  {
    ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
    *(_DWORD *)&ValueName.Length = 1572886;
    CachedContextBaseKey = IopCreateRegistryKeyEx(&KeyHandle, v5, &ValueName, 0xF003Fu, 0, 0LL);
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
