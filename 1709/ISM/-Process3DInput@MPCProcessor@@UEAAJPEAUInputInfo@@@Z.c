/*
 * XREFs of ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180052A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180052714 (-MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x180052E8C (-CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18005FE00 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18005FED0 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180067D8C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCProcessor::Process3DInput(struct IInputDisplay **this, struct InputInfo *a2)
{
  MPCInputProviderBase *v4; // rbx
  unsigned int v5; // ebx
  struct IInputTarget *v6; // rdi
  struct IMPCInputProviderBase *v7; // rsi
  struct IInputTarget *v8; // rcx
  struct IInputDisplay *v9; // rbx
  MPCHolographicInputManager *Instance; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  struct IInputDisplay *v18; // rcx
  struct IInputDisplay *v19; // rdx
  struct IInputDisplay *v20; // rax
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // r8
  int v26; // eax
  _DWORD *v27; // rcx
  ISMTracing *v28; // rcx
  struct IInputTarget *v29; // rcx
  int v31; // [rsp+28h] [rbp-E0h]
  bool v32[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IInputTarget *v33; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v34[3]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v35[356]; // [rsp+60h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+BB0h] [rbp+AA8h]

  v34[1] = -2LL;
  v33 = 0LL;
  v32[0] = 0;
  v4 = (MPCInputProviderBase *)(this - 3);
  MPCProcessor::CacheHandInput((MPCProcessor *)(this - 3), a2, v32);
  if ( v32[0] )
  {
    v5 = 0;
  }
  else
  {
    if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) && (this[69] || *((_DWORD *)a2 + 174) == 7) )
      MPCInputProviderBase::SetRequestingPrimary(v4);
    v6 = this[63];
    v34[2] = v6;
    if ( v6 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v6 + 8LL))(v6);
    *(_DWORD *)a2 = 512;
    v7 = (struct IMPCInputProviderBase *)((unsigned __int64)this & -(__int64)(v4 != 0LL));
    v8 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = this[4];
    Instance = MPCHolographicInputManager::GetInstance();
    v11 = MPCHolographicInputManager::Process3DInput(Instance, v9, a2, v7, &v33);
    v5 = v11;
    if ( v11 >= 0 )
    {
      if ( v33 && *((_DWORD *)a2 + 174) != 8 )
      {
        v34[0] = 0LL;
        v12 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, _QWORD *))v33)(
                v33,
                &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
                v34);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x5C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
            (const char *)(unsigned int)v12);
          __debugbreak();
        }
        v13 = v34[0];
        v14 = *(_QWORD *)v34[0];
        LOBYTE(v15) = !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this);
        v16 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *, __int64))(v14 + 48))(v13, a2, v15);
        if ( v16 < 0 )
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x60,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
            (const char *)(unsigned int)v16);
        v17 = v34[0];
        if ( v34[0] )
        {
          v34[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
      if ( v6 && !this[63] )
      {
        if ( *((_BYTE *)this + 564) )
        {
          v18 = this[68];
          v19 = (struct IInputDisplay *)*((_QWORD *)v18 + 1);
          v20 = v18;
          while ( !*((_BYTE *)v19 + 25) )
          {
            if ( *((_DWORD *)v19 + 8) >= *((_DWORD *)this + 140) )
            {
              v20 = v19;
              v19 = *(struct IInputDisplay **)v19;
            }
            else
            {
              v19 = (struct IInputDisplay *)*((_QWORD *)v19 + 2);
            }
          }
          if ( v20 == v18 || *((_DWORD *)this + 140) < *((_DWORD *)v20 + 8) )
            v20 = this[68];
          if ( v20 != v18 )
          {
            v21 = (_OWORD *)((char *)v20 + 40);
            v22 = v35;
            v23 = 22LL;
            do
            {
              *v22 = *v21;
              v22[1] = v21[1];
              v22[2] = v21[2];
              v22[3] = v21[3];
              v22[4] = v21[4];
              v22[5] = v21[5];
              v22[6] = v21[6];
              v22 += 8;
              *(v22 - 1) = v21[7];
              v21 += 8;
              --v23;
            }
            while ( v23 );
            *v22 = *v21;
            v22[1] = v21[1];
            LOBYTE(v31) = 0;
            v24 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0LL, 4LL, HIDWORD(v35[0]), v35, v31);
            if ( v24 < 0 )
            {
              wil::details::in1diag3::_FailFast_Hr(
                retaddr,
                (void *)0x72,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
                (const char *)(unsigned int)v24);
              __debugbreak();
            }
            LOBYTE(v25) = *((_BYTE *)this + 565);
            v26 = (*(__int64 (__fastcall **)(struct IInputTarget *, _QWORD *, __int64))(*(_QWORD *)v6 + 48LL))(
                    v6,
                    v35,
                    v25);
            if ( v26 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x73,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
                (const char *)(unsigned int)v26);
            v27 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
            if ( v27 && *v27 )
            {
              ISMTracing::Instance();
              ISMTracing::MPCProcessor_FocusHandLost_(v28, v6, (struct InputInfo *)v35);
            }
          }
        }
        *((_BYTE *)this + 564) = 0;
      }
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x57,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
        (const char *)(unsigned int)v11);
    }
    if ( v6 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v29 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return v5;
}
