/*
 * XREFs of KiIntSteerInit @ 0x140817BD8
 * Callers:
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140817C90 (KiIntSteerDetermineSteeringEnabled.c)
 */

__int64 KiIntSteerInit()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  KiIntTrackRootCount = 0;
  KiIntTrackSpinlock = 0LL;
  qword_14034FD78 = (__int64)&KiIntTrackRootList;
  KiIntTrackRootList = (ULONG_PTR)&KiIntTrackRootList;
  KiIntSteerMask = 1310721;
  memset(&dword_14034FDA4, 0, 0xA4uLL);
  KeAddProcessorAffinityEx(&KiIntSteerMask, 0);
  KiIntSteerAffinitizedInterrupts[0] = 1310721;
  memset(&unk_14034FE64, 0, 0xA4uLL);
  ((void (__fastcall *)(__int64, __int64, int *, char *))off_14033C718[0])(39LL, 4LL, &KiInterruptControllerInfo, &v1);
  KiIntSteerEnabled = KiIntSteerDetermineSteeringEnabled();
  return 0LL;
}
