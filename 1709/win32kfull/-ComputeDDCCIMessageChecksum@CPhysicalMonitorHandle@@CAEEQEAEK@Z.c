/*
 * XREFs of ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEQEAEK@Z @ 0x1C02497D8
 * Callers:
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C024A488 (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEQEAEK@Z @ 0x1C024AA48 (-VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEQEAEK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(
        char a1,
        unsigned __int8 *const a2,
        unsigned int a3)
{
  char v3; // r9
  __int64 v4; // rax

  v3 = 80;
  if ( a1 != 111 )
    v3 = a1;
  if ( a3 )
  {
    v4 = a3;
    do
    {
      v3 ^= *a2++;
      --v4;
    }
    while ( v4 );
  }
  return v3;
}
