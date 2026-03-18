/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x14058B72C
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14044EB08 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14044EE8C (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgInitDeviceContext @ 0x14058AA6C (PiDevCfgInitDeviceContext.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14058B640 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405D62D0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1406C6210 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1406C9CD8 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1406C9D50 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

void __fastcall PiDevCfgFreeDeviceContext(__int64 a1)
{
  UNICODE_STRING *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rcx

  if ( *(int *)a1 < 0 )
  {
    v4 = *(void **)(a1 + 16);
    if ( v4 )
      ZwClose(v4);
  }
  v2 = (UNICODE_STRING *)(a1 + 24);
  v3 = 3LL;
  do
  {
    RtlFreeUnicodeString(v2++);
    --v3;
  }
  while ( v3 );
}
