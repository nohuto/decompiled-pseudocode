/*
 * XREFs of ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x18008987C
 * Callers:
 *     ?PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z @ 0x180089A04 (-PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z.c)
 *     ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x180089B20 (-Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v12; // rcx
  int v13; // [rsp+28h] [rbp-49h]
  LPVOID ppv; // [rsp+40h] [rbp-31h] BYREF
  __int64 v15; // [rsp+48h] [rbp-29h] BYREF
  const WCHAR *v16; // [rsp+50h] [rbp-21h] BYREF
  const WCHAR *v17[2]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v18[32]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v19[32]; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v17[1] = (const WCHAR *)-2LL;
  v4 = (char)a4;
  v17[0] = this;
  v16 = &Src;
  ppv = 0LL;
  v5 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         0x404u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &ppv);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 96LL))(
         ppv,
         &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
         &GUID_8fe68768_eeb4_415e_b678_ddaf57ffab61,
         &v15);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  v7 = v15;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v18, &v16);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v19, v17);
  LOBYTE(v13) = v4;
  LOBYTE(v10) = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(*(_QWORD *)v7 + 48LL))(
          v7,
          *(_QWORD *)(v9 + 24),
          v10,
          *(_QWORD *)(v8 + 24),
          v13);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x29,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x180089A01LL);
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
}
