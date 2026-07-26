/*
 * XREFs of ndisGetRdmaCapabilities @ 0x1C00F08A4
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00AF99C (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisNDKWmiGetAdapterCapabilities @ 0x1C00F0D94 (ndisNDKWmiGetAdapterCapabilities.c)
 */

__int64 __fastcall ndisGetRdmaCapabilities(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  unsigned int v3; // ebx

  v2 = a2[23];
  v3 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 48) + 24LL) + 32LL) )
  {
    if ( *(_DWORD *)(v2 + 8) < 0x88u || *(_DWORD *)(v2 + 16) )
    {
      return (unsigned int)-1073741811;
    }
    else if ( *(_QWORD *)(a1 + 4128) )
    {
      ndisNDKWmiGetAdapterCapabilities(a1, a2[3]);
      a2[7] = 136LL;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
