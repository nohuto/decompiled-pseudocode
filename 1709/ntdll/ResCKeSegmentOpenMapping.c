/*
 * XREFs of ResCKeSegmentOpenMapping @ 0x18008E1DC
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x18008E028 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     _ResCMapCMFModule @ 0x18001B470 (_ResCMapCMFModule.c)
 *     ResCSegmentCreateAndPopulate @ 0x18008E23C (ResCSegmentCreateAndPopulate.c)
 *     _ResUnmapViewOfFile @ 0x180110624 (_ResUnmapViewOfFile.c)
 */

PVOID __fastcall ResCKeSegmentOpenMapping(ULONG a1)
{
  PVOID result; // rax
  void *v2; // rdi
  __int64 v3; // rbx
  ULONG v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  result = ResCMapCMFModule(0x20u, a1, &v4, 0LL, 0LL);
  v2 = result;
  if ( result )
  {
    v3 = ResCSegmentCreateAndPopulate(result, v4, 1LL);
    if ( !v3 )
      ResUnmapViewOfFile(v2);
    return (PVOID)v3;
  }
  return result;
}
