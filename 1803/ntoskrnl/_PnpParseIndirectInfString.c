/*
 * XREFs of _PnpParseIndirectInfString @ 0x14056D80C
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x1405087D0 (_PnpRegQueryValueIndirect.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140565484 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1407EEC8C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14006DC90 (RtlUnalignedStringCchLengthW.c)
 */

char PnpParseIndirectInfString(const wchar_t *a1, __int64 a2, __int64 a3, ...)
{
  _WORD *v3; // r11
  __int16 v4; // ax
  unsigned int v5; // ecx
  __int64 i; // rdx
  __int16 v7; // cx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int16 v11; // cx
  __int64 v12; // r8
  size_t pcchLength; // [rsp+48h] [rbp+20h] BYREF
  va_list pcchLengtha; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(pcchLengtha, a3);
  pcchLength = va_arg(va1, _QWORD);
  if ( RtlUnalignedStringCchLengthW(a1, 0x7FFFuLL, (size_t *)pcchLengtha) < 0 || pcchLength < 5 || *v3 != 64 )
    return 0;
  v4 = v3[1];
  v5 = 1;
  while ( v4 && v4 != 44 )
    v4 = v3[++v5];
  if ( v3[v5] != 44 || v3[v5 + 1] != 37 )
    return 0;
  for ( i = v5 + 2; ; i = (unsigned int)(i + 1) )
  {
    v7 = v3[i];
    if ( !v7 || v7 == 59 )
      break;
  }
  v8 = 0;
  if ( v3[i] == 59 )
    v8 = i;
  if ( v8 )
  {
    v9 = (unsigned int)(v8 - 1);
  }
  else
  {
    if ( pcchLength > 0xFFFFFFFF )
      return 0;
    v9 = (unsigned int)(pcchLength - 1);
  }
  if ( v3[v9] != 37 )
    return 0;
  if ( v8 )
  {
    v10 = (unsigned int)(v8 + 1);
    v11 = v3[v10];
    if ( v11 )
    {
      v12 = (unsigned int)(v10 + 1);
      do
      {
        if ( v11 == 59 && v3[v12] == 40 && v3[(unsigned int)(pcchLength - 1)] == 41 )
          break;
        v10 = (unsigned int)(v10 + 1);
        v12 = (unsigned int)(v12 + 1);
        v11 = v3[v10];
      }
      while ( v11 );
    }
  }
  return 1;
}
