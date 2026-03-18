/*
 * XREFs of XilEndpoint_AcquireBuffer @ 0x1C000FF24
 * Callers:
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C001209C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0012B88 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0014980 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 * Callees:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C0006CB8 (XilCommonBuffer_AcquireBufferEx.c)
 */

char *__fastcall XilEndpoint_AcquireBuffer(_BYTE *a1, unsigned int a2, __int64 a3, int a4)
{
  return XilCommonBuffer_AcquireBufferEx(
           *(void **)(*(_QWORD *)a1 + 120LL),
           a2,
           a3,
           a4,
           (unsigned int)(a1[1336] != 0) + 1);
}
