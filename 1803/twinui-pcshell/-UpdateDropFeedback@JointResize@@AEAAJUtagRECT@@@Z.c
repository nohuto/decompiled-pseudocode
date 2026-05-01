/*
 * XREFs of ?UpdateDropFeedback@JointResize@@AEAAJUtagRECT@@@Z @ 0x1802EA8B0
 * Callers:
 *     _lambda_46d2ac6b30f5d317ef4bcc4e3f77555a_::operator() @ 0x1802E8850 (_lambda_46d2ac6b30f5d317ef4bcc4e3f77555a_--operator().c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x1802E9C80 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ED08C (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall JointResize::UpdateDropFeedback(JointResize *this, struct tagRECT *a2)
{
  const struct _GUID *v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  bool v8; // zf
  LONG right; // ecx
  __int64 v10; // rdx
  void *v12; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( !*((_QWORD *)this + 26) )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v5 = CDropFeedbackList_CreateInstance(v4, &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 621LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      return v6;
    }
    v8 = *((_DWORD *)this + 72) == 11;
    v13 = *(_OWORD *)((char *)this + 248);
    if ( v8 )
    {
      right = a2->right;
      if ( *((_DWORD *)this + 62) > right )
        right = *((_DWORD *)this + 62);
      LODWORD(v13) = right;
    }
    else
    {
      right = v13;
    }
    v10 = *((unsigned int *)this + 50);
    DWORD2(v13) = right + *((_DWORD *)this + 64) - *((_DWORD *)this + 62);
    (*(void (__fastcall **)(void *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v12 + 88LL))(v12, v10, 0LL, &v13, 768);
    v5 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**((_QWORD **)this + 22) + 32LL))(
           *((_QWORD *)this + 22),
           v12,
           0LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 633LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  return 0LL;
}
