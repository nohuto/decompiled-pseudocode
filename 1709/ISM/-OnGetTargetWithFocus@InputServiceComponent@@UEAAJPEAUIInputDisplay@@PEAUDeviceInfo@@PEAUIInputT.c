/*
 * XREFs of ?OnGetTargetWithFocus@InputServiceComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18002EBE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputServiceComponent::OnGetTargetWithFocus(
        InputServiceComponent *this,
        struct IInputDisplay *a2,
        struct DeviceInfo *a3,
        struct IInputTarget *a4,
        struct InputTargetingDecision *a5)
{
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[40]; // [rsp+40h] [rbp-38h] BYREF

  v13[1] = -2LL;
  v6 = 0;
  if ( a5 )
  {
    *((_DWORD *)a5 + 4) = 0;
    if ( a3 && (*((_BYTE *)a3 + 4) & 4) != 0 )
    {
      v13[0] = 0LL;
      if ( a4
        && (**(int (__fastcall ***)(struct IInputTarget *, GUID *, _QWORD *))a4)(
             a4,
             &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
             v13) >= 0 )
      {
        if ( !v13[0] )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 139, 255);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v13[0] + 96LL))(v13[0], v14);
        *((_OWORD *)this + 2) = *(_OWORD *)v8;
        *((_OWORD *)this + 3) = *(_OWORD *)(v8 + 16);
        *((_QWORD *)this + 8) = *(_QWORD *)(v8 + 32);
      }
      *(_DWORD *)a5 = 1;
      v9 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
      if ( v9 )
        (*(void (__fastcall **)(unsigned __int64, struct IInputDisplay *))(*(_QWORD *)v9 + 8LL))(v9, a2);
      v10 = *((_QWORD *)a5 + 1);
      *((_QWORD *)a5 + 1) = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64, struct IInputDisplay *))(*(_QWORD *)v10 + 16LL))(v10, a2);
      v7 = v13[0];
      if ( v13[0] )
      {
        v13[0] = 0LL;
        (*(void (__fastcall **)(__int64, struct IInputDisplay *))(*(_QWORD *)v7 + 16LL))(v7, a2);
      }
    }
    else
    {
      *(_DWORD *)a5 = 0;
      v11 = (_QWORD *)*((_QWORD *)a5 + 1);
      if ( v11 )
      {
        *((_QWORD *)a5 + 1) = 0LL;
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v11 + 16LL))(v11, *v11);
      }
    }
  }
  else
  {
    v6 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 124, 87);
  }
  return v6;
}
