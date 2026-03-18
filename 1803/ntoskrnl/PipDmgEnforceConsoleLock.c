/*
 * XREFs of PipDmgEnforceConsoleLock @ 0x140729288
 * Callers:
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 * Callees:
 *     PnpRequestDeviceRemoval @ 0x1405C75A4 (PnpRequestDeviceRemoval.c)
 *     PiCslIsConsoleLocked @ 0x140739400 (PiCslIsConsoleLocked.c)
 */

__int64 __fastcall PipDmgEnforceConsoleLock(__int64 a1)
{
  char IsConsoleLocked; // al
  unsigned int v3; // r8d
  char v4; // dl

  IsConsoleLocked = PiCslIsConsoleLocked();
  v3 = 0;
  if ( IsConsoleLocked )
  {
    v4 = *(_BYTE *)(*(_QWORD *)(a1 + 720) + 16LL);
    if ( (v4 & 1) == 0 && (v4 & 8) == 0 && (v4 & 4) != 0 )
    {
      PnpRequestDeviceRemoval(a1, 0, 55, -1073741790);
      return (unsigned int)-1073741106;
    }
  }
  return v3;
}
