/*
 * XREFs of McGenEventUnregister @ 0x1C0030F28
 * Callers:
 *     DxgkEtwShutdown @ 0x1C0030DA0 (DxgkEtwShutdown.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C019C618 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONGLONG v2; // rcx
  ULONG result; // eax

  v2 = *RegHandle;
  if ( !v2 )
    return 0;
  result = EtwUnregister(v2);
  *RegHandle = 0LL;
  return result;
}
