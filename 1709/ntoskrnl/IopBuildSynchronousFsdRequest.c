/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x14051AFE0
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x14051A2B0 (IoBuildSynchronousFsdRequest.c)
 *     PnpQueryInterface @ 0x14051AEB4 (PnpQueryInterface.c)
 *     IopCreateArcName @ 0x1405C8AA8 (IopCreateArcName.c)
 *     RawQueryFileSystemInformation @ 0x14071D9F8 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400DE350 (IopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v8; // rbx

  result = IopBuildAsynchronousFsdRequest(a1, a2, a3, a4, a5, a7);
  v8 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = a6;
    IopQueueThreadIrp(result);
    return v8;
  }
  return result;
}
