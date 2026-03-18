/*
 * XREFs of XilCommonBuffer_AcquireBufferEx @ 0x1C0006CB8
 * Callers:
 *     XilEndpoint_AcquireBuffer @ 0x1C000FF24 (XilEndpoint_AcquireBuffer.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C000FF58 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilCoreUsbDevice_Create @ 0x1C003FABC (XilCoreUsbDevice_Create.c)
 *     Interrupter_PrepareInterrupter @ 0x1C0059BF0 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C000225C (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C00064FC (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C0006678 (CommonBuffer_AcquireShadowBuffer.c)
 */

char *__fastcall XilCommonBuffer_AcquireBufferEx(void *a1, unsigned int a2, __int64 a3, int a4, int a5)
{
  switch ( a5 )
  {
    case 1:
      return (char *)CommonBuffer_AcquireBuffer(a1, a2, a3, a4);
    case 2:
      return (char *)CommonBuffer_AcquireShadowBuffer(a2, a3, a4);
    case 3:
      return CommonBuffer_AcquireSecureBuffer((__int64)a1, a2, a3, a4);
  }
  return 0LL;
}
