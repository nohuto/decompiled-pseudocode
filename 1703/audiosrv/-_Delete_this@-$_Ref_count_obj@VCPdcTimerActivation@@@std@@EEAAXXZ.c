/*
 * XREFs of ?_Delete_this@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x1800271C0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x1800273B0 (-_Destroy@-$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??_G?$_Ref_count_obj@VCPdcTimerActivation@@@std@@UEAAPEAXI@Z @ 0x180027200 (--_G-$_Ref_count_obj@VCPdcTimerActivation@@@std@@UEAAPEAXI@Z.c)
 */

void __fastcall std::_Ref_count_obj<CPdcTimerActivation>::_Delete_this(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64); // rax

  if ( a1 )
  {
    v1 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)std::_Ref_count_obj<CPdcTimerActivation>::`scalar deleting destructor' )
      std::_Ref_count_obj<CPdcTimerActivation>::`scalar deleting destructor'(a1, 1LL);
    else
      v1(a1, 1LL);
  }
}
