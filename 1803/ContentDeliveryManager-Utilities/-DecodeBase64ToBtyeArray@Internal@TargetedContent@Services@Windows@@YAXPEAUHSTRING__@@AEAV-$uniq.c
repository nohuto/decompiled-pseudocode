/*
 * XREFs of ?DecodeBase64ToBtyeArray@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180069C5C
 * Callers:
 *     ?Base64BiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180069E20 (-Base64BiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$uni.c)
 *     ?DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z @ 0x180069F34 (-DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microso.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180068D2C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18006B888 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Services::TargetedContent::Internal::DecodeBase64ToBtyeArray(
        __int64 a1,
        void **a2,
        _DWORD *a3)
{
  int v6; // eax
  int v7; // eax
  void *v8; // rsi
  __int64 v9; // r8
  const char *v10; // r9
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdi
  DWORD LastError; // ebx
  int v14; // eax
  LPVOID v15; // rsi
  void *v16; // rcx
  void *v17; // rdi
  DWORD v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  SIZE_T cb; // [rsp+90h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+48h] BYREF

  v21[1] = -2LL;
  *a3 = 0;
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>(v21);
  v20 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)v21[0] + 104LL))(v21[0], a1, &v20);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(__int64, SIZE_T *))(*(_QWORD *)v20 + 56LL))(v20, &cb);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x120,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7);
LABEL_16:
    wil::details::in1diag3::_Throw_NullAlloc(v11, (void *)0x122, v9, v10);
    __debugbreak();
  }
  v8 = CoTaskMemAlloc((unsigned int)cb);
  pv = v8;
  v11 = retaddr;
  if ( !v8 )
    goto LABEL_16;
  v12 = v21[0];
  LastError = GetLastError();
  CoTaskMemFree(v8);
  SetLastError(LastError);
  pv = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, SIZE_T *, LPVOID *))(*(_QWORD *)v12 + 80LL))(v12, v20, &cb, &pv);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x123,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x180069E14LL);
  }
  *a3 = cb;
  v15 = pv;
  v16 = 0LL;
  pv = 0LL;
  v17 = *a2;
  if ( *a2 )
  {
    v18 = GetLastError();
    CoTaskMemFree(v17);
    SetLastError(v18);
    v16 = pv;
  }
  *a2 = v15;
  if ( v16 )
    CoTaskMemFree(v16);
  v19 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v21[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
}
