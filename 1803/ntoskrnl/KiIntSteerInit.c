/*
 * XREFs of KiIntSteerInit @ 0x1408B3130
 * Callers:
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1408B31E8 (KiIntSteerDetermineSteeringEnabled.c)
 */

__int64 KiIntSteerInit()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  KiIntTrackRootCount = 0;
  KiIntTrackSpinlock = 0LL;
  qword_1403AD958 = (__int64)&KiIntTrackRootList;
  KiIntTrackRootList = (ULONG_PTR)&KiIntTrackRootList;
  KiIntSteerMask = 1310721;
  memset(&unk_1403AD984, 0, 0xA4uLL);
  KeAddProcessorAffinityEx(&KiIntSteerMask, 0);
  KiIntSteerAffinitizedInterrupts[0] = 1310721;
  memset(&unk_1403ADA44, 0, 0xA4uLL);
  ((void (__fastcall *)(__int64, __int64, int *, char *))off_140397D98[0])(39LL, 4LL, &KiInterruptControllerInfo, &v1);
  KiIntSteerEnabled = KiIntSteerDetermineSteeringEnabled();
  return 0LL;
}
