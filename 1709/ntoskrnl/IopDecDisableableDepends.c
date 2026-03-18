/*
 * XREFs of IopDecDisableableDepends @ 0x1405F2404
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140552C70 (PiProcessQueryDeviceState.c)
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

char __fastcall IopDecDisableableDepends(__int64 a1)
{
  __int64 v1; // rbx
  signed __int32 v2; // eax
  __int64 v3; // rdx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 600), 0xFFFFFFFF);
      if ( v2 != 1 )
        break;
      v3 = *(_QWORD *)(v1 + 48);
      if ( v3 )
        LOBYTE(v2) = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v3, 11);
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( v1 );
  }
  return v2;
}
