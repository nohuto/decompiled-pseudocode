/*
 * XREFs of PiDrvDbLoadHive @ 0x1405966B4
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405964E0 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwLoadKeyEx @ 0x14017F900 (ZwLoadKeyEx.c)
 *     ZwUnloadKey2 @ 0x140181080 (ZwUnloadKey2.c)
 */

__int64 __fastcall PiDrvDbLoadHive(UNICODE_STRING *a1, UNICODE_STRING *a2, HANDLE *a3)
{
  NTSTATUS v4; // ebx
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES SourceFile; // [rsp+78h] [rbp+27h] BYREF

  *a3 = 0LL;
  TargetKey.RootDirectory = 0LL;
  SourceFile.RootDirectory = 0LL;
  TargetKey.Length = 48;
  SourceFile.Length = 48;
  TargetKey.ObjectName = a1;
  SourceFile.ObjectName = a2;
  TargetKey.Attributes = 576;
  *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
  SourceFile.Attributes = 576;
  *(_OWORD *)&SourceFile.SecurityDescriptor = 0LL;
  v4 = ZwLoadKeyEx(&TargetKey, &SourceFile, 0x80u, 0LL, 0LL, 0, 0LL, 0LL);
  if ( v4 >= 0 )
  {
    v4 = ZwOpenKey(a3, 0xF003Fu, &TargetKey);
    if ( v4 < 0 )
      ZwUnloadKey2(&TargetKey, 0);
  }
  return (unsigned int)v4;
}
