/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x1404DF408
 * Callers:
 *     PopUmpoProcessMessage @ 0x1404DF2D0 (PopUmpoProcessMessage.c)
 * Callees:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400B0A44 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140132AA4 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14024C0E4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 *     PopSetNewPolicyValue @ 0x1404DF45C (PopSetNewPolicyValue.c)
 *     PopPowerRequestOverrideInitialize @ 0x1405F2540 (PopPowerRequestOverrideInitialize.c)
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
        PfPowerActionNotify(5, 1, 0);
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
      dword_140365730 = v2;
      if ( byte_140365751 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock();
      break;
  }
  return 0LL;
}
