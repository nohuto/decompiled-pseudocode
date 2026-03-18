/*
 * XREFs of DxgkFreeUnicodeString @ 0x1C01DC1A0
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C002EFC0 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C002FFE0 (DpiMiracastTargetDeviceChange.c)
 *     DpiFreeAdapterInfo @ 0x1C01DBC80 (DpiFreeAdapterInfo.c)
 *     DpiFdoResetFdo @ 0x1C01DEDB0 (DpiFdoResetFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkFreeUnicodeString(_QWORD *a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return result;
}
