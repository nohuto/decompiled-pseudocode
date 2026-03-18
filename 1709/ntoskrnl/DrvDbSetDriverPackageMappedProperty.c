/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x140443FC8
 * Callers:
 *     DrvDbSetDriverPackageMappedProperty @ 0x140443FC8 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverPackage @ 0x1405317C0 (DrvDbDispatchDriverPackage.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140443E64 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140443FC8 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14044435C (DrvDbSetRegValueMappedProperty.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 *     DrvDbOpenObjectRegKey @ 0x14053360C (DrvDbOpenObjectRegKey.c)
 *     _RegRtlSetValue @ 0x14058E7F0 (_RegRtlSetValue.c)
 *     DrvDbGetDriverPackageSignerName @ 0x140787520 (DrvDbGetDriverPackageSignerName.c)
 */

__int64 __fastcall DrvDbSetDriverPackageMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        void *Src,
        unsigned int a7)
{
  int v7; // r11d
  int v9; // r8d
  int v11; // ebx
  unsigned int v12; // edx
  int **i; // r9
  int *v14; // r10
  int v15; // ebx
  __int64 v16; // rcx
  int **v17; // rax
  unsigned int v18; // ecx
  int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // edi
  HANDLE v23; // rdx
  int v24; // eax
  PVOID v25; // rdi
  bool v27; // zf
  HANDLE v28; // rcx
  int Value; // eax
  size_t v30; // r8
  __int64 v31; // rcx
  HANDLE v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  HANDLE v41; // rbx
  NTSTATUS inited; // eax
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  const wchar_t *v46; // rbx
  int v47; // r8d
  HANDLE v48; // r8
  int v49; // r8d
  int DriverPackageSignerName; // eax
  HANDLE v51; // rdx
  HANDLE v52; // r8
  __int64 v53; // [rsp+28h] [rbp-48h]
  _DWORD v54[2]; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  int **v56; // [rsp+50h] [rbp-20h]
  PVOID P; // [rsp+58h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  __int64 v61; // [rsp+A8h] [rbp+38h] BYREF

  v7 = a1;
  v9 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  P = 0LL;
  v11 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  if ( v9 == 18 )
  {
    v36 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v36 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v36 )
      return (unsigned int)-1073741790;
  }
  if ( v9 == 29 )
  {
    v37 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
      v37 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v37 )
      return (unsigned int)-1073741790;
  }
  if ( v9 == 30 )
  {
    v38 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v38 )
      return (unsigned int)-1073741790;
  }
  if ( v9 == 33 )
  {
    v39 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
      v39 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v39 )
      return (unsigned int)-1073741790;
  }
  v12 = 0;
  for ( i = &off_1402B6240; ; i += 5 )
  {
    v14 = *i;
    if ( (*i)[4] == v9 )
    {
      v16 = *(_QWORD *)v14 - *(_QWORD *)a4;
      if ( *(_QWORD *)v14 == *(_QWORD *)a4 )
        v16 = *((_QWORD *)v14 + 1) - *(_QWORD *)(a4 + 8);
      if ( !v16 )
        break;
    }
    if ( ++v12 >= 0x1A )
      return (unsigned int)-1073741802;
  }
  v17 = &(&off_1402B6240)[5 * v12];
  v56 = v17;
  if ( !v17 )
    return (unsigned int)-1073741802;
  v18 = a5;
  if ( a5 != *((_DWORD *)v17 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v15 = DrvDbOpenObjectRegKey(v7, 0, 2, v11, 3, 0, (__int64)&Handle, 0LL);
    if ( v15 < 0 )
      goto LABEL_31;
    v18 = a5;
    v17 = v56;
    v11 = a2;
  }
  v19 = *((_DWORD *)v17 + 8);
  if ( !v19 )
  {
    if ( *(_DWORD *)(a4 + 16) == 7 )
    {
      v33 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_SignerName;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_SignerName )
        v33 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v33 )
      {
        v27 = v18 == 18;
        v20 = (__int64)Src;
        if ( !v27 )
          goto LABEL_20;
        v21 = a7;
        if ( a7 <= 2 || !Src || *((_WORD *)Src + ((unsigned __int64)a7 >> 1) - 1) )
          goto LABEL_21;
        if ( !wcsicmp((const wchar_t *)Src, L"Microsoft Windows") )
        {
          v40 = (int)Handle;
          if ( a3 )
            v40 = (int)a3;
          if ( (int)DrvDbGetDriverPackageSignerScore(a1, v11, v40, (wchar_t *)v54) >= 0 && v54[0] == 218103811 )
          {
            v41 = Handle;
            if ( a3 )
              v41 = a3;
            inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)v56[2]);
            if ( inited >= 0 )
              inited = ZwDeleteValueKey(v41, &DestinationString);
            if ( inited == -1073741772 )
              inited = -1073741275;
            v15 = 0;
            if ( inited != -1073741275 )
              v15 = inited;
            goto LABEL_31;
          }
          goto LABEL_22;
        }
      }
    }
    v20 = (__int64)Src;
