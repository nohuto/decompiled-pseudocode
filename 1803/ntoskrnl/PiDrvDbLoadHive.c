/*
 * XREFs of PiDrvDbLoadHive @ 0x1405788DC
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405786F0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbOverlayNodeHive @ 0x14073CE80 (PiDrvDbOverlayNodeHive.c)
 * Callees:
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwLoadKeyEx @ 0x1401A9520 (ZwLoadKeyEx.c)
 *     ZwUnloadKey2 @ 0x1401AACC0 (ZwUnloadKey2.c)
 */

__int64 __fastcall PiDrvDbLoadHive(UNICODE_STRING *a1, UNICODE_STRING *a2, int a3, HANDLE *a4)
{
  NTSTATUS v5; // ebx
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES SourceFile; // [rsp+78h] [rbp+27h] BYREF

  *a4 = 0LL;
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
  v5 = ZwLoadKeyEx(&TargetKey, &SourceFile, a3 | 0x80, 0LL, 0LL, 0, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    v5 = ZwOpenKey(a4, 0x2000000u, &TargetKey);
    if ( v5 < 0 )
      ZwUnloadKey2(&TargetKey, 0);
  }
  return (unsigned int)v5;
}
