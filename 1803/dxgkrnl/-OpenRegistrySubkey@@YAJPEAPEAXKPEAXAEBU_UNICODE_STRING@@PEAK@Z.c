/*
 * XREFs of ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C009E740
 * Callers:
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C009E5F8 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C009EC10 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?OpenEdidRegistryForTarget@EDIDCACHE@@AEAAJIKAEAPEAXPEAK@Z @ 0x1C01A8E44 (-OpenEdidRegistryForTarget@EDIDCACHE@@AEAAJIKAEAPEAXPEAK@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OpenRegistrySubkey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        void *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *Disposition)
{
  __int64 v10; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  if ( !KeyHandle )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v10 + 24) = 717LL;
    WdLogEvent5_WdAssertion(v10);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( Disposition )
    return ZwCreateKey(KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, Disposition);
  else
    return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
