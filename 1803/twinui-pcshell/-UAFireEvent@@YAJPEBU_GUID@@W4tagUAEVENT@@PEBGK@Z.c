/*
 * XREFs of ?UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z @ 0x18010E2E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3___::Run @ 0x18010A880 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z @ 0x180107BB8 (-GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UAFireEvent(__int64 a1, __int64 a2, __int64 a3)
{
  const struct _GUID *v4; // rdx
  UserAssistImpl *v5; // rcx
  struct IShellUserAssist *UserAssistWorker; // rbx
  int v7; // edi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IShellUserAssist *v14; // [rsp+50h] [rbp+8h] BYREF

  v12[1] = -2LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  UserAssistWorker = UserAssistImpl::GetUserAssistWorker(v5, v4);
  v12[0] = (__int64)UserAssistWorker;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v12);
  if ( UserAssistWorker )
  {
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v12);
    v14 = UserAssistWorker;
    v7 = 0;
  }
  else
  {
    v7 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\uem.h",
      (const char *)0x80004005LL);
    UserAssistWorker = v14;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  if ( v7 < 0 )
  {
    v8 = (unsigned int)v7;
    v9 = 137LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\uem.h",
      (const char *)v8);
    goto LABEL_9;
  }
  v10 = (*(__int64 (__fastcall **)(struct IShellUserAssist *, GUID *, _QWORD, __int64, _DWORD))(*(_QWORD *)UserAssistWorker
                                                                                              + 24LL))(
          UserAssistWorker,
          &GUID_cebff5cd_ace2_4f4f_9178_9926f41749ea,
          0LL,
          a3,
          0);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = (unsigned int)v10;
    v9 = 138LL;
    goto LABEL_8;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v7;
}
