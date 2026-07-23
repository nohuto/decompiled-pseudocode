/*
 * XREFs of _ResCOpenMapping @ 0x18010F2F8
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x18008E028 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     ResCSegmentCreateAndPopulate @ 0x18008E23C (ResCSegmentCreateAndPopulate.c)
 *     _ResCloseHandle @ 0x18010F38C (_ResCloseHandle.c)
 *     _ResMapViewOfFile @ 0x180110408 (_ResMapViewOfFile.c)
 *     _ResOpenFileMapping @ 0x1801104C4 (_ResOpenFileMapping.c)
 *     _ResUnmapViewOfFile @ 0x180110624 (_ResUnmapViewOfFile.c)
 */

void *__fastcall ResCOpenMapping(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  void *result; // rax

  v2 = 0LL;
  v3 = 0LL;
  if ( !a1 )
  {
    RtlSetLastWin32Error(87);
LABEL_7:
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      ResCloseHandle(v3);
    goto LABEL_9;
  }
  v4 = ResOpenFileMapping(4LL, a2, a1);
  v3 = v4;
  if ( !v4 )
    return 0LL;
  v2 = (void *)ResMapViewOfFile(v4, 4, v5, v6, 0LL);
  if ( !v2 )
    goto LABEL_7;
  ResCloseHandle(v3);
  result = ResCSegmentCreateAndPopulate((__int64)v2, 0, 9);
  if ( !result )
  {
LABEL_9:
    if ( v2 )
      ResUnmapViewOfFile(v2);
    return 0LL;
  }
  return result;
}
