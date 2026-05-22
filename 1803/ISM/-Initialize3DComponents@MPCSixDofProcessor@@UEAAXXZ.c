/*
 * XREFs of ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x18003F220
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeConstants@MPCSixDofProcessor@@EEAAXXZ @ 0x18003AE90 (-InitializeConstants@MPCSixDofProcessor@@EEAAXXZ.c)
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x180040704 (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180040770 (--4-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x18004D088 (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 *     ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x180054664 (--0MPCSlateDeadzoneHelper@@QEAA@MM@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall MPCSixDofProcessor::Initialize3DComponents(MPCSixDofProcessor *this)
{
  float v1; // xmm0_4
  MPCButtonHoldHelper *v3; // rax
  MPCButtonHoldHelper *v4; // rbx
  char *v5; // rdx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  int Instance; // eax
  MPCButtonHoldHelper *v8; // rax
  MPCButtonHoldHelper *v9; // rbx
  char *v10; // rdx
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  MPCButtonHoldHelper *v12; // rax
  MPCButtonHoldHelper *v13; // rbx
  char *v14; // rdx
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  int v16; // eax
  MPCButtonHoldHelper *v17; // rax
  MPCButtonHoldHelper *v18; // rbx
  char *v19; // rdx
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  int v21; // eax
  MPCButtonHoldHelper *v22; // rax
  MPCButtonHoldHelper *v23; // rbx
  char *v24; // rdx
  void (__fastcall ***v25)(_QWORD, __int64); // rcx
  int v26; // eax
  MPCButtonHoldHelper *v27; // rax
  MPCButtonHoldHelper *v28; // rbx
  char *v29; // rdx
  void (__fastcall ***v30)(_QWORD, __int64); // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  MPCButtonHoldHelper *v35[2]; // [rsp+28h] [rbp-39h] BYREF
  _BYTE v36[32]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v37[32]; // [rsp+58h] [rbp-9h] BYREF

  v35[1] = (MPCButtonHoldHelper *)-2LL;
  MPCSixDofProcessor::InitializeConstants(this);
  v35[0] = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v3 = MPCButtonHoldHelper::MPCButtonHoldHelper(v35[0], 0.5);
  v4 = v3;
  v5 = (char *)this + 2608;
  if ( (MPCButtonHoldHelper **)((char *)this + 2608) != v35 )
  {
    v4 = 0LL;
    v6 = *(void (__fastcall ****)(_QWORD, __int64))v5;
    *(_QWORD *)v5 = v3;
    if ( !v6 )
      goto LABEL_6;
    (**v6)(v6, 1LL);
    v3 = 0LL;
  }
  if ( v3 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v4)(v4, 1LL);
LABEL_6:
  std::string::string(v36);
  Instance = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(Instance);
  v35[0] = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v8 = MPCButtonHoldHelper::MPCButtonHoldHelper(v35[0], v1);
  v9 = v8;
  v10 = (char *)this + 2616;
  if ( (MPCButtonHoldHelper **)((char *)this + 2616) != v35 )
  {
    v9 = 0LL;
    v11 = *(void (__fastcall ****)(_QWORD, __int64))v10;
    *(_QWORD *)v10 = v8;
    if ( !v11 )
      goto LABEL_11;
    (**v11)(v11, 1LL);
    v8 = 0LL;
  }
  if ( v8 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v9)(v9, 1LL);
LABEL_11:
  std::string::~string(v36);
  v35[0] = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v12 = MPCButtonHoldHelper::MPCButtonHoldHelper(v35[0], 0.0);
  v13 = v12;
  v14 = (char *)this + 2624;
  if ( (MPCButtonHoldHelper **)((char *)this + 2624) != v35 )
  {
    v13 = 0LL;
    v15 = *(void (__fastcall ****)(_QWORD, __int64))v14;
    *(_QWORD *)v14 = v12;
    if ( !v15 )
      goto LABEL_16;
    (**v15)(v15, 1LL);
    v12 = 0LL;
  }
  if ( v12 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v13)(v13, 1LL);
LABEL_16:
  std::string::string(v36);
  v16 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v16);
  v35[0] = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v17 = MPCButtonHoldHelper::MPCButtonHoldHelper(v35[0], v1);
  v18 = v17;
  v19 = (char *)this + 2632;
  if ( (MPCButtonHoldHelper **)((char *)this + 2632) != v35 )
  {
    v18 = 0LL;
    v20 = *(void (__fastcall ****)(_QWORD, __int64))v19;
    *(_QWORD *)v19 = v17;
    if ( !v20 )
      goto LABEL_21;
    (**v20)(v20, 1LL);
    v17 = 0LL;
  }
  if ( v17 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v18)(v18, 1LL);
LABEL_21:
  std::string::~string(v36);
  std::string::string(v36);
  v21 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v21);
  v35[0] = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v22 = MPCButtonHoldHelper::MPCButtonHoldHelper(v35[0], v1);
  v23 = v22;
  v24 = (char *)this + 2640;
  if ( (MPCButtonHoldHelper **)((char *)this + 2640) != v35 )
  {
    v23 = 0LL;
    v25 = *(void (__fastcall ****)(_QWORD, __int64))v24;
    *(_QWORD *)v24 = v22;
    if ( !v25 )
      goto LABEL_26;
    (**v25)(v25, 1LL);
    v22 = 0LL;
  }
  if ( v22 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v23)(v23, 1LL);
LABEL_26:
  std::string::~string(v36);
  std::string::string(v36);
  v26 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v26);
  v35[0] = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v27 = MPCButtonHoldHelper::MPCButtonHoldHelper(v35[0], v1);
  v28 = v27;
  v29 = (char *)this + 2648;
  if ( (MPCButtonHoldHelper **)((char *)this + 2648) != v35 )
  {
    v28 = 0LL;
    v30 = *(void (__fastcall ****)(_QWORD, __int64))v29;
    *(_QWORD *)v29 = v27;
    if ( !v30 )
      goto LABEL_31;
    (**v30)(v30, 1LL);
    v27 = 0LL;
  }
  if ( v27 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v28)(v28, 1LL);
LABEL_31:
  std::string::~string(v36);
  std::string::string(v37);
  v31 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v31);
  std::string::string(v36);
  v32 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v32);
  v35[0] = (MPCButtonHoldHelper *)operator new(0x20uLL);
  v35[0] = MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper(v35[0], v1, v1);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((char *)this + 2656, v35);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(v35);
  std::string::~string(v36);
  std::string::~string(v37);
  std::string::string(v36);
  v33 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v33);
  std::string::string(v37);
  v34 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v34);
  v35[0] = (MPCButtonHoldHelper *)operator new(0x20uLL);
  v35[0] = MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper(v35[0], v1, v1);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((char *)this + 2664, v35);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(v35);
  std::string::~string(v37);
  std::string::~string(v36);
}
