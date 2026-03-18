/*
 * XREFs of KiIntSteerInit @ 0x140838BF8
 * Callers:
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     HviIsAnyHypervisorPresent @ 0x140134970 (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HviIsXboxNanovisorPresent @ 0x14028B664 (HviIsXboxNanovisorPresent.c)
 */

__int64 KiIntSteerInit()
{
  bool v0; // bl
  ULONG ActiveProcessorCount; // eax
  __int64 result; // rax
  char v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  KiIntSteerMask = 1310721;
  KiIntTrackRootCount = 0;
  qword_14036A858 = (__int64)&KiIntTrackRootList;
  KiIntTrackRootList = (ULONG_PTR)&KiIntTrackRootList;
  KiIntTrackSpinlock = 0LL;
  memset(&unk_14036A884, 0, 0xA4uLL);
  KeAddProcessorAffinityEx(&KiIntSteerMask, 0);
  KiIntSteerAffinitizedInterrupts[0] = 1310721;
  memset(&unk_14036A944, 0, 0xA4uLL);
  ((void (__fastcall *)(__int64, __int64, int *, char *))off_140354F48[0])(39LL, 4LL, &KiInterruptControllerInfo, &v3);
  if ( !KiInterruptSteeringDisabled && (unsigned __int16)KiActiveGroups <= 1u )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
    if ( !(_BYTE)dword_140400130 && ActiveProcessorCount >= 2 && !HviIsXboxNanovisorPresent() )
    {
      if ( HvlHypervisorConnected )
      {
        if ( (HvlpFlags & 2) == 0 )
          goto LABEL_4;
        goto LABEL_11;
      }
      if ( !HviIsAnyHypervisorPresent() )
LABEL_11:
        v0 = KeQueryActiveProcessorCountEx(0) <= 0x10;
    }
  }
LABEL_4:
  result = 0LL;
  KiIntSteerEnabled = v0;
  return result;
}
