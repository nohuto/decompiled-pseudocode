/*
 * XREFs of _lambda_3468ccb19a16dff0d3ecf886d749dae3_::operator() @ 0x180305230
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3468ccb19a16dff0d3ecf886d749dae3___::Run @ 0x1803058C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3468ccb19a16dff0d3ecf886d749dae3___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180071178 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_3468ccb19a16dff0d3ecf886d749dae3_::operator()(CMarshaledInterface *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  v2 = CMarshaledInterface::_Unmarshal(this, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &v6, 0);
  v3 = v2;
  if ( v2 < 0
    || (v2 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v6 + 32LL))(
               v6,
               *((_QWORD *)this + 1),
               *((unsigned int *)this + 4),
               *((unsigned int *)this + 5),
               *((_DWORD *)this + 6)),
        v3 = v2,
        v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  return v3;
}
