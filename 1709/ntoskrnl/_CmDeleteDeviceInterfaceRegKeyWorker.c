/*
 * XREFs of _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14077ED08
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKey @ 0x14077EBD0 (_CmDeleteDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14051C998 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14051CD1C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14057EC84 (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140785700 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceRegKeyWorker(_QWORD *a1, __int64 a2, int a3, int a4, char a5)
{
  wchar_t *PoolWithTag; // rsi
  unsigned int v10; // r14d
  SIZE_T i; // rdx
  signed int DeviceInterfaceRegKeyPath; // ebx
  unsigned __int64 v13; // rcx
  const WCHAR *v14; // r15
  __int64 v15; // r9
  char *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r8
  signed int v19; // eax
  __int64 v20; // r8
  int v22; // [rsp+20h] [rbp-50h]
  size_t cchDest; // [rsp+30h] [rbp-40h]
  HANDLE v24; // [rsp+40h] [rbp-30h] BYREF
  char *v25; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+40h] BYREF

  PoolWithTag = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  Handle = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_40;
  v10 = (a3 & 0x200) != 0 ? 600 : 480;
  for ( i = v10; ; i = v10 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !PoolWithTag )
      break;
    LODWORD(cchDest) = v10 >> 1;
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                  v10 >> 1,
                                  a2,
                                  a3,
                                  a4,
                                  v22,
                                  PoolWithTag,
                                  cchDest,
                                  (unsigned int *)&v28);
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      goto LABEL_11;
    ExFreePoolWithTag(PoolWithTag, 0);
    v13 = 2LL * (unsigned int)v28;
    PoolWithTag = 0LL;
    v10 = -1;
    if ( v13 <= 0xFFFFFFFF )
      v10 = 2 * v28;
    DeviceInterfaceRegKeyPath = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_11;
  }
  DeviceInterfaceRegKeyPath = -1073741801;
LABEL_11:
  if ( DeviceInterfaceRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v14 = PoolWithTag;
      if ( a1 )
        v17 = *a1;
      else
        v17 = 0LL;
      DeviceInterfaceRegKeyPath = SysCtxRegOpenCurrentUserKey(v17, 0LL, 0x2000000LL, &v24);
      if ( DeviceInterfaceRegKeyPath < 0 )
        goto LABEL_41;
      v16 = (char *)v24;
      goto LABEL_24;
    }
    DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_41;
    if ( DestinationString.Length < v10
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v14 = PoolWithTag + 25;
      DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v25);
      if ( DeviceInterfaceRegKeyPath < 0 )
        goto LABEL_41;
      v16 = v25;
LABEL_24:
      if ( a3 == 49
        || (DeviceInterfaceRegKeyPath = CmOpenDeviceInterfaceRegKey(
                                          (__int64)a1,
                                          a2,
                                          0x30u,
                                          v15,
                                          1,
                                          0,
                                          (__int64)&Handle,
                                          0LL),
            DeviceInterfaceRegKeyPath >= 0) )
      {
        if ( a5 )
        {
          v18 = a1 && *a1 ? *(_QWORD *)(*a1 + 8LL) : 0LL;
          v19 = RegRtlDeleteTreeInternal(v16, v14, v18, 0);
        }
        else
        {
          v20 = a1 && *a1 ? *(_QWORD *)(*a1 + 8LL) : 0LL;
          v19 = RegRtlDeleteKeyTransacted(v16, v14, v20);
        }
        if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741444 )
          DeviceInterfaceRegKeyPath = v19;
      }
      goto LABEL_41;
    }
LABEL_40:
    DeviceInterfaceRegKeyPath = -1073741811;
  }
LABEL_41:
  if ( Handle )
    ZwClose(Handle);
  if ( v24 )
    ZwClose(v24);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
