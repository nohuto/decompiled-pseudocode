/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x1407F37B4
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x14050C810 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407F37B4 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     DrvDbOpenObjectRegKey @ 0x1405027D0 (DrvDbOpenObjectRegKey.c)
 *     _RegRtlQueryValue @ 0x140505EBC (_RegRtlQueryValue.c)
 *     _RegRtlSetValue @ 0x1405E2DB0 (_RegRtlSetValue.c)
 *     DrvDbGetDriverPackageSignerName @ 0x1407F2304 (DrvDbGetDriverPackageSignerName.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1407F23B8 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407F37B4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1407F3DB4 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverPackageMappedProperty(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        void *Src,
        unsigned int a7)
{
  int v9; // r8d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ebx
  unsigned int v17; // edx
  int **i; // r9
  int *v19; // r10
  __int64 v20; // rcx
  int **v22; // rax
  int v23; // ecx
  int v24; // eax
  bool v25; // zf
  char *PoolWithTag; // rdi
  HANDLE v27; // rcx
  int v28; // eax
  size_t v29; // r8
  char *v30; // rcx
  HANDLE v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  _DWORD *v34; // rcx
  __int64 v35; // rdx
  HANDLE v36; // r8
  HANDLE v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // edi
  HANDLE v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  const wchar_t *v43; // rbx
  HANDLE v44; // r8
  int v45; // r8d
  HANDLE v46; // r8
  HANDLE v47; // r8
  HANDLE v48; // rdx
  int v49; // r8d
  HANDLE v50; // rdx
  int v51; // [rsp+40h] [rbp-30h] BYREF
  int v52; // [rsp+44h] [rbp-2Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  int **v54; // [rsp+50h] [rbp-20h]
  char *v55; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  __int64 v59; // [rsp+A8h] [rbp+38h] BYREF

  v9 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  v55 = 0LL;
  v11 = a2;
  P = 0LL;
  if ( v9 == 18 )
  {
    v12 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v12 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v12 )
      return (unsigned int)-1073741790;
  }
  if ( v9 == 29 )
  {
    v13 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
      v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  if ( v9 == 30 )
  {
    v14 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v14 )
      return (unsigned int)-1073741790;
  }
  if ( v9 == 33 )
  {
    v15 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
      v15 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v15 )
      return (unsigned int)-1073741790;
  }
  v17 = 0;
  for ( i = &off_1402ED680; ; i += 5 )
  {
    v19 = *i;
    if ( (*i)[4] == v9 )
    {
      v20 = *(_QWORD *)v19 - *(_QWORD *)a4;
      if ( *(_QWORD *)v19 == *(_QWORD *)a4 )
        v20 = *((_QWORD *)v19 + 1) - *(_QWORD *)(a4 + 8);
      if ( !v20 )
        break;
    }
    if ( ++v17 >= 0x1A )
      return (unsigned int)-1073741802;
  }
  v22 = &(&off_1402ED680)[5 * v17];
  v54 = v22;
  if ( !v22 )
    return (unsigned int)-1073741802;
  v23 = a5;
  if ( a5 != *((_DWORD *)v22 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v16 = DrvDbOpenObjectRegKey(a1, 0LL, 2u, v11, 3, 0, &Handle, 0LL);
    if ( v16 < 0 )
      goto LABEL_121;
    v23 = a5;
    v22 = v54;
    v11 = a2;
  }
  v24 = *((_DWORD *)v22 + 8);
  if ( v24 )
  {
    if ( v23 )
      v25 = a7 == v24;
    else
      v25 = a7 == 0;
    if ( !v25 )
    {
      v16 = -1073741823;
      goto LABEL_121;
    }
    LODWORD(v59) = 48;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    if ( !PoolWithTag )
      goto LABEL_40;
    v27 = Handle;
    if ( a3 )
      v27 = a3;
    v28 = RegRtlQueryValue(v27, L"Version", &v52, PoolWithTag, (unsigned int *)&v59);
    v16 = v28;
    if ( v28 == -1073741772 )
    {
      memset(PoolWithTag, 0, 0x30uLL);
      goto LABEL_50;
    }
    if ( v28 == -1073741789 )
    {
      v16 = -1073741595;
    }
    else if ( v28 >= 0 )
    {
      if ( v52 == 3 && (_DWORD)v59 == 48 )
      {
LABEL_50:
        v29 = *((unsigned int *)v54 + 8);
        v30 = &PoolWithTag[*((unsigned int *)v54 + 7)];
        if ( a5 )
          memmove(v30, Src, v29);
        else
          memset(v30, 0, v29);
        v31 = Handle;
        if ( a3 )
          v31 = a3;
        v32 = RegRtlSetValue(v31, L"Version", 3u, PoolWithTag, 0x30u);
LABEL_116:
        v16 = v32;
        goto LABEL_117;
      }
      v16 = -1073741823;
    }
LABEL_117:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_121;
  }
  if ( *(_DWORD *)(a4 + 16) != 7 )
    goto LABEL_74;
  v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
    v33 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v33 )
  {
LABEL_74:
    v34 = Src;
    goto LABEL_75;
  }
  v25 = v23 == 18;
  v34 = Src;
  if ( !v25 )
  {
LABEL_75:
    v35 = a7;
    goto LABEL_76;
  }
  v35 = a7;
  if ( a7 > 2 && Src && !*((_WORD *)Src + ((unsigned __int64)a7 >> 1) - 1) )
  {
    if ( !wcsicmp((const wchar_t *)Src, L"Microsoft Windows") )
    {
      v36 = Handle;
      if ( a3 )
        v36 = a3;
      if ( (int)DrvDbGetDriverPackageSignerScore(a1, v11, v36, (wchar_t *)&v51) >= 0 && v51 == 218103811 )
      {
        v37 = Handle;
        if ( a3 )
          v37 = a3;
        v16 = DrvDbSetRegValueMappedProperty(v34, v37, v54, 0LL, 0LL, 0);
        if ( v16 != -1073741275 )
          goto LABEL_121;
        goto LABEL_73;
      }
      goto LABEL_112;
    }
    goto LABEL_74;
  }
