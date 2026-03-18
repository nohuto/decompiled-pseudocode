/*
 * XREFs of VidSchResetGPUTimeout @ 0x1C00AA620
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C006B650 (VidSchiCheckHwProgress.c)
 *     VidSchRestartAdapter @ 0x1C00AC670 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchResetGPUTimeout(__int64 a1)
{
  __int64 i; // r8
  __int64 result; // rax

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 60); *(_DWORD *)(result + 440) &= ~2u )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8 * i + 416) + 440LL) &= ~1u;
    result = *(_QWORD *)(a1 + 8 * i + 416);
    i = (unsigned int)(i + 1);
  }
  return result;
}
