/*
 * XREFs of _lambda_118dc2bc630108594922f76d93a95b91_::operator() @ 0x18003C4A4
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z @ 0x18003BA6C (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z.c)
 * Callees:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=15
char __fastcall lambda_118dc2bc630108594922f76d93a95b91_::operator()(__int64 a1, float a2, float a3)
{
  char v4; // si
  __int16 v5; // di
  double v6; // xmm0_8
  float v7; // xmm6_4
  int Instance; // eax
  double v9; // xmm0_8
  float v10; // xmm6_4
  int v11; // eax
  double v12; // xmm0_8
  float v13; // xmm6_4
  int v14; // eax
  double v15; // xmm0_8
  float v16; // xmm6_4
  int v17; // eax
  double v18; // xmm0_8
  float v19; // xmm6_4
  int v20; // eax
  double v21; // xmm0_8
  float v22; // xmm6_4
  int v23; // eax
  char v24; // r13
  double v25; // xmm0_8
  float v26; // xmm6_4
  int v27; // eax
  double v28; // xmm0_8
  float v29; // xmm6_4
  int v30; // eax
  double v31; // xmm0_8
  float v32; // xmm6_4
  int v33; // eax
  char v34; // r12
  double v35; // xmm0_8
  float v36; // xmm6_4
  int v37; // eax
  double v38; // xmm0_8
  float v39; // xmm6_4
  int v40; // eax
  double v41; // xmm0_8
  float v42; // xmm6_4
  int v43; // eax
  char v44; // r15
  double v45; // xmm0_8
  float v46; // xmm6_4
  int v47; // eax
  double v48; // xmm0_8
  float v49; // xmm6_4
  int v50; // eax
  double v51; // xmm0_8
  float v52; // xmm6_4
  int v53; // eax
  char v54; // bl
  char v56; // [rsp+2Ch] [rbp-85h]
  _BYTE v57[32]; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v58[32]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v59[32]; // [rsp+78h] [rbp-39h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 101LL) )
    goto LABEL_6;
  std::string::string(v59);
  v5 = 1;
  *(_QWORD *)&v6 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)a1 + 76LL)) & _xmm;
  v7 = v6;
  Instance = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(Instance);
  if ( v7 > (float)(*(float *)&v6 * a3) )
    goto LABEL_5;
  std::string::string(v58);
  v5 = 3;
  *(_QWORD *)&v9 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)a1 + 80LL)) & _xmm;
  v10 = v9;
  v11 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v11);
  if ( v10 > (float)(*(float *)&v9 * a3)
    || (std::string::string(v57),
        v5 = 7,
        *(_QWORD *)&v12 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)a1 + 84LL)) & _xmm,
        v13 = v12,
        v14 = (unsigned int)MPCConstantManager::GetInstance(),
        MPCConstantManager::GetConstant<float>(v14),
        v13 > (float)(*(float *)&v12 * a3)) )
  {
LABEL_5:
    v56 = 1;
  }
  else
  {
LABEL_6:
    v56 = 0;
  }
  if ( (v5 & 4) != 0 )
  {
    v5 &= ~4u;
    std::string::~string(v57);
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    std::string::~string(v58);
  }
  if ( (v5 & 1) != 0 )
  {
    v5 &= ~1u;
    std::string::~string(v59);
  }
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 100LL) )
    goto LABEL_18;
  std::string::string(v57);
  v5 |= 8u;
  *(_QWORD *)&v15 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)a1 + 64LL)) & _xmm;
  v16 = v15;
  v17 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v17);
  if ( v16 > (float)(*(float *)&v15 * a2) )
    goto LABEL_17;
  std::string::string(v58);
  v5 |= 0x10u;
  *(_QWORD *)&v18 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)a1 + 68LL)) & _xmm;
  v19 = v18;
  v20 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v20);
  if ( v19 > (float)(*(float *)&v18 * a2)
    || (std::string::string(v59),
        v5 |= 0x20u,
        *(_QWORD *)&v21 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)a1 + 72LL)) & _xmm,
        v22 = v21,
        v23 = (unsigned int)MPCConstantManager::GetInstance(),
        MPCConstantManager::GetConstant<float>(v23),
        v22 > (float)(*(float *)&v21 * a2)) )
  {
LABEL_17:
    v24 = 1;
  }
  else
  {
LABEL_18:
    v24 = 0;
  }
  if ( (v5 & 0x20) != 0 )
  {
    v5 &= ~0x20u;
    std::string::~string(v59);
  }
  if ( (v5 & 0x10) != 0 )
  {
    v5 &= ~0x10u;
    std::string::~string(v58);
  }
  if ( (v5 & 8) != 0 )
  {
    v5 &= ~8u;
    std::string::~string(v57);
  }
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 101LL) )
    goto LABEL_30;
  std::string::string(v57);
  v5 |= 0x40u;
  *(_QWORD *)&v25 = COERCE_UNSIGNED_INT64(**(float **)(a1 + 16)) & _xmm;
  v26 = v25;
  v27 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v27);
  if ( v26 > (float)(*(float *)&v25 * a3) )
    goto LABEL_29;
  std::string::string(v58);
  v5 |= 0x80u;
  *(_QWORD *)&v28 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)(a1 + 16) + 4LL)) & _xmm;
  v29 = v28;
  v30 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v30);
  if ( v29 > (float)(*(float *)&v28 * a3)
    || (std::string::string(v59),
        v5 |= 0x100u,
        *(_QWORD *)&v31 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)(a1 + 16) + 8LL)) & _xmm,
        v32 = v31,
        v33 = (unsigned int)MPCConstantManager::GetInstance(),
        MPCConstantManager::GetConstant<float>(v33),
        v32 > (float)(*(float *)&v31 * a3)) )
  {
LABEL_29:
    v34 = 1;
  }
  else
  {
LABEL_30:
    v34 = 0;
  }
  if ( (v5 & 0x100) != 0 )
  {
    v5 &= ~0x100u;
    std::string::~string(v59);
  }
  if ( (v5 & 0x80u) != 0 )
  {
    v5 &= ~0x80u;
    std::string::~string(v58);
  }
  if ( (v5 & 0x40) != 0 )
  {
    v5 &= ~0x40u;
    std::string::~string(v57);
  }
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 100LL) )
    goto LABEL_42;
  std::string::string(v57);
  v5 |= 0x200u;
  *(_QWORD *)&v35 = COERCE_UNSIGNED_INT64(**(float **)(a1 + 24)) & _xmm;
  v36 = v35;
  v37 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v37);
  if ( v36 > (float)(*(float *)&v35 * a2) )
    goto LABEL_41;
  std::string::string(v58);
  v5 |= 0x400u;
  *(_QWORD *)&v38 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)(a1 + 24) + 4LL)) & _xmm;
  v39 = v38;
  v40 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v40);
  if ( v39 > (float)(*(float *)&v38 * a2)
    || (std::string::string(v59),
        v5 |= 0x800u,
        *(_QWORD *)&v41 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)(a1 + 24) + 8LL)) & _xmm,
        v42 = v41,
        v43 = (unsigned int)MPCConstantManager::GetInstance(),
        MPCConstantManager::GetConstant<float>(v43),
        v42 > (float)(*(float *)&v41 * a2)) )
  {
LABEL_41:
    v44 = 1;
  }
  else
  {
LABEL_42:
    v44 = 0;
  }
  if ( (v5 & 0x800) != 0 )
  {
    v5 &= ~0x800u;
    std::string::~string(v59);
  }
  if ( (v5 & 0x400) != 0 )
  {
    v5 &= ~0x400u;
    std::string::~string(v58);
  }
  if ( (v5 & 0x200) != 0 )
  {
    v5 &= ~0x200u;
    std::string::~string(v57);
  }
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 3232LL) )
    goto LABEL_54;
  std::string::string(v57);
  v5 |= 0x1000u;
  *(_QWORD *)&v45 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)(a1 + 8) + 2884LL)) & _xmm;
  v46 = v45;
  v47 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v47);
  if ( v46 > *(float *)&v45 )
    goto LABEL_53;
  std::string::string(v58);
  v5 |= 0x2000u;
  *(_QWORD *)&v48 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)(a1 + 8) + 2888LL)) & _xmm;
  v49 = v48;
  v50 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v50);
  if ( v49 > *(float *)&v48
    || (std::string::string(v59),
        v5 |= 0x4000u,
        *(_QWORD *)&v51 = COERCE_UNSIGNED_INT64(*(float *)(*(_QWORD *)(a1 + 8) + 2892LL)) & _xmm,
        v52 = v51,
        v53 = (unsigned int)MPCConstantManager::GetInstance(),
        MPCConstantManager::GetConstant<float>(v53),
        v52 > *(float *)&v51) )
  {
LABEL_53:
    v54 = 1;
  }
  else
  {
LABEL_54:
    v54 = 0;
  }
  if ( (v5 & 0x4000) != 0 )
  {
    v5 &= ~0x4000u;
    std::string::~string(v59);
  }
  if ( (v5 & 0x2000) != 0 )
  {
    v5 &= ~0x2000u;
    std::string::~string(v58);
  }
  if ( (v5 & 0x1000) != 0 )
    std::string::~string(v57);
  if ( v56 || v24 || v34 || v44 || v54 )
    return 1;
  return v4;
}
