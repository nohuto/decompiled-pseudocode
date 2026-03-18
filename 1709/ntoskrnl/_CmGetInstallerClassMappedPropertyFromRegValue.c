/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14045A670
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14045A440 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14078421C (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _CmOpenInstallerClassRegKey @ 0x14051D7B8 (_CmOpenInstallerClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x14051FA08 (_PnpOpenPropertiesKey.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1405229BC (_PnpCtxRegQueryValueIndirect.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8)
{
  _BYTE *v9; // r12
  DEVPROPKEY **v12; // rdx
  int v13; // r10d
  int v14; // ebx
  unsigned int v15; // r9d
  DEVPROPKEY *v16; // r8
  DEVPROPKEY **v17; // rsi
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // eax
  int v21; // edx
  DEVPROPKEY *v22; // r8
  int v23; // ecx
  __int64 v25; // rcx
  HANDLE v26; // rcx
  int Value; // eax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // edi
  const wchar_t *v36; // r8
  int v37; // edx
  int ValueIndirect; // eax
  __int64 v39; // rax
  HANDLE v40; // rdx
  int v41; // eax
  int v42; // [rsp+20h] [rbp-69h]
  _BYTE v43[4]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v44; // [rsp+44h] [rbp-45h] BYREF
  __int64 v45; // [rsp+50h] [rbp-39h]
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  _DWORD *v47; // [rsp+60h] [rbp-29h]
  HANDLE KeyHandle; // [rsp+68h] [rbp-21h]
  wchar_t Str2[12]; // [rsp+70h] [rbp-19h] BYREF

  v9 = (_BYTE *)a6;
  v45 = a1;
  v47 = a8;
  v12 = &off_14078E7D0;
  v13 = *(_DWORD *)(a4 + 16);
  v14 = 0;
  Handle = 0LL;
  v15 = 0;
  KeyHandle = 0LL;
  v44 = 0LL;
  v43[0] = 0;
  do
  {
    v16 = *v12;
    v17 = v12;
    if ( v13 == (*v12)->pid )
    {
      v18 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v18 )
        break;
    }
    ++v15;
    v12 += 4;
    v17 = 0LL;
  }
  while ( v15 < 0xD );
  if ( !v17 )
    return (unsigned int)-1073741802;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v19 = a7;
    v9 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
  }
  else
  {
    v19 = 0;
  }
  if ( a3 || (v14 = CmOpenInstallerClassRegKey(v45, a2, (_DWORD)v16, 0, 1, 0, (__int64)&Handle, 0LL), v14 >= 0) )
  {
    v20 = *(_DWORD *)(a4 + 16);
    if ( v20 == 7 )
    {
      v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
        v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
      if ( !v29 )
        goto LABEL_33;
    }
    if ( v20 == 8 )
    {
      v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( !v30 )
        goto LABEL_33;
    }
    if ( v20 == 9 )
    {
      v31 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
        v31 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
      if ( !v31 )
        goto LABEL_33;
    }
    if ( v20 == 10 )
    {
      v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
        v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
      if ( !v25 )
        goto LABEL_33;
    }
    if ( v20 == 15 )
    {
      v32 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_FSFilterClass;
      if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_FSFilterClass )
        v32 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
      if ( !v32 )
      {
LABEL_33:
        v26 = Handle;
        LODWORD(v44) = 22;
        if ( a3 )
          v26 = a3;
        Value = RegRtlQueryValue(v26, (__int64)&v44);
        if ( Value != -1073741772 && Value != -1073741444 )
        {
          if ( Value >= 0 )
          {
            *v47 = 1;
            *a5 = *((_DWORD *)v17 + 2);
            if ( v19 )
            {
              Str2[10] = 0;
              v33 = wcsicmp(L"0", Str2);
LABEL_67:
              *v9 = -(v33 != 0);
              goto LABEL_22;
            }
            goto LABEL_66;
          }
          goto LABEL_65;
        }
        goto LABEL_21;
      }
    }
    if ( v20 == 2 )
    {
      v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1 )
        v34 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_Name.fmtid.Data4;
      if ( !v34 )
      {
        v35 = 0;
        v14 = -1073741275;
        while ( 1 )
        {
          if ( v35 )
          {
            v36 = &word_1405F52C0;
          }
          else
          {
            v36 = (const wchar_t *)v17[2];
            if ( !v36 )
              goto LABEL_22;
          }
          v37 = (int)Handle;
          LODWORD(v44) = v19;
          if ( a3 )
            v37 = (int)a3;
          ValueIndirect = PnpCtxRegQueryValueIndirect(
                            v45,
                            v37,
                            (_DWORD)v36,
                            (unsigned int)&v44 + 4,
                            (__int64)v9,
                            (__int64)&v44,
                            (__int64)v43);
          v23 = ValueIndirect;
          if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
            break;
          if ( ++v35 >= 2 )
            goto LABEL_22;
        }
        if ( !ValueIndirect || (v14 = ValueIndirect, ValueIndirect == -1073741789) )
          v14 = 0;
        if ( v14 < 0 )
          goto LABEL_22;
        goto LABEL_39;
      }
      v39 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
        v39 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
      if ( !v39 )
      {
        v40 = Handle;
        if ( a3 )
          v40 = a3;
        LOBYTE(v42) = 0;
        LODWORD(v44) = 4;
        v41 = PnpOpenPropertiesKey(v45, v40, 0LL, 1LL, v42);
        v14 = v41;
        if ( v41 != -1073741772 )
        {
          if ( v41 < 0 )
            goto LABEL_22;
          Value = RegRtlQueryValue(KeyHandle, (__int64)&v44);
          if ( Value != -1073741772 && Value != -1073741444 )
          {
            if ( Value >= 0 )
            {
              *v47 = 1;
              *a5 = *((_DWORD *)v17 + 2);
              if ( v19 )
              {
                v33 = v45;
                goto LABEL_67;
              }
LABEL_66:
              v14 = -1073741789;
              goto LABEL_22;
            }
LABEL_65:
            v14 = Value;
            goto LABEL_22;
          }
        }
LABEL_21:
        v14 = -1073741275;
        goto LABEL_22;
      }
    }
    v21 = (int)Handle;
    v22 = v17[2];
    if ( a3 )
      v21 = (int)a3;
    LODWORD(v44) = v19;
    v23 = PnpCtxRegQueryValueIndirect(
            v45,
            v21,
            (_DWORD)v22,
            (unsigned int)&v44 + 4,
            (__int64)v9,
            (__int64)&v44,
            (__int64)v43);
    if ( v23 == -1073741772 || v23 == -1073741444 )
      goto LABEL_21;
    if ( v23 && v23 != -1073741789 )
    {
      v14 = v23;
      goto LABEL_22;
    }
LABEL_39:
    *v47 = v44;
    v28 = *((_DWORD *)v17 + 2);
    *a5 = v28;
    if ( v23 || !v19 )
      v14 = -1073741789;
    if ( v43[0] && v28 == 18 )
      *a5 = 25;
  }
LABEL_22:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v14;
}
