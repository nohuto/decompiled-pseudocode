/*
 * XREFs of ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180040B4C
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     _lambda_0715eb120d1477447f28b84fe1ba39f2_::operator() @ 0x18004E924 (_lambda_0715eb120d1477447f28b84fe1ba39f2_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_2185d53ce9a5131670110d44c82ae430__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x1800511F0 (std--_Func_impl_no_alloc__lambda_2185d53ce9a5131670110d44c82ae430__void_IMPCInputPr_ea_1800511F0.c)
 *     _MPCMouseProcessor::GetPoints_::_1_::dtor$0 @ 0x1800E546A (_MPCMouseProcessor--GetPoints_--_1_--dtor$0.c)
 *     _MPCProcessor::GetPoints_::_1_::dtor$0 @ 0x1800E5BD7 (_MPCProcessor--GetPoints_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::Process3DInput_::_1_::dtor$2 @ 0x1800E6354 (_MPCHolographicInputManager--Process3DInput_--_1_--dtor$2.c)
 *     __lambda_0715eb120d1477447f28b84fe1ba39f2_::operator()_::_1_::dtor$0 @ 0x1800E6360 (__lambda_0715eb120d1477447f28b84fe1ba39f2_--operator()_--_1_--dtor$0.c)
 *     __lambda_0715eb120d1477447f28b84fe1ba39f2_::operator()_::_1_::dtor$1 @ 0x1800E636C (__lambda_0715eb120d1477447f28b84fe1ba39f2_--operator()_--_1_--dtor$1.c)
 *     _std::_Func_impl_no_alloc__lambda_2185d53ce9a5131670110d44c82ae430__void_IMPCInputProviderBase_____ptr64_::_Do_call_::_1_::dtor$7 @ 0x1800E6471 (_std--_Func_impl_no_alloc__lambda_2185d53ce9a5131670110d44c82ae430__void_IMPCInputProviderBase__.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<PointData3D>::~vector<PointData3D>(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (__int64)(a1[2] - v2) / 184;
    if ( v3 <= 0x1642C8590B21642LL )
    {
      if ( 184 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2, v3);
    JUMPOUT(0x180040BDDLL);
  }
}
