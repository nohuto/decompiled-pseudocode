/*
 * XREFs of PoVolumeDevice @ 0x140598584
 * Callers:
 *     IoCreateDevice @ 0x140549C50 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x1406B7D20 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x14012E384 (PopGetDope.c)
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
      v3 = (_QWORD *)qword_140366078;
      if ( *(__int64 **)qword_140366078 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      *v3 = v2;
      qword_140366078 = Dope + 72;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
