/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x140744B74
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1404E8970 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140744B74 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlSetValue @ 0x140456A24 (_RegRtlSetValue.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDriverPackageSignerName @ 0x1407436F8 (DrvDbGetDriverPackageSignerName.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1407437B8 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140744B74 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140745158 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverPackageMappedProperty(
        __int64 **a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        void *Src,
        unsigned int a7)
{
  int v8; // r8d
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ebx
  unsigned int v15; // edx
  _UNKNOWN **i; // r9
  _QWORD *v17; // r10
  __int64 v18; // rcx
  _UNKNOWN **v20; // rax
  int v21; // ecx
  int v22; // edx
  bool v23; // zf
  void *v24; // rdi
  HANDLE v25; // rcx
  int v26; // eax
  size_t v27; // r8
  __int64 v28; // rcx
  HANDLE v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  HANDLE v34; // r8
  HANDLE v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // edi
  HANDLE v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  const wchar_t *v41; // rbx
  HANDLE v42; // r8
  int v43; // r8d
  HANDLE v44; // r8
  HANDLE v45; // r8
  HANDLE v46; // rdx
  int v47; // r8d
  HANDLE v48; // rdx
  int v49; // [rsp+40h] [rbp-30h] BYREF
  int v50; // [rsp+44h] [rbp-2Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  _UNKNOWN **v52; // [rsp+50h] [rbp-20h]
  char *PoolWithTag; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+A8h] [rbp+38h] BYREF

  v8 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  v10 = a2;
  PoolWithTag = 0LL;
  P = 0LL;
  if ( v8 == 18 )
  {
    v11 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v11 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v11 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 29 )
  {
    v12 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
      v12 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v12 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 30 )
  {
    v13 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  v15 = 0;
  for ( i = &off_140289370; ; i += 5 )
  {
    v17 = *i;
    if ( *((_DWORD *)*i + 4) == v8 )
    {
      v18 = *v17 - *(_QWORD *)a4;
      if ( *v17 == *(_QWORD *)a4 )
        v18 = v17[1] - *(_QWORD *)(a4 + 8);
      if ( !v18 )
        break;
    }
    if ( ++v15 >= 0x1A )
      return (unsigned int)-1073741802;
  }
  v20 = &off_140289370 + 5 * v15;
  v52 = v20;
  if ( !v20 )
    return (unsigned int)-1073741802;
  v21 = a5;
  if ( a5 != *((_DWORD *)v20 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v14 = DrvDbOpenObjectRegKey((__int64)a1, 0LL, 2u, v10, 3, 0, &Handle, 0LL);
    if ( v14 < 0 )
      goto LABEL_117;
    v21 = a5;
    v20 = v52;
    v10 = a2;
  }
  v22 = *((_DWORD *)v20 + 8);
  if ( v22 )
  {
    if ( v21 )
      v23 = a7 == v22;
    else
      v23 = a7 == 0;
    if ( !v23 )
    {
      v14 = -1073741823;
      goto LABEL_117;
    }
    LODWORD(v57) = 48;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_36;
    v25 = Handle;
    if ( a3 )
      v25 = a3;
    v26 = RegRtlQueryValue(v25, L"Version", &v50, PoolWithTag, (unsigned int *)&v57);
    v14 = v26;
    if ( v26 == -1073741772 )
    {
      memset(v24, 0, 0x30uLL);
      goto LABEL_46;
    }
    if ( v26 == -1073741789 )
    {
      v14 = -1073741595;
    }
    else if ( v26 >= 0 )
    {
      if ( v50 == 3 && (_DWORD)v57 == 48 )
      {
LABEL_46:
        v24 = PoolWithTag;
        v27 = *((unsigned int *)v52 + 8);
        v28 = *((unsigned int *)v52 + 7);
        if ( a5 )
          memmove(&PoolWithTag[v28], Src, v27);
        else
          memset(&PoolWithTag[v28], 0, v27);
        v29 = Handle;
        if ( a3 )
          v29 = a3;
        v30 = RegRtlSetValue(v29, L"Version", 3u, v24, 0x30u);
LABEL_112:
        v14 = v30;
        goto LABEL_113;
      }
      v14 = -1073741823;
    }
LABEL_113:
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_117;
  }
  if ( *(_DWORD *)(a4 + 16) != 7 )
    goto LABEL_70;
  v31 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
    v31 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v31 )
  {
LABEL_70:
    v32 = Src;
    goto LABEL_71;
  }
  v23 = v21 == 18;
  v32 = Src;
  if ( !v23 )
  {
LABEL_71:
    v33 = a7;
    goto LABEL_72;
  }
  v33 = a7;
  if ( a7 > 2 && Src && !*((_WORD *)Src + ((unsigned __int64)a7 >> 1) - 1) )
  {
    if ( !wcsicmp((const wchar_t *)Src, L"Microsoft Windows") )
    {
      v34 = Handle;
      if ( a3 )
        v34 = a3;
      if ( (int)DrvDbGetDriverPackageSignerScore(a1, v10, v34, (wchar_t *)&v49) >= 0 && v49 == 218103811 )
      {
        v35 = Handle;
        if ( a3 )
          v35 = a3;
        v14 = DrvDbSetRegValueMappedProperty(v32, v35, v52, 0LL, 0LL, 0);
        if ( v14 != -1073741275 )
          goto LABEL_117;
        goto LABEL_69;
      }
      goto LABEL_108;
    }
    goto LABEL_70;
  }
LABEL_72:
  if ( *(_DWORD *)(a4 + 16) != 8 )
  {
LABEL_108:
    v37 = a5;
    goto LABEL_109;
  }
  v36 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore )
    v36 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  v37 = a5;
  if ( v36 )
    goto LABEL_109;
  if ( a5 == 7 )
  {
    if ( (_DWORD)v33 != 4 || !v32 )
      goto LABEL_109;
    if ( *v32 == 218103811 )
    {
      v38 = Handle;
      if ( a3 )
        v38 = a3;
      if ( (unsigned int)DrvDbGetDriverPackageSignerName((__int64)v32, v33, v38, 0LL, 0, (unsigned int *)&v57) == -1073741789
        && (_DWORD)v57 == 18 )
      {
        P = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x42444450u);
        v41 = (const wchar_t *)P;
        if ( !P )
        {
LABEL_36:
          v14 = -1073741801;
          goto LABEL_117;
        }
        v42 = Handle;
        if ( a3 )
          v42 = a3;
        if ( (int)DrvDbGetDriverPackageSignerName(v40, v39, v42, P, 18, (unsigned int *)&v57) >= 0
          && (_DWORD)v57
          && !v41[(unsigned int)(v57 - 1)]
          && !wcsicmp(v41, L"Microsoft Windows") )
        {
          v43 = (int)Handle;
          if ( a3 )
            v43 = (int)a3;
          DrvDbSetDriverPackageMappedProperty((int)a1, a2, v43, (int)&DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
        }
      }
      goto LABEL_109;
    }
  }
  else if ( a5 )
  {
LABEL_109:
    v48 = Handle;
    if ( a3 )
      v48 = a3;
    v30 = DrvDbSetRegValueMappedProperty(v32, v48, v52, v37, Src, a7);
    v24 = PoolWithTag;
    goto LABEL_112;
  }
  v44 = Handle;
  if ( a3 )
    v44 = a3;
  if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v44, (wchar_t *)&v49) < 0 || v49 != 218103811 )
    goto LABEL_109;
  v45 = Handle;
  if ( a3 )
    v45 = a3;
  if ( (unsigned int)DrvDbGetDriverPackageSignerName((__int64)v32, 0LL, v45, 0LL, 0, (unsigned int *)&v57) != -1073741275 )
    goto LABEL_109;
  v46 = Handle;
  if ( a3 )
    v46 = a3;
  v14 = DrvDbSetRegValueMappedProperty(v32, v46, v52, v37, Src, a7);
  if ( v14 < 0 )
    goto LABEL_117;
  v47 = (int)Handle;
  if ( a3 )
    v47 = (int)a3;
  DrvDbSetDriverPackageMappedProperty(
    (int)a1,
    a2,
    v47,
    (int)&DEVPKEY_DriverPackage_SignerName,
    18,
    (void *)L"Microsoft Windows",
    36);
LABEL_69:
  v14 = 0;
LABEL_117:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v14;
}
