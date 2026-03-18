/*
 * XREFs of VidSchiStartContextRunningTimeAtISR @ 0x1C0011FF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0piixqq @ 0x1C0025F78 (McTemplateK0piixqq.c)
 */

char __fastcall VidSchiStartContextRunningTimeAtISR(LARGE_INTEGER *a1, int a2, int a3)
{
  LARGE_INTEGER v3; // rdi
  LARGE_INTEGER v5; // r9

  v3 = a1[12];
  a1[55].QuadPart = 0LL;
  if ( *(_DWORD *)(v3.QuadPart + 2796) == 1 )
    a1[56] = KeQueryPerformanceCounter(0LL);
  if ( bTracingEnabled )
  {
    v5 = a1[7];
    if ( !v5.QuadPart || (a1[14].LowPart & 0x40) != 0 )
      v5.LowPart = (unsigned int)a1;
    if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0piixqq(
        (_DWORD)a1,
        a2,
        a3,
        v5.LowPart,
        a1[55].QuadPart,
        a1[54].QuadPart,
        *(_QWORD *)(v3.QuadPart + 1952),
        a1[53].HighPart,
        0);
  }
  return 1;
}
