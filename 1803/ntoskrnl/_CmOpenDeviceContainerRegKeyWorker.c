/*
 * XREFs of _CmOpenDeviceContainerRegKeyWorker @ 0x140586C28
 * Callers:
 *     _CmOpenDeviceContainerRegKey @ 0x140586B14 (_CmOpenDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140586E4C (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x140586F54 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKeyWorker(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *pszDest; // rdi
  int v12; // r12d
  SIZE_T v13; // r15
  int v14; // r9d
  signed int DeviceContainerRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  __int64 v17; // r14
  HANDLE v18; // rdx
  __int64 v19; // rcx
  int Tree; // ecx
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v27; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v29) = a4;
  pszDest = 0LL;
  v27 = 0LL;
  Handle = 0LL;
  v12 = 4;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_42;
  v13 = 260LL;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v13, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v13 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v13 >> 1,
                                  a2,
                                  a3,
                                  v14,
                                  v24,
                                  pszDest,
                                  cchDest,
                                  (__int64)&v29);
    if ( DeviceContainerRegKeyPath == -1073741789 )
    {
      ExFreePoolWithTag(pszDest, 0);
      v22 = 2LL * (unsigned int)v29;
      pszDest = 0LL;
      v13 = 0xFFFFFFFFLL;
      if ( v22 <= 0xFFFFFFFF )
        v13 = (unsigned int)v22;
      DeviceContainerRegKeyPath = v22 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v22 <= 0xFFFFFFFF )
        continue;
    }
    goto LABEL_6;
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_6:
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_24;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = (__int64)pszDest;
    if ( a1 )
      v23 = *(_QWORD *)(a1 + 224);
    else
      v23 = 0LL;
    DeviceContainerRegKeyPath = SysCtxRegOpenCurrentUserKey(v23, 0LL, 0x2000000LL, &Handle);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_24;
    v18 = Handle;
    goto LABEL_16;
  }
  DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_24;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v13
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
LABEL_42:
    DeviceContainerRegKeyPath = -1073741811;
    goto LABEL_24;
  }
  v17 = (__int64)(pszDest + 25);
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = pszDest + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(
         &`_CmOpenDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
         &DestinationString,
         1u) )
  {
    v12 = 10;
    v17 = (__int64)(pszDest + 50);
  }
  DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v12, (__int64)&v27);
  if ( DeviceContainerRegKeyPath >= 0 )
  {
    v18 = v27;
LABEL_16:
    if ( a6 )
    {
      Tree = PnpCtxRegCreateTree(a1, (_DWORD)v18, v17, 0, a5, 0LL, a7, (__int64)a8);
    }
    else
    {
      if ( a1 )
        v19 = *(_QWORD *)(a1 + 224);
      else
        v19 = 0LL;
      Tree = SysCtxRegOpenKey(v19, (__int64)v18, v17, 0, a5, a7);
      if ( Tree >= 0 )
        *a8 = 2;
    }
    if ( Tree == -1073741444 )
    {
      DeviceContainerRegKeyPath = -1073741595;
    }
    else if ( Tree < 0 )
    {
      DeviceContainerRegKeyPath = Tree;
    }
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
