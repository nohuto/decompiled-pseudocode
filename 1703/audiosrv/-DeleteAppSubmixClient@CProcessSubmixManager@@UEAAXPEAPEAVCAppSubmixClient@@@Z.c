/*
 * XREFs of ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800AF080
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix___________lambda_d1ef71c9e005ee3e22f3fa4533c9d9bf___ @ 0x1800AED50 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CApplic.c)
 *     ??4?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEFB0 (--4-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std@@QEAAAEAV01@$.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800AFA24 (-erase@-$vector@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std.c)
 *     ?erase@?$vector@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800AFAD4 (-erase@-$vector@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix@@@std@@.c)
 */

void __fastcall CProcessSubmixManager::DeleteAppSubmixClient(CProcessSubmixManager *this, struct CAppSubmixClient **a2)
{
  struct CAppSubmixClient **v3; // rdx
  __int64 v4; // r9
  __int64 **v5; // rbx
  __int64 **v6; // rdi
  __int64 **v7; // rsi
  __int64 **v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // rcx
  __int64 v10; // [rsp+50h] [rbp+30h] BYREF
  struct CAppSubmixClient **v11; // [rsp+58h] [rbp+38h]
  __int64 v12; // [rsp+60h] [rbp+40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp+48h] BYREF

  v11 = a2;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 16, (__int64)&lpCriticalSection);
  v3 = v11;
  v4 = *((_QWORD *)*v11 + 1);
  v10 = v4;
  v5 = *(__int64 ***)(v4 + 48);
  v6 = *(__int64 ***)(v4 + 40);
  if ( v6 != v5 )
  {
    do
    {
      if ( *v6 == (__int64 *)*v11 )
        break;
      ++v6;
    }
    while ( v6 != v5 );
    if ( v6 != v5 )
    {
      v7 = v6 + 1;
      if ( v6 + 1 != v5 )
      {
        do
        {
          if ( *v7 != (__int64 *)*v3 )
          {
            v8 = v6++;
            std::unique_ptr<CAppSubmixClient>::operator=(v8, v7);
            v3 = v11;
          }
          ++v7;
        }
        while ( v7 != v5 );
        v4 = v10;
      }
    }
  }
  std::vector<std::unique_ptr<CAppSubmixClient>>::erase(v4 + 40, &v12, v6, *(_QWORD *)(v4 + 48));
  if ( ((*(_QWORD *)(v10 + 48) - *(_QWORD *)(v10 + 40)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix___________lambda_d1ef71c9e005ee3e22f3fa4533c9d9bf___(
      &v12,
      *((_QWORD **)this + 7),
      *((_QWORD **)this + 8),
      &v10);
    std::vector<std::unique_ptr<CApplicationSubmix>>::erase((char *)this + 56, &v12, v12, *((_QWORD *)this + 8));
  }
  v9 = lpCriticalSection;
  *v11 = 0LL;
  if ( v9 )
    LeaveCriticalSection(v9);
}
