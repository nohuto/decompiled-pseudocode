/*
 * XREFs of EtwpCovSampCaptureApcRelease @ 0x1402B4818
 * Callers:
 *     EtwpCovSampCaptureApcRundown @ 0x1407B3460 (EtwpCovSampCaptureApcRundown.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1402B52D0 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRelease(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = qword_1403A1CE8;
  memset((void *)(a1 + 56), 0, 0x58uLL);
  v3 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 144) = 0;
  return EtwpCovSampCaptureReleaseToLookaside(v1, v3, a1);
}
