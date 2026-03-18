/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x1404E8AB4
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1404E8970 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E8AB4 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140743484 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1407437B8 (DrvDbGetDriverPackageSignerScore.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140081B60 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E8AB4 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1404E8D50 (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405AB144 (_PnpCtxRegEnumKeyWithCallback.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1407437B8 (DrvDbGetDriverPackageSignerScore.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        __int64 **a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        unsigned int *a8)
{
  __int64 **v9; // r11
  _DWORD *v10; // rcx
  HANDLE v11; // rbx
  unsigned int *v12; // rax
  int v13; // r10d
  unsigned int v14; // r8d
  __int64 **i; // r9
  __int64 *v16; // r11
  int RegValueMappedProperty; // ebx
  __int64 v18; // rdx
  __int64 v19; // rdx
  _UNKNOWN **v20; // rdi
  HANDLE v21; // rdx
  unsigned int *v22; // rsi
  char *PoolWithTag; // rsi
  HANDLE v24; // rcx
  int v25; // eax
  _DWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v29; // rax
  int v30; // r8d
  int DriverPackageMappedProperty; // eax
  unsigned int *v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  bool v37; // zf
  __int64 v38; // rax
  unsigned int v39; // edx
  NTSTRSAFE_PWSTR v40; // r8
  __int64 v41; // rcx
  HANDLE v42; // r8
  wchar_t *v43; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-39h] BYREF
  wchar_t v45[4]; // [rsp+50h] [rbp-31h] BYREF
  NTSTRSAFE_PWSTR v46; // [rsp+58h] [rbp-29h] BYREF
  __int64 v47; // [rsp+60h] [rbp-21h]
  __int64 v48; // [rsp+68h] [rbp-19h]
  int v49; // [rsp+70h] [rbp-11h] BYREF
  void *v50; // [rsp+78h] [rbp-9h] BYREF
  HANDLE v51; // [rsp+80h] [rbp-1h] BYREF
  __int64 v52; // [rsp+88h] [rbp+7h]
  __int64 v54; // [rsp+D0h] [rbp+4Fh]
  __int64 v56; // [rsp+E0h] [rbp+5Fh] BYREF

  v56 = a4;
  v54 = a2;
  v9 = a1;
  v10 = a5;
  v51 = 0LL;
  v50 = 0LL;
  v11 = a3;
  Handle = 0LL;
  v12 = a8;
  *a5 = 0;
  *v12 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  if ( v13 != 18 )
    goto LABEL_74;
  v29 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
  if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
    v29 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v29 )
  {
LABEL_74:
    if ( v13 == 29 )
    {
      v34 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
        v34 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v34 )
        goto LABEL_75;
    }
    if ( v13 == 30 )
    {
      v35 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
        v35 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v35 )
      {
LABEL_75:
        if ( !a3 )
        {
          RegValueMappedProperty = DrvDbOpenObjectRegKey((__int64)v9, 0LL, 2u, a2, 1, 0, &Handle, 0LL);
          if ( RegValueMappedProperty < 0 )
            goto LABEL_34;
          v11 = Handle;
          v9 = a1;
        }
        v36 = 0LL;
        if ( *v9 )
          v36 = **v9;
        RegValueMappedProperty = SysCtxRegOpenKey(v36, (__int64)v11, (__int64)L"Configurations", 0, 9u, (__int64)&v51);
        if ( RegValueMappedProperty == -1073741772 )
          RegValueMappedProperty = -1073741275;
        if ( RegValueMappedProperty >= 0 )
        {
          v37 = *(_DWORD *)(a4 + 16) == 30;
          v47 = 0LL;
          v48 = 0LL;
          v46 = pszDest;
          if ( !v37 )
            goto LABEL_87;
          v38 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
            v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          LOBYTE(v48) = 1;
          if ( v38 )
LABEL_87:
            LOBYTE(v48) = 0;
          if ( pszDest )
            LODWORD(v47) = a7 >> 1;
          else
            LODWORD(v47) = 0;
          RegValueMappedProperty = PnpCtxRegEnumKeyWithCallback(*a1, v51, DrvDbGetConfigurationSubKeyCallback, &v46);
          if ( RegValueMappedProperty >= 0 )
          {
            if ( HIDWORD(v47) )
            {
              v40 = v46;
              RegValueMappedProperty = HIDWORD(v48);
              v39 = ++HIDWORD(v47);
              *a5 = 8210;
              *a8 = 2 * v39;
              if ( v40 && 2 * (unsigned __int64)v39 <= a7 )
                v40[v39 - 1] = 0;
              else
                RegValueMappedProperty = -1073741789;
            }
            else
            {
              RegValueMappedProperty = -1073741275;
            }
          }
          else if ( v48 < 0 )
          {
            RegValueMappedProperty = HIDWORD(v48);
          }
        }
        goto LABEL_34;
      }
    }
    v14 = 0;
    for ( i = (__int64 **)&off_140289370; ; i += 5 )
    {
      v16 = *i;
      if ( *((_DWORD *)*i + 4) == v13 )
      {
        v18 = *v16;
        v52 = 5LL * v14;
        v19 = v18 - *(_QWORD *)a4;
        if ( !v19 )
          v19 = v16[1] - *(_QWORD *)(a4 + 8);
        if ( !v19 )
          break;
      }
      if ( ++v14 >= 0x1A )
        return (unsigned int)-1073741802;
    }
    v20 = &off_140289370 + v52;
    if ( !v20 )
      return (unsigned int)-1073741802;
    if ( v11 )
    {
      v21 = v50;
    }
    else
    {
      RegValueMappedProperty = DrvDbOpenObjectRegKey((__int64)a1, 0LL, 2u, v54, 1, 0, &Handle, 0LL);
      if ( RegValueMappedProperty < 0 )
        goto LABEL_34;
      v21 = Handle;
      v11 = a3;
      v10 = a5;
    }
    if ( !*((_DWORD *)v20 + 8) )
    {
      v22 = a8;
      if ( v11 )
        v21 = v11;
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v10, v21, v20, v10, pszDest, a7, a8);
      if ( RegValueMappedProperty != -1073741275
        && (RegValueMappedProperty && RegValueMappedProperty != -1073741789 || *a5 != 18 || *v22 != 2)
        || *(_DWORD *)(v56 + 16) != 7 )
      {
        goto LABEL_34;
      }
      v41 = *(_QWORD *)v56 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
      if ( *(_QWORD *)v56 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
        v41 = *(_QWORD *)(v56 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v41 )
        goto LABEL_34;
      v42 = Handle;
      if ( a3 )
        v42 = a3;
      if ( (int)DrvDbGetDriverPackageSignerScore(a1, v54, v42, &v50) < 0 || (_DWORD)v50 != 218103811 )
        goto LABEL_34;
      v43 = pszDest;
      *a5 = 18;
      *v22 = 36;
      if ( v43 && a7 >= 0x24 )
      {
        RtlStringCchCopyExW(v43, (unsigned __int64)a7 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
        RegValueMappedProperty = 0;
        goto LABEL_34;
      }
      PoolWithTag = 0LL;
LABEL_46:
      RegValueMappedProperty = -1073741789;
      goto LABEL_32;
    }
    LODWORD(v56) = 48;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    if ( !PoolWithTag )
    {
      RegValueMappedProperty = -1073741801;
      goto LABEL_34;
    }
    v24 = Handle;
    if ( v11 )
      v24 = v11;
    v25 = RegRtlQueryValue(v24, L"Version", &v49, PoolWithTag, (unsigned int *)&v56);
    RegValueMappedProperty = v25;
    if ( v25 == -1073741772 )
    {
      RegValueMappedProperty = -1073741275;
    }
    else if ( v25 == -1073741789 )
    {
      RegValueMappedProperty = -1073741595;
    }
    else
    {
      if ( v25 < 0 )
        goto LABEL_32;
      if ( v49 == 3 && (_DWORD)v56 == 48 )
      {
        v26 = &off_140289370 + v52;
        *a5 = v26[2];
        v27 = v26[8];
        *a8 = v27;
        if ( pszDest && a7 >= v27 )
        {
          memmove(pszDest, &PoolWithTag[v26[7]], (unsigned int)v26[8]);
          goto LABEL_32;
        }
        goto LABEL_46;
      }
      RegValueMappedProperty = -1073741823;
    }
LABEL_32:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_34;
  }
  if ( a3 )
  {
LABEL_53:
    RegValueMappedProperty = DrvDbGetDriverPackageMappedProperty(
                               (int)v9,
                               a2,
                               (int)v11,
                               (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                               (__int64)v10,
                               pszDest,
                               a7,
                               (__int64)a8);
    if ( (int)(RegValueMappedProperty + 0x80000000) >= 0 && RegValueMappedProperty != -1073741789 )
    {
      v30 = (int)Handle;
      if ( a3 )
        v30 = (int)a3;
      DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                      (int)a1,
                                      v54,
                                      v30,
                                      (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
                                      (__int64)a5,
                                      v45,
                                      4,
                                      (__int64)a8);
      RegValueMappedProperty = DriverPackageMappedProperty;
      if ( DriverPackageMappedProperty == -1073741789 )
      {
        RegValueMappedProperty = -1073741595;
      }
      else if ( DriverPackageMappedProperty >= 0 )
      {
        v32 = a8;
        if ( *a5 == 7 && *a8 == 4 )
        {
          v33 = *(_DWORD *)v45;
        }
        else
        {
          v33 = -1;
          *(_DWORD *)v45 = -1;
        }
        *a5 = 17;
        *v32 = 1;
        if ( pszDest && a7 )
          *(_BYTE *)pszDest = (v33 != 0) - 1;
        else
          RegValueMappedProperty = -1073741789;
      }
    }
    goto LABEL_34;
  }
  RegValueMappedProperty = DrvDbOpenObjectRegKey((__int64)v9, 0LL, 2u, a2, 1, 0, &Handle, 0LL);
  if ( RegValueMappedProperty >= 0 )
  {
    LODWORD(v11) = (_DWORD)Handle;
    v10 = a5;
    LODWORD(v9) = (_DWORD)a1;
    LODWORD(a2) = v54;
    goto LABEL_53;
  }
LABEL_34:
  if ( v51 )
    ZwClose(v51);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}
