/*
 * XREFs of LdrpResReadFile @ 0x1800E3164
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x18001E394 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResCompareResourceNames @ 0x18001F3D4 (LdrpResCompareResourceNames.c)
 *     LdrpResSearchResourceHandle @ 0x1800E3210 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A0140 (NtWaitForSingleObject.c)
 *     NtReadFile @ 0x1800A0180 (NtReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800E38FC (LdrpResSetFilePointer.c)
 */

__int64 __fastcall LdrpResReadFile(char *Handle, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int File; // edx
  int v8; // ecx
  int v9; // [rsp+58h] [rbp-10h]

  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    result = LdrpResSetFilePointer();
    if ( (int)result < 0 )
      return result;
    File = NtReadFile();
    if ( File == 259 )
      File = NtWaitForSingleObject(Handle, 0, 0LL);
    v8 = 0;
    if ( (File & 0xC0000000) != 0x80000000 )
      v8 = File;
    if ( v8 >= 0 && a4 != v9 )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
