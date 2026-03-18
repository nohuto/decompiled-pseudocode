/*
 * XREFs of PsGetThreadProperty @ 0x140038890
 * Callers:
 *     <none>
 * Callees:
 *     PspGetProperty @ 0x140037DA0 (PspGetProperty.c)
 *     PspValidateThread @ 0x140038928 (PspValidateThread.c)
 *     PsGetJobProperty @ 0x140039600 (PsGetJobProperty.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  char v3; // di
  unsigned __int64 v6; // rcx
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v3 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 || (int)PspValidateThread() < 0 )
    return 0LL;
  if ( (int)PspGetProperty(&Thread[1].WaitBlock[1].SparePtr, Key, &v8) < 0 && (v3 & 1) == 0 )
  {
    v6 = *(_QWORD *)&Thread[1].WaitBlockFill11[160];
    if ( v6 == -3LL )
      v6 = Thread->Process[1].Affinity.Bitmap[16];
    if ( v6 )
      return (PVOID)PsGetJobProperty(v6, Key);
  }
  return v8;
}
