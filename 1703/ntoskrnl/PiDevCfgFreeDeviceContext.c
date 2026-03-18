/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x14055947C
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x140559390 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgInitDeviceContext @ 0x14058EA58 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405C1710 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x14069A650 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14069E7D8 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x14069E850 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14069EB7C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
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
