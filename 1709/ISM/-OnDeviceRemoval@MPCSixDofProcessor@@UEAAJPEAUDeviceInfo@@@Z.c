/*
 * XREFs of ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18004DA40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009B58 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessSourceDetectedAndLoss@MPCSixDofProcessor@@AEAAXPEAUIMPCInputTarget@@0PEAUInputInfo@@_NPEA_N@Z @ 0x18004F1B4 (-ProcessSourceDetectedAndLoss@MPCSixDofProcessor@@AEAAXPEAUIMPCInputTarget@@0PEAUInputInfo@@_NPE.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCSixDofProcessor::OnDeviceRemoval(MPCSixDofProcessor *this, struct DeviceInfo *a2)
{
  char v4; // bp
  struct InputInfo *v5; // r14
  __int64 v6; // rbx
  int v7; // eax
  struct IMPCInputTarget *v8; // rcx
  struct IMPCInputTarget *v9; // rdi
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IMPCInputTarget *v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h]
  struct IMPCInputTarget *v15; // [rsp+88h] [rbp+20h]

  v4 = 0;
  LODWORD(v13) = 0;
  v5 = (MPCSixDofProcessor *)((char *)this + 1056);
  if ( (*((_DWORD *)this + 264) & 0x2000) != 0 )
  {
    v6 = *((_QWORD *)this + 67);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)this + 67));
    v14 = v6;
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IMPCInputTarget **))v6)(
             v6,
             &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
             &v13);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x15FD,
          (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
          (const char *)(unsigned int)v7);
        __debugbreak();
      }
      v4 = 3;
      v8 = v13;
      v9 = v13;
    }
    else
    {
      v9 = 0LL;
      v8 = v13;
    }
    v15 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v9 + 8LL))(v9);
      v8 = v13;
    }
    if ( (v4 & 1) != 0 && v8 )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
    MPCSixDofProcessor::ProcessSourceDetectedAndLoss(this, v9, 0LL, v5, 0, 0LL);
    v10 = *((_QWORD *)this + 67);
    if ( v10 )
    {
      *((_QWORD *)this + 67) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v9 )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return MPCInputProviderBase::OnDeviceRemoval(this, a2);
}
