/*
 * XREFs of ?HitTestInternal@MPCInputRouter@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180084E84
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180084DA0 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 * Callees:
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F2BC (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18007EFF0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::HitTestInternal(
        MPCInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v13[40]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v12[1] = -2LL;
  v5 = DWMInputRouter::HitTest(this, a2, a3);
  MPCHolographicInputManager::GetInstance();
  if ( !*(_BYTE *)(v6 + 2009) && v5 < 0 )
  {
    v12[0] = 0LL;
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 91))(
           *((_QWORD *)this + 91),
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           v12) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 56LL))(v12[0]);
      if ( v7 )
      {
        v8 = NtDuplicateCompositionInputSink(v7, (char *)a3 + 16);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::_FailFast_NtStatus(
            retaddr,
            (void *)0x139,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v8);
          JUMPOUT(0x180084FC5LL);
        }
      }
      *((_DWORD *)a3 + 34) &= ~1u;
      v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v12[0] + 72LL))(v12[0], v13);
      *((_OWORD *)a3 + 6) = *(_OWORD *)v9;
      *((_OWORD *)a3 + 7) = *(_OWORD *)(v9 + 16);
      *((_QWORD *)a3 + 16) = *(_QWORD *)(v9 + 32);
      *((_QWORD *)a3 + 1) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 91) + 64LL))(*((_QWORD *)this + 91));
      v5 = 0;
    }
    v10 = v12[0];
    if ( v12[0] )
    {
      v12[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return (unsigned int)v5;
}
