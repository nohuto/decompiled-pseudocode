/*
 * XREFs of XilEndpoint_AcquireBuffer @ 0x1C0017374
 * Callers:
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0019368 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019E64 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BBE0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 * Callees:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C000FE18 (XilCommonBuffer_AcquireBufferEx.c)
 */

_DWORD *__fastcall XilEndpoint_AcquireBuffer(_BYTE *a1, int a2, __int64 a3, int a4)
{
  return XilCommonBuffer_AcquireBufferEx(
           *(void **)(*(_QWORD *)a1 + 120LL),
           a2,
           a3,
           a4,
           (unsigned int)(a1[1336] != 0) + 1);
}
