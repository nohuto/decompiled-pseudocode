/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x140518B54
 * Callers:
 *     PopUmpoProcessMessage @ 0x140518A1C (PopUmpoProcessMessage.c)
 * Callees:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140075E54 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140077584 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14027FF14 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 *     PopSetNewPolicyValue @ 0x140518BB4 (PopSetNewPolicyValue.c)
 *     PopPowerRequestOverrideInitialize @ 0x140655238 (PopPowerRequestOverrideInitialize.c)
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
      dword_1403A9FB0 = v2;
      if ( byte_1403A9FD1 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock();
      break;
  }
  return 0LL;
}
