/*
 * XREFs of ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x1C00BF810
 * Callers:
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00BF788 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 * Callees:
 *     ndisWaitForExternalDriver @ 0x1C00BF894 (ndisWaitForExternalDriver.c)
 */

void __fastcall NdisWatchdogState::WaitSynchronously(NdisWatchdogState *this, struct _KEVENT *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  if ( *((_BYTE *)this + 256) )
    goto LABEL_6;
  v4 = *((_DWORD *)this + 51);
  v5 = 0LL;
  v6 = (MEMORY[0xFFFFF78000000008] - *((_QWORD *)this + 28)) / 0x2710uLL;
  if ( (unsigned int)v6 < v4 )
    v5 = v4 - (unsigned int)v6;
  if ( !(unsigned __int8)ndisWaitForExternalDriver(a2, v5, *((unsigned int *)this + 48), (char *)this + 200) )
  {
    *((_BYTE *)this + 256) = 1;
LABEL_6:
    KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
  }
}
