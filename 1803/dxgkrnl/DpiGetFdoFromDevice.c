/*
 * XREFs of DpiGetFdoFromDevice @ 0x1C000B964
 * Callers:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0040538 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00DCDD4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00DD19C (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C01F5314 (DpiFdoHandleQueryPowerRelations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetFdoFromDevice(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  result = *(_QWORD *)(a1 + 64);
  if ( !result )
    return 0LL;
  if ( *(_DWORD *)(result + 16) == 1953656900 && *(_DWORD *)(result + 20) == 3 )
  {
    v2 = *(_QWORD *)(result + 2592);
    if ( v2 )
      result = *(_QWORD *)(v2 + 64);
  }
  if ( !result || *(_DWORD *)(result + 16) != 1953656900 || *(_DWORD *)(result + 20) != 2 )
    return 0LL;
  return result;
}
