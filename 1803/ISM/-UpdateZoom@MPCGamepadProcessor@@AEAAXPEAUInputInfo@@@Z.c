/*
 * XREFs of ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180094CB0
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180093F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x18009501C (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCGamepadProcessor::UpdateZoom(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  float v3; // xmm0_4
  float v4; // xmm9_4
  float v5; // xmm8_4
  char *v6; // r15
  _OWORD *v7; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  char v10; // di
  struct IMPCInputProviderBase *v11; // rsi
  float v12; // xmm6_4
  MPCConstantManager *v13; // rax
  __int64 v14; // rdx
  bool v15; // r14
  __int64 v16; // r8
  float v17; // xmm6_4
  MPCConstantManager *v18; // rax
  float v19; // xmm0_4
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  char v23; // dl
  char v24; // cl
  MPCConstantManager *v25; // rax
  __int64 v26; // rdx
  MPCGestureHandlerManager *v27; // rax
  const char *v28; // r9
  unsigned __int64 v29[3]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v30[5]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v31[24]; // [rsp+68h] [rbp-A0h] BYREF
  int v32; // [rsp+80h] [rbp-88h]
  char v33; // [rsp+2C0h] [rbp+1B8h] BYREF
  int v34; // [rsp+4B0h] [rbp+3A8h]
  float v35; // [rsp+4BCh] [rbp+3B4h]
  int v36; // [rsp+4C0h] [rbp+3B8h]
  int v37; // [rsp+4C4h] [rbp+3BCh]
  __int128 v38; // [rsp+4C8h] [rbp+3C0h]
  int v39; // [rsp+4D8h] [rbp+3D0h]

  v29[1] = -2LL;
  LODWORD(v29[0]) = 0;
  v3 = *((double *)this + 511);
  v4 = (float)*((double *)this + 512) - v3;
  v5 = (float)*((double *)this + 520) - (float)*((double *)this + 519);
  v6 = (char *)a2 + 600;
  memset_0(v31, 0, 0x6C8uLL);
  v32 = 1736;
  v36 = *((_DWORD *)v6 + 1);
  v37 = *((_DWORD *)v6 + 2);
  v38 = *(_OWORD *)(v6 + 12);
  v39 = *((_DWORD *)v6 + 8);
  v7 = v6;
  v8 = &v33;
  v9 = 2LL;
  do
  {
    *(_OWORD *)v8 = *v7;
    *((_OWORD *)v8 + 1) = v7[1];
    *((_OWORD *)v8 + 2) = v7[2];
    *((_OWORD *)v8 + 3) = v7[3];
    *((_OWORD *)v8 + 4) = v7[4];
    *((_OWORD *)v8 + 5) = v7[5];
    *((_OWORD *)v8 + 6) = v7[6];
    v8 += 128;
    *((_OWORD *)v8 - 1) = v7[7];
    v7 += 8;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)v8 = *v7;
  *((_OWORD *)v8 + 1) = v7[1];
  *((_OWORD *)v8 + 2) = v7[2];
  *((_OWORD *)v8 + 3) = v7[3];
  std::string::string(v30, "ThumbstickDeadzone", 128LL);
  v10 = 1;
  LODWORD(v29[0]) = 1;
  v11 = (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
  MPCConstantManager::GetInstance();
  v15 = v12 > MPCConstantManager::GetConstant<float>(v13, v11, (__int64)v30) && *v6;
  std::string::~string(v30, v14);
  std::string::string(v30, "ThumbstickDeadzone", v16);
  MPCConstantManager::GetInstance();
  v19 = MPCConstantManager::GetConstant<float>(
          v18,
          (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
          (__int64)v30);
  std::string::~string(v30, v20);
  if ( *v6 && v6[2] || (v22 = *((_DWORD *)this + 1130), v22 == 2) )
  {
    v23 = 1;
    v22 = *((_DWORD *)this + 1130);
  }
  else
  {
    v23 = 0;
  }
  if ( !v15 || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm), v17 > v19) || v22 )
  {
    v24 = 0;
    if ( v22 == 2 && (!v15 || !v23) )
    {
      v22 = 2;
      goto LABEL_17;
    }
  }
  else
  {
    v24 = 1;
  }
  v10 = 0;
LABEL_17:
  if ( v23 && v24 )
  {
    *((_DWORD *)this + 1130) = 2;
    v22 = 2;
  }
  if ( v10 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
  else if ( v22 == 2 )
  {
    std::string::string(v30, "ZoomingScale", v21);
    MPCConstantManager::GetInstance();
    v35 = (float)((float)(MPCConstantManager::GetConstant<float>(
                            v25,
                            (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
                            (__int64)v30)
                        * v4)
                * *((float *)this + 1150))
        + 1.0;
    std::string::~string(v30, v26);
    v34 = 6;
    v29[2] = (unsigned __int64)v29;
    v29[0] = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
    if ( v11 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 8LL))(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
    MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v27, (__int64)v31, v29, v28);
  }
}
