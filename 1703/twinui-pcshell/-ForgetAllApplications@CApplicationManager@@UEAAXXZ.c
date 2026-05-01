/*
 * XREFs of ?ForgetAllApplications@CApplicationManager@@UEAAXXZ @ 0x18000C850
 * Callers:
 *     <none>
 * Callees:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015400 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::ForgetAllApplications(CApplicationManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rbx

  for ( i = *((_QWORD *)this + 47); i; --i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 46) + 8 * i - 8);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    CApplicationManager::_ForgetApplicationNoLock((char *)this - 200, v3, 2LL);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
