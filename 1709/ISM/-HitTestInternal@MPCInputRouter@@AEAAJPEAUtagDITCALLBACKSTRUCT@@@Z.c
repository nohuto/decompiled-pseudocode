/*
 * XREFs of ?HitTestInternal@MPCInputRouter@@AEAAJPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800A9048
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800A8F00 (-HitTest@MPCInputRouter@@UEAAJPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AF60 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::HitTestInternal(MPCInputRouter *this, struct tagDITCALLBACKSTRUCT *a2)
{
  signed int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[40]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v11[1] = -2LL;
  if ( ((1LL << gdwDeviceFamily) & 0x400) != 0 )
    *((_DWORD *)a2 + 48) = *((_DWORD *)this + 202);
  v4 = (***((unsigned __int8 (__fastcall ****)(_QWORD))this + 23))(*((_QWORD *)this + 23)) == 0 ? 0x80004005 : 0;
  MPCHolographicInputManager::GetInstance();
  if ( !*(_BYTE *)(v5 + 3129) && v4 < 0 )
  {
    v11[0] = 0LL;
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 92))(
           *((_QWORD *)this + 92),
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           v11) >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 80LL))(v11[0]);
      if ( v6 )
      {
        v7 = NtDuplicateCompositionInputSink(v6, (char *)a2 + 32);
        if ( v7 < 0 )
        {
          wil::details::in1diag3::_FailFast_NtStatus(
            retaddr,
            (void *)0x148,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v7);
          __debugbreak();
        }
      }
      *((_DWORD *)a2 + 44) &= ~1u;
      *((_QWORD *)a2 + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 72LL))(v11[0]);
      v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v11[0] + 96LL))(v11[0], v12);
      *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)v8;
      *(_OWORD *)((char *)a2 + 152) = *(_OWORD *)(v8 + 16);
      *((_QWORD *)a2 + 21) = *(_QWORD *)(v8 + 32);
      v4 = 0;
    }
    v9 = v11[0];
    if ( v11[0] )
    {
      v11[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return (unsigned int)v4;
}
