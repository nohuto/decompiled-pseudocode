/*
 * XREFs of bReadUserSystemEUDCRegistry @ 0x1C00C1EC4
 * Callers:
 *     bAddAllFlEntry @ 0x1C00C16B8 (bAddAllFlEntry.c)
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00B2274 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bNotIsKeySymbolicLink @ 0x1C00C1FDC (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C00C2074 (GetUserEUDCRegistryPath.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0274670 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall bReadUserSystemEUDCRegistry(wchar_t *Dst)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  WCHAR *v4; // rdi
  WCHAR *v5; // rbx
  PCWSTR v6; // rcx
  int UserEUDCRegistryPath; // esi
  unsigned int v8; // esi
  wchar_t *v10; // rax
  wchar_t *v11; // rsi
  PCWSTR Path; // [rsp+30h] [rbp-20h] BYREF
  WCHAR *v13; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE v16; // [rsp+A8h] [rbp+58h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v13, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  v4 = v13;
  v5 = (WCHAR *)Path;
  if ( !v13 || !Path )
    goto LABEL_10;
  Handle = 0LL;
  v6 = Path;
  v16 = 0LL;
  *v13 = 0;
  *v5 = 0;
  *(_DWORD *)&DestinationString.Length = 17039360;
  DestinationString.Buffer = v4;
  UserEUDCRegistryPath = GetUserEUDCRegistryPath(v6);
  if ( UserEUDCRegistryPath >= 0 )
  {
    bNotIsKeySymbolicLink(v5, &Handle, &v16);
    UserEUDCRegistryPath = -1073741824;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v16 )
    ZwClose(v16);
  if ( UserEUDCRegistryPath != -1073741772 )
    goto LABEL_10;
  v10 = wcsrchr(v5, 0x5Cu);
  v11 = v10;
  if ( !v10
    || _wcsicmp(v10 + 1, word_1C032B830)
    || (*v11 = 0,
        RtlCreateRegistryKey(0, v5),
        *v11 = 92,
        RtlCreateRegistryKey(0, v5),
        !(unsigned int)bWriteUserSystemEUDCRegistry((PVOID)L"EUDC.TTE"))
    || (RtlInitUnicodeString(&DestinationString, L"EUDC.TTE"),
        v8 = 1,
        wcsncpy_s(Dst, 0x104uLL, DestinationString.Buffer, DestinationString.Length)) )
  {
LABEL_10:
    v8 = 0;
  }
  if ( v5 )
    Win32FreePool(v5, v2, v3);
  if ( v4 )
    Win32FreePool(v4, v2, v3);
  return v8;
}