LABEL_20:
    v21 = a7;
LABEL_21:
    if ( *(_DWORD *)(a4 + 16) != 8 )
    {
LABEL_22:
      v22 = a5;
LABEL_23:
      v23 = Handle;
      if ( a3 )
        v23 = a3;
      LODWORD(v53) = a7;
      v24 = DrvDbSetRegValueMappedProperty(v20, v23, v56, v22, Src, v53);
      v25 = P;
      goto LABEL_26;
    }
    v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore )
      v34 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    v22 = a5;
    if ( v34 )
      goto LABEL_23;
    if ( a5 != 7 )
    {
      if ( a5 )
        goto LABEL_23;
LABEL_66:
      v35 = (int)Handle;
      if ( a3 )
        v35 = (int)a3;
      if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v35, (wchar_t *)v54) >= 0 && v54[0] == 218103811 )
      {
        v49 = (int)Handle;
        if ( a3 )
          v49 = (int)a3;
        DriverPackageSignerName = DrvDbGetDriverPackageSignerName(v20, 0, v49, 0, 0, (__int64)&v61);
        v20 = 3221226021LL;
        if ( DriverPackageSignerName == -1073741275 )
        {
          v51 = Handle;
          if ( a3 )
            v51 = a3;
          LODWORD(v53) = a7;
          v15 = DrvDbSetRegValueMappedProperty(3221226021LL, v51, v56, v22, Src, v53);
          if ( v15 >= 0 )
          {
            v52 = Handle;
            if ( a3 )
              v52 = a3;
            DrvDbSetDriverPackageMappedProperty(
              a1,
              a2,
              v52,
              &DEVPKEY_DriverPackage_SignerName,
              18,
              L"Microsoft Windows",
              36);
            v15 = 0;
          }
          goto LABEL_31;
        }
      }
      goto LABEL_23;
    }
    if ( v21 != 4 || !v20 )
      goto LABEL_23;
    if ( *(_DWORD *)v20 != 218103811 )
      goto LABEL_66;
    v43 = (int)Handle;
    if ( a3 )
      v43 = (int)a3;
    if ( (unsigned int)DrvDbGetDriverPackageSignerName(v20, 4, v43, 0, 0, (__int64)&v61) != -1073741789
      || (_DWORD)v61 != 18 )
    {
      goto LABEL_23;
    }
    *(_QWORD *)&DestinationString.Length = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x42444450u);
    v46 = *(const wchar_t **)&DestinationString.Length;
    if ( *(_QWORD *)&DestinationString.Length )
    {
      v47 = (int)Handle;
      if ( a3 )
        v47 = (int)a3;
      if ( (int)DrvDbGetDriverPackageSignerName(v45, v44, v47, *(_DWORD *)&DestinationString.Length, 18, (__int64)&v61) >= 0
        && (_DWORD)v61
        && !v46[(unsigned int)(v61 - 1)]
        && !wcsicmp(v46, L"Microsoft Windows") )
      {
        v48 = Handle;
        if ( a3 )
          v48 = a3;
        DrvDbSetDriverPackageMappedProperty(a1, a2, v48, &DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
      }
      goto LABEL_23;
    }
    goto LABEL_92;
  }
  if ( v18 )
    v27 = a7 == v19;
  else
    v27 = a7 == 0;
  if ( !v27 )
  {
    v15 = -1073741823;
    goto LABEL_31;
  }
  LODWORD(v61) = 48;
  P = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
  v25 = P;
  if ( P )
  {
    v28 = Handle;
    if ( a3 )
      v28 = a3;
    Value = RegRtlQueryValue(v28, (__int64)&v61);
    v15 = Value;
    if ( Value == -1073741772 )
    {
      memset(v25, 0, 0x30uLL);
    }
    else
    {
      if ( Value == -1073741789 )
      {
        v15 = -1073741595;
        goto LABEL_27;
      }
      if ( Value < 0 )
      {
LABEL_27:
        if ( v25 )
          ExFreePoolWithTag(v25, 0);
        if ( *(_QWORD *)&DestinationString.Length )
          ExFreePoolWithTag(*(PVOID *)&DestinationString.Length, 0);
        goto LABEL_31;
      }
      if ( v54[1] != 3 || (_DWORD)v61 != 48 )
      {
        v15 = -1073741823;
        goto LABEL_27;
      }
    }
    v25 = P;
    v30 = *((unsigned int *)v56 + 8);
    v31 = *((unsigned int *)v56 + 7);
    if ( a5 )
      memmove((char *)P + v31, Src, v30);
    else
      memset((char *)P + v31, 0, v30);
    v32 = Handle;
    if ( a3 )
      v32 = a3;
    v24 = RegRtlSetValue(v32, 0x30u);
LABEL_26:
    v15 = v24;
    goto LABEL_27;
  }
LABEL_92:
  v15 = -1073741801;
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v15;
}
