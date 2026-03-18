/*
 * XREFs of _CmGetInstallerClassMappedPropertyKeys @ 0x1407402A8
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1405A9680 (_PnpDispatchInstallerClass.c)
 *     _CmDeleteInstallerClassWorker @ 0x14073B6F8 (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x140592880 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14059A2E0 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1405A99BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14074004C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // r14
  char v9; // al
  signed int v10; // r10d
  unsigned int v11; // r15d
  int v12; // r13d
  __int64 v13; // rbp
  char v14; // si
  signed int InstallerClassMappedPropertyFromRegProp; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // r15d
  __int64 *v22; // r14
  __int64 v23; // rbp
  char v24; // si
  signed int InstallerClassMappedPropertyFromRegValue; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ebp
  __int64 *v32; // r14
  char v33; // si
  __int64 v34; // r15
  signed int InstallerClassMappedPropertyFromComposite; // eax
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // ecx
  int InstallerClassMappedPropertyFromCoInstallers; // eax
  __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  _DWORD v46[22]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v47; // [rsp+A0h] [rbp+8h]
  const WCHAR *v48; // [rsp+A8h] [rbp+10h]
  void *v49; // [rsp+B0h] [rbp+18h]

  v49 = (void *)a3;
  v48 = (const WCHAR *)a2;
  v47 = (__int64 *)a1;
  v7 = a7;
  v8 = (__int64 *)&CmClassRegPropMap;
  v9 = a4;
  v10 = 0;
  v11 = 0;
  *a7 = 0;
  v12 = -1;
  while ( 1 )
  {
    v13 = *v8;
    v14 = 0;
    if ( !*v8 )
      goto LABEL_17;
    if ( v9 )
      goto LABEL_72;
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                a1,
                                                a2,
                                                a3,
                                                v13,
                                                v46,
                                                0LL,
                                                0,
                                                (unsigned int *)&a7);
    v10 = InstallerClassMappedPropertyFromRegProp;
    if ( InstallerClassMappedPropertyFromRegProp == -1073741789 || !InstallerClassMappedPropertyFromRegProp )
    {
      v14 = 1;
    }
    else if ( InstallerClassMappedPropertyFromRegProp == -1073741772 )
    {
      goto LABEL_67;
    }
    v10 = 0;
    if ( v14 )
    {
LABEL_72:
      if ( a5 )
      {
        v16 = *v7;
        if ( (unsigned int)v16 < a6 )
        {
          v17 = 5 * v16;
          *(_OWORD *)(a5 + 4 * v17) = *(_OWORD *)v13;
          *(_DWORD *)(a5 + 4 * v17 + 16) = *(_DWORD *)(v13 + 16);
        }
      }
      v18 = *v7;
      v19 = -1;
      v20 = *v7 + 1;
      if ( v20 >= *v7 )
        v19 = *v7 + 1;
      v10 = v20 < v18 ? 0xC0000095 : 0;
      *v7 = v19;
      if ( v20 < v18 )
        break;
    }
    a1 = (__int64)v47;
    a2 = (__int64)v48;
    v9 = a4;
LABEL_17:
    ++v11;
    v8 += 3;
    if ( v11 >= 9 )
      goto LABEL_20;
    a3 = (__int64)v49;
  }
  *v7 = 0;
LABEL_20:
  if ( v10 >= 0 )
  {
    v21 = 0;
    v22 = (__int64 *)&off_14074BF30;
    while ( 1 )
    {
      v23 = *v22;
      v24 = 0;
      if ( *v22 )
      {
        if ( a4 )
          goto LABEL_73;
        InstallerClassMappedPropertyFromRegValue = CmGetInstallerClassMappedPropertyFromRegValue(
                                                     v47,
                                                     (int)v48,
                                                     v49,
                                                     v23,
                                                     v46,
                                                     0LL,
                                                     0,
                                                     &a7);
        v10 = InstallerClassMappedPropertyFromRegValue;
        if ( InstallerClassMappedPropertyFromRegValue == -1073741789 || !InstallerClassMappedPropertyFromRegValue )
        {
          v24 = 1;
        }
        else if ( InstallerClassMappedPropertyFromRegValue == -1073741772 )
        {
          goto LABEL_67;
        }
        v10 = 0;
        if ( v24 )
        {
LABEL_73:
          if ( a5 )
          {
            v26 = *v7;
            if ( (unsigned int)v26 < a6 )
            {
              v27 = 5 * v26;
              *(_OWORD *)(a5 + 4 * v27) = *(_OWORD *)v23;
              *(_DWORD *)(a5 + 4 * v27 + 16) = *(_DWORD *)(v23 + 16);
            }
          }
          v28 = *v7;
          v29 = -1;
          v30 = *v7 + 1;
          if ( v30 >= *v7 )
            v29 = *v7 + 1;
          v10 = v30 < v28 ? 0xC0000095 : 0;
          *v7 = v29;
          if ( v30 < v28 )
            break;
        }
      }
      ++v21;
      v22 += 4;
      if ( v21 >= 0xD )
        goto LABEL_39;
    }
    *v7 = 0;
LABEL_39:
    if ( v10 >= 0 )
    {
      v31 = 0;
      v32 = (__int64 *)&off_14074A4F8;
      while ( 1 )
      {
        v33 = 0;
        v34 = *v32;
        if ( a4 )
          goto LABEL_74;
        InstallerClassMappedPropertyFromComposite = CmGetInstallerClassMappedPropertyFromComposite(
                                                      (__int64)v47,
                                                      (__int64)v48,
                                                      (__int64)v49,
                                                      v34,
                                                      v46,
                                                      0LL,
                                                      0,
                                                      (unsigned int *)&a7);
        v10 = InstallerClassMappedPropertyFromComposite;
        if ( InstallerClassMappedPropertyFromComposite == -1073741789 || !InstallerClassMappedPropertyFromComposite )
        {
          v33 = 1;
        }
        else if ( InstallerClassMappedPropertyFromComposite == -1073741772 )
        {
          goto LABEL_67;
        }
        v10 = 0;
        if ( v33 )
        {
LABEL_74:
          if ( a5 )
          {
            v36 = *v7;
            if ( (unsigned int)v36 < a6 )
            {
              v37 = 5 * v36;
              *(_OWORD *)(a5 + 4 * v37) = *(_OWORD *)v34;
              *(_DWORD *)(a5 + 4 * v37 + 16) = *(_DWORD *)(v34 + 16);
            }
          }
          v38 = *v7;
          v39 = -1;
          v40 = *v7 + 1;
          if ( v40 >= *v7 )
            v39 = *v7 + 1;
          v10 = v40 < v38 ? 0xC0000095 : 0;
          *v7 = v39;
          if ( v40 < v38 )
            break;
        }
        ++v31;
        v32 += 2;
        if ( v31 >= 2 )
          goto LABEL_57;
      }
      *v7 = 0;
LABEL_57:
      if ( v10 >= 0 )
      {
        if ( a4
          || (InstallerClassMappedPropertyFromCoInstallers = CmGetInstallerClassMappedPropertyFromCoInstallers(
                                                               v47,
                                                               v48,
                                                               a3,
                                                               v46,
                                                               0LL,
                                                               0,
                                                               &a7),
              InstallerClassMappedPropertyFromCoInstallers == -1073741789)
          || !InstallerClassMappedPropertyFromCoInstallers )
        {
          if ( a5 )
          {
            v42 = *v7;
            if ( (unsigned int)v42 < a6 )
              *(DEVPROPKEY *)(a5 + 20 * v42) = DEVPKEY_DeviceClass_ClassCoInstallers;
          }
          v43 = *v7;
          v44 = *v7 + 1;
          if ( v44 >= *v7 )
            v12 = *v7 + 1;
          v10 = v44 < v43 ? 0xC0000095 : 0;
          *v7 = v12;
          if ( v44 < v43 )
          {
LABEL_67:
            *v7 = 0;
            return (unsigned int)v10;
          }
        }
        return a6 < *v7 ? 0xC0000023 : 0;
      }
    }
  }
  return (unsigned int)v10;
}
