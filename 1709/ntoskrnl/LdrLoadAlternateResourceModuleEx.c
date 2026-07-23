/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x1400DCE94
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400ADB40 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400DD444 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     LdrpKrnGetDataTableEntry @ 0x1400AEA0C (LdrpKrnGetDataTableEntry.c)
 *     LdrpMapResourceFile @ 0x1400B58D4 (LdrpMapResourceFile.c)
 *     LdrpGetFromMUIMemCache @ 0x1400DBFB0 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14012F768 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetResourceFileName @ 0x140131944 (LdrpGetResourceFileName.c)
 *     LdrpVerifyAlternateResourceModule @ 0x140132090 (LdrpVerifyAlternateResourceModule.c)
 *     DownLevelLangIDToLanguageName @ 0x1401326FC (DownLevelLangIDToLanguageName.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x1404F75B0 (MmUnmapViewInSystemSpace.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  unsigned __int64 v9; // rsi
  PVOID *DataTableEntry; // rdi
  __int64 v12; // rdx
  NTSTATUS ResourceFileName; // edi
  ULONG_PTR v14; // rsi
  int v15; // [rsp+20h] [rbp-378h]
  PVOID MappedBase; // [rsp+50h] [rbp-348h] BYREF
  ULONG_PTR v17; // [rsp+58h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-338h] BYREF
  int v19; // [rsp+68h] [rbp-330h]
  UNICODE_STRING v20[2]; // [rsp+70h] [rbp-328h] BYREF
  _BYTE v21[176]; // [rsp+90h] [rbp-308h] BYREF
  char v22; // [rsp+140h] [rbp-258h] BYREF

  MappedBase = 0LL;
  Handle = 0LL;
  memset(v21, 0, 0xAAuLL);
  v17 = 0LL;
  if ( !DllHandle || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v9 = (unsigned __int64)LdrpGetFromMUIMemCache((unsigned __int64)DllHandle, LanguageId, &v17, 4);
  if ( v9 == -1LL )
  {
    *ResourceDllBase = 0LL;
    return -1073020922;
  }
  if ( v9 )
  {
    *ResourceDllBase = (PVOID)v9;
    if ( ResourceOffset )
      *ResourceOffset = v17;
    v19 = 0;
    return 0;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry((unsigned __int64)DllHandle);
  if ( DataTableEntry )
  {
    v20[0].Buffer = (wchar_t *)&v22;
    *(_DWORD *)&v20[0].Length = 34078720;
    if ( (int)DownLevelLangIDToLanguageName(LanguageId, v21, 85LL) >= 0 )
    {
      ResourceFileName = LdrpGetResourceFileName(DataTableEntry, v12, v21, v20);
      if ( ResourceFileName >= 0 )
      {
        ResourceFileName = LdrpMapResourceFile((__int64)DllHandle, v20, &Handle, &MappedBase, &v17);
        if ( ResourceFileName >= 0 )
        {
          v9 = (unsigned __int64)MappedBase | 1;
          if ( !(unsigned __int8)LdrpVerifyAlternateResourceModule(
                                   DllHandle,
                                   (unsigned __int64)MappedBase | 1,
                                   v21,
                                   Flags) )
          {
            MmUnmapViewInSystemSpace(MappedBase);
            ZwClose(Handle);
            Handle = 0LL;
            v9 = 0LL;
            ResourceFileName = -1073020926;
          }
        }
      }
      goto LABEL_16;
    }
    DbgPrintEx(0x55u, 1u, "LDR: No Locale name for LangId %d \n", LanguageId);
  }
  ResourceFileName = -1073020927;
LABEL_16:
  if ( !v9 )
    v9 = -1LL;
  MappedBase = (PVOID)v9;
  v14 = v17;
  LdrpSetAlternateResourceModuleHandle(
    (_DWORD)DllHandle,
    (unsigned int)&MappedBase,
    (unsigned int)&Handle,
    0,
    v15,
    LanguageId,
    1,
    ResourceFileName,
    v17);
  if ( MappedBase == (PVOID)-1LL )
  {
    *ResourceDllBase = 0LL;
  }
  else
  {
    *ResourceDllBase = MappedBase;
    if ( ResourceOffset )
      *ResourceOffset = v14;
    return 0;
  }
  return ResourceFileName;
}
