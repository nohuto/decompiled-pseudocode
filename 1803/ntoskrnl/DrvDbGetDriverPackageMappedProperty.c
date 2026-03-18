/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x14050CE9C
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x14050C810 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14050CE9C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1407F2090 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1407F23B8 (DrvDbGetDriverPackageSignerScore.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14006D844 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     DrvDbOpenObjectRegKey @ 0x1405027D0 (DrvDbOpenObjectRegKey.c)
 *     _RegRtlQueryValue @ 0x140505EBC (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14050CE9C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetRegValueMappedProperty @ 0x14050DA40 (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1406386F8 (_PnpCtxRegEnumKeyWithCallback.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1407F23B8 (DrvDbGetDriverPackageSignerScore.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *v8; // rax
  HANDLE v9; // rbx
  _QWORD *v11; // r10
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  int v15; // r9d
  int **v16; // rax
  unsigned int v17; // r8d
  int *v18; // r11
  int DriverPackageMappedProperty; // ebx
  __int64 v20; // rcx
  int **v21; // rdi
  unsigned __int64 v22; // rcx
  unsigned int *v23; // rsi
  int RegValueMappedProperty; // eax
  char *PoolWithTag; // rsi
  HANDLE v27; // rcx
  int v28; // eax
  NTSTRSAFE_PWSTR v29; // rdx
  NTSTRSAFE_PWSTR v30; // rcx
  unsigned int v31; // r8d
  __int64 v32; // rcx
  int v33; // r8d
  int v34; // eax
  unsigned int *v35; // rax
  int v36; // ecx
  NTSTRSAFE_PWSTR v37; // rdx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // eax
  __int64 v41; // rdx
  int v42; // r11d
  int v43; // r8d
  int v44; // r8d
  unsigned int *v45; // rsi
  _DWORD *v46; // rcx
  unsigned __int64 v47; // r8
  __int16 *v48; // rdx
  __int16 i; // ax
  void *v50; // r10
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // eax
  bool v55; // zf
  __int64 v56; // rax
  unsigned int v57; // edx
  NTSTRSAFE_PWSTR v58; // r8
  __int64 v59; // rcx
  HANDLE v60; // r8
  wchar_t *v61; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-49h] BYREF
  wchar_t v63[4]; // [rsp+50h] [rbp-41h] BYREF
  char *v64; // [rsp+58h] [rbp-39h] BYREF
  void *Src; // [rsp+60h] [rbp-31h]
  NTSTRSAFE_PWSTR v66; // [rsp+68h] [rbp-29h] BYREF
  __int64 v67; // [rsp+70h] [rbp-21h]
  __int64 v68; // [rsp+78h] [rbp-19h]
  int **v69; // [rsp+80h] [rbp-11h] BYREF
  HANDLE v70; // [rsp+88h] [rbp-9h] BYREF
  NTSTRSAFE_PWSTR v71; // [rsp+90h] [rbp-1h]
  unsigned __int64 v72; // [rsp+98h] [rbp+7h]
  __int64 v76; // [rsp+F0h] [rbp+5Fh] BYREF

  v76 = a4;
  v8 = a8;
  v9 = a3;
  v11 = a1;
  v12 = a5;
  v13 = 0LL;
  v72 = 0LL;
  Handle = 0LL;
  v70 = 0LL;
  *a5 = 0;
  *v8 = 0;
  v15 = *(_DWORD *)(a4 + 16);
  v64 = 0LL;
  Src = 0LL;
  if ( v15 == 18 )
  {
    v32 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v32 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v32 )
    {
      if ( !v9 )
      {
        DriverPackageMappedProperty = DrvDbOpenObjectRegKey(v11, 0LL, 2u, a2, 1, 0, &Handle, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_23;
        LODWORD(v9) = (_DWORD)Handle;
        v8 = a8;
        v12 = a5;
        LODWORD(v11) = (_DWORD)a1;
      }
      DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                      (int)v11,
                                      a2,
                                      (int)v9,
                                      (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                                      (__int64)v12,
                                      pszDest,
                                      a7,
                                      (__int64)v8);
      if ( (int)(DriverPackageMappedProperty + 0x80000000) >= 0 && DriverPackageMappedProperty != -1073741789 )
      {
        v33 = (int)Handle;
        if ( a3 )
          v33 = (int)a3;
        v34 = DrvDbGetDriverPackageMappedProperty(
                (int)a1,
                a2,
                v33,
                (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
                (__int64)a5,
                v63,
                4,
                (__int64)a8);
        DriverPackageMappedProperty = v34;
        if ( v34 == -1073741789 )
        {
          DriverPackageMappedProperty = -1073741595;
        }
        else if ( v34 >= 0 )
        {
          v35 = a8;
          if ( *a5 == 7 && *a8 == 4 )
          {
            v36 = *(_DWORD *)v63;
          }
          else
          {
            v36 = -1;
            *(_DWORD *)v63 = -1;
          }
          *a5 = 17;
          v37 = pszDest;
          *v35 = 1;
          if ( v37 && a7 )
            *(_BYTE *)v37 = (v36 != 0) - 1;
          else
            DriverPackageMappedProperty = -1073741789;
        }
      }
      goto LABEL_23;
    }
    goto LABEL_5;
  }
  if ( v15 != 33 )
  {
    if ( v15 == 29 )
    {
      v52 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
        v52 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v52 )
        goto LABEL_114;
    }
    if ( v15 == 30 )
    {
      v53 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
        v53 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v53 )
      {
LABEL_114:
        if ( !v9 )
        {
          v54 = DrvDbOpenObjectRegKey(v11, 0LL, 2u, a2, 1, 0, &Handle, 0LL);
          v13 = 0LL;
          DriverPackageMappedProperty = v54;
          if ( v54 < 0 )
            goto LABEL_23;
          v9 = Handle;
          v11 = a1;
        }
        if ( *v11 )
          v13 = *(_QWORD *)(*v11 + 224LL);
        DriverPackageMappedProperty = SysCtxRegOpenKey(
                                        v13,
                                        (__int64)v9,
                                        (__int64)L"Configurations",
                                        0,
                                        9u,
                                        (__int64)&v70);
        if ( DriverPackageMappedProperty == -1073741772 )
          DriverPackageMappedProperty = -1073741275;
        if ( DriverPackageMappedProperty >= 0 )
        {
          v67 = 0LL;
          v55 = *(_DWORD *)(a4 + 16) == 30;
          v68 = 0LL;
          v66 = pszDest;
          if ( !v55 )
            goto LABEL_126;
          v56 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
            v56 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          LOBYTE(v68) = 1;
          if ( v56 )
LABEL_126:
            LOBYTE(v68) = 0;
          if ( pszDest )
            LODWORD(v67) = a7 >> 1;
          else
            LODWORD(v67) = 0;
          DriverPackageMappedProperty = PnpCtxRegEnumKeyWithCallback(
                                          *a1,
                                          v70,
                                          DrvDbGetConfigurationSubKeyCallback,
                                          &v66);
          if ( DriverPackageMappedProperty >= 0 )
          {
            if ( HIDWORD(v67) )
            {
              v58 = v66;
              DriverPackageMappedProperty = HIDWORD(v68);
              v57 = ++HIDWORD(v67);
              *a5 = 8210;
              *a8 = 2 * v57;
              if ( v58 && 2 * (unsigned __int64)v57 <= a7 )
                v58[v57 - 1] = 0;
              else
                DriverPackageMappedProperty = -1073741789;
            }
            else
            {
              DriverPackageMappedProperty = -1073741275;
            }
          }
          else if ( v68 < 0 )
          {
            DriverPackageMappedProperty = HIDWORD(v68);
          }
        }
        goto LABEL_23;
      }
    }
    goto LABEL_5;
  }
  v38 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
  if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
    v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( !v38 )
  {
    if ( !v9 )
    {
      DriverPackageMappedProperty = DrvDbOpenObjectRegKey(v11, 0LL, 2u, a2, 1, 0, &Handle, 0LL);
      if ( DriverPackageMappedProperty < 0 )
        goto LABEL_23;
      v9 = a3;
    }
    Src = ExAllocatePoolWithTag(PagedPool, 0x412uLL, 0x42444450u);
    if ( !Src )
      goto LABEL_89;
    v39 = (int)Handle;
    if ( v9 )
      v39 = (int)v9;
    v40 = DrvDbGetDriverPackageMappedProperty(
            (int)a1,
            a2,
            v39,
            (int)&DEVPKEY_DriverPackage_ProviderName,
            (__int64)a5,
            (NTSTRSAFE_PWSTR)Src,
            1042,
            (__int64)a8);
    DriverPackageMappedProperty = v40;
    if ( v40 != -1073741789 )
    {
      if ( v40 < 0 )
        goto LABEL_41;
      if ( *a5 != 18 )
        goto LABEL_91;
      if ( *a8 - 2 > 0x206 )
        goto LABEL_91;
      v41 = (*a8 >> 1) - 1;
      v72 = (unsigned int)v41;
      if ( *((_WORD *)Src + v41) )
        goto LABEL_91;
      v42 = 2 * v41;
      v43 = (int)Handle;
      if ( a3 )
        v43 = (int)a3;
      LODWORD(v64) = 2 * v41;
      LODWORD(v76) = 1040 - v42;
      v71 = (NTSTRSAFE_PWSTR)((char *)Src + 2 * (unsigned int)v41 + 2);
      DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                      (int)a1,
                                      a2,
                                      v43,
                                      (int)&DEVPKEY_DriverPackage_OriginalInfName,
                                      (__int64)a5,
                                      v71,
                                      1040 - v42,
                                      (__int64)a8);
      if ( DriverPackageMappedProperty == -1073741275 )
      {
        v44 = (int)Handle;
        if ( a3 )
          v44 = (int)a3;
        v45 = a8;
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        (int)a1,
                                        a2,
                                        v44,
                                        (int)&DEVPKEY_DriverPackage_DriverInfName,
                                        (__int64)a5,
                                        v71,
                                        v76,
                                        (__int64)a8);
      }
      else
      {
        v45 = a8;
      }
      if ( DriverPackageMappedProperty != -1073741789 )
      {
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_41;
        v46 = a5;
        if ( *a5 == 18 && *v45 - 2 <= 0x206 )
        {
          v47 = v72;
          v48 = (__int16 *)Src;
          *((_WORD *)Src + v72) = 45;
          for ( i = *v48; i; i = *v48 )
          {
            if ( i == 32 || i == 45 )
              *v48 = 95;
            ++v48;
          }
          v50 = Src;
          *((_WORD *)Src + v47) = 45;
          *v46 = 18;
          v51 = *v45 + (_DWORD)v64 + 2;
          *v45 = v51;
          if ( pszDest && a7 >= v51 )
            memmove(pszDest, v50, v51);
          else
            DriverPackageMappedProperty = -1073741789;
          goto LABEL_41;
        }
LABEL_91:
        DriverPackageMappedProperty = -1073741823;
        goto LABEL_41;
      }
    }
    DriverPackageMappedProperty = -1073741595;
    goto LABEL_41;
  }
LABEL_5:
  v16 = &off_1402ED680;
  v17 = 0;
  v69 = &off_1402ED680;
  while ( 1 )
  {
    v18 = *v16;
    if ( (*v16)[4] == v15 )
      break;
LABEL_7:
    v16 += 5;
    ++v17;
    v69 = v16;
    if ( v17 >= 0x1A )
      return (unsigned int)-1073741802;
  }
  v20 = *(_QWORD *)v18 - *(_QWORD *)a4;
  if ( *(_QWORD *)v18 == *(_QWORD *)a4 )
    v20 = *((_QWORD *)v18 + 1) - *(_QWORD *)(a4 + 8);
  if ( v20 )
  {
    v16 = v69;
    goto LABEL_7;
  }
  v21 = &(&off_1402ED680)[5 * v17];
  v71 = (NTSTRSAFE_PWSTR)v21;
  if ( !v21 )
    return (unsigned int)-1073741802;
  if ( v9 )
  {
    v22 = v72;
LABEL_16:
    if ( !*((_DWORD *)v21 + 8) )
    {
      v23 = a8;
      if ( v9 )
        v22 = (unsigned __int64)v9;
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v22, v22, v21, v12, pszDest, a7, a8);
      DriverPackageMappedProperty = RegValueMappedProperty;
      if ( RegValueMappedProperty != -1073741275
        && (RegValueMappedProperty && RegValueMappedProperty != -1073741789 || *a5 != 18 || *v23 != 2)
        || *(_DWORD *)(v76 + 16) != 7 )
      {
        goto LABEL_23;
      }
      v59 = *(_QWORD *)v76 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
      if ( *(_QWORD *)v76 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
        v59 = *(_QWORD *)(v76 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v59 )
        goto LABEL_23;
      v60 = Handle;
      if ( a3 )
        v60 = a3;
      if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v60, &v69) < 0 || (_DWORD)v69 != 218103811 )
        goto LABEL_23;
      DriverPackageMappedProperty = 0;
      v61 = pszDest;
      *a5 = 18;
      *v23 = 36;
      if ( v61 && a7 >= 0x24 )
      {
        RtlStringCchCopyExW(v61, (unsigned __int64)a7 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
        goto LABEL_23;
      }
      PoolWithTag = v64;
LABEL_47:
      DriverPackageMappedProperty = -1073741789;
      goto LABEL_39;
    }
    LODWORD(v76) = 48;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    if ( PoolWithTag )
    {
      v27 = Handle;
      if ( v9 )
        v27 = v9;
      v28 = RegRtlQueryValue(v27, L"Version", &v64, PoolWithTag, (unsigned int *)&v76);
      DriverPackageMappedProperty = v28;
      if ( v28 == -1073741772 )
      {
        DriverPackageMappedProperty = -1073741275;
        goto LABEL_39;
      }
      if ( v28 == -1073741789 )
      {
        DriverPackageMappedProperty = -1073741595;
        goto LABEL_39;
      }
      if ( v28 >= 0 )
      {
        if ( (_DWORD)v64 != 3 || (_DWORD)v76 != 48 )
        {
          DriverPackageMappedProperty = -1073741823;
          goto LABEL_39;
        }
        v29 = v71;
        *a5 = *((_DWORD *)v71 + 2);
        v30 = pszDest;
        v31 = *((_DWORD *)v29 + 8);
        *a8 = v31;
        if ( !v30 || a7 < v31 )
          goto LABEL_47;
        memmove(v30, &PoolWithTag[*((unsigned int *)v29 + 7)], *((unsigned int *)v29 + 8));
      }
LABEL_39:
      if ( !PoolWithTag )
        goto LABEL_23;
      ExFreePoolWithTag(PoolWithTag, 0);
LABEL_41:
      if ( Src )
        ExFreePoolWithTag(Src, 0);
      goto LABEL_23;
    }
LABEL_89:
    DriverPackageMappedProperty = -1073741801;
    goto LABEL_23;
  }
  DriverPackageMappedProperty = DrvDbOpenObjectRegKey(v11, 0LL, 2u, a2, 1, 0, &Handle, 0LL);
  if ( DriverPackageMappedProperty >= 0 )
  {
    v22 = (unsigned __int64)Handle;
    v9 = a3;
    v12 = a5;
    goto LABEL_16;
  }
LABEL_23:
  if ( v70 )
    ZwClose(v70);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DriverPackageMappedProperty;
}
