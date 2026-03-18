/*
 * XREFs of HUBPDO_ParentInterfaceWasDeviceProgrammingLostOnResume @ 0x1C0016400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall HUBPDO_ParentInterfaceWasDeviceProgrammingLostOnResume(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 32) & 0x80;
  if ( v1 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFF7F);
  return v1 != 0;
}
