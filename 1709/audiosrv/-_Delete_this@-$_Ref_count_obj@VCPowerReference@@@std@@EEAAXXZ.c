/*
 * XREFs of ?_Delete_this@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x18002A5C0
 * Callers:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 * Callees:
 *     ??_G?$_Ref_count_obj@VCPowerReference@@@std@@UEAAPEAXI@Z @ 0x18002A600 (--_G-$_Ref_count_obj@VCPowerReference@@@std@@UEAAPEAXI@Z.c)
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
