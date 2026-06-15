/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x180049100
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180048360 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?_Delete_this@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180048C90 (-_Delete_this@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180048D00 (-_Destroy@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 *     ?_Delete_this@?$_Ref_count_obj@VCSebReference@@@std@@EEAAXXZ @ 0x180048FA0 (-_Delete_this@-$_Ref_count_obj@VCSebReference@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj@VCSebReference@@@std@@EEAAXXZ @ 0x180049010 (-_Destroy@-$_Ref_count_obj@VCSebReference@@@std@@EEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Ref_count_obj<CPowerReference>::_Destroy(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64); // rax
  void (__fastcall *v6)(__int64); // rax
  volatile signed __int32 *v7; // rbx
  void (__fastcall *v8)(volatile signed __int32 *); // rax
  void (__fastcall *v9)(__int64); // rax

  v2 = (std::_Ref_count_base *)a1[9];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)a1[7];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = a1[5];
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
  {
    v5 = **(void (__fastcall ***)(__int64))v4;
    if ( v5 == std::_Ref_count_obj<CSebReference>::_Destroy )
      std::_Ref_count_obj<CSebReference>::_Destroy(v4);
    else
      v5(v4);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
    {
      v6 = *(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL);
      if ( v6 == std::_Ref_count_obj<CSebReference>::_Delete_this )
        std::_Ref_count_obj<CSebReference>::_Delete_this(v4);
      else
        v6(v4);
    }
  }
  v7 = (volatile signed __int32 *)a1[3];
  if ( v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
  {
    v8 = **(void (__fastcall ***)(volatile signed __int32 *))v7;
    if ( (char *)v8 == (char *)std::_Ref_count_obj<CPdcTimerActivation>::_Destroy )
      std::_Ref_count_obj<CPdcTimerActivation>::_Destroy(v7);
    else
      v8(v7);
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      v9 = *(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL);
      if ( v9 == std::_Ref_count_obj<CPdcTimerActivation>::_Delete_this )
        std::_Ref_count_obj<CPdcTimerActivation>::_Delete_this((__int64)v7);
      else
        v9((__int64)v7);
    }
  }
}
