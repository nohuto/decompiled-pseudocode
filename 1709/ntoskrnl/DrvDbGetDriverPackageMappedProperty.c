/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x1405319B8
 * Callers:
 *     DrvDbGetDriverPackageSignerScore @ 0x140443E64 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbDispatchDriverPackage @ 0x1405317C0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1405319B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1407872AC (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400DF820 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140443E64 (DrvDbGetDriverPackageSignerScore.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140530A4C (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1405319B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x14053360C (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140594ADC (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        __int64 **a1,
        int a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *v8; // rax
  HANDLE v9; // rbx
  __int64 **v11; // r10
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  int v15; // r9d
  int **v16; // rax
  unsigned int v17; // r8d
  int *v18; // r11
  int DriverPackageMappedProperty; // ebx
  __int64 v20; // rcx
  int **v21; // rdi
  HANDLE v22; // rcx
  unsigned int *v23; // rsi
  int RegValueMappedProperty; // eax
  __int64 v25; // rcx
  int v26; // r8d
  char *PoolWithTag; // rsi
  HANDLE v28; // rcx
  int v29; // eax
  NTSTRSAFE_PWSTR v30; // rdx
  NTSTRSAFE_PWSTR v31; // rcx
  unsigned int v32; // r8d
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // eax
  unsigned int *v37; // rax
  int v38; // ecx
  NTSTRSAFE_PWSTR v39; // rdx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // eax
  __int64 v43; // r9
  int v44; // r11d
  int v45; // r8d
  int v46; // r8d
  unsigned int *v47; // rsi
  _DWORD *v48; // rcx
  _WORD *v49; // rax
  unsigned __int64 v50; // r8
  _WORD *v51; // r10
  int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // eax
  bool v57; // zf
  __int64 v58; // rax
  unsigned int v59; // edx
  NTSTRSAFE_PWSTR v60; // r8
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
    v34 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v34 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v34 )
    {
      if ( !v9 )
      {
        DriverPackageMappedProperty = DrvDbOpenObjectRegKey((_DWORD)v11, 0, 2, a2, 1, 0, (__int64)&Handle, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_46;
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
        v35 = (int)Handle;
        if ( a3 )
          v35 = (int)a3;
        v36 = DrvDbGetDriverPackageMappedProperty(
                (int)a1,
                a2,
                v35,
                (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
                (__int64)a5,
                v63,
                4,
                (__int64)a8);
        DriverPackageMappedProperty = v36;
        if ( v36 == -1073741789 )
        {
          DriverPackageMappedProperty = -1073741595;
        }
        else if ( v36 >= 0 )
        {
          v37 = a8;
          if ( *a5 == 7 && *a8 == 4 )
          {
            v38 = *(_DWORD *)v63;
          }
          else
          {
            v38 = -1;
            *(_DWORD *)v63 = -1;
          }
          *a5 = 17;
          v39 = pszDest;
          *v37 = 1;
          if ( v39 && a7 )
            *(_BYTE *)v39 = (v38 != 0) - 1;
          else
            DriverPackageMappedProperty = -1073741789;
        }
      }
      goto LABEL_46;
    }
    v13 = 0LL;
  }
  if ( v15 == 33 )
  {
    v40 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
      v40 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v40 )
    {
      if ( !v9 )
      {
        DriverPackageMappedProperty = DrvDbOpenObjectRegKey((_DWORD)v11, 0, 2, a2, 1, 0, (__int64)&Handle, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_46;
        v9 = a3;
      }
      Src = ExAllocatePoolWithTag(PagedPool, 0x412uLL, 0x42444450u);
      if ( Src )
      {
        v41 = (int)Handle;
        if ( v9 )
          v41 = (int)v9;
        v42 = DrvDbGetDriverPackageMappedProperty(
                (int)a1,
                a2,
                v41,
                (int)&DEVPKEY_DriverPackage_ProviderName,
                (__int64)a5,
                (NTSTRSAFE_PWSTR)Src,
                1042,
                (__int64)a8);
        DriverPackageMappedProperty = v42;
        if ( v42 == -1073741789 )
          goto LABEL_97;
        if ( v42 < 0 )
          goto LABEL_44;
        if ( *a5 != 18 )
          goto LABEL_98;
        if ( *a8 - 2 > 0x206 )
          goto LABEL_98;
        v43 = (*a8 >> 1) - 1;
        v72 = (unsigned int)v43;
        if ( *((_WORD *)Src + v43) )
          goto LABEL_98;
        v44 = 2 * v43;
        v45 = (int)Handle;
        if ( a3 )
          v45 = (int)a3;
        LODWORD(v64) = 2 * v43;
        LODWORD(v76) = 1040 - v44;
        v71 = (NTSTRSAFE_PWSTR)((char *)Src + 2 * (unsigned int)v43 + 2);
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        (int)a1,
                                        a2,
                                        v45,
                                        (int)&DEVPKEY_DriverPackage_OriginalInfName,
                                        (__int64)a5,
                                        v71,
                                        1040 - v44,
                                        (__int64)a8);
        if ( DriverPackageMappedProperty == -1073741275 )
        {
          v46 = (int)Handle;
          if ( a3 )
            v46 = (int)a3;
          v47 = a8;
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                          (int)a1,
                                          a2,
                                          v46,
                                          (int)&DEVPKEY_DriverPackage_DriverInfName,
                                          (__int64)a5,
                                          v71,
                                          v76,
                                          (__int64)a8);
        }
        else
        {
          v47 = a8;
        }
        if ( DriverPackageMappedProperty == -1073741789 )
        {
LABEL_97:
          DriverPackageMappedProperty = -1073741595;
          goto LABEL_44;
        }
        if ( DriverPackageMappedProperty >= 0 )
        {
          v48 = a5;
          if ( *a5 == 18 && *v47 - 2 <= 0x206 )
          {
            v49 = Src;
            v50 = v72;
            v51 = Src;
            *((_WORD *)Src + v72) = 45;
            while ( *v49 )
            {
              if ( *v49 == 32 || *v49 == 45 )
                *v49 = 95;
              ++v49;
            }
            v52 = (_DWORD)v64 + 2;
            v51[v50] = 45;
            *v48 = 18;
            *v47 += v52;
            v53 = *v47;
            if ( pszDest && a7 >= v53 )
              memmove(pszDest, v51, v53);
            else
              DriverPackageMappedProperty = -1073741789;
            goto LABEL_44;
          }
LABEL_98:
          DriverPackageMappedProperty = -1073741823;
        }
LABEL_44:
        if ( Src )
          ExFreePoolWithTag(Src, 0);
        goto LABEL_46;
      }
LABEL_96:
      DriverPackageMappedProperty = -1073741801;
      goto LABEL_46;
    }
  }
  if ( v15 == 29 )
  {
    v54 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
      v54 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v54 )
      goto LABEL_121;
  }
  if ( v15 == 30 )
  {
    v55 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v55 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v55 )
    {
LABEL_121:
      if ( !v9 )
      {
        v56 = DrvDbOpenObjectRegKey((_DWORD)v11, 0, 2, a2, 1, 0, (__int64)&Handle, 0LL);
        v13 = 0LL;
        DriverPackageMappedProperty = v56;
        if ( v56 < 0 )
          goto LABEL_46;
        v9 = Handle;
        v11 = a1;
      }
      if ( *v11 )
        v13 = **v11;
      DriverPackageMappedProperty = SysCtxRegOpenKey(v13, (__int64)v9, (__int64)L"Configurations", 0, 9u, (__int64)&v70);
      if ( DriverPackageMappedProperty == -1073741772 )
        DriverPackageMappedProperty = -1073741275;
      if ( DriverPackageMappedProperty >= 0 )
      {
        v67 = 0LL;
        v57 = *(_DWORD *)(a4 + 16) == 30;
        v68 = 0LL;
        v66 = pszDest;
        if ( !v57 )
          goto LABEL_133;
        v58 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
          v58 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        LOBYTE(v68) = 1;
        if ( v58 )
LABEL_133:
          LOBYTE(v68) = 0;
        if ( pszDest )
          LODWORD(v67) = a7 >> 1;
        else
          LODWORD(v67) = 0;
        DriverPackageMappedProperty = PnpCtxRegEnumKeyWithCallback(*a1, v70, DrvDbGetConfigurationSubKeyCallback, &v66);
        if ( DriverPackageMappedProperty >= 0 )
        {
          if ( HIDWORD(v67) )
          {
            v60 = v66;
            DriverPackageMappedProperty = HIDWORD(v68);
            v59 = ++HIDWORD(v67);
            *a5 = 8210;
            *a8 = 2 * v59;
            if ( v60 && 2 * (unsigned __int64)v59 <= a7 )
              v60[v59 - 1] = 0;
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
      goto LABEL_46;
    }
  }
  v16 = &off_1402B6240;
  v17 = 0;
  v69 = &off_1402B6240;
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
  v21 = &(&off_1402B6240)[5 * v17];
  v71 = (NTSTRSAFE_PWSTR)v21;
  if ( !v21 )
    return (unsigned int)-1073741802;
  if ( v9 )
  {
    v22 = (HANDLE)v72;
LABEL_16:
    if ( !*((_DWORD *)v21 + 8) )
    {
      v23 = a8;
      if ( v9 )
        v22 = v9;
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty((__int64)v22, v22, (__int64)v21, v12, pszDest, a7, a8);
      DriverPackageMappedProperty = RegValueMappedProperty;
      if ( RegValueMappedProperty != -1073741275
        && (RegValueMappedProperty && RegValueMappedProperty != -1073741789 || *a5 != 18 || *v23 != 2)
        || *(_DWORD *)(v76 + 16) != 7 )
      {
        goto LABEL_46;
      }
      v25 = *(_QWORD *)v76 - DEVPKEY_DriverPackage_SignerName;
      if ( *(_QWORD *)v76 == DEVPKEY_DriverPackage_SignerName )
        v25 = *(_QWORD *)(v76 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v25 )
        goto LABEL_46;
      v26 = (int)Handle;
      if ( a3 )
        v26 = (int)a3;
      if ( (int)DrvDbGetDriverPackageSignerScore((int)a1, a2, v26, (wchar_t *)&v69) < 0 || (_DWORD)v69 != 218103811 )
        goto LABEL_46;
      DriverPackageMappedProperty = 0;
      v61 = pszDest;
      *a5 = 18;
      *v23 = 36;
      if ( v61 && a7 >= 0x24 )
      {
        RtlStringCchCopyExW(v61, (unsigned __int64)a7 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
        goto LABEL_46;
      }
      PoolWithTag = v64;
      goto LABEL_155;
    }
    LODWORD(v76) = 48;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    if ( !PoolWithTag )
      goto LABEL_96;
    v28 = Handle;
    if ( v9 )
      v28 = v9;
    v29 = RegRtlQueryValue(v28, L"Version", &v64, PoolWithTag, (unsigned int *)&v76);
    DriverPackageMappedProperty = v29;
    if ( v29 == -1073741772 )
    {
      DriverPackageMappedProperty = -1073741275;
    }
    else if ( v29 == -1073741789 )
    {
      DriverPackageMappedProperty = -1073741595;
    }
    else if ( v29 >= 0 )
    {
      if ( (_DWORD)v64 == 3 && (_DWORD)v76 == 48 )
      {
        v30 = v71;
        *a5 = *((_DWORD *)v71 + 2);
        v31 = pszDest;
        v32 = *((_DWORD *)v30 + 8);
        *a8 = v32;
        if ( !v31 || a7 < v32 )
        {
LABEL_155:
          DriverPackageMappedProperty = -1073741789;
          goto LABEL_42;
        }
        memmove(v31, &PoolWithTag[*((unsigned int *)v30 + 7)], *((unsigned int *)v30 + 8));
      }
      else
      {
        DriverPackageMappedProperty = -1073741823;
      }
    }
LABEL_42:
    if ( !PoolWithTag )
      goto LABEL_46;
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_44;
  }
  DriverPackageMappedProperty = DrvDbOpenObjectRegKey((_DWORD)v11, 0, 2, a2, 1, 0, (__int64)&Handle, 0LL);
  if ( DriverPackageMappedProperty >= 0 )
  {
    v22 = Handle;
    v9 = a3;
    v12 = a5;
    goto LABEL_16;
  }
LABEL_46:
  if ( v70 )
    ZwClose(v70);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DriverPackageMappedProperty;
}
