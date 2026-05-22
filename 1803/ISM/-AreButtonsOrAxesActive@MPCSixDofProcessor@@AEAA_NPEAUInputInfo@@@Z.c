/*
 * XREFs of ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18003B8D8
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z @ 0x18003BA6C (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003CC50 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall MPCSixDofProcessor::AreButtonsOrAxesActive(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  float v2; // xmm0_4
  int Instance; // eax
  bool v6; // bl
  double v7; // xmm0_8
  float v8; // xmm6_4
  int v9; // eax
  double v10; // xmm0_8
  float v11; // xmm6_4
  int v12; // eax
  _BYTE v13[32]; // [rsp+28h] [rbp-40h] BYREF

  if ( (*((_BYTE *)a2 + 1168) & 0x3F) != 0 && !*((_BYTE *)this + 3241) )
    return 1;
  if ( *((_BYTE *)a2 + 1211) )
  {
    std::string::string(v13);
    Instance = (unsigned int)MPCConstantManager::GetInstance();
    MPCConstantManager::GetConstant<float>(Instance);
    v6 = *((float *)a2 + 300) > v2;
    std::string::~string(v13);
    if ( v6 )
      return 1;
  }
  if ( !*((_BYTE *)a2 + 1212) )
    return 0;
  std::string::string(v13);
  *(_QWORD *)&v7 = COERCE_UNSIGNED_INT64(*((float *)a2 + 298)) & _xmm;
  v8 = v7;
  v9 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v9);
  std::string::~string(v13);
  if ( v8 > *(float *)&v7 )
    return 1;
  std::string::string(v13);
  *(_QWORD *)&v10 = COERCE_UNSIGNED_INT64(*((float *)a2 + 299)) & _xmm;
  v11 = v10;
  v12 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v12);
  std::string::~string(v13);
  return v11 > *(float *)&v10;
}
