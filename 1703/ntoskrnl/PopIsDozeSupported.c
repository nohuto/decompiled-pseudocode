/*
 * XREFs of PopIsDozeSupported @ 0x1404C592C
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x140236ED4 (PopIdleArmAoAcDozeS4Timer.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopPolicySystemIdle @ 0x1404C55E0 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x140582D98 (PopInitSIdle.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1404C5968 (PopIsHibernateSupported.c)
 */

char __fastcall PopIsDozeSupported(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  char v3; // al

  if ( (unsigned __int8)PopIsHibernateSupported(a1) || PopPromoteHibernateToShutdown != v2 )
  {
    v3 = v2;
    if ( *(_BYTE *)(v1 + 7) != (_BYTE)v2 )
      v3 = 1;
    LOBYTE(v2) = v3;
  }
  return v2;
}
