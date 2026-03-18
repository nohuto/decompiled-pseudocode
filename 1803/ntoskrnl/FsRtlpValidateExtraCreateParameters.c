/*
 * XREFs of FsRtlpValidateExtraCreateParameters @ 0x1404F3A94
 * Callers:
 *     IoCreateFileEx @ 0x1404F2DE0 (IoCreateFileEx.c)
 *     IoQueryInformationByName @ 0x14071C390 (IoQueryInformationByName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall FsRtlpValidateExtraCreateParameters(ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax

  *(_DWORD *)(BugCheckParameter4 + 4) |= 1u;
  result = *(_QWORD *)(BugCheckParameter4 + 8);
  if ( result == BugCheckParameter4 + 8 )
    KeBugCheckEx(0x10Cu, 0x15uLL, 0LL, 0LL, BugCheckParameter4);
  do
  {
    *(_DWORD *)(result + 40) |= 1u;
    result = *(_QWORD *)result;
  }
  while ( result != BugCheckParameter4 + 8 );
  return result;
}
