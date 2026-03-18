/*
 * XREFs of _CmOpenDevicePanelRegKeyWorker @ 0x1407ED0A4
 * Callers:
 *     _CmOpenDevicePanelRegKey @ 0x1407ECF30 (_CmOpenDevicePanelRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x140586F54 (_PnpCtxRegCreateTree.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1407ECE68 (_CmGetDevicePanelRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDevicePanelRegKeyWorker(
        __int64 a1,
        const wchar_t *a2,
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
  signed int DevicePanelRegKeyPath; // ebx
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int16 Length; // bx
  __int64 v18; // rsi
  HANDLE v19; // rdx
  __int64 v20; // rcx
  int Tree; // ecx
  __int64 v22; // rcx
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
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    goto LABEL_36;
  v13 = 317LL;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v13, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v13 >> 1;
    DevicePanelRegKeyPath = CmGetDevicePanelRegKeyPath(
                              (unsigned int)v13 >> 1,
                              a2,
                              a3,
                              v16,
                              v24,
                              pszDest,
                              cchDest,
                              (unsigned int *)&v29);
    if ( DevicePanelRegKeyPath == -1073741789 )
    {
      ExFreePoolWithTag(pszDest, 0);
      v15 = 2LL * (unsigned int)v29;
      pszDest = 0LL;
      v13 = 0xFFFFFFFFLL;
      if ( v15 <= 0xFFFFFFFF )
        v13 = (unsigned int)v15;
      DevicePanelRegKeyPath = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v15 <= 0xFFFFFFFF )
        continue;
    }
    goto LABEL_10;
  }
  DevicePanelRegKeyPath = -1073741801;
LABEL_10:
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_37;
  if ( (a3 & 0x100) != 0 )
  {
    v18 = (__int64)pszDest;
    if ( a1 )
      v20 = *(_QWORD *)(a1 + 224);
    else
      v20 = 0LL;
    DevicePanelRegKeyPath = SysCtxRegOpenCurrentUserKey(v20, 0LL, 0x2000000LL, &Handle);
    if ( DevicePanelRegKeyPath < 0 )
      goto LABEL_37;
    v19 = Handle;
    goto LABEL_25;
  }
  DevicePanelRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_37;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v13
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_36:
    DevicePanelRegKeyPath = -1073741811;
    goto LABEL_37;
  }
  v18 = (__int64)(pszDest + 25);
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = pszDest + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(&`_CmDeleteDevicePanelRegKeyWorker'::`2'::DevicePanelsKeyPrefix, &DestinationString, 1u) )
  {
    v12 = 11;
    v18 = (__int64)(pszDest + 46);
  }
  DevicePanelRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v12, (__int64)&v27);
  if ( DevicePanelRegKeyPath >= 0 )
  {
    v19 = v27;
LABEL_25:
    if ( a6 )
    {
      Tree = PnpCtxRegCreateTree(a1, (__int64)v19, v18, 0LL, a5, 0LL);
    }
    else
    {
      if ( a1 )
        v22 = *(_QWORD *)(a1 + 224);
      else
        v22 = 0LL;
      Tree = SysCtxRegOpenKey(v22, (__int64)v19, v18, 0, a5, a7);
      if ( Tree >= 0 )
        *a8 = 2;
    }
    if ( Tree == -1073741444 )
    {
      DevicePanelRegKeyPath = -1073741595;
    }
    else if ( Tree < 0 )
    {
      DevicePanelRegKeyPath = Tree;
    }
  }
LABEL_37:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DevicePanelRegKeyPath;
}
