/*
 * XREFs of ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x18007E4AC
 * Callers:
 *     ?PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z @ 0x18007E62C (-PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z.c)
 *     ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x18007E750 (-Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::PinApp(const WCHAR *this, const wchar_t *a2, __int64 a3, const wchar_t *a4)
{
  char v4; // si
  HRESULT v5; // eax
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  int v12; // [rsp+28h] [rbp-49h]
  LPVOID ppv; // [rsp+40h] [rbp-31h] BYREF
  __int64 v14; // [rsp+48h] [rbp-29h] BYREF
  const WCHAR *v15; // [rsp+50h] [rbp-21h] BYREF
  const WCHAR *v16[2]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v17[32]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v18[32]; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v16[1] = (const WCHAR *)-2LL;
  v4 = (char)a4;
  v16[0] = this;
  v15 = &Src;
  ppv = 0LL;
  v5 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         0x404u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &ppv);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 96LL))(
         ppv,
         &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
         &GUID_8fe68768_eeb4_415e_b678_ddaf57ffab61,
         &v14);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v6);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  v7 = v14;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v17, &v15);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v18, v16);
  LOBYTE(v12) = v4;
  LOBYTE(v10) = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(*(_QWORD *)v7 + 48LL))(
          v7,
          *(_QWORD *)(v9 + 24),
          v10,
          *(_QWORD *)(v8 + 24),
          v12);
  if ( v11 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v11);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
}