LABEL_76:
  if ( *(_DWORD *)(a4 + 16) != 8 )
  {
LABEL_112:
    v39 = a5;
    goto LABEL_113;
  }
  v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore )
    v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  v39 = a5;
  if ( v38 )
    goto LABEL_113;
  if ( a5 == 7 )
  {
    if ( (_DWORD)v35 != 4 || !v34 )
      goto LABEL_113;
    if ( *v34 == 218103811 )
    {
      v40 = Handle;
      if ( a3 )
        v40 = a3;
      if ( (unsigned int)DrvDbGetDriverPackageSignerName((__int64)v34, v35, v40, 0LL, 0, (unsigned int *)&v59) == -1073741789
        && (_DWORD)v59 == 18 )
      {
        P = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x42444450u);
        v43 = (const wchar_t *)P;
        if ( !P )
        {
LABEL_40:
          v16 = -1073741801;
          goto LABEL_121;
        }
        v44 = Handle;
        if ( a3 )
          v44 = a3;
        if ( (int)DrvDbGetDriverPackageSignerName(v42, v41, v44, P, 18, (unsigned int *)&v59) >= 0
          && (_DWORD)v59
          && !v43[(unsigned int)(v59 - 1)]
          && !wcsicmp(v43, L"Microsoft Windows") )
        {
          v45 = (int)Handle;
          if ( a3 )
            v45 = (int)a3;
          DrvDbSetDriverPackageMappedProperty((int)a1, a2, v45, (int)&DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
        }
      }
      goto LABEL_113;
    }
  }
  else if ( a5 )
  {
LABEL_113:
    v50 = Handle;
    if ( a3 )
      v50 = a3;
    v32 = DrvDbSetRegValueMappedProperty(v34, v50, v54, v39, Src, a7);
    PoolWithTag = v55;
    goto LABEL_116;
  }
  v46 = Handle;
  if ( a3 )
    v46 = a3;
  if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v46, (wchar_t *)&v51) < 0 || v51 != 218103811 )
    goto LABEL_113;
  v47 = Handle;
  if ( a3 )
    v47 = a3;
  if ( (unsigned int)DrvDbGetDriverPackageSignerName((__int64)v34, 0LL, v47, 0LL, 0, (unsigned int *)&v59) != -1073741275 )
    goto LABEL_113;
  v48 = Handle;
  if ( a3 )
    v48 = a3;
  v16 = DrvDbSetRegValueMappedProperty(v34, v48, v54, v39, Src, a7);
  if ( v16 < 0 )
    goto LABEL_121;
  v49 = (int)Handle;
  if ( a3 )
    v49 = (int)a3;
  DrvDbSetDriverPackageMappedProperty(
    (int)a1,
    a2,
    v49,
    (int)&DEVPKEY_DriverPackage_SignerName,
    18,
    (void *)L"Microsoft Windows",
    36);
LABEL_73:
  v16 = 0;
LABEL_121:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v16;
}
