/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_5a74ae54013b7a0b63e4e3845ba7868b_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800495E0
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

// Hidden C++ exception states: #wind=9
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_5a74ae54013b7a0b63e4e3845ba7868b_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rbx
  struct MPCConstantManager *Instance; // rax
  void *v10; // rbx
  void *Block[2]; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v12; // [rsp+30h] [rbp-D8h] BYREF
  void **v13; // [rsp+40h] [rbp-C8h]
  __int64 v14; // [rsp+48h] [rbp-C0h]
  _QWORD v15[4]; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+70h] [rbp-98h]
  char v17; // [rsp+74h] [rbp-94h]
  _QWORD v18[4]; // [rsp+78h] [rbp-90h] BYREF
  int v19; // [rsp+98h] [rbp-70h]
  char v20; // [rsp+9Ch] [rbp-6Ch]
  _QWORD v21[4]; // [rsp+A0h] [rbp-68h] BYREF
  float v22; // [rsp+C0h] [rbp-48h]
  char v23; // [rsp+C4h] [rbp-44h]
  _QWORD v24[4]; // [rsp+C8h] [rbp-40h] BYREF
  float v25; // [rsp+E8h] [rbp-20h]
  char v26; // [rsp+ECh] [rbp-1Ch]
  __int64 v27; // [rsp+F0h] [rbp-18h] BYREF

  v14 = -2LL;
  v13 = (void **)a2;
  try
  {
    v3 = *(_QWORD **)(a2 + 8);
    std::string::string(v15, "PointScaleFactorXY", a3);
    v16 = 1000593162;
    v17 = 2;
    std::string::string(v18, "PointScaleFactorStick", v4);
    v19 = 1000593162;
    v20 = 2;
    std::string::string(v21, "DeadZoneAngle", v5);
    v22 = FLOAT_3_0;
    v23 = 2;
    std::string::string(v24, "ThumbStickDeadZone", v6);
    v25 = FLOAT_0_1;
    v26 = 2;
    v12.m128i_i64[0] = (__int64)v15;
    v12.m128i_i64[1] = (__int64)&v27;
    std::map<std::string,std::variant<unsigned long,bool,float>>::map<std::string,std::variant<unsigned long,bool,float>>(
      Block,
      &v12);
    v7 = (*v3 + 24LL) & -(__int64)(*v3 != 0LL);
    Instance = MPCConstantManager::GetInstance();
    MPCConstantManager::AddAndPopulateDeviceType(Instance, v7, Block);
    std::_Tree<std::_Tmap_traits<std::string,std::variant<unsigned long,bool,float>,std::less<std::string>,std::allocator<std::pair<std::string const,std::variant<unsigned long,bool,float>>>,0>>::erase(
      (__int64 ***)Block,
      (__int64 **)&v12,
      *(__int64 **)Block[0],
      (__int64 *)Block[0]);
    operator delete(Block[0]);
    `eh vector destructor iterator'(
      v15,
      0x28uLL,
      4uLL,
      (void (*)(void *))std::pair<std::string const,std::variant<unsigned long,bool,float>>::~pair<std::string const,std::variant<unsigned long,bool,float>>);
  }
  catch ( ... )
  {
    v10 = *v13;
    __ExceptionPtrCreate(Block);
    __ExceptionPtrCurrentException(Block);
    __ExceptionPtrAssign(v10, Block);
    __ExceptionPtrDestroy(Block);
    return 0LL;
  }
  return 1LL;
}
