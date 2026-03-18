/*
 * XREFs of ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0082B88
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0082410 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0082944 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 * Callees:
 *     ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C0082BF8 (-CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z.c)
 */

int __fastcall CitpEnsureDataKey(void **a1)
{
  int result; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  result = CitpEnsureKey(
             &Handle,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags",
             0);
  if ( result >= 0 )
  {
    ZwClose(Handle);
    result = CitpEnsureKey(
               &Handle,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT",
               0);
    if ( result >= 0 )
    {
      ZwClose(Handle);
      return CitpEnsureKey(
               a1,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System",
               1);
    }
  }
  return result;
}
