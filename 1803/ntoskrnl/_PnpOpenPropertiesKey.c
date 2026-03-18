/*
 * XREFs of _PnpOpenPropertiesKey @ 0x14050421C
 * Callers:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404908C8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpGetGenericStoreProperty @ 0x140503E94 (_PnpGetGenericStoreProperty.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14056B1FC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1405CD6FC (_CmGetInstallerClassRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x1405D3304 (_PnpSetPropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405DB02C (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x1405E70CC (_PnpDeletePropertyWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1407E943C (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1407ED6B0 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1407EDE60 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1407EE020 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1407EFD6C (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1407F01D0 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14006DC90 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x1404C1B80 (RtlValidSecurityDescriptor.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateTree @ 0x140586F54 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCreateKey @ 0x1405D3598 (_PnpCtxRegCreateKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405E0F7C (_PnpGetPropertiesSecurityDescriptor.c)
 */

__int64 __fastcall PnpOpenPropertiesKey(__int64 a1, int a2, const wchar_t *a3, int a4, char a5, __int64 a6, void **a7)
{
  NTSTATUS v7; // ebx
  void *v9; // rbp
  wchar_t *PoolWithTag; // rsi
  void *v11; // r12
  int v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v18; // rcx
  int Key; // eax
  void *PropertiesSecurityDescriptor; // rax
  unsigned int v21; // edx
  int Tree; // eax
  int v24; // [rsp+48h] [rbp-E0h]
  size_t pcchLength[2]; // [rsp+50h] [rbp-D8h] BYREF
  wchar_t pszDest[64]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = 0;
  v24 = a2;
  v9 = 0LL;
  PoolWithTag = 0LL;
  v11 = 0LL;
  *a7 = 0LL;
  v12 = a4;
  if ( a3 )
  {
    v7 = RtlUnalignedStringCchLengthW(a3, 0x200uLL, pcchLength);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( pcchLength[0] >= 0x30 )
    {
      v14 = LODWORD(pcchLength[0]) + 12;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                                 PagedPool,
                                 2LL * (unsigned int)(LODWORD(pcchLength[0]) + 12),
                                 0x52504E50u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
    }
    else
    {
      PoolWithTag = pszDest;
      v14 = 59;
    }
    v7 = RtlStringCchPrintfExW(PoolWithTag, v14, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", a3);
    if ( v7 < 0 )
      goto LABEL_11;
    if ( a1 )
      v15 = *(_QWORD *)(a1 + 224);
    else
      LODWORD(v15) = 0;
    v16 = SysCtxRegOpenKey(v15, v24, (_DWORD)PoolWithTag, 0, a4, (__int64)a7);
    if ( v16 == -1073741444 )
    {
      v7 = -1073741772;
      goto LABEL_11;
    }
    if ( !a5 || v16 != -1073741772 )
    {
      v7 = v16;
      goto LABEL_11;
    }
    v12 = a4;
    a2 = v24;
  }
  if ( a1 )
    v18 = *(_QWORD *)(a1 + 224);
  else
    LODWORD(v18) = 0;
  Key = SysCtxRegOpenKey(v18, a2, (unsigned int)L"Properties", 0, v12, (__int64)a7);
  if ( Key != -1073741772 )
    goto LABEL_29;
  if ( !a5 )
  {
LABEL_23:
    v7 = Key;
    goto LABEL_24;
  }
  PropertiesSecurityDescriptor = (void *)PnpGetPropertiesSecurityDescriptor();
  v9 = PropertiesSecurityDescriptor;
  if ( PropertiesSecurityDescriptor )
  {
    if ( !RtlValidSecurityDescriptor(PropertiesSecurityDescriptor) )
    {
      v7 = -1073741595;
      goto LABEL_24;
    }
    Key = PnpCtxRegCreateKey(a1, v24, (unsigned int)L"Properties", 0, a4, (__int64)v9, (__int64)a7, 0LL);
LABEL_29:
    if ( Key != -1073741444 )
    {
      if ( Key < 0 )
        goto LABEL_23;
      if ( !a3 )
      {
LABEL_24:
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_11;
      }
      v11 = *a7;
      v21 = (unsigned int)*a7;
      *a7 = 0LL;
      Tree = PnpCtxRegCreateTree(a1, v21, (_DWORD)a3, 0, a4, 0LL, (__int64)a7, 0LL);
      if ( Tree != -1073741444 )
      {
        if ( Tree < 0 )
          v7 = Tree;
        goto LABEL_24;
      }
    }
    v7 = -1073741772;
    goto LABEL_24;
  }
  v7 = -1073741595;
LABEL_11:
  if ( PoolWithTag && PoolWithTag != pszDest )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v7;
}
