/*
 * XREFs of _CmRemoveDeviceFromContainerWorker @ 0x1407819C0
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x140781880 (_CmRemoveDeviceFromContainer.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x14052DA0C (_PnpObjectRaisePropertyChangeEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1405847D8 (_PnpCtxRegQueryInfoKey.c)
 *     _CmDeleteDeviceContainer @ 0x140780918 (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmRemoveDeviceFromContainerWorker(__int64 *a1, __int64 a2, __int64 a3, const WCHAR *a4, _BYTE *a5)
{
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v20; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v17 = 0;
  *a5 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, &DestinationString);
  if ( CachedContextBaseKey >= 0 )
  {
    v10 = 0LL;
    if ( a1 )
      v10 = *a1;
    CachedContextBaseKey = SysCtxRegOpenKey(v10, *(__int64 *)&DestinationString.Length, a2, 0, 1u, (__int64)&v20);
    if ( CachedContextBaseKey >= 0 )
    {
      v11 = 0LL;
      if ( a1 )
        v11 = *a1;
      CachedContextBaseKey = SysCtxRegOpenKey(v11, (__int64)v20, (__int64)L"BaseContainers", 0, 1u, (__int64)&Handle);
      if ( CachedContextBaseKey >= 0 )
      {
        v12 = 0LL;
        if ( a1 )
          v12 = *a1;
        CachedContextBaseKey = SysCtxRegOpenKey(v12, (__int64)Handle, a3, 0, 3u, (__int64)&KeyHandle);
        if ( CachedContextBaseKey >= 0 )
        {
          if ( RtlInitUnicodeStringEx(&DestinationString, a4) >= 0 )
            ZwDeleteValueKey(KeyHandle, &DestinationString);
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v13, KeyHandle, 0LL, 0LL, &v17, 0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( !v17 )
            {
              if ( a1 && *a1 )
                v15 = *(_QWORD *)(*a1 + 8);
              else
                v15 = 0LL;
              RegRtlDeleteTreeInternal((char *)KeyHandle, 0LL, v15, 0);
            }
            CachedContextBaseKey = PnpCtxRegQueryInfoKey(v14, Handle, &v17, 0LL, 0LL, 0LL);
            if ( CachedContextBaseKey >= 0 )
            {
              if ( !v17 )
              {
                CachedContextBaseKey = CmDeleteDeviceContainer((__int64)a1, a2);
                if ( CachedContextBaseKey >= 0 )
                  *a5 = 1;
              }
              PnpObjectRaisePropertyChangeEvent(
                (__int64)a1,
                (__int64)a4,
                1LL,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_ContainerId);
            }
          }
        }
      }
    }
  }
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
    CachedContextBaseKey = 0;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v20 )
    ZwClose(v20);
  return (unsigned int)CachedContextBaseKey;
}
