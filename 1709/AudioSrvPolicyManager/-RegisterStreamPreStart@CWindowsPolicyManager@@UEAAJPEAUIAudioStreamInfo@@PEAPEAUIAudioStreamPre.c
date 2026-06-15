/*
 * XREFs of ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x180006430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A80 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAlwaysAudibleStream@@YA_NPEAUIAudioStreamInfo@@@Z @ 0x18000637C (-IsAlwaysAudibleStream@@YA_NPEAUIAudioStreamInfo@@@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001A0C8 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027058 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RegisterStreamPreStart(
        CWindowsPolicyManager *this,
        struct IAudioStreamInfo *a2,
        struct IAudioStreamPreStartContext **a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  int v8; // edi
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)this + 256LL))(this);
  if ( !IsAlwaysAudibleStream(a2) )
    goto LABEL_10;
  *a3 = 0LL;
  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v9 = Microsoft::WRL::Details::ModuleBase::module_;
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioStreamPreStartContext>::`vftable';
    if ( v9 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v9 + 8LL))(v9);
    *((_BYTE *)v7 + 16) = 0;
    *(_QWORD *)v7 = &CAastPreStartContext::`vftable';
    v7[5] = 0;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_QWORD *)v7 + 6) = 7LL;
    *((_WORD *)v7 + 12) = 0;
    v8 = CAastPreStartContext::RuntimeClassInitialize((CAastPreStartContext *)v7, a2);
    v10 = *(_QWORD *)v7;
    v11 = v7;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_DWORD *, GUID *, struct IAudioStreamPreStartContext **))v10)(
             v7,
             &GUID_52004e04_018e_41fc_a946_f5027192635b,
             a3);
      v11 = v7;
      v10 = *(_QWORD *)v7;
    }
    (*(void (__fastcall **)(_DWORD *))(v10 + 16))(v11);
    if ( v8 < 0 )
      goto LABEL_9;
LABEL_10:
    v8 = 0;
    goto LABEL_11;
  }
  v8 = -2147024882;
LABEL_9:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x450,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_11:
  (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)this + 264LL))(this);
  return (unsigned int)v8;
}
