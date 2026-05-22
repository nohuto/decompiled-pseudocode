/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_301fd7a8fc024bbcef569520ec2ad4e1_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180047320
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x1800407FC (--0-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@0@Z @ 0x180040C34 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?AddAndPopulateDeviceType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x18004BE04 (-AddAndPopulateDeviceType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800E2000 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_301fd7a8fc024bbcef569520ec2ad4e1_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbx
  struct MPCConstantManager *Instance; // rax
  void *v7; // rbx
  void *Block[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v9; // [rsp+30h] [rbp-58h] BYREF
  void **v10; // [rsp+40h] [rbp-48h]
  __int64 v11; // [rsp+48h] [rbp-40h]
  _QWORD v12[4]; // [rsp+50h] [rbp-38h] BYREF
  float v13; // [rsp+70h] [rbp-18h]
  char v14; // [rsp+74h] [rbp-14h]
  __int64 v15; // [rsp+78h] [rbp-10h] BYREF

  v11 = -2LL;
  v10 = (void **)a2;
  try
  {
    v3 = *(_QWORD **)(a2 + 8);
    std::string::string(v12, "HandGuidanceScoreForPrimary", a3);
    v13 = FLOAT_0_89999998;
    v14 = 2;
    v9.m128i_i64[0] = (__int64)v12;
    v9.m128i_i64[1] = (__int64)&v15;
    std::map<std::string,std::variant<unsigned long,bool,float>>::map<std::string,std::variant<unsigned long,bool,float>>(
      Block,
      &v9);
    v4 = (*v3 + 24LL) & -(__int64)(*v3 != 0LL);
    Instance = MPCConstantManager::GetInstance();
    MPCConstantManager::AddAndPopulateDeviceType(Instance, v4, Block);
    std::_Tree<std::_Tmap_traits<std::string,std::variant<unsigned long,bool,float>,std::less<std::string>,std::allocator<std::pair<std::string const,std::variant<unsigned long,bool,float>>>,0>>::erase(
      (__int64 ***)Block,
      (__int64 **)&v9,
      *(__int64 **)Block[0],
      (__int64 *)Block[0]);
    operator delete(Block[0]);
    `eh vector destructor iterator'(
      v12,
      0x28uLL,
      1uLL,
      (void (*)(void *))std::pair<std::string const,std::variant<unsigned long,bool,float>>::~pair<std::string const,std::variant<unsigned long,bool,float>>);
  }
  catch ( ... )
  {
    v7 = *v10;
    __ExceptionPtrCreate(Block);
    __ExceptionPtrCurrentException(Block);
    __ExceptionPtrAssign(v7, Block);
    __ExceptionPtrDestroy(Block);
    return 0LL;
  }
  return 1LL;
}
