/*
 * XREFs of ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180095B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x180040704 (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180040770 (--4-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x18004D088 (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 *     ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x180054664 (--0MPCSlateDeadzoneHelper@@QEAA@MM@Z.c)
 *     ?InitializeConstants@MPCGamepadProcessor@@EEAAXXZ @ 0x1800935D0 (-InitializeConstants@MPCGamepadProcessor@@EEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCGamepadProcessor::Initialize3DComponents(unsigned __int64 this)
{
  __int64 v2; // r8
  const char *v3; // r9
  MPCButtonHoldHelper *v4; // rax
  MPCButtonHoldHelper *v5; // rbx
  char *v6; // rdx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  __int64 v8; // r8
  const char *v9; // r9
  MPCButtonHoldHelper *v10; // rax
  __int64 v11; // r8
  MPCButtonHoldHelper *v12; // rbx
  char *v13; // rdx
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  MPCConstantManager *v15; // rax
  float v16; // xmm7_4
  __int64 v17; // r8
  MPCConstantManager *v18; // rax
  float v19; // xmm6_4
  __int64 v20; // rdx
  __int64 v21; // rdx
  _QWORD *v22[2]; // [rsp+28h] [rbp-29h] BYREF
  unsigned __int64 v23[4]; // [rsp+38h] [rbp-19h] BYREF
  unsigned __int64 v24[4]; // [rsp+58h] [rbp+7h] BYREF

  v22[1] = (_QWORD *)-2LL;
  MPCGamepadProcessor::InitializeConstants((MPCGamepadProcessor *)this);
  v22[0] = operator new(0x28uLL);
  v4 = MPCButtonHoldHelper::MPCButtonHoldHelper((MPCButtonHoldHelper *)v22[0], 0.5, v2, v3);
  v5 = v4;
  v6 = (char *)(this + 4576);
  if ( (_QWORD **)(this + 4576) != v22 )
  {
    v5 = 0LL;
    v7 = *(void (__fastcall ****)(_QWORD, __int64))v6;
    *(_QWORD *)v6 = v4;
    if ( !v7 )
      goto LABEL_6;
    (**v7)(v7, 1LL);
    v4 = 0LL;
  }
  if ( v4 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v5)(v5, 1LL);
LABEL_6:
  v22[0] = operator new(0x28uLL);
  v10 = MPCButtonHoldHelper::MPCButtonHoldHelper((MPCButtonHoldHelper *)v22[0], 0.5, v8, v9);
  v12 = v10;
  v13 = (char *)(this + 4584);
  if ( (_QWORD **)(this + 4584) != v22 )
  {
    v12 = 0LL;
    v14 = *(void (__fastcall ****)(_QWORD, __int64))v13;
    *(_QWORD *)v13 = v10;
    if ( !v14 )
      goto LABEL_11;
    (**v14)(v14, 1LL);
    v10 = 0LL;
  }
  if ( v10 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v12)(v12, 1LL);
LABEL_11:
  std::string::string(v24, "SelectTemporalDeadzoneSec", v11);
  MPCConstantManager::GetInstance();
  v16 = MPCConstantManager::GetConstant<float>(
          v15,
          (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
          (__int64)v24);
  std::string::string(v23, "SelectXYDeadzone1M", v17);
  MPCConstantManager::GetInstance();
  v19 = MPCConstantManager::GetConstant<float>(
          v18,
          (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
          (__int64)v23);
  v22[0] = operator new(0x20uLL);
  v22[0] = MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper((MPCSlateDeadzoneHelper *)v22[0], v19, v16);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)(this + 4592), v22);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(v22);
  std::string::~string(v23, v20);
  std::string::~string(v24, v21);
}
