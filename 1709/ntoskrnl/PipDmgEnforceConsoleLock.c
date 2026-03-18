/*
 * XREFs of PipDmgEnforceConsoleLock @ 0x1406C31A8
 * Callers:
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 * Callees:
 *     PnpRequestDeviceRemoval @ 0x1405EDBB0 (PnpRequestDeviceRemoval.c)
 *     PiCslIsConsoleLocked @ 0x1406D4410 (PiCslIsConsoleLocked.c)
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
    v4 = *(_BYTE *)(*(_QWORD *)(a1 + 720) + 8LL);
    if ( (v4 & 1) == 0 && (v4 & 8) == 0 && (v4 & 4) != 0 )
    {
      PnpRequestDeviceRemoval(a1, 0, 55, -1073741790);
      return (unsigned int)-1073741106;
    }
  }
  return v3;
}
