/*
 * XREFs of ?_Delete_this@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x180027340
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001A650 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ??_G?$_Ref_count_obj@VCPowerReference@@@std@@UEAAPEAXI@Z @ 0x180027380 (--_G-$_Ref_count_obj@VCPowerReference@@@std@@UEAAPEAXI@Z.c)
 */

void __fastcall std::_Ref_count_obj<CPowerReference>::_Delete_this(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64); // rax

  if ( a1 )
  {
    v1 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)std::_Ref_count_obj<CPowerReference>::`scalar deleting destructor' )
      std::_Ref_count_obj<CPowerReference>::`scalar deleting destructor'(a1, 1LL);
    else
      v1(a1, 1LL);
  }
}
