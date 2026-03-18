/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x1404DDEB0
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x1404DDD40 (IoBuildSynchronousFsdRequest.c)
 *     PnpQueryInterface @ 0x1404DDD80 (PnpQueryInterface.c)
 *     RawQueryFileSystemInformation @ 0x14059ACD8 (RawQueryFileSystemInformation.c)
 *     IopCreateArcName @ 0x14059C120 (IopCreateArcName.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x140081250 (IopBuildAsynchronousFsdRequest.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 */

IRP *__fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        LARGE_INTEGER *a5,
        struct _KEVENT *a6,
        struct _IO_STATUS_BLOCK *a7,
        __int64 a8)
{
  IRP *result; // rax
  IRP *v9; // rbx

  result = IopBuildAsynchronousFsdRequest(a1, a2, a3, a4, a5, a7, a8);
  v9 = result;
  if ( result )
  {
    result->UserEvent = a6;
    IopQueueThreadIrp((__int64)result);
    return v9;
  }
  return result;
}
