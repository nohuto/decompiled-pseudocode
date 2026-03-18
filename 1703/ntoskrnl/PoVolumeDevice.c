/*
 * XREFs of PoVolumeDevice @ 0x1405CB990
 * Callers:
 *     IoCreateDevice @ 0x1404A1F50 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x14068BEE0 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x140163F5C (PopGetDope.c)
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
      v3 = (_QWORD *)qword_14034B9F8;
      if ( *(__int64 **)qword_14034B9F8 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      *v3 = v2;
      qword_14034B9F8 = Dope + 72;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
