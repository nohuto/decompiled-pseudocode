/*
 * XREFs of ?GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18019B010
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@X@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18018B28C (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18018B2FC (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 *     ?_Tidy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ @ 0x18018B70C (-_Tidy@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall CMaskBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF

  v3 = *a3;
  v4 = 0;
  v16 = 0LL;
  a3[1] = v3;
  v6 = *(_QWORD *)(a1 + 80);
  v15 = 0LL;
  if ( v6 )
  {
    v14 = 0LL;
    v13 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v6 + 264LL))(v6, a2, &v13);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3Du);
      goto LABEL_10;
    }
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,void>(
      &v15,
      &v17,
      0LL,
      (const void *)v13,
      *((__int64 *)&v13 + 1));
    std::vector<CContent::LayoutData>::_Tidy((__int64)&v13);
  }
  v10 = *(_QWORD *)(a1 + 72);
  if ( v10 )
  {
    v14 = 0LL;
    v13 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v10 + 264LL))(v10, a2, &v13);
    v4 = v11;
    if ( v11 >= 0 )
    {
      std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,void>(
        &v15,
        &v17,
        *((char **)&v15 + 1),
        (const void *)v13,
        *((__int64 *)&v13 + 1));
      std::vector<CContent::LayoutData>::_Tidy((__int64)&v13);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x44u);
LABEL_10:
    std::vector<CContent::LayoutData>::_Tidy((__int64)&v13);
    goto LABEL_8;
  }
LABEL_7:
  std::vector<CContent::LayoutData>::operator=((__int64)a3, (__int64)&v15);
LABEL_8:
  std::vector<CContent::LayoutData>::_Tidy((__int64)&v15);
  return v4;
}
