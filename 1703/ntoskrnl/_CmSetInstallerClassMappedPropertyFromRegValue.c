/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140741130
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140740D1C (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _RegRtlSetValue @ 0x140456A24 (_RegRtlSetValue.c)
 *     _PnpOpenPropertiesKey @ 0x140487174 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404E2590 (_CmOpenInstallerClassRegKey.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromRegValue(
        __int64 *a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        ULONG a7)
{
  int v7; // r11d
  int v8; // ebx
  DEVPROPKEY **v10; // r9
  unsigned int i; // r10d
  DEVPROPKEY *v15; // rdx
  DEVPROPKEY **v16; // rsi
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  const WCHAR *v20; // r14
  ULONG v21; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  wchar_t *v27; // r9
  HANDLE v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  HANDLE v31; // rdx
  __int64 v32; // rax
  HANDLE v33; // rcx
  int v34; // eax
  __int64 v36; // [rsp+28h] [rbp-38h]
  int v37; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v38; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v38 = 0LL;
  Handle = 0LL;
  v10 = &off_14074BF30;
  for ( i = 0; i < 0xD; ++i )
  {
    v15 = *v10;
    v16 = v10;
    if ( v7 == (*v10)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v16 = 0LL;
    v10 += 4;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v18 = *((_DWORD *)v16 + 2);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 != 18 )
        return (unsigned int)-1073741811;
    }
    else if ( a5 >= 2 )
    {
      return (unsigned int)-1073741811;
    }
  }
  if ( a3 || (v8 = CmOpenInstallerClassRegKey((int)a1, a2, 0LL, (__int64)v10, 3, 0, (__int64)&v38, 0LL), v8 >= 0) )
  {
    v19 = *(_DWORD *)(a4 + 16);
    v20 = (const WCHAR *)v16[2];
    v21 = *((_DWORD *)v16 + 6);
    if ( v19 == 7 )
    {
      v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
      if ( !v22 )
        goto LABEL_36;
    }
    if ( v19 == 8 )
    {
      v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( !v23 )
        goto LABEL_36;
    }
    if ( v19 == 9 )
    {
      v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
        v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
      if ( !v24 )
        goto LABEL_36;
    }
    if ( v19 == 10 )
    {
      v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
        v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
      if ( !v25 )
        goto LABEL_36;
    }
    if ( v19 != 15 )
      goto LABEL_51;
    v26 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_FSFilterClass;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_FSFilterClass )
      v26 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
    if ( v26 )
    {
LABEL_51:
      if ( v19 != 2 )
        goto LABEL_65;
      v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
        v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
      if ( v30 )
      {
LABEL_65:
        if ( v19 != 3 )
          goto LABEL_66;
        v32 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassName.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassName.fmtid.Data1 )
          v32 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassName.fmtid.Data4;
        if ( v32 || a7 <= 0x40 )
        {
LABEL_66:
          v33 = v38;
          if ( a3 )
            v33 = a3;
          v34 = RegRtlSetValue(v33, v20, v21, a6, a7);
          if ( v34 < 0 )
            v8 = v34;
          goto LABEL_70;
        }
        goto LABEL_37;
      }
      if ( !a7 )
      {
LABEL_37:
        v8 = -1073741811;
        goto LABEL_70;
      }
      if ( *a6 == 0xFF )
      {
        v37 = 1;
      }
      else
      {
        if ( *a6 )
          goto LABEL_37;
        v37 = 0;
      }
      v31 = v38;
      if ( a3 )
        v31 = a3;
      v8 = PnpOpenPropertiesKey(a1, (__int64)v31, 0LL, 2u, 1, v36, &Handle);
      if ( v8 < 0 )
        goto LABEL_70;
      v28 = Handle;
      v27 = (wchar_t *)&v37;
    }
    else
    {
LABEL_36:
      if ( !a7 )
        goto LABEL_37;
      if ( *a6 == 0xFF )
      {
        v27 = L"1";
      }
      else
      {
        if ( *a6 )
          goto LABEL_37;
        v27 = (wchar_t *)L"0";
      }
      v28 = v38;
      if ( a3 )
        v28 = a3;
    }
    v29 = RegRtlSetValue(v28, v20, v21, v27, 4u);
    if ( v29 == -1073741444 )
    {
      v8 = -1073741772;
    }
    else if ( v29 < 0 )
    {
      v8 = v29;
    }
  }
LABEL_70:
  if ( Handle )
    ZwClose(Handle);
  if ( v38 )
    ZwClose(v38);
  return (unsigned int)v8;
}
