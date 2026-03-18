/*
 * XREFs of vInitFontsDirectoryNameInformation @ 0x1C01220C0
 * Callers:
 *     <none>
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B1F70 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x1C00B6AEC (-QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z.c)
 */

int vInitFontsDirectoryNameInformation()
{
  void *v0; // rax
  struct _STRING *v1; // rax
  __int64 v2; // r8
  char v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  wchar_t *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  int v11; // [rsp+68h] [rbp-9h] BYREF
  const wchar_t *v12; // [rsp+70h] [rbp-1h]
  STRING Source; // [rsp+78h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D8h] [rbp+67h] BYREF

  v11 = 2359330;
  v12 = L"\\SystemRoot\\Fonts";
  Source.Buffer = (PCHAR)L"\\";
  *(_DWORD *)&Source.Length = 262146;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v0) = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
  if ( (int)v0 >= 0 )
  {
    v1 = (struct _STRING *)PALLOCMEM2(0x190uLL, 1986422343LL, 1);
    gpniFontsDirectory = v1;
    if ( v1
      && ((int)QueryNameStringFromHandle(FileHandle, (struct _OBJECT_NAME_INFORMATION *)v1, v2, v3) < 0
       || RtlAppendStringToString(gpniFontsDirectory, &Source) < 0) )
    {
      Win32FreePool(gpniFontsDirectory, v4, v5);
      gpniFontsDirectory = 0LL;
    }
    v6 = (wchar_t *)PALLOCMEM2(0x208uLL, 1986422343LL, 1);
    gpwszFontsDirectory = v6;
    if ( v6 )
    {
      if ( (unsigned int)bAppendSysDirectory(v6, &word_1C02D9FB8) )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( gpwszFontsDirectory[v9] );
        gcwcFontsDirectory = v9 + 1;
      }
      else
      {
        Win32FreePool(gpwszFontsDirectory, v7, v8);
        gpwszFontsDirectory = 0LL;
        gcwcFontsDirectory = 0;
      }
    }
    ZwClose(FileHandle);
    v0 = PALLOCMEM2(0x190uLL, 1986422343LL, 1);
    gpniScratch = (__int64)v0;
  }
  return (int)v0;
}
