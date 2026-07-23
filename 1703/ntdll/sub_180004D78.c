/*
 * XREFs of sub_180004D78 @ 0x180004D78
 * Callers:
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     sub_180058BC8 @ 0x180058BC8 (sub_180058BC8.c)
 *     sub_18005905C @ 0x18005905C (sub_18005905C.c)
 *     sub_180059294 @ 0x180059294 (sub_180059294.c)
 *     sub_180068160 @ 0x180068160 (sub_180068160.c)
 *     LdrLockLoaderLock @ 0x1800803F0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x180081C00 (LdrUnlockLoaderLock.c)
 *     sub_1800867F4 @ 0x1800867F4 (sub_1800867F4.c)
 *     sub_180086CEC @ 0x180086CEC (sub_180086CEC.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     sub_180004908 @ 0x180004908 (sub_180004908.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x1800A5D60 (ZwTerminateThread.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     DbgPrompt @ 0x1800E1340 (DbgPrompt.c)
 */

__int64 __fastcall sub_180004D78(const void **a1, const char *a2)
{
  char v3; // al
  NTSTATUS v4; // edi
  bool v6; // zf
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  CHAR Response; // [rsp+60h] [rbp+8h] BYREF

  v3 = dword_180155A10;
  v4 = *(_DWORD *)*a1;
  if ( (dword_180155A10 & 3) != 0 )
  {
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      491,
      (unsigned int)"LdrpGenericExceptionFilter",
      0,
      "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      a2,
      v4,
      *a1,
      a1[1]);
    v3 = dword_180155A10;
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
        v7 = Response - 105;
        v6 = Response == 105;
      }
      else
      {
        if ( Response == 98 || Response == 66 )
          goto LABEL_18;
        v7 = Response - 73;
        v6 = Response == 73;
      }
      if ( v6 )
        return 1LL;
      v8 = v7 - 6;
      if ( !v8 )
      {
LABEL_18:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 4 )
        {
          sub_180004908((const void **)&NtCurrentPeb()->ProcessParameters->ImagePathName, &stru_180124680);
          ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, v4);
        }
      }
      else
      {
        sub_180004908((const void **)&NtCurrentPeb()->ProcessParameters->ImagePathName, &stru_180124760);
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4);
      }
    }
  }
  return 1LL;
}
