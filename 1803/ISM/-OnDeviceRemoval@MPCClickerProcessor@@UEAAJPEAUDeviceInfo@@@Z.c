/*
 * XREFs of ?OnDeviceRemoval@MPCClickerProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180048180
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCInputTarget@@0PEA_NI@Z @ 0x18004A03C (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCInputTarget@@0PEA_NI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCClickerProcessor::OnDeviceRemoval(MPCClickerProcessor *this, struct DeviceInfo *a2)
{
  __int64 v4; // rbx
  struct IMPCInputTarget *v5; // rdx
  __int64 v6; // rcx
  struct IMPCInputTarget *v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h]

  if ( (*((_DWORD *)this + 116) & 0x400) != 0 )
  {
    v4 = *((_QWORD *)this + 283);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 283));
    v9 = v4;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      (**(void (__fastcall ***)(__int64, GUID *, struct IMPCInputTarget **))v4)(
        v4,
        &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
        &v8);
      v5 = v8;
    }
    else
    {
      v5 = 0LL;
      v8 = 0LL;
    }
    MPCInputProviderBase::ProcessSourceDetectedAndLost(this, v5, 0LL, 0LL, 0);
    v6 = *((_QWORD *)this + 283);
    if ( v6 )
    {
      *((_QWORD *)this + 283) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( v8 )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return MPCInputProviderBase::OnDeviceRemoval(this, a2);
}
