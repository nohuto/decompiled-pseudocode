/*
 * XREFs of NdisMRestartComplete @ 0x1C001A3B0
 * Callers:
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01033D4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 */

void __stdcall NdisMRestartComplete(NDIS_HANDLE MiniportAdapterHandle, NDIS_STATUS Status)
{
  KIRQL v4; // al
  struct _KEVENT *v5; // rsi
  unsigned __int8 v6; // al

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(156LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, MiniportAdapterHandle);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  *((_DWORD *)MiniportAdapterHandle + 568) = Status;
  v5 = (struct _KEVENT *)*((_QWORD *)MiniportAdapterHandle + 283);
  *((_QWORD *)MiniportAdapterHandle + 283) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v4);
  if ( v5 )
  {
    KeSetEvent(v5, 0, 0);
  }
  else if ( (*((_DWORD *)MiniportAdapterHandle + 31) & 0x100000) != 0
         || (v6 = *((_BYTE *)MiniportAdapterHandle + 32), v6 > 6u)
         || v6 == 6 && *((_BYTE *)MiniportAdapterHandle + 33) >= 0x32u )
  {
    ndisBugCheckEx(0x1FuLL, (ULONG_PTR)MiniportAdapterHandle, 2uLL, 0LL);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(157LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, MiniportAdapterHandle);
}
