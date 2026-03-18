/*
 * XREFs of _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14073A61C
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKey @ 0x14073A4E4 (_CmDeleteDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404E175C (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404E1AF0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceRegKeyWorker(_QWORD *a1, const wchar_t *a2, int a3, int a4, char a5)
{
  wchar_t *PoolWithTag; // rsi
  unsigned int v10; // r14d
  SIZE_T i; // rdx
  int DeviceInterfaceRegKeyPath; // ebx
  unsigned __int64 v13; // rax
  const WCHAR *v14; // r15
  __int64 v15; // r9
  char *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
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
    goto LABEL_39;
  v10 = (a3 & 0x200) != 0 ? 600 : 480;
  for ( i = v10; ; i = (unsigned int)v13 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !PoolWithTag )
      break;
    LODWORD(cchDest) = v10 >> 1;
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v10 >> 1, a2, a3, a4, v22, PoolWithTag, cchDest, &v28);
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      goto LABEL_9;
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = 0LL;
    v13 = 2LL * (unsigned int)v28;
    if ( v13 > 0xFFFFFFFF )
    {
      DeviceInterfaceRegKeyPath = -1073741675;
      goto LABEL_40;
    }
    v10 = 2 * v28;
  }
  DeviceInterfaceRegKeyPath = -1073741801;
LABEL_9:
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_40;
  if ( (a3 & 0x100) == 0 )
  {
    DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_40;
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
        goto LABEL_40;
      v16 = v25;
      goto LABEL_23;
    }
LABEL_39:
    DeviceInterfaceRegKeyPath = -1073741811;
    goto LABEL_40;
  }
  v14 = PoolWithTag;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  DeviceInterfaceRegKeyPath = SysCtxRegOpenCurrentUserKey(v17, 0LL, 0x2000000LL, &v24);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_40;
  v16 = (char *)v24;
LABEL_23:
  if ( a3 == 49
    || (DeviceInterfaceRegKeyPath = CmOpenDeviceInterfaceRegKey(
                                      (__int64)a1,
                                      (__int64)a2,
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
LABEL_40:
  if ( Handle )
    ZwClose(Handle);
  if ( v24 )
    ZwClose(v24);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
