/*
 * XREFs of _CmSetDeviceMappedPropertyFromRegProp @ 0x140596CEC
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1404435D8 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _CmSetDeviceRegProp @ 0x1404DE39C (_CmSetDeviceRegProp.c)
 *     _PnpStringFromGuid @ 0x1404E2F18 (_PnpStringFromGuid.c)
 */

NTSTATUS __fastcall CmSetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int *a6,
        unsigned int a7)
{
  int v7; // edi
  DEVPROPKEY **v10; // r9
  unsigned int i; // r11d
  DEVPROPKEY *v14; // r10
  DEVPROPKEY **v15; // rdx
  __int64 v16; // r8
  int v17; // r8d
  unsigned int v18; // ebx
  unsigned int v19; // edi
  NTSTATUS result; // eax
  wchar_t *v21; // rax
  int v22; // ecx
  int *v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // [rsp+28h] [rbp-B0h]
  unsigned int v26; // [rsp+30h] [rbp-A8h]
  int v27; // [rsp+40h] [rbp-98h] BYREF
  wchar_t v28[40]; // [rsp+50h] [rbp-88h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v10 = &CmDeviceRegPropMap;
  for ( i = 0; i < 0x21; ++i )
  {
    v14 = *v10;
    v15 = v10;
    if ( v7 == (*v10)->pid )
    {
      v16 = *(_QWORD *)a4 - *(_QWORD *)&v14->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v14->fmtid.Data1 )
        v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v14->fmtid.Data4;
      if ( !v16 )
        break;
    }
    v15 = 0LL;
    v10 += 3;
  }
  if ( !v15 )
    return -1073741264;
  v17 = *((_DWORD *)v15 + 2);
  v18 = *((_DWORD *)v15 + 3);
  if ( a5 != v17 )
  {
    if ( a5 == 25 )
    {
      if ( v17 != 18 )
        return -1073741811;
    }
    else if ( a5 >= 2 )
    {
      return -1073741811;
    }
  }
  v19 = *((_DWORD *)v15 + 4);
  if ( v18 != 9 )
  {
    if ( v18 == 25 )
      return -1073741637;
    if ( v18 == 27 )
    {
      if ( a6 )
      {
        if ( !a7 )
          return -1073741811;
        if ( *(_BYTE *)a6 == 0xFF )
        {
          v27 = 1;
        }
        else
        {
          if ( *(_BYTE *)a6 )
            return -1073741811;
          v27 = 0;
        }
        v23 = &v27;
        v24 = 4;
      }
      else
      {
        v23 = 0LL;
        v24 = 0;
      }
      return CmSetDeviceRegProp(a1, a2, a3, 0x1Bu, v19, (__int64)v23, v24, 0);
    }
    if ( v18 != 37 )
    {
      v26 = a6 != 0LL ? a7 : 0;
      v25 = (unsigned __int64)a6 & -(__int64)(a6 != 0LL);
      return CmSetDeviceRegProp(a1, a2, a3, v18, v19, v25, v26, 0);
    }
  }
  if ( !a6 )
  {
    v21 = 0LL;
    v22 = 0;
    goto LABEL_21;
  }
  if ( a7 < 0x10 )
    return -1073741811;
  result = PnpStringFromGuid(a6, v28);
  if ( result >= 0 )
  {
    v21 = v28;
    v22 = 78;
LABEL_21:
    v26 = v22;
    v25 = (__int64)v21;
    return CmSetDeviceRegProp(a1, a2, a3, v18, v19, v25, v26, 0);
  }
  return result;
}
