/*
 * XREFs of PbmReportHostedAppStateChange @ 0x1800183E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180016D74 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18001B684 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmReportHostedAppStateChange(void *a1, __int64 a2, unsigned int a3, LPCRITICAL_SECTION *a4)
{
  __int64 result; // rax
  int v8; // ecx
  unsigned int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  if ( !a4 )
    return 2147942487LL;
  v8 = RpcClientProcessSessionId(a1, v9, &v10);
  if ( !v8 )
    return PickerHostContextManager::OnHostedAppStateChanged(a2, v10, a3, a4);
  result = (unsigned __int16)v8 | 0x80070000;
  if ( v8 <= 0 )
    return (unsigned int)v8;
  return result;
}
