/*
 * XREFs of ?GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18018B400
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@X@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18018B28C (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18018B2FC (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 *     ?_Tidy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ @ 0x18018B70C (-_Tidy@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall CEffectBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h]
  __int128 i; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+58h] [rbp-8h]
  __int64 v16; // [rsp+80h] [rbp+20h] BYREF

  v3 = *a3;
  v4 = 0;
  v15 = 0LL;
  v5 = 0LL;
  a3[1] = v3;
  for ( i = 0LL; (unsigned int)v5 < *(_DWORD *)(a1 + 128); v5 = (unsigned int)(v5 + 1) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v5);
    if ( v9 )
    {
      v13 = 0LL;
      v12 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v9 + 264LL))(v9, a2, &v12);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x160u);
        std::vector<CContent::LayoutData>::_Tidy(&v12);
        goto LABEL_7;
      }
      std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,void>(
        &i,
        &v16,
        *((char **)&i + 1),
        (const void *)v12,
        *((__int64 *)&v12 + 1));
      std::vector<CContent::LayoutData>::_Tidy(&v12);
    }
  }
  std::vector<CContent::LayoutData>::operator=((__int64)a3, (__int64)&i);
LABEL_7:
  std::vector<CContent::LayoutData>::_Tidy(&i);
  return v4;
}
