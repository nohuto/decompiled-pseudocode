/*
 * XREFs of ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0161AD0
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0161D74 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0164664 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 * Callees:
 *     ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C0161B78 (-CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z.c)
 */

int __fastcall CitpEnsureDataKey(void **a1)
{
  char IsStateSeparationEnabled; // al
  const unsigned __int16 *v3; // rdx
  int result; // eax
  char v5; // al
  const unsigned __int16 *v6; // rdx
  char v7; // al
  const unsigned __int16 *v8; // rdx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
  v3 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags";
  if ( !IsStateSeparationEnabled )
    v3 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags";
  result = CitpEnsureKey(&Handle, v3, 0);
  if ( result >= 0 )
  {
    ZwClose(Handle);
    v5 = RtlIsStateSeparationEnabled();
    v6 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
    if ( !v5 )
      v6 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
    result = CitpEnsureKey(&Handle, v6, 0);
    if ( result >= 0 )
    {
      ZwClose(Handle);
      v7 = RtlIsStateSeparationEnabled();
      v8 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System";
      if ( !v7 )
        v8 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System";
      return CitpEnsureKey(a1, v8, 1);
    }
  }
  return result;
}
