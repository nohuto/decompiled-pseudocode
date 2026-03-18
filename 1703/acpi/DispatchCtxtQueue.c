/*
 * XREFs of DispatchCtxtQueue @ 0x1C0025130
 * Callers:
 *     <none>
 * Callees:
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 */

void DispatchCtxtQueue()
{
  KIRQL v0; // al
  __int64 v1; // rcx
  char v2; // r8
  KIRQL v3; // dl
  __int64 v4; // rax
  __int64 v5; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v1 = qword_1C0077588;
  v2 = gReadyQueue & 0xFD;
  byte_1C00775A0 = v0;
  v3 = v0;
  gReadyQueue &= ~2u;
  if ( (__int64 *)qword_1C0077588 != &qword_1C0077588
    && ((__int64 *)RunningContextListHead == &RunningContextListHead || (gdwfAMLI & 4) != 0)
    && (v2 & 8) == 0 )
  {
    while ( (__int64 *)v1 != &qword_1C0077588 )
    {
      v4 = *(_QWORD *)v1;
      if ( *(__int64 **)(v1 + 8) != &qword_1C0077588 || *(_QWORD *)(v4 + 8) != v1 )
        __fastfail(3u);
      qword_1C0077588 = *(_QWORD *)v1;
      *(_QWORD *)(v4 + 8) = &qword_1C0077588;
      *(_QWORD *)(v1 + 8) = v1;
      *(_QWORD *)v1 = v1;
      v5 = v1 - 32;
      *(_DWORD *)(v5 + 64) &= ~0x40u;
      RunContext((char *)v5);
      v1 = qword_1C0077588;
    }
    v3 = byte_1C00775A0;
  }
  KeReleaseSpinLock(&SpinLock, v3);
}
