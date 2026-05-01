/*
 * XREFs of ?RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x18006167C
 * Callers:
 *     ?CreateFrameWithWrapper@FrameFactory@@UEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x180062600 (-CreateFrameWithWrapper@FrameFactory@@UEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FrameWrapper::RuntimeClassInitialize(
        FrameWrapper *this,
        struct IApplicationFrame *a2,
        struct IPrivilegedPresentationOperations *a3)
{
  const struct _TlgProvider_t *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rcx
  FrameWrapper *v12; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  FrameWrapper **v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+64h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v16 = 0;
    v14 = &v12;
    v12 = this;
    v15 = 8;
    TlgWrite(v6, &unk_1801F5E3D, 0LL, 0LL, 3u, &pData);
  }
  if ( *((struct IApplicationFrame **)this + 5) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a2 + 24LL))(a2, (char *)this + 56);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( *((struct IPrivilegedPresentationOperations **)this + 6) != a3 )
    {
      if ( a3 )
        (*(void (__fastcall **)(struct IPrivilegedPresentationOperations *))(*(_QWORD *)a3 + 8LL))(a3);
      v11 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = a3;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3C,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
