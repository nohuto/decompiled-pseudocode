/*
 * XREFs of _lambda_45861fbdbb3a9f108cf523e23389264f_::operator() @ 0x18016AF7C
 * Callers:
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x18016DADC (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_45861fbdbb3a9f108cf523e23389264f_::operator()(_QWORD *a1)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  HMONITOR v8; // rsi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  int v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14[2]; // [rsp+38h] [rbp-28h] BYREF
  RECT rc; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v14[1] = -2LL;
  v14[0] = 0LL;
  v2 = *(_QWORD *)(*a1 + 320LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  v3 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v14);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v7 = *a1;
    rc.left = (int)*(float *)(*a1 + 312LL);
    rc.top = (int)*(float *)(v7 + 316);
    rc.right = (int)*(float *)(v7 + 312);
    rc.bottom = (int)*(float *)(v7 + 316);
    v8 = MonitorFromRect(&rc, 0);
    if ( !v8 )
    {
      v4 = -2147418113;
      v5 = 2147549183LL;
      v6 = 760LL;
      goto LABEL_5;
    }
    *(_QWORD *)v13 = 0LL;
    v9 = v14[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
    v10 = (*(__int64 (__fastcall **)(__int64, HMONITOR, GUID *, GUID *, int *))(*(_QWORD *)v9 + 72LL))(
            v9,
            v8,
            &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
            &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
            v13);
    v4 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v13 + 72LL))(*(_QWORD *)v13, a1[1]);
      v4 = v10;
      if ( v10 >= 0 )
      {
        v4 = 0;
        goto LABEL_12;
      }
      v11 = 764LL;
    }
    else
    {
      v11 = 763LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
    goto LABEL_13;
  }
  v5 = (unsigned int)v3;
  v6 = 754LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)v5);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  return v4;
}
