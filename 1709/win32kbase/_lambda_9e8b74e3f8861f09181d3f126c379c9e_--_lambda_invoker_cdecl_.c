/*
 * XREFs of _lambda_9e8b74e3f8861f09181d3f126c379c9e_::_lambda_invoker_cdecl_ @ 0x1C001AB10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012BD1C (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 */

char __fastcall lambda_9e8b74e3f8861f09181d3f126c379c9e_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v3 = *((_QWORD *)a1 + 59);
    if ( *(_DWORD *)(v3 + 24) == 7 )
    {
      v4 = 0LL;
      if ( v3 )
        v4 = *(_QWORD *)(v3 + 960);
      CPTPProcessor::UpdateEnvironment(v4, 1LL);
    }
  }
  return 1;
}
