/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x1800273B0
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001A650 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?_Delete_this@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x1800271C0 (-_Delete_this@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180027230 (-_Destroy@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 *     ?_Delete_this@?$_Ref_count_obj@VCSebReference@@@std@@EEAAXXZ @ 0x180027250 (-_Delete_this@-$_Ref_count_obj@VCSebReference@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj@VCSebReference@@@std@@EEAAXXZ @ 0x1800272C0 (-_Destroy@-$_Ref_count_obj@VCSebReference@@@std@@EEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_obj<CPowerReference>::_Destroy(__int64 a1)
{
  __int64 v1; // rbx
  void (__fastcall *v3)(__int64); // rax
  void (__fastcall *v4)(__int64); // rax
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64); // rax
  void (__fastcall *v7)(__int64); // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 && !_InterlockedDecrement((volatile signed __int32 *)(v1 + 8)) )
  {
    v3 = **(void (__fastcall ***)(__int64))v1;
    if ( v3 == std::_Ref_count_obj<CSebReference>::_Destroy )
      std::_Ref_count_obj<CSebReference>::_Destroy(v1);
    else
      v3(v1);
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v1 + 12)) )
    {
      v4 = *(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL);
      if ( v4 == std::_Ref_count_obj<CSebReference>::_Delete_this )
        std::_Ref_count_obj<CSebReference>::_Delete_this(v1);
      else
        v4(v1);
    }
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 && !_InterlockedDecrement((volatile signed __int32 *)(v5 + 8)) )
  {
    v6 = **(void (__fastcall ***)(__int64))v5;
    if ( v6 == std::_Ref_count_obj<CPdcTimerActivation>::_Destroy )
      std::_Ref_count_obj<CPdcTimerActivation>::_Destroy(v5);
    else
      v6(v5);
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v5 + 12)) )
    {
      v7 = *(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL);
      if ( v7 == std::_Ref_count_obj<CPdcTimerActivation>::_Delete_this )
        std::_Ref_count_obj<CPdcTimerActivation>::_Delete_this(v5);
      else
        v7(v5);
    }
  }
}
