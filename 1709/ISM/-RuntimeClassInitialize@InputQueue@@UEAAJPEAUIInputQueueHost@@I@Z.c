/*
 * XREFs of ?RuntimeClassInitialize@InputQueue@@UEAAJPEAUIInputQueueHost@@I@Z @ 0x1800820C0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001DC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputQueue::RuntimeClassInitialize(InputQueue *this, struct IInputQueueHost *a2, int a3)
{
  __int64 v4; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  __int64 v10; // rcx
  void *v11; // rax
  const char *v12; // r9
  const char *v13; // r9
  __int64 *v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rsi
  _QWORD *v18; // r14
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // r15
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rsi
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-268h] BYREF
  wchar_t Buffer[264]; // [rsp+60h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)this + 2) = 0LL;
  v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x14,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
      (const char *)0x8007000ELL);
    JUMPOUT(0x1800824D0LL);
  }
  v9 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)v7 + 3) = 1;
  *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageConversationHost>::`vftable';
  if ( v9 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v9 + 8LL))(v9);
  *v8 = &InputQueue::InputQueueConversationHost::`vftable';
  v8[2] = this;
  (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  *((_QWORD *)this + 2) = v8;
  (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  if ( *((struct IInputQueueHost **)this + 6) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IInputQueueHost *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = a2;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_DWORD *)this + 7) = a3;
  *((_BYTE *)this + 24) = 0;
  v11 = operator new[](0x1000uLL);
  *((_QWORD *)this + 14) = v11;
  if ( !v11 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
      v12);
    __debugbreak();
  }
  *((_BYTE *)this + 120) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
      v13);
    __debugbreak();
  }
  v14 = (__int64 *)((char *)this + 56);
  v15 = *((_QWORD *)this + 7);
  if ( v15 )
  {
    *v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = CoreUICreate((char *)this + 56);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x46,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = *v14;
  v18 = (_QWORD *)((char *)this + 64);
  v19 = *((_QWORD *)this + 8);
  if ( v19 )
  {
    *v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = (*(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, char *))(*(_QWORD *)v17 + 56LL))(
          v17,
          SecurityDescriptor,
          (char *)this + 64);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  LocalFree(SecurityDescriptor);
  SecurityDescriptor = 0LL;
  v21 = StringCchPrintfW(Buffer, 260LL, L"%s\\%d", L"System\\InputQueue", a3);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
      (const char *)(unsigned int)v21);
    __debugbreak();
  }
  v22 = *v14;
  v23 = *((_QWORD *)this + 9);
  if ( v23 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = (*(__int64 (__fastcall **)(__int64, wchar_t *, _QWORD, __int64, _DWORD, _DWORD, _QWORD, char *, char *))(*(_QWORD *)v22 + 312LL))(
          v22,
          Buffer,
          *v18,
          3LL,
          0,
          0,
          *((_QWORD *)this + 2),
          (char *)this + 32,
          (char *)this + 72);
  if ( v24 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
      (const char *)(unsigned int)v24);
    __debugbreak();
  }
  v25 = *v14;
  v26 = (_QWORD *)((char *)this + 80);
  v27 = *((_QWORD *)this + 10);
  if ( v27 )
  {
    *v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = (*(__int64 (__fastcall **)(__int64, wchar_t *, _QWORD, char *, char *))(*(_QWORD *)v25 + 320LL))(
          v25,
          Buffer,
          *((_QWORD *)this + 2),
          (char *)this + 36,
          (char *)this + 80);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, InputQueue *, char *))(*(_QWORD *)*v26 + 24LL))(
          *v26,
          *((unsigned int *)this + 9),
          this,
          (char *)this + 40);
  if ( v29 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
      (const char *)(unsigned int)v29);
    __debugbreak();
  }
  return 0LL;
}
