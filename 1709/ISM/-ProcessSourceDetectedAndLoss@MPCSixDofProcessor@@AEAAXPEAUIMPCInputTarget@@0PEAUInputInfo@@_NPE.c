/*
 * XREFs of ?ProcessSourceDetectedAndLoss@MPCSixDofProcessor@@AEAAXPEAUIMPCInputTarget@@0PEAUInputInfo@@_NPEA_N@Z @ 0x18004F1B4
 * Callers:
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18004DA40 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18004E770 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCSixDofProcessorSourceLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x18004CBD4 (-MPCSixDofProcessorSourceLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCSixDofProcessorSourceDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x18004CD64 (-MPCSixDofProcessorSourceDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180067D8C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::ProcessSourceDetectedAndLoss(
        MPCSixDofProcessor *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3,
        struct InputInfo *a4,
        bool a5,
        bool *a6)
{
  char v10; // bp
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  _DWORD *v16; // rcx
  ISMTracing *v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  _DWORD *v20; // rcx
  ISMTracing *v21; // rcx
  int v22; // [rsp+20h] [rbp-68h]
  char v23; // [rsp+20h] [rbp-68h]
  _QWORD v24[2]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a2 != a3 )
  {
    if ( !a2
      || !a3
      || (*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 56LL))(a2)
      || (v10 = 1, (*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(a3)) )
    {
      v10 = 0;
    }
    if ( a2 )
    {
      v23 = 0;
      v11 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(
              5LL,
              0LL,
              *((unsigned int *)this + 265),
              (char *)this + 1056,
              v23);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x28A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
      *((_DWORD *)this + 264) = 0x2000;
      LOBYTE(v12) = v10;
      (*(void (__fastcall **)(struct IMPCInputTarget *, char *, __int64))(*(_QWORD *)a2 + 48LL))(
        a2,
        (char *)this + 1056,
        v12);
      if ( a5 )
      {
        v13 = *((_QWORD *)this + 5);
        v14 = *((unsigned int *)this + 265);
        v24[0] = 3LL;
        v24[1] = 1LL;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v13 + 72LL))(v13, v14, v24);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x296,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            (const char *)(unsigned int)v15);
      }
      v16 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v16 && *v16 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCSixDofProcessorSourceLost_(v17, a2, (MPCSixDofProcessor *)((char *)this + 1056));
      }
    }
    if ( a3 )
    {
      LOBYTE(v22) = 0;
      v18 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(
              1LL,
              0LL,
              *((unsigned int *)this + 265),
              (char *)this + 1056,
              v22);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x29E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
          (const char *)(unsigned int)v18);
        JUMPOUT(0x18004F3ECLL);
      }
      *((_DWORD *)this + 264) = 0x2000;
      LOBYTE(v19) = v10;
      (*(void (__fastcall **)(struct IMPCInputTarget *, char *, __int64))(*(_QWORD *)a3 + 48LL))(
        a3,
        (char *)this + 1056,
        v19);
      v20 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v20 && *v20 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCSixDofProcessorSourceDetected_(v21, a3, (MPCSixDofProcessor *)((char *)this + 1056));
      }
    }
    *((_BYTE *)this + 706) = 1;
  }
  if ( a6 )
    *a6 = ((*((_DWORD *)a4 + 175) - 1) & 0xFFFFFFFB) == 0;
}
