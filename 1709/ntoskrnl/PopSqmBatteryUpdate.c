/*
 * XREFs of PopSqmBatteryUpdate @ 0x14070CA6C
 * Callers:
 *     PopBatteryCheckCompositeCapacity @ 0x1405CAF18 (PopBatteryCheckCompositeCapacity.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopSqmAddToStream @ 0x14024D55C (PopSqmAddToStream.c)
 *     PopSqmCreateDwordStreamEntry @ 0x14024D714 (PopSqmCreateDwordStreamEntry.c)
 */

NTSTATUS __fastcall PopSqmBatteryUpdate(int a1)
{
  NTSTATUS result; // eax
  int v2; // r10d
  int v3; // r8d
  int v4; // eax
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD v9[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v11[4]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF

  result = 0;
  if ( PopPlatformAoAc )
  {
    PopSqmCreateDwordStreamEntry(v9, a1);
    PopSqmCreateDwordStreamEntry(v10, v2);
    LOBYTE(v4) = v3 == 0;
    PopSqmCreateDwordStreamEntry(v11, v4);
    PopSqmCreateDwordStreamEntry(v12, v5);
    return PopSqmAddToStream(v7, v6, v8, (__int64)v9);
  }
  return result;
}
