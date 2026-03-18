/*
 * XREFs of ?GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801A58D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18009A300 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ @ 0x18018B70C (-_Tidy@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ.c)
 *     ??$emplace_back@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEBULayoutData@CContent@@@Z @ 0x180198700 (--$emplace_back@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDat.c)
 *     ?swap@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEAV12@@Z @ 0x1801A5C90 (-swap@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEAV12@.c)
 */

__int64 __fastcall CSurfaceBrush::GetTextureMemoryLayoutData(CSurfaceBrush *this, struct D2D_SIZE_F *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // xmm1_8
  __int64 v13; // r8
  __int128 v15; // [rsp+30h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-19h]
  __int128 v17; // [rsp+48h] [rbp-11h] BYREF
  __int64 v18; // [rsp+58h] [rbp-1h]
  float v19[4]; // [rsp+60h] [rbp+7h]
  __int128 v20; // [rsp+70h] [rbp+17h] BYREF
  __int64 v21; // [rsp+80h] [rbp+27h]

  v3 = 0;
  a3[1] = *a3;
  v5 = *((_QWORD *)this + 11);
  v8 = 0;
  if ( v5 && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 15LL) )
  {
    v9 = CSurfaceBrush::ComputeLayout(this, a2, 0, (struct CContent::LayoutData *)&v17, 0LL);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x196u);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
                *((_QWORD *)this + 11),
                37LL) )
    {
      if ( v19[0] > 0.0 || v19[1] > 0.0 )
      {
        v21 = *(_QWORD *)v19;
        v20 = _xmm;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v15,
          (const struct D2D1::Matrix3x2F *)&v20,
          (const struct D2D1::Matrix3x2F *)&v17);
        v17 = v15;
        v18 = v16;
      }
      std::vector<CContent::LayoutData>::emplace_back<CContent::LayoutData const &>((__int64)a3, (__int64)&v17);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
                *((_QWORD *)this + 11),
                106LL) )
    {
      v10 = *((_QWORD *)this + 11);
      v21 = 0LL;
      v20 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)v10 + 264LL))(
              v10,
              a2,
              &v20);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1ABu);
      }
      else
      {
        while ( v3 < (unsigned __int64)((*((_QWORD *)&v20 + 1) - (_QWORD)v20) / 40LL) )
        {
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v15,
            (const struct D2D1::Matrix3x2F *)&v17,
            (const struct D2D1::Matrix3x2F *)(v20 + 40LL * v3++));
          v12 = v16;
          *(_OWORD *)v13 = v15;
          *(_QWORD *)(v13 + 16) = v12;
        }
        std::vector<CContent::LayoutData>::swap(a3, &v20);
      }
      std::vector<CContent::LayoutData>::_Tidy((__int64)&v20);
    }
  }
  return v8;
}
