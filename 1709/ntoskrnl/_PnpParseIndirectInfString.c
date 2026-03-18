/*
 * XREFs of _PnpParseIndirectInfString @ 0x14057D4DC
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x140450944 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _PnpRegQueryValueIndirect @ 0x140522A20 (_PnpRegQueryValueIndirect.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140571004 (_CmGetDeviceMappedPropertyFromRegProp.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1400DEC00 (RtlUnalignedStringCchLengthW.c)
 */

char PnpParseIndirectInfString(const wchar_t *a1, __int64 a2, __int64 a3, ...)
{
  _WORD *v3; // r11
  unsigned int v4; // ecx
  _WORD *i; // rax
  __int64 j; // rdx
  __int16 v8; // cx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int16 v12; // cx
  __int64 v13; // r8
  size_t pcchLength; // [rsp+48h] [rbp+20h] BYREF
  va_list pcchLengtha; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(pcchLengtha, a3);
  pcchLength = va_arg(va1, _QWORD);
  if ( RtlUnalignedStringCchLengthW(a1, 0x7FFFuLL, (size_t *)pcchLengtha) < 0 || pcchLength < 5 || *v3 != 64 )
    return 0;
  v4 = 1;
  for ( i = v3 + 1; *i && *i != 44; i = &v3[++v4] )
    ;
  if ( v3[v4] != 44 || v3[v4 + 1] != 37 )
    return 0;
  for ( j = v4 + 2; ; j = (unsigned int)(j + 1) )
  {
    v8 = v3[j];
    if ( !v8 || v8 == 59 )
      break;
  }
  v9 = 0;
  if ( v3[j] == 59 )
    v9 = j;
  if ( v9 )
  {
    v10 = (unsigned int)(v9 - 1);
  }
  else
  {
    if ( pcchLength > 0xFFFFFFFF )
      return 0;
    v10 = (unsigned int)(pcchLength - 1);
  }
  if ( v3[v10] != 37 )
    return 0;
  if ( v9 )
  {
    v11 = (unsigned int)(v9 + 1);
    v12 = v3[v11];
    if ( v12 )
    {
      v13 = (unsigned int)(v11 + 1);
      do
      {
        if ( v12 == 59 && v3[v13] == 40 && v3[(unsigned int)(pcchLength - 1)] == 41 )
          break;
        v11 = (unsigned int)(v11 + 1);
        v13 = (unsigned int)(v13 + 1);
        v12 = v3[v11];
      }
      while ( v12 );
    }
  }
  return 1;
}
