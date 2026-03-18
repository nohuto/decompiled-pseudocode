/*
 * XREFs of PoVolumeDevice @ 0x1406048A8
 * Callers:
 *     IoCreateDevice @ 0x140541590 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x14071C9D0 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x1401635CC (PopGetDope.c)
 */

void __fastcall PoVolumeDevice(__int64 a1)
{
  __int64 Dope; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  Dope = PopGetDope(a1);
  if ( Dope )
  {
    ExAcquireFastMutex(&PopVolumeLock);
    v2 = (_QWORD *)(Dope + 72);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      v3 = (_QWORD *)qword_1403AA8D8;
      if ( *(__int64 **)qword_1403AA8D8 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      *v3 = v2;
      qword_1403AA8D8 = Dope + 72;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
