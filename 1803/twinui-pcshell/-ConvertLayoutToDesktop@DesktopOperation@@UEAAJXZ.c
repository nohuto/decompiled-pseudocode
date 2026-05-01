/*
 * XREFs of ?ConvertLayoutToDesktop@DesktopOperation@@UEAAJXZ @ 0x1802C1FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180311AD0 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DesktopOperation::ConvertLayoutToDesktop(DesktopOperation *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // r14d
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  int v13[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v14; // [rsp+50h] [rbp-21h] BYREF
  __int64 v15[3]; // [rsp+58h] [rbp-19h] BYREF
  int v16; // [rsp+70h] [rbp-1h]
  __int128 v17; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v18[2]; // [rsp+88h] [rbp+17h] BYREF
  __int128 v19; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v15[1] = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (DesktopOperation *)176));
  v15[2] = (__int64)v2;
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v16 = v3;
  v4 = CAppLayoutOperation::_VerifyAndPrepareLayout((DesktopOperation *)((char *)this - 152), 0LL, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_14;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 14) + 80LL))(*((_QWORD *)this - 14), 2LL) )
  {
    *(_QWORD *)v13 = 0LL;
    v6 = *((_QWORD *)this - 14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v6 + 104LL))(
           v6,
           0LL,
           2LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           v13);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
        (const char *)(unsigned int)v7);
LABEL_11:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
      goto LABEL_14;
    }
    v19 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)v13 + 56LL))(*(_QWORD *)v13, 0LL, &v19);
    v15[0] = 0LL;
    v8 = *((_QWORD *)this - 14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 120LL))(
           v8,
           *(_QWORD *)v13,
           0xFFFFFFFFLL,
           5LL,
           &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
           v15);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
        (const char *)(unsigned int)v9);
LABEL_10:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
      goto LABEL_11;
    }
    v17 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v15[0] + 56LL))(v15[0], 0LL, &v17);
    DWORD2(v17) += (DWORD2(v19) - (int)v19) / 2;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v15[0] + 104LL))(v15[0], 0LL, &v17);
    v14 = 0LL;
    v10 = *((_QWORD *)this - 14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v10 + 120LL))(v10, *(_QWORD *)v13, 1LL);
    v5 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      goto LABEL_10;
    }
    v18[0] = 0LL;
    v18[1] = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v14 + 56LL))(v14, 0LL, v18);
    LODWORD(v18[0]) = DWORD2(v17);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v14 + 104LL))(v14, 0LL, v18);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 14) + 264LL))(*((_QWORD *)this - 14), 2LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  }
  *((_DWORD *)this - 18) = 33;
  v5 = 0;
LABEL_14:
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v5;
}
