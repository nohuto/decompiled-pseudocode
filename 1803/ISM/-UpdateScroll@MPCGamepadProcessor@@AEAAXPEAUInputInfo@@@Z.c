/*
 * XREFs of ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180094A18
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

// Hidden C++ exception states: #wind=3
void __fastcall MPCGamepadProcessor::UpdateScroll(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  int v6; // r14d
  int v7; // edi
  bool v8; // cl
  char *v9; // rbx
  bool v10; // al
  __int64 v11; // r8
  struct IMPCInputProviderBase *v12; // rsi
  MPCConstantManager *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  MPCConstantManager *v16; // rax
  __int64 v17; // rdx
  char *v18; // rax
  __int64 v19; // rcx
  MPCGestureHandlerManager *v20; // rax
  const char *v21; // r9
  unsigned __int64 v22[3]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v23[5]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v24[24]; // [rsp+68h] [rbp-A0h] BYREF
  int v25; // [rsp+80h] [rbp-88h]
  char v26; // [rsp+2C0h] [rbp+1B8h] BYREF
  int v27; // [rsp+4B0h] [rbp+3A8h]
  float v28; // [rsp+4B4h] [rbp+3ACh]
  float v29; // [rsp+4B8h] [rbp+3B0h]
  int v30; // [rsp+4C0h] [rbp+3B8h]
  int v31; // [rsp+4C4h] [rbp+3BCh]
  __int128 v32; // [rsp+4C8h] [rbp+3C0h]
  int v33; // [rsp+4D8h] [rbp+3D0h]

  v22[1] = -2LL;
  v4 = *((_DWORD *)this + 1020);
  v5 = v4 >> 9;
  v6 = ((v4 & 0x80) == 0) - 1;
  if ( (v4 & 0x40) != 0 )
    v6 = (v4 & 0x80) == 0;
  v7 = (v4 >> 8) & 1;
  if ( (v5 & 1) != 0 )
    --v7;
  v8 = v6 || v7;
  v9 = (char *)a2 + 600;
  v10 = *v9 && v9[2] || *((_DWORD *)this + 1130) == 1;
  if ( v8 && v10 )
  {
    *((_DWORD *)this + 1130) = 1;
    memset_0(v24, 0, 0x6C8uLL);
    v25 = 1736;
    v30 = *((_DWORD *)v9 + 1);
    v31 = *((_DWORD *)v9 + 2);
    v32 = *(_OWORD *)(v9 + 12);
    v33 = *((_DWORD *)v9 + 8);
    std::string::string(v23, "ScrollingScale", v11);
    v12 = (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
    MPCConstantManager::GetInstance();
    v28 = MPCConstantManager::GetConstant<float>(v13, v12, (__int64)v23) * (float)v7;
    std::string::~string(v23, v14);
    std::string::string(v23, "ScrollingScale", v15);
    MPCConstantManager::GetInstance();
    v29 = MPCConstantManager::GetConstant<float>(v16, v12, (__int64)v23) * (float)v6;
    std::string::~string(v23, v17);
    v27 = 5;
    v18 = &v26;
    v19 = 2LL;
    do
    {
      *(_OWORD *)v18 = *(_OWORD *)v9;
      *((_OWORD *)v18 + 1) = *((_OWORD *)v9 + 1);
      *((_OWORD *)v18 + 2) = *((_OWORD *)v9 + 2);
      *((_OWORD *)v18 + 3) = *((_OWORD *)v9 + 3);
      *((_OWORD *)v18 + 4) = *((_OWORD *)v9 + 4);
      *((_OWORD *)v18 + 5) = *((_OWORD *)v9 + 5);
      *((_OWORD *)v18 + 6) = *((_OWORD *)v9 + 6);
      v18 += 128;
      *((_OWORD *)v18 - 1) = *((_OWORD *)v9 + 7);
      v9 += 128;
      --v19;
    }
    while ( v19 );
    *(_OWORD *)v18 = *(_OWORD *)v9;
    *((_OWORD *)v18 + 1) = *((_OWORD *)v9 + 1);
    *((_OWORD *)v18 + 2) = *((_OWORD *)v9 + 2);
    *((_OWORD *)v18 + 3) = *((_OWORD *)v9 + 3);
    v22[2] = (unsigned __int64)v22;
    v22[0] = (unsigned __int64)v12;
    if ( v12 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, __int64))(*(_QWORD *)v12 + 8LL))(v12, 128LL);
    MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v20, (__int64)v24, v22, v21);
  }
  else if ( *((_DWORD *)this + 1130) == 1 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
}
