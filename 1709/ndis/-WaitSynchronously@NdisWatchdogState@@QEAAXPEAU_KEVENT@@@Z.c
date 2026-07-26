/*
 * XREFs of ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x1C00AB55C
 * Callers:
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00AB4D4 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 * Callees:
 *     ndisWaitForExternalDriver @ 0x1C00AB5E8 (ndisWaitForExternalDriver.c)
 */

void __fastcall NdisWatchdogState::WaitSynchronously(NdisWatchdogState *this, struct _KEVENT *a2)
{
  if ( !*((_BYTE *)this + 264) )
  {
    if ( (unsigned __int8)ndisWaitForExternalDriver(
                            a2,
                            (unsigned int)((MEMORY[0xFFFFF78000000008] - *((_QWORD *)this + 28)) / 0x2710uLL) < *((_DWORD *)this + 51)
                          ? *((_DWORD *)this + 51)
                          - (unsigned int)((MEMORY[0xFFFFF78000000008] - *((_QWORD *)this + 28)) / 0x2710uLL)
                          : 0,
                            *((unsigned int *)this + 48),
                            (char *)this + 200,
                            *((_DWORD *)this + 41)) )
      return;
    *((_BYTE *)this + 264) = 1;
  }
  KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
}
