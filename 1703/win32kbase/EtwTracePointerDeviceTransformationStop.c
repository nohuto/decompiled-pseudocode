/*
 * XREFs of EtwTracePointerDeviceTransformationStop @ 0x1C00DA410
 * Callers:
 *     RIMApplyTransforms @ 0x1C01073A8 (RIMApplyTransforms.c)
 * Callees:
 *     Template_q @ 0x1C00DBC78 (Template_q.c)
 */

__int64 __fastcall EtwTracePointerDeviceTransformationStop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return Template_q(a1, &PointerDeviceTransformationStop, a3, (unsigned int)a1);
  return result;
}
