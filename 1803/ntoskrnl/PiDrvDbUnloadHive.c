/*
 * XREFs of PiDrvDbUnloadHive @ 0x140578894
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405786F0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbOverlayNodeHive @ 0x14073CE80 (PiDrvDbOverlayNodeHive.c)
 * Callees:
 *     ZwUnloadKey2 @ 0x1401AACC0 (ZwUnloadKey2.c)
 *     ZwUnloadKeyEx @ 0x1401AACE0 (ZwUnloadKeyEx.c)
 */

NTSTATUS __fastcall PiDrvDbUnloadHive(UNICODE_STRING *a1, void *a2, __int64 a3)
{
  OBJECT_ATTRIBUTES v4; // [rsp+20h] [rbp-38h] BYREF

  v4.RootDirectory = 0LL;
  v4.ObjectName = a1;
  v4.Length = 48;
  v4.Attributes = 576;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  if ( a2 )
    return ZwUnloadKeyEx(&v4, a2);
  else
    return ZwUnloadKey2((__int64)&v4, 0LL, a3);
}
