/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x1404C1A44
 * Callers:
 *     PopUmpoProcessMessage @ 0x1404C190C (PopUmpoProcessMessage.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140004F20 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400714F0 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140236ED4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x140409780 (PfPowerActionNotify.c)
 *     PopSetNewPolicyValue @ 0x1404C1AA4 (PopSetNewPolicyValue.c)
 *     PopPowerRequestOverrideInitialize @ 0x1405D5B54 (PopPowerRequestOverrideInitialize.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx

  switch ( *(_DWORD *)a1 )
  {
    case 4:
      result = PopSetNewPolicyValue(a1 + 8, (unsigned int)(*(_DWORD *)a1 - 4));
      if ( (int)result < 0 )
        return result;
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 20) && *(_DWORD *)(a1 + 12) == 18 )
        PfPowerActionNotify(5, 1LL, 0);
      break;
    case 8:
      PopProcessPowerRequestOverrideQueryResponse((unsigned int *)(a1 + 8));
      break;
    case 0xA:
      PopPowerRequestOverrideInitialize();
      break;
    case 0xE:
      v2 = *(_DWORD *)(a1 + 8);
      PopAcquirePolicyLock();
      dword_14034B0D0 = v2;
      if ( byte_14034B0F1 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock();
      break;
  }
  return 0LL;
}
