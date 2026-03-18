/*
 * XREFs of RunMethodCallBack @ 0x1C005CB70
 * Callers:
 *     DebugRunMethod @ 0x1C005C5A0 (DebugRunMethod.c)
 * Callees:
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     DumpObject @ 0x1C002C0B0 (DumpObject.c)
 */

void __fastcall RunMethodCallBack(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  _QWORD *v5; // rax
  char *v6; // rdx
  void *v7; // rbx
  __int64 v8; // rdx
  _QWORD *ObjectPath; // rax
  const char *v10; // rdx
  void *v11; // rbx

  v3 = *a1;
  if ( a2 )
  {
    if ( dword_1C00776F8 )
    {
      ObjectPath = GetObjectPath(v3);
      v10 = byte_1C0066CD0;
      v11 = ObjectPath;
      if ( ObjectPath )
        v10 = (const char *)ObjectPath;
      ConPrintf("\n%s failed with the following error:\n%s\n", v10, &pszDest);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
  }
  else
  {
    v5 = GetObjectPath(v3);
    v6 = byte_1C0066CD0;
    v7 = v5;
    if ( v5 )
      v6 = (char *)v5;
    ConPrintf("\n%s completed successfully with object data:\n", v6);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    DumpObject(a3, v8, 0);
  }
  fRunningMethod = 0;
}
