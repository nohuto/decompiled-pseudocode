/*
 * XREFs of ?QueryStringValue@CRegKey@ATL@@QEAAJPEBGPEAGPEAK@Z @ 0x180190E30
 * Callers:
 *     _anonymous_namespace_::isAssignedAccessUser @ 0x180191014 (_anonymous_namespace_--isAssignedAccessUser.c)
 *     IsCurrentUserLicensingAssignedAccess @ 0x180191478 (IsCurrentUserLicensingAssignedAccess.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall ATL::CRegKey::QueryStringValue(HKEY *this, const unsigned __int16 *a2, BYTE *a3, unsigned int *a4)
{
  HKEY v5; // rcx
  LSTATUS result; // eax
  DWORD v8; // ecx
  DWORD v9; // [rsp+40h] [rbp+8h] BYREF
  DWORD v10; // [rsp+58h] [rbp+20h] BYREF

  v5 = *this;
  v9 = 2 * *a4;
  *a4 = 0;
  result = RegQueryValueExW(v5, a2, 0LL, &v10, a3, &v9);
  if ( !result )
  {
    if ( v10 - 1 > 1 )
      return 13;
    v8 = v9;
    if ( a3 )
    {
      if ( v9 )
      {
        if ( (v9 & 1) != 0 || *(_WORD *)&a3[2 * ((unsigned __int64)v9 >> 1) - 2] )
          return 13;
      }
      else
      {
        *(_WORD *)a3 = 0;
      }
    }
    *a4 = v8 >> 1;
    return 0;
  }
  return result;
}
