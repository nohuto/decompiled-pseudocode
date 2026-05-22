/*
 * XREFs of ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180039B94
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     _lambda_3e33307cb1e17c9b7f6fa64480bfac10_::operator() @ 0x18005770C (_lambda_3e33307cb1e17c9b7f6fa64480bfac10_--operator().c)
 *     std::_Func_impl__lambda_22c1dca198b1d4c7b85ccda3f9aad06f__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x180059EB0 (std--_Func_impl__lambda_22c1dca198b1d4c7b85ccda3f9aad06f__std--allocator_int__void__ea_180059EB0.c)
 *     _MPCClickerProcessor::GetPoints_::_1_::dtor$0 @ 0x1800CE621 (_MPCClickerProcessor--GetPoints_--_1_--dtor$0.c)
 *     _MPCProcessor::GetPoints_::_1_::dtor$0 @ 0x1800CECC2 (_MPCProcessor--GetPoints_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::Process3DInput_::_1_::dtor$2 @ 0x1800CEFCA (_MPCHolographicInputManager--Process3DInput_--_1_--dtor$2.c)
 *     __lambda_3e33307cb1e17c9b7f6fa64480bfac10_::operator()_::_1_::dtor$0 @ 0x1800CEFD6 (__lambda_3e33307cb1e17c9b7f6fa64480bfac10_--operator()_--_1_--dtor$0.c)
 *     __lambda_3e33307cb1e17c9b7f6fa64480bfac10_::operator()_::_1_::dtor$1 @ 0x1800CEFE2 (__lambda_3e33307cb1e17c9b7f6fa64480bfac10_--operator()_--_1_--dtor$1.c)
 *     _std::_Func_impl__lambda_22c1dca198b1d4c7b85ccda3f9aad06f__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Do_call_::_1_::dtor$9 @ 0x1800CF13F (_std--_Func_impl__lambda_22c1dca198b1d4c7b85ccda3f9aad06f__std--allocator_int__void_IMPCInputPro.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
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
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x180039C25LL);
  }
}
