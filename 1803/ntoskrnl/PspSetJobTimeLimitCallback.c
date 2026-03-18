/*
 * XREFs of PspSetJobTimeLimitCallback @ 0x14077C350
 * Callers:
 *     <none>
 * Callees:
 *     PsQueryRuntimeProcess @ 0x1404FCEA0 (PsQueryRuntimeProcess.c)
 */

__int64 __fastcall PspSetJobTimeLimitCallback(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryRuntimeProcess(a1, &v4);
    *a2 += v4 * (unsigned __int64)KeMaximumIncrement;
  }
  return 0LL;
}
