/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromComposite @ 0x1405C47A4
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14056B000 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1407EEEE8 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromComposite(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r15
  unsigned int *v9; // rsi
  __int64 v11; // r14
  int v13; // r10d
  unsigned int v14; // ebp
  unsigned int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v19; // rax
  int ObjectProperty; // eax
  int v21; // eax
  unsigned int v23; // [rsp+B8h] [rbp+20h] BYREF

  v8 = a5;
  v9 = a8;
  v11 = a6;
  v23 = 0;
  v13 = 0;
  *a5 = 0;
  *v9 = 0;
  if ( v11 )
  {
    v14 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v14 = 0;
  }
  v15 = *(_DWORD *)(a4 + 16);
  if ( v15 < 2 )
    return (unsigned int)-1073741264;
  if ( v15 == 10 )
  {
    v19 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
      v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
    if ( !v19 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         a2,
                         2u,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_DeviceClass_Name,
                         (__int64)v8,
                         v11,
                         v14,
                         (__int64)&v23,
                         0);
      v13 = ObjectProperty;
      switch ( ObjectProperty )
      {
        case 0:
          goto LABEL_32;
        case -1073741789:
          goto LABEL_32;
        case -1073741275:
          v21 = PnpGetObjectProperty(
                  a1,
                  a2,
                  2u,
                  a3,
                  0LL,
                  (__int64)&DEVPKEY_DeviceClass_ClassName,
                  (__int64)v8,
                  v11,
                  v14,
                  (__int64)&v23,
                  0);
          v13 = v21;
          if ( !v21 || v21 == -1073741789 )
            goto LABEL_32;
          break;
      }
    }
  }
  else if ( v15 == 4 )
  {
    v16 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_Configurable )
      v16 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
    if ( !v16 )
    {
      v17 = PnpGetObjectProperty(
              a1,
              a2,
              2u,
              a3,
              0LL,
              (__int64)&DEVPKEY_DeviceClass_ConfigurableOverride,
              (__int64)v8,
              v11,
              v14,
              (__int64)&v23,
              0);
      v13 = v17;
      if ( v17 && v17 != -1073741789 )
      {
        if ( v17 == -1073741275 )
        {
          v13 = PnpGetObjectProperty(
                  a1,
                  a2,
                  2u,
                  a3,
                  0LL,
                  (__int64)&DEVPKEY_DeviceClass_ClassInstaller,
                  (__int64)v8,
                  0LL,
                  0,
                  (__int64)&v23,
                  0);
          if ( v13 == -1073741275 )
            v13 = PnpGetObjectProperty(
                    a1,
                    a2,
                    2u,
                    a3,
                    0LL,
                    (__int64)&DEVPKEY_DeviceClass_ClassCoInstallers,
                    (__int64)v8,
                    0LL,
                    0,
                    (__int64)&v23,
                    0);
          if ( v13 >= 0 || v13 == -1073741275 || v13 == -1073741789 )
          {
            *v9 = 1;
            *v8 = 17;
            if ( v14 < *v9 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              *(_BYTE *)v11 = (v13 != -1073741275) - 1;
              return 0;
            }
          }
        }
        return (unsigned int)v13;
      }
LABEL_32:
      *v9 = v23;
    }
  }
  return (unsigned int)v13;
}
