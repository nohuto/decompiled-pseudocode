/*
 * XREFs of VidSchiStartContextRunningTimeAtISR @ 0x1C0011070
 * Callers:
 *     <none>
 * Callees:
 *     Template_piixqq @ 0x1C0023EF4 (Template_piixqq.c)
 */

char __fastcall VidSchiStartContextRunningTimeAtISR(LARGE_INTEGER *a1, int a2, int a3)
{
  LARGE_INTEGER v3; // rdi
  LARGE_INTEGER v6; // r9

  v3 = a1[12];
  a1[58].QuadPart = 0LL;
  if ( *(_DWORD *)(v3.QuadPart + 2772) == 1 )
    a1[59] = KeQueryPerformanceCounter(0LL);
  if ( bTracingEnabled )
  {
    v6 = a1[7];
    if ( !v6.QuadPart || (a1[14].LowPart & 0x40) != 0 )
      v6.LowPart = (unsigned int)a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_piixqq(
        a1[58].QuadPart,
        a2,
        a3,
        v6.LowPart,
        a1[58].QuadPart,
        a1[57].QuadPart,
        *(_QWORD *)(v3.QuadPart + 1936),
        a1[56].LowPart,
        0);
  }
  return 1;
}
