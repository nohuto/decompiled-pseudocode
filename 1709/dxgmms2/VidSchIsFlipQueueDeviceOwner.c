/*
 * XREFs of VidSchIsFlipQueueDeviceOwner @ 0x1C00B48C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsFlipQueueDeviceOwner(struct _ERESOURCE *a1, unsigned int a2, __int64 a3)
{
  struct _ERESOURCE *v3; // rsi
  __int64 v4; // rbx

  v3 = a1 + 11;
  v4 = a2;
  ExAcquireResourceExclusiveLite(a1 + 11, 1u);
  LOBYTE(v4) = *(_QWORD *)(*(&a1[28].SpinLock + v4) + 16) == a3;
  ExReleaseResourceLite(v3);
  return v4;
}
