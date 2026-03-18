/*
 * XREFs of ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00AEBE4
 * Callers:
 *     ?ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00AE230 (-ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C00AE610 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?ReadEdidFromRegistry@EDIDCACHE@@QEAAJPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0198C90 (-ReadEdidFromRegistry@EDIDCACHE@@QEAAJPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0198E44 (-WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OpenRegistrySubkey(
        PHANDLE KeyHandle,
        __int64 a2,
        void *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *Disposition)
{
  __int64 v9; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  if ( !KeyHandle )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 666LL;
    WdLogEvent5_WdAssertion(v9);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( Disposition )
    return ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, Disposition);
  else
    return ZwOpenKey(KeyHandle, 0xF003Fu, &ObjectAttributes);
}
