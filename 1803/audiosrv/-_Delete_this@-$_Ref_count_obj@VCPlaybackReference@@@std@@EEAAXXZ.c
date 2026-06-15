/*
 * XREFs of ?_Delete_this@?$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ @ 0x180048ED0
 * Callers:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 * Callees:
 *     ??_G?$_Ref_count_obj@VCPlaybackReference@@@std@@UEAAPEAXI@Z @ 0x180048F10 (--_G-$_Ref_count_obj@VCPlaybackReference@@@std@@UEAAPEAXI@Z.c)
 */

void __fastcall std::_Ref_count_obj<CPlaybackReference>::_Delete_this(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64); // rax

  if ( a1 )
  {
    v1 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)std::_Ref_count_obj<CPlaybackReference>::`scalar deleting destructor' )
      std::_Ref_count_obj<CPlaybackReference>::`scalar deleting destructor'(a1, 1LL);
    else
      v1(a1, 1LL);
  }
}
