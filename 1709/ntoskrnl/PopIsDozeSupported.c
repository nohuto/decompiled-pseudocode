/*
 * XREFs of PopIsDozeSupported @ 0x1404E86D8
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x14024C0E4 (PopIdleArmAoAcDozeS4Timer.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopPolicySystemIdle @ 0x1404E8080 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x1405B9968 (PopInitSIdle.c)
 *     PopDeferDoze @ 0x140700F18 (PopDeferDoze.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1404E8714 (PopIsHibernateSupported.c)
 */

char __fastcall PopIsDozeSupported(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  char v4; // al

  if ( (unsigned __int8)PopIsHibernateSupported(a1) || PopPromoteHibernateToShutdown != v2 )
  {
    v4 = v2;
    if ( *(_BYTE *)(v1 + 7) != (_BYTE)v2 )
      v4 = 1;
    LOBYTE(v2) = v4;
  }
  return v2;
}
