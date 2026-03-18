/*
 * XREFs of XilCommonBuffer_AcquireBufferEx @ 0x1C000FE18
 * Callers:
 *     XilEndpoint_AcquireBuffer @ 0x1C0017374 (XilEndpoint_AcquireBuffer.c)
 *     XilCoreUsbDevice_Create @ 0x1C0041320 (XilCoreUsbDevice_Create.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C000F6FC (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C000F878 (CommonBuffer_AcquireShadowBuffer.c)
 */

_DWORD *__fastcall XilCommonBuffer_AcquireBufferEx(void *a1, int a2, __int64 a3, int a4, int a5)
{
  if ( a5 == 1 )
    return (_DWORD *)CommonBuffer_AcquireBuffer(a1, a2, a3, a4);
  else
    return CommonBuffer_AcquireShadowBuffer(a2, a3, a4);
}
