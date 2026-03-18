/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromRegProp @ 0x140740FC8
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140740D1C (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _CmSetInstallerClassRegProp @ 0x14073BDF8 (_CmSetInstallerClassRegProp.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        int a7)
{
  DEVPROPKEY **v7; // rbx
  int *v8; // r10
  unsigned int i; // edi
  DEVPROPKEY *v12; // rsi
  DEVPROPKEY **v13; // r11
  __int64 v14; // rcx
  int v16; // ecx
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  unsigned int v19; // eax
  int v20; // [rsp+40h] [rbp-28h] BYREF

  v7 = &CmClassRegPropMap;
  v8 = 0LL;
  for ( i = 0; i < 9; ++i )
  {
    v12 = *v7;
    v13 = v7;
    if ( *(_DWORD *)(a4 + 16) == (*v7)->pid )
    {
      v14 = *(_QWORD *)a4 - *(_QWORD *)&v12->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v12->fmtid.Data1 )
        v14 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v12->fmtid.Data4;
      if ( !v14 )
        break;
    }
    v7 += 3;
    v13 = 0LL;
  }
  if ( !v13 )
    return 3221226032LL;
  v16 = *((_DWORD *)v13 + 2);
  v17 = *((_DWORD *)v13 + 3);
  if ( a5 != v16 )
  {
    if ( a5 == 25 )
    {
      if ( v16 != 18 )
        return 3221225485LL;
    }
    else if ( a5 >= 2 )
    {
      return 3221225485LL;
    }
  }
  v18 = *((_DWORD *)v13 + 4);
  if ( v17 == 25 )
    return 3221225659LL;
  if ( v17 != 27 )
    return CmSetInstallerClassRegProp(a1, a2, a3, v17, v18, (__int64)a6, a7 & (unsigned int)-(a6 != 0LL));
  if ( a6 )
  {
    if ( !a7 )
      return 3221225485LL;
    if ( *a6 == 0xFF )
    {
      v20 = 1;
    }
    else
    {
      if ( *a6 )
        return 3221225485LL;
      v20 = 0;
    }
    v8 = &v20;
    v19 = 4;
  }
  else
  {
    v19 = 0;
  }
  return CmSetInstallerClassRegProp(a1, a2, a3, 0x1Bu, v18, (__int64)v8, v19);
}
