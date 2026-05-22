/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800E2000
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800292D8 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800293E0 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     _lambda_0d63f0eebaff590cd6794bb27eb1a224_::operator() @ 0x18003AF20 (_lambda_0d63f0eebaff590cd6794bb27eb1a224_--operator().c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_301fd7a8fc024bbcef569520ec2ad4e1_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180047320 (--$_Callback_once@V-$tuple@$$QEAV_lambda_301fd7a8fc024bbcef569520ec2ad4e1_@@AEAVexception_ptr@st.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_5a74ae54013b7a0b63e4e3845ba7868b_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800495E0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_5a74ae54013b7a0b63e4e3845ba7868b_@@AEAVexception_ptr@st.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_172571034a44f8156ea06ee89e7e6c96_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180096120 (--$_Callback_once@V-$tuple@$$QEAV_lambda_172571034a44f8156ea06ee89e7e6c96_@@AEAVexception_ptr@st.c)
 *     _lambda_0fe84b0df1de98c8718b27672fc0a862_::operator() @ 0x180096EC0 (_lambda_0fe84b0df1de98c8718b27672fc0a862_--operator().c)
 *     ??1EyeProperty@HolographicDisplaySnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x18009CAF0 (--1EyeProperty@HolographicDisplaySnapshot@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??$destroy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@@?$_Default_allocator_traits@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@1@QEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@1@@Z @ 0x18009CB88 (--$destroy@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UHologra.c)
 *     __lambda_0d63f0eebaff590cd6794bb27eb1a224_::operator()_::_1_::dtor$52 @ 0x1800E4FBD (__lambda_0d63f0eebaff590cd6794bb27eb1a224_--operator()_--_1_--dtor$52.c)
 *     _std::_Callback_once_std::tuple__lambda_301fd7a8fc024bbcef569520ec2ad4e1__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$8 @ 0x1800E5CA4 (_std--_Callback_once_std--tuple__lambda_301fd7a8fc024bbcef569520ec2ad4e1__--___ptr64_std--except.c)
 *     _std::_Callback_once_std::tuple__lambda_5a74ae54013b7a0b63e4e3845ba7868b__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$11 @ 0x1800E5F76 (_std--_Callback_once_std--tuple__lambda_5a74ae54013b7a0b63e4e3845ba7868b__--___ptr6_ea_1800E5F76.c)
 *     _std::_Callback_once_std::tuple__lambda_172571034a44f8156ea06ee89e7e6c96__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$14 @ 0x1800E86C3 (_std--_Callback_once_std--tuple__lambda_172571034a44f8156ea06ee89e7e6c96__--___ptr6_ea_1800E86C3.c)
 *     __lambda_0fe84b0df1de98c8718b27672fc0a862_::operator()_::_1_::dtor$8 @ 0x1800E883F (__lambda_0fe84b0df1de98c8718b27672fc0a862_--operator()_--_1_--dtor$8.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1800E206C (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
