/*
 * XREFs of MNAllocPopup @ 0x1C01F6BDC
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01F7708 (xxxMNStartMenuState.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     ??$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z @ 0x1C01F69A0 (--$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *__fastcall MNAllocPopup(int a1)
{
  void *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( a1 || (gdwPUDFlags & 0x800000) != 0 )
  {
    v1 = (void *)Win32AllocPoolWithQuota(96LL, 1836086101LL);
  }
  else
  {
    gdwPUDFlags |= 0x800000u;
    v1 = gpopupMenu;
  }
  if ( v1 )
  {
    memset(v1, 0, 0x60uLL);
    if ( !InitLookAsideRef<tagPOPUPMENU>((__int64)v1) )
    {
      Win32FreePool(v1, v2, v3);
      return 0LL;
    }
  }
  return v1;
}
