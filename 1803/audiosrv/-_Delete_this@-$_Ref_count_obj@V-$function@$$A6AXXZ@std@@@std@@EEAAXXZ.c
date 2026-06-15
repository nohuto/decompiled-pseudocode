/*
 * XREFs of ?_Delete_this@?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@EEAAXXZ @ 0x18001C790
 * Callers:
 *     <none>
 * Callees:
 *     ??_G?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@UEAAPEAXI@Z @ 0x18001C850 (--_G-$_Ref_count_obj@V-$function@$$A6AXXZ@std@@@std@@UEAAPEAXI@Z.c)
 */

void __fastcall std::_Ref_count_obj<std::function<void (void)>>::_Delete_this(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64); // rax

  if ( a1 )
  {
    v1 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)std::_Ref_count_obj<std::function<void (void)>>::`scalar deleting destructor' )
      std::_Ref_count_obj<std::function<void (void)>>::`scalar deleting destructor'(a1, 1LL);
    else
      v1(a1, 1LL);
  }
}
