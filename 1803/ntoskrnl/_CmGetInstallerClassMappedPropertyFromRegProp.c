/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1407EEC8C
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14056B000 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1407EEEE8 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _PnpParseIndirectResourceString @ 0x140552CF4 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14056D80C (_PnpParseIndirectInfString.c)
 *     _CmGetInstallerClassRegProp @ 0x1405CD588 (_CmGetInstallerClassRegProp.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *v8; // r15
  wchar_t *v10; // rdi
  PVOID PoolWithTag; // rsi
  unsigned int v13; // r12d
  int v14; // r11d
  DEVPROPKEY **v15; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v17; // r9
  DEVPROPKEY **v18; // r14
  __int64 v19; // rcx
  unsigned int InstallerClassRegProp; // ebx
  int v21; // r13d
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  int v31; // [rsp+40h] [rbp-10h] BYREF
  int v32; // [rsp+44h] [rbp-Ch] BYREF
  int v33; // [rsp+48h] [rbp-8h] BYREF

  v8 = a8;
  v10 = a6;
  v31 = 0;
  PoolWithTag = 0LL;
  *a5 = 0;
  *v8 = 0;
  v33 = 0;
  v32 = 0;
  if ( a6 )
  {
    v13 = a7;
    v10 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  v15 = &CmClassRegPropMap;
  for ( i = 0; i < 9; ++i )
  {
    v17 = *v15;
    v18 = v15;
    if ( v14 == (*v15)->pid )
    {
      v19 = *(_QWORD *)a4 - *(_QWORD *)&v17->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v17->fmtid.Data1 )
        v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v17->fmtid.Data4;
      if ( !v19 )
        break;
    }
    v15 += 3;
    v18 = 0LL;
  }
  if ( !v18 )
    return (unsigned int)-1073741264;
  v21 = *((_DWORD *)v18 + 3);
  if ( v21 == 25 )
    return (unsigned int)-1073741637;
  if ( v21 == 27 )
  {
    LODWORD(a8) = 4;
    InstallerClassRegProp = CmGetInstallerClassRegProp(a1, a2, a3, 27, (__int64)&v31, (__int64)&v32, (__int64)&a8);
    if ( (InstallerClassRegProp & 0x80000000) == 0 )
    {
      if ( v31 == *((_DWORD *)v18 + 4) )
      {
        *v8 = 1;
        *a5 = *((_DWORD *)v18 + 2);
        if ( v13 >= *v8 )
          *(_BYTE *)v10 = -(v32 != 0);
        else
          return (unsigned int)-1073741789;
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else
  {
    *v8 = v13;
    v22 = CmGetInstallerClassRegProp(a1, a2, a3, v21, (__int64)&v31, (__int64)v10, (__int64)v8);
    InstallerClassRegProp = v22;
    if ( !v22 || v22 == -1073741789 )
    {
      v25 = *((_DWORD *)v18 + 2);
      *a5 = v25;
      if ( v25 == 18 )
      {
        v26 = *v8;
        LODWORD(a8) = *v8;
        if ( InstallerClassRegProp )
        {
          if ( InstallerClassRegProp != -1073741789 )
            return InstallerClassRegProp;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x52504E50u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          v27 = CmGetInstallerClassRegProp(a1, a2, a3, v21, (__int64)&v33, (__int64)PoolWithTag, (__int64)&a8);
          if ( v27 < 0 )
          {
            InstallerClassRegProp = v27;
LABEL_30:
            ExFreePoolWithTag(PoolWithTag, 0);
            return InstallerClassRegProp;
          }
          v26 = (unsigned int)a8;
          v10 = (wchar_t *)PoolWithTag;
        }
        if ( v10
          && v26 >= 2
          && (PnpParseIndirectInfString(v10, v23, v24) || PnpParseIndirectResourceString((__int64)v10, v28, v29)) )
        {
          *a5 = 25;
        }
        if ( PoolWithTag )
          goto LABEL_30;
      }
    }
  }
  return InstallerClassRegProp;
}
