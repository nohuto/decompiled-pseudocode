/*
 * XREFs of PopRecalculateCBTriggerLevels @ 0x1405C9DA4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x1405C9B9C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckTrigger @ 0x1405C9C48 (PopBatteryCheckTrigger.c)
 */

__int64 __fastcall PopRecalculateCBTriggerLevels(unsigned int a1)
{
  __int64 v1; // rbx
  _BYTE *v2; // r8
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  PopAcquirePolicyLock();
  v1 = 0LL;
  v6 = 0;
  do
  {
    v2 = PopPolicy;
    if ( (*((_DWORD *)&PopCB + 6 * v1 + 75) & 0x80u) == 0 )
    {
      *((_DWORD *)&PopCB + 6 * v1 + 78) = *((_DWORD *)PopPolicy + 6 * v1 + 25);
      if ( v2[24 * v1 + 96] )
      {
        *((_DWORD *)&PopCB + 6 * v1 + 75) |= 0x80u;
        PopDiagTraceBatteryTriggerFlags(&v6, (__int64)(&PopCB + 3 * v1 + 37));
        LODWORD(v1) = v6;
        v4 = 3LL * v6;
        v5 = 24LL * v6;
        if ( PopBatteryCheckTrigger((__int64)&PopCB + v5 + 296) )
        {
          *((_DWORD *)&PopCB + 2 * v4 + 75) |= 2u;
          PopDiagTraceBatteryTriggerFlags(&v6, (__int64)&PopCB + v5 + 296);
          LODWORD(v1) = v6;
        }
      }
    }
    v1 = (unsigned int)(v1 + 1);
    v6 = v1;
  }
  while ( (unsigned int)v1 < 4 );
  return PopReleasePolicyLock();
}
