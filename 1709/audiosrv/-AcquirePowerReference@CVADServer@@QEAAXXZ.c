/*
 * XREFs of ?AcquirePowerReference@CVADServer@@QEAAXXZ @ 0x180025CF0
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180026560 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@VCPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800296B8 (--4-$shared_ptr@VCPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002CBE0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 */

void __fastcall CVADServer::AcquirePowerReference(CVADServer *this)
{
  char *v1; // rbx
  _BYTE v2[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v3; // [rsp+28h] [rbp-10h]

  v1 = (char *)this + 408;
  if ( !*((_QWORD *)this + 51) )
  {
    CPowerReferenceManager::AcquirePowerReferenceForStream(g_powerReferenceManager, v2, this);
    std::shared_ptr<CPowerReference>::operator=(v1, v2);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
  }
}
