/*
 * XREFs of ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800457C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x180045BCC (-CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z.c)
 *     ?ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCInputTarget@@0@Z @ 0x180046C5C (-ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCInputTarget@@0@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180049A70 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCInputTarget@@I@Z @ 0x180049F60 (-OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCInputTarget@@I@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCInputTarget@@0PEA_NI@Z @ 0x18004A03C (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCInputTarget@@0PEA_NI@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK@Z @ 0x180052654 (-SendHomeGesture@MPCManager@@QEAAXKK@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MPCProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  char v4; // r12
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  MPCConstantManager *Instance; // rax
  bool v11; // bl
  struct IInputTarget *v12; // rcx
  MPCHolographicInputManager *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  bool v21; // sf
  struct IMPCInputTarget *v22; // rcx
  struct IMPCInputTarget *v23; // rcx
  unsigned int v24; // r8d
  unsigned int *v25; // rax
  struct IInputTarget *v26; // rcx
  bool v28; // [rsp+38h] [rbp-39h] BYREF
  struct IInputTarget *v29; // [rsp+40h] [rbp-31h] BYREF
  struct IMPCInputTarget *v30; // [rsp+48h] [rbp-29h] BYREF
  struct IMPCInputTarget *v31; // [rsp+50h] [rbp-21h] BYREF
  int v32; // [rsp+58h] [rbp-19h]
  __int64 v33; // [rsp+60h] [rbp-11h]
  __int64 v34; // [rsp+68h] [rbp-9h]
  unsigned __int64 v35[4]; // [rsp+70h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v33 = -2LL;
  v4 = 0;
  v32 = 0;
  v29 = 0LL;
  v5 = *(_QWORD *)(this + 2240);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(this + 2240));
  v34 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v28 = 0;
  v6 = *((_DWORD *)a2 + 130);
  if ( v6 == 9 )
  {
    v25 = *(unsigned int **)(this + 24);
    v24 = v25[1];
    goto LABEL_50;
  }
  if ( v6 == 10 )
  {
    v24 = 0x40000;
    v25 = *(unsigned int **)(this + 24);
LABEL_50:
    MPCManager::SendHomeGesture(MPCManager::s_instance, *v25, v24);
    goto LABEL_51;
  }
  MPCProcessor::CacheHandInput((MPCProcessor *)(this - 24), a2, &v28);
  *(_BYTE *)(this + 2289) = *((_DWORD *)a2 + 130) == 7;
  if ( v28 )
  {
LABEL_51:
    v15 = 0;
    goto LABEL_52;
  }
  v11 = 0;
  if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
  {
    v9 = *((_DWORD *)a2 + 130);
    if ( v9 == 2
      || *(_QWORD *)(this + 2232)
      || v9 == 7
      || (unsigned int)(v9 - 3) <= 3
      && (std::string::string(v35, "HandGuidanceScoreForPrimary", v8),
          v4 = 1,
          v32 = 1,
          Instance = MPCConstantManager::GetInstance(),
          *((float *)a2 + 298) >= MPCConstantManager::GetConstant<float>(
                                    Instance,
                                    (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
                                    (__int64)v35)) )
    {
      v11 = 1;
    }
  }
  if ( (v4 & 1) != 0 )
    std::string::~string(v35, v7);
  if ( v11 )
    MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
  v12 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = MPCHolographicInputManager::GetInstance();
  v14 = MPCHolographicInputManager::Process3DInput(
          v13,
          a2,
          (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
          &v29);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_52;
  }
  v31 = 0LL;
  if ( v29 )
  {
    v16 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, struct IMPCInputTarget **))v29)(
            v29,
            &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
            &v31);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x86,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
        (const char *)(unsigned int)v16);
      JUMPOUT(0x180045BAALL);
    }
  }
  v30 = 0LL;
  if ( v5 )
  {
    v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IMPCInputTarget **))v5)(
            v5,
            &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
            &v30);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
        (const char *)(unsigned int)v17);
  }
  MPCProcessor::ProcessSourceDetectedAndLostForAllHands((MPCProcessor *)(this - 24), v30, v31);
  v18 = *((_DWORD *)a2 + 130);
  if ( v18 == 5 )
  {
    MPCInputProviderBase::ProcessSourceDetectedAndLost(
      (MPCInputProviderBase *)(this - 24),
      0LL,
      v31,
      0LL,
      *((_DWORD *)a2 + 287));
  }
  else
  {
    if ( v18 == 4 )
    {
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v5 + 24LL))(v5, a2);
        MPCInputProviderBase::OnSuccessfulDetach((MPCInputProviderBase *)(this - 24), v30, *((_DWORD *)a2 + 287));
      }
      if ( *(_QWORD *)(this + 2280) )
        goto LABEL_44;
    }
    else
    {
      if ( !v29 || !*(_BYTE *)(this + 2176) && v18 != 7 )
        goto LABEL_44;
      v19 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)v29 + 24LL))(v29, a2);
      v20 = v19;
      if ( v19 != -2147417853 )
      {
        v21 = v19 < 0;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAD,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
            (const char *)(unsigned int)v19);
          v21 = v20 < 0;
        }
        *(_BYTE *)(this + 2176) = !v21;
        goto LABEL_44;
      }
    }
    *(_BYTE *)(this + 2176) = 0;
  }
LABEL_44:
  v15 = 0;
  v22 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v23 + 16LL))(v23);
  }
LABEL_52:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v26 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return v15;
}
