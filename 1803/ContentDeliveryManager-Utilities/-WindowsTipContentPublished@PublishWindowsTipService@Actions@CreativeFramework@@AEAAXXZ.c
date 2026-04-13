/*
 * XREFs of ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008E3C8
 * Callers:
 *     ?Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008E3C0 (-Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004ED0C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::PublishWindowsTipService::WindowsTipContentPublished(
        CreativeFramework::Actions::PublishWindowsTipService *this)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r10
  _WORD *v5; // rcx
  signed __int64 v6; // rdx
  __int16 v7; // ax
  _WORD *v8; // rax
  char *v9; // rcx
  _WORD *v10; // rdx
  signed __int64 v11; // rcx
  __int16 v12; // ax
  _WORD *v13; // rax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  const WCHAR *v22[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v23[32]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v24[512]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v25[512]; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+490h] [rbp+388h]

  v22[1] = (const WCHAR *)-2LL;
  v22[0] = L"WNF_SHEL_WINDOWSTIP_CONTENT_PUBLISHED";
  memset_0(v24, 0, 0x400uLL);
  v2 = (char *)this + 8;
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v2 = *(char **)v2;
  v3 = 256LL;
  v4 = 256LL;
  v5 = v24;
  v6 = v2 - v24;
  do
  {
    if ( v4 == -2147483390 )
      break;
    v7 = *(_WORD *)((char *)v5 + v6);
    if ( !v7 )
      break;
    *v5++ = v7;
    --v4;
  }
  while ( v4 );
  v8 = v5 - 1;
  if ( v4 )
    v8 = v5;
  *v8 = 0;
  if ( !v4 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x8007007ALL);
    __debugbreak();
  }
  v9 = (char *)this + 40;
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v9 = *(char **)v9;
  v10 = v25;
  v11 = v9 - v25;
  do
  {
    if ( v3 == -2147483390 )
      break;
    v12 = *(_WORD *)((char *)v10 + v11);
    if ( !v12 )
      break;
    *v10++ = v12;
    --v3;
  }
  while ( v3 );
  v13 = v10 - 1;
  if ( v3 )
    v13 = v10;
  *v13 = 0;
  if ( !v3 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x8007007ALL);
    goto LABEL_28;
  }
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v21);
  v20 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 112LL))(v21, &v20);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x29,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v14);
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x2A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v16 = v20;
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, v22);
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v16 + 48LL))(
          v16,
          *(_QWORD *)(v17 + 24),
          1024LL,
          v24);
  v19 = retaddr;
  if ( v18 < 0 )
    goto LABEL_29;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
}
