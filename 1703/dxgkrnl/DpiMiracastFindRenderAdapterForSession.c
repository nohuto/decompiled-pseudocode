/*
 * XREFs of DpiMiracastFindRenderAdapterForSession @ 0x1C008CBDC
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C008C2A0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C01CFA78 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C008CC0C (DpiGetFdoFromDevice.c)
 */

__int64 DpiMiracastFindRenderAdapterForSession()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax

  result = DpiGetFdoFromDevice(qword_1C006FC00);
  if ( result )
  {
    v4 = *(unsigned int *)(result + 236);
    if ( (_DWORD)v4 != 2 )
    {
      if ( *(_DWORD *)(result + 240) != 2 || (v1 = (unsigned int)(v4 - 3), (v1 & 0xFFFFFFFC) != 0) || (_DWORD)v4 == 4 )
      {
        v5 = WdLogNewEntry5_WdWarning(v1, v4, v2, v3);
        WdLogEvent5_WdWarning(v5);
        return 0LL;
      }
    }
  }
  return result;
}
