/*
 * XREFs of ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800D6710
 * Callers:
 *     <none>
 * Callees:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_d1ef71c9e005ee3e22f3fa4533c9d9bf___ @ 0x1800D6478 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CAppSub.c)
 *     ??4?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D6544 (--4-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std@@QEAAAEAV01@$.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800D7368 (-erase@-$vector@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800D7418 (-erase@-$vector@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientConte.c)
 */

void __fastcall CProcessSubmixManager::DeleteAppSubmixClient(CProcessSubmixManager *this, struct CAppSubmixClient **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  struct CAppSubmixClient **v4; // rdx
  __int64 v5; // r9
  __int64 **v6; // rsi
  __int64 **v7; // rbx
  __int64 **v8; // rdi
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF
  struct CAppSubmixClient **v10; // [rsp+58h] [rbp+38h]
  __int64 v11; // [rsp+60h] [rbp+40h] BYREF

  v10 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v4 = v10;
  v5 = *((_QWORD *)*v10 + 1);
  v9 = v5;
  v6 = *(__int64 ***)(v5 + 56);
  v7 = *(__int64 ***)(v5 + 48);
  if ( v7 != v6 )
  {
    do
    {
      if ( *v7 == (__int64 *)*v10 )
        break;
      ++v7;
    }
    while ( v7 != v6 );
    if ( v7 != v6 )
    {
      v8 = v7 + 1;
      if ( v7 + 1 != v6 )
      {
        do
        {
          if ( *v8 != (__int64 *)*v4 )
          {
            std::unique_ptr<CAppSubmixClient>::operator=(v7, v8);
            v4 = v10;
            ++v7;
          }
          ++v8;
        }
        while ( v8 != v6 );
        v5 = v9;
      }
    }
  }
  std::vector<std::unique_ptr<CAppSubmixClient>>::erase(v5 + 48, &v11, v7, *(_QWORD *)(v5 + 56));
  if ( ((*(_QWORD *)(v9 + 56) - *(_QWORD *)(v9 + 48)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_d1ef71c9e005ee3e22f3fa4533c9d9bf___(
      &v11,
      *((_QWORD **)this + 7),
      *((_QWORD **)this + 8),
      &v9);
    std::vector<std::unique_ptr<CAppSubmixClientContext>>::erase((char *)this + 56, &v11, v11, *((_QWORD *)this + 8));
  }
  *v10 = 0LL;
  if ( v2 )
    LeaveCriticalSection(v2);
}
