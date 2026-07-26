/*
 * XREFs of NdisMRemoveMiniportInternal @ 0x1C006186C
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00014EC (ndisIfDeregisterInterfaceEx.c)
 *     NdisMRemoveMiniport @ 0x1C0061850 (NdisMRemoveMiniport.c)
 *     ndisMiniportFatalError @ 0x1C00EB0CC (ndisMiniportFatalError.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall NdisMRemoveMiniportInternal(__int64 a1, unsigned __int16 a2)
{
  KIRQL v4; // al
  int v5; // ecx

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x5Du, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_QWORD *)(a1 + 520) = 0LL;
  v5 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a1 + 1856) = 464883;
  *(_DWORD *)(a1 + 1856) = 0;
  if ( (v5 & 0x100) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  }
  else
  {
    *(_DWORD *)(a1 + 124) = v5 | 0x100;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
    ndisLogMiniportEvent(a1, a2);
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 3856));
  }
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x5Eu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, a1);
}
