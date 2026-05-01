/*
 * XREFs of HamRpcSrvGetPackageInterruptiveUIState @ 0x180040BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18003FDA8 (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 */

__int64 __fastcall HamRpcSrvGetPackageInterruptiveUIState(
        __int64 a1,
        const WCHAR *a2,
        SID *a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 result; // rax
  unsigned int v7[6]; // [rsp+30h] [rbp-18h] BYREF

  result = HamSrvGetPackageInterruptiveUIState(
             (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1312),
             a2,
             a3,
             a4,
             a5,
             v7);
  if ( (int)result >= 0 )
  {
    *a6 = v7[0];
    return 0LL;
  }
  return result;
}
