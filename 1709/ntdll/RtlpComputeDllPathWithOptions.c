/*
 * XREFs of RtlpComputeDllPathWithOptions @ 0x18007F7A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x18004CA08 (RtlpComputePath.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RtlpComputeDllPathWithOptions(__int16 a1, char *a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // rax
  char v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v13; // rax
  bool v14; // zf
  _DWORD v15[10]; // [rsp+20h] [rbp-38h] BYREF

  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, a2, a3, a4);
  v6 = v15[0];
  if ( (a1 & 0x100) != 0 )
    v6 = 5;
  v15[0] = v6;
  LODWORD(v7) = (a1 & 0x100) != 0;
  if ( (a1 & 0x200) != 0 )
  {
    LODWORD(v7) = v7 + 1;
    v15[(a1 & 0x100) != 0] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v13 = (unsigned int)v7;
    v7 = (unsigned int)(v7 + 1);
    v14 = (_WORD)LdrpDllDirectory == 0;
    v15[v13] = 6;
    if ( !v14 )
    {
      v15[v7] = 0;
      LODWORD(v7) = v7 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v8 = (unsigned int)v7;
    LODWORD(v7) = v7 + 1;
    v15[v8] = 7;
  }
  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) == 0 || (v9 = 1, (a1 & 0x800) == 0) )
    v9 = 0;
  if ( LdrpAppPackagesPath.Length )
  {
    v10 = (unsigned int)v7;
    LODWORD(v7) = v7 + 1;
    v15[v10] = 8;
  }
  v11 = RtlpComputePath(v15, v7, (wchar_t *)a2, v9);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v11 )
  {
    *(_BYTE *)(v11 + 100) = 1;
    if ( !LdrpAppPackagesPath.Length )
      *(_QWORD *)(v11 + 88) = 0LL;
  }
  return v11;
}
