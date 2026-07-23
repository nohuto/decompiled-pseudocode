/*
 * XREFs of PiDrvDbUnloadHive @ 0x140578894
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405786F0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbOverlayNodeHive @ 0x14073CE80 (PiDrvDbOverlayNodeHive.c)
 * Callees:
 *     ZwUnloadKey2 @ 0x1401AACC0 (ZwUnloadKey2.c)
 *     ZwUnloadKeyEx @ 0x1401AACE0 (ZwUnloadKeyEx.c)
 */

NTSTATUS __fastcall PiDrvDbUnloadHive(UNICODE_STRING *a1, void *a2)
{
  OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF

  v3.RootDirectory = 0LL;
  v3.ObjectName = a1;
  v3.Length = 48;
  v3.Attributes = 576;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  if ( a2 )
    return ZwUnloadKeyEx(&v3, a2);
  else
    return ZwUnloadKey2(&v3, 0);
}
