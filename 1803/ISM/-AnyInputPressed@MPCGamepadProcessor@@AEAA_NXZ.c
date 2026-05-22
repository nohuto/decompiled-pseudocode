/*
 * XREFs of ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x180095378
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180093860 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180095350 (-IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 *     ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180095360 (-IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall MPCGamepadProcessor::AnyInputPressed(MPCGamepadProcessor *this, __int64 a2, __int64 a3)
{
  char v4; // si
  char v5; // bl
  double v6; // xmm6_8
  MPCConstantManager *v7; // rax
  __int64 v8; // r8
  double v9; // xmm6_8
  MPCConstantManager *v10; // rax
  __int64 v11; // r8
  double v12; // xmm6_8
  MPCConstantManager *v13; // rax
  __int64 v14; // r8
  double v15; // xmm6_8
  MPCConstantManager *v16; // rax
  __int64 v17; // r8
  MPCConstantManager *v18; // rax
  __int64 v19; // r8
  MPCConstantManager *v20; // rax
  unsigned __int64 v22[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v23[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v24[4]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v25[4]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v26[4]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v27[4]; // [rsp+D8h] [rbp-30h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 1020) )
    goto LABEL_8;
  std::string::string(v27, "ThumbstickDeadzone", a3);
  v5 = 1;
  *(_QWORD *)&v6 = *((_QWORD *)this + 516) & _xmm;
  MPCConstantManager::GetInstance();
  if ( v6 > MPCConstantManager::GetConstant<float>(
              v7,
              (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
              (__int64)v27) )
    goto LABEL_8;
  std::string::string(v26, "ThumbstickDeadzone", v8);
  v5 = 3;
  *(_QWORD *)&v9 = *((_QWORD *)this + 515) & _xmm;
  MPCConstantManager::GetInstance();
  if ( v9 > MPCConstantManager::GetConstant<float>(
              v10,
              (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
              (__int64)v26) )
    goto LABEL_8;
  std::string::string(v25, "ThumbstickDeadzone", v11);
  v5 = 7;
  *(_QWORD *)&v12 = *((_QWORD *)this + 513) & _xmm;
  MPCConstantManager::GetInstance();
  if ( v12 > MPCConstantManager::GetConstant<float>(
               v13,
               (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
               (__int64)v25) )
    goto LABEL_8;
  std::string::string(v24, "ThumbstickDeadzone", v14);
  v5 = 15;
  *(_QWORD *)&v15 = *((_QWORD *)this + 514) & _xmm;
  MPCConstantManager::GetInstance();
  if ( v15 > MPCConstantManager::GetConstant<float>(
               v16,
               (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
               (__int64)v24)
    || (std::string::string(v23, "TriggerDeadzone", v17),
        v5 = 31,
        MPCConstantManager::GetInstance(),
        *((double *)this + 511) > MPCConstantManager::GetConstant<float>(
                                    v18,
                                    (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
                                    (__int64)v23))
    || (std::string::string(v22, "TriggerDeadzone", v19),
        v5 = 63,
        MPCConstantManager::GetInstance(),
        *((double *)this + 512) > MPCConstantManager::GetConstant<float>(
                                    v20,
                                    (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
                                    (__int64)v22)) )
  {
LABEL_8:
    v4 = 1;
  }
  if ( (v5 & 0x20) != 0 )
  {
    v5 &= ~0x20u;
    std::string::~string(v22, a2);
  }
  if ( (v5 & 0x10) != 0 )
  {
    v5 &= ~0x10u;
    std::string::~string(v23, a2);
  }
  if ( (v5 & 8) != 0 )
  {
    v5 &= ~8u;
    std::string::~string(v24, a2);
  }
  if ( (v5 & 4) != 0 )
  {
    v5 &= ~4u;
    std::string::~string(v25, a2);
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    std::string::~string(v26, a2);
  }
  if ( (v5 & 1) != 0 )
    std::string::~string(v27, a2);
  return v4;
}
