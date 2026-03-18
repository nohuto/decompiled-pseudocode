/*
 * XREFs of bWriteUserSystemEUDCRegistry @ 0x1C0274670
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0x1C00C1EC4 (bReadUserSystemEUDCRegistry.c)
 *     GreEudcLoadLinkW @ 0x1C0273D04 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C0273F4C (GreEudcUnloadLinkW.c)
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00B2274 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bNotIsKeySymbolicLink @ 0x1C00C1FDC (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C00C2074 (GetUserEUDCRegistryPath.c)
 */

__int64 __fastcall bWriteUserSystemEUDCRegistry(PVOID ValueData, unsigned __int16 a2)
{
  __int64 v4; // rdx
  const WCHAR *v5; // rbx
  WCHAR *v6; // rcx
  int UserEUDCRegistryPath; // edi
  unsigned int v8; // esi
  HANDLE v10; // [rsp+30h] [rbp-28h] BYREF
  PCWSTR Path; // [rsp+70h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  v5 = Path;
  if ( !Path )
    goto LABEL_12;
  Handle = 0LL;
  v6 = (WCHAR *)Path;
  v10 = 0LL;
  LODWORD(Path) = 0;
  UserEUDCRegistryPath = GetUserEUDCRegistryPath(v6);
  v8 = 1;
  if ( UserEUDCRegistryPath >= 0 )
  {
    if ( (unsigned int)bNotIsKeySymbolicLink(v5, &Handle, &v10) && (_DWORD)Path )
      UserEUDCRegistryPath = RtlWriteRegistryValue(0, v5, L"SystemDefaultEUDCFont", 1u, ValueData, 2 * a2);
    else
      UserEUDCRegistryPath = -1073741824;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ZwClose(v10);
  if ( UserEUDCRegistryPath < 0 )
LABEL_12:
    v8 = 0;
  if ( v5 )
    Win32FreePool(v5, v4);
  return v8;
}
