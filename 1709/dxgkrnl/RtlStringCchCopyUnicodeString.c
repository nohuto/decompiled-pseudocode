/*
 * XREFs of RtlStringCchCopyUnicodeString @ 0x1C000E904
 * Callers:
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00E41A0 (MonitorGetMonitorDeviceInterfaceName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyUnicodeString(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        PCUNICODE_STRING SourceString)
{
  NTSTATUS v3; // r9d
  unsigned __int16 Length; // ax
  wchar_t *v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int16 MaximumLength; // r10
  wchar_t *Buffer; // r11
  unsigned __int64 v10; // r8
  signed __int64 v11; // rbx

  v3 = 0;
  if ( cchDest - 1 > 0x7FFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    Length = SourceString->Length;
    v6 = 0LL;
    v7 = 0LL;
    v3 = 0;
    if ( (Length & 1) != 0
      || (MaximumLength = SourceString->MaximumLength, (MaximumLength & 1) != 0)
      || Length > MaximumLength
      || MaximumLength == 0xFFFF )
    {
      v3 = -1073741811;
    }
    else
    {
      Buffer = SourceString->Buffer;
      if ( !Buffer && (Length || MaximumLength) )
      {
        v3 = -1073741811;
      }
      else
      {
        v6 = Buffer;
        v7 = (unsigned __int64)Length >> 1;
      }
      if ( v3 >= 0 )
      {
        v3 = 0;
        if ( !cchDest )
          goto LABEL_18;
        v10 = v7 - cchDest;
        v11 = (char *)v6 - (char *)pszDest;
        do
        {
          if ( !(v10 + cchDest) )
            break;
          *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v11);
          ++pszDest;
          --cchDest;
        }
        while ( cchDest );
        if ( !cchDest )
        {
LABEL_18:
          --pszDest;
          v3 = -2147483643;
        }
      }
    }
    *pszDest = 0;
  }
  return v3;
}
