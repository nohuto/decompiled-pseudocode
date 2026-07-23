/*
 * XREFs of sub_1800D0B18 @ 0x1800D0B18
 * Callers:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     LdrUnlockLoaderLock @ 0x180047B80 (LdrUnlockLoaderLock.c)
 *     LdrLockLoaderLock @ 0x180047C20 (LdrLockLoaderLock.c)
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 *     sub_18005088C @ 0x18005088C (sub_18005088C.c)
 *     sub_180050AD8 @ 0x180050AD8 (sub_180050AD8.c)
 *     sub_180077DC0 @ 0x180077DC0 (sub_180077DC0.c)
 *     sub_180082060 @ 0x180082060 (sub_180082060.c)
 *     sub_1800828E0 @ 0x1800828E0 (sub_1800828E0.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089CD0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_1800896AC @ 0x1800896AC (sub_1800896AC.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x18009B520 (ZwTerminateThread.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     DbgPrompt @ 0x1800DAF10 (DbgPrompt.c)
 */

__int64 __fastcall sub_1800D0B18(const void **a1, const char *a2)
{
  char v3; // al
  NTSTATUS v4; // edi
  bool v5; // zf
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  CHAR Response; // [rsp+60h] [rbp+8h] BYREF

  v3 = dword_180156A70;
  v4 = *(_DWORD *)*a1;
  if ( (dword_180156A70 & 3) != 0 )
  {
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      511,
      (unsigned int)"LdrpGenericExceptionFilter",
      0,
      "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      a2,
      v4,
      *a1,
      a1[1]);
    v3 = dword_180156A70;
  }
  if ( (v3 & 0x10) != 0 )
    __debugbreak();
  if ( (v3 & 0x30) == 0x20 )
  {
    while ( 1 )
    {
      DbgPrint("\n***Exception thrown within loader***\n");
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", &Response, 2u);
      if ( Response > 98 )
      {
        v6 = Response - 105;
        v5 = Response == 105;
      }
      else
      {
        if ( Response == 98 || Response == 66 )
          goto LABEL_17;
        v6 = Response - 73;
        v5 = Response == 73;
      }
      if ( v5 )
        return 1LL;
      v7 = v6 - 6;
      if ( !v7 )
      {
LABEL_17:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 4 )
        {
          sub_1800896AC(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &stru_180123F00);
          ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, v4);
        }
      }
      else
      {
        sub_1800896AC(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &stru_180123FE0);
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4);
      }
    }
  }
  return 1LL;
}
