/*
 * XREFs of ?InitDropFeedback@JointResize@@AEAAJH@Z @ 0x1802E928C
 * Callers:
 *     _lambda_46d2ac6b30f5d317ef4bcc4e3f77555a_::operator() @ 0x1802E8850 (_lambda_46d2ac6b30f5d317ef4bcc4e3f77555a_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?HideDropFeedback@JointResize@@AEAAJ_N@Z @ 0x1802E9110 (-HideDropFeedback@JointResize@@AEAAJ_N@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ED08C (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1802EE028 (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 */

__int64 __fastcall JointResize::InitDropFeedback(JointResize *this)
{
  int ScaleFactorForMonitor; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  char v6; // r14
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  const struct _GUID *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  IUnknown *punk; // [rsp+30h] [rbp-50h] BYREF
  void *v16; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v19[8]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  JointResize::HideDropFeedback(this, 0);
  ScaleFactorForMonitor = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 23) + 72LL))(
                            *((_QWORD *)this + 23),
                            v20);
  if ( ScaleFactorForMonitor >= 0 )
  {
    v4 = *((_QWORD *)this + 23);
    v18 = *(_OWORD *)((char *)this + 264);
    ScaleFactorForMonitor = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 40LL))(v4, &v17);
    if ( ScaleFactorForMonitor < 0 )
    {
      v3 = 543LL;
      goto LABEL_3;
    }
    ScaleFactorForMonitor = GetScaleFactorForMonitor(v17, v19);
    if ( ScaleFactorForMonitor < 0 )
    {
      v3 = 544LL;
      goto LABEL_3;
    }
    punk = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    v5 = CDropFeedback_CreateInstance(*((_QWORD *)this + 2), &v18, 8LL);
    ScaleFactorForMonitor = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x223,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v5);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
      return (unsigned int)ScaleFactorForMonitor;
    }
    v6 = 1;
    v7 = (__int64 *)*((_QWORD *)this + 16);
    v8 = *v7;
    v9 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[4].Release)(punk);
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v8 + 40))(v7, v9, *((_QWORD *)this + 29));
    ScaleFactorForMonitor = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22A,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_23;
    }
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    v12 = CDropFeedbackList_CreateInstance(v11, &v16);
    ScaleFactorForMonitor = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 128LL))(
              *((_QWORD *)this + 25),
              (char *)this + 248);
      ScaleFactorForMonitor = v12;
      if ( v12 >= 0 )
      {
        (*(void (__fastcall **)(void *, _QWORD, _QWORD, char *, IUnknown **))(*(_QWORD *)v16 + 64LL))(
          v16,
          *((_QWORD *)this + 25),
          *((_QWORD *)this + 25),
          (char *)this + 248,
          &punk);
        v12 = ((__int64 (__fastcall *)(IUnknown *, void *, _QWORD))punk->lpVtbl[1].AddRef)(punk, v16, 0LL);
        ScaleFactorForMonitor = v12;
        if ( v12 >= 0 )
        {
          v12 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[1].QueryInterface)(punk);
          ScaleFactorForMonitor = v12;
          if ( v12 >= 0 )
          {
            Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 22, (__int64 *)&punk);
            v6 = 0;
            ScaleFactorForMonitor = 0;
LABEL_22:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
            if ( !v6 )
              goto LABEL_24;
LABEL_23:
            IUnknown_SetSite(punk, 0LL);
            goto LABEL_24;
          }
          v13 = 565LL;
        }
        else
        {
          v13 = 564LL;
        }
      }
      else
      {
        v13 = 559LL;
      }
    }
    else
    {
      v13 = 557LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_22;
  }
  v3 = 539LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)ScaleFactorForMonitor);
  return (unsigned int)ScaleFactorForMonitor;
}
