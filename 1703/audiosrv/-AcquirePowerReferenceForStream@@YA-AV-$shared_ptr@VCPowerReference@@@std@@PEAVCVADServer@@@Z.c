/*
 * XREFs of ?AcquirePowerReferenceForStream@@YA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180026C28
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001AD10 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180026C54 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 */

__int64 __fastcall AcquirePowerReferenceForStream(__int64 a1, __int64 a2)
{
  CPowerReferenceManager::AcquirePowerReferenceForStream(g_powerReferenceManager, a1, a2);
  return a1;
}
