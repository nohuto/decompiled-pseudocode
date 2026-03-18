/*
 * XREFs of IovUtilIsVerifiedDeviceStack @ 0x140772E70
 * Callers:
 *     VfMajorTestStartedPdoStack @ 0x1407733C0 (VfMajorTestStartedPdoStack.c)
 *     IovpSessionDataCreate @ 0x14077CFC8 (IovpSessionDataCreate.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x140038B30 (MmIsDriverVerifying.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IovUtilIsVerifiedDeviceStack(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax
  unsigned int v4; // ebx
  KIRQL v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = a1;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL);
  if ( v2 < 0 )
    return ((unsigned int)v2 >> 30) & 1;
  v4 = 0;
  v5 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( 1 )
  {
    v6 = v1;
    v1 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 48LL);
    if ( MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(v6 + 8)) )
      v4 = 1;
    if ( !v1 )
      break;
    v7 = *(_QWORD *)(v1 + 312);
    if ( *(int *)(v7 + 32) < 0 )
    {
      if ( (*(_DWORD *)(v7 + 32) & 0x40000000) != 0 )
        v4 = 1;
      goto LABEL_10;
    }
  }
  do
  {
LABEL_10:
    v8 = *(_QWORD *)(v6 + 312);
    if ( v4 )
      *(_DWORD *)(v8 + 32) |= 0x40000000u;
    else
      *(_DWORD *)(v8 + 32) &= ~0x40000000u;
    *(_DWORD *)(v8 + 32) |= 0x80000000;
    v6 = *(_QWORD *)(v6 + 24);
  }
  while ( v6 );
  KeReleaseQueuedSpinLock(0xAuLL, v5);
  return v4;
}
