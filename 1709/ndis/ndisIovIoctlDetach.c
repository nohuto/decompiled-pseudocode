/*
 * XREFs of ndisIovIoctlDetach @ 0x1C00EF9B4
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00B74EC (ndisDeviceControlHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovIoctlDetach(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  v2 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 48LL) + 24LL) + 32LL) )
  {
    if ( ndisSystemSupportsSriov && (v3 = *(_QWORD *)(a1 + 4640)) != 0 && (*(_BYTE *)(v3 + 8) & 3) == 3 )
      *(_QWORD *)(a2 + 56) = 0LL;
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
