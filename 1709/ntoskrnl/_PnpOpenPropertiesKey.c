/*
 * XREFs of _PnpOpenPropertiesKey @ 0x14051FA08
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14045A670 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1405199A8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14051D0E8 (_CmGetInstallerClassRegPropWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x14051F7DC (_PnpGetGenericStoreProperty.c)
 *     _PnpSetPropertyWorker @ 0x14053034C (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x14059B510 (_PnpDeletePropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405A48C8 (_PnpGetGenericStorePropertyKeys.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140780680 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140782FD0 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140783624 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1407837E4 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1407850A4 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140785500 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1400DEC00 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x1400DEF40 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x140485620 (RtlValidSecurityDescriptor.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x140530B64 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCreateTree @ 0x140533240 (_PnpCtxRegCreateTree.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14057B66C (_PnpGetPropertiesSecurityDescriptor.c)
 */

__int64 __fastcall PnpOpenPropertiesKey(__int64 *a1, int a2, const wchar_t *a3, int a4, char a5, __int64 a6, void **a7)
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
  int v21; // r9d
  unsigned int v22; // edx
  int Tree; // eax
  int v25; // [rsp+48h] [rbp-E0h]
  size_t pcchLength[2]; // [rsp+50h] [rbp-D8h] BYREF
  wchar_t pszDest[64]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = 0;
  v25 = a2;
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
      v15 = *a1;
    else
      LODWORD(v15) = 0;
    v16 = SysCtxRegOpenKey(v15, v25, (_DWORD)PoolWithTag, 0, a4, (__int64)a7);
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
    a2 = v25;
  }
  if ( a1 )
    v18 = *a1;
  else
    LODWORD(v18) = 0;
  Key = SysCtxRegOpenKey(v18, a2, (unsigned int)L"Properties", 0, v12, (__int64)a7);
  if ( Key != -1073741772 )
  {
LABEL_22:
    if ( Key == -1073741444 )
    {
LABEL_39:
      v7 = -1073741772;
LABEL_25:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      goto LABEL_11;
    }
    if ( Key >= 0 )
    {
      if ( !a3 )
        goto LABEL_25;
      v11 = *a7;
      v22 = (unsigned int)*a7;
      *a7 = 0LL;
      Tree = PnpCtxRegCreateTree((_DWORD)a1, v22, (_DWORD)a3, 0, a4, 0LL, (__int64)a7, 0LL);
      if ( Tree != -1073741444 )
      {
        if ( Tree < 0 )
          v7 = Tree;
        goto LABEL_25;
      }
      goto LABEL_39;
    }
LABEL_28:
    v7 = Key;
    goto LABEL_25;
  }
  if ( !a5 )
    goto LABEL_28;
  PropertiesSecurityDescriptor = (void *)PnpGetPropertiesSecurityDescriptor();
  v9 = PropertiesSecurityDescriptor;
  if ( PropertiesSecurityDescriptor )
  {
    if ( !RtlValidSecurityDescriptor(PropertiesSecurityDescriptor) )
    {
      v7 = -1073741595;
      goto LABEL_25;
    }
    Key = PnpCtxRegCreateKey((_DWORD)a1, v25, (unsigned int)L"Properties", v21, a4, (__int64)v9, (__int64)a7, 0LL);
    goto LABEL_22;
  }
  v7 = -1073741595;
LABEL_11:
  if ( PoolWithTag && PoolWithTag != pszDest )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v7;
}
