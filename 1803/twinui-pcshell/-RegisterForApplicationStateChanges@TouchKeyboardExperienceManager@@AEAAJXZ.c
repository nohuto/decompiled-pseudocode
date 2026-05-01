/*
 * XREFs of ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180240E14
 * Callers:
 *     _lambda_65c0f5c4ae095b6c4d2379132d65e3aa_::operator() @ 0x1800A1A4C (_lambda_65c0f5c4ae095b6c4d2379132d65e3aa_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::RegisterForApplicationStateChanges(
        TouchKeyboardExperienceManager *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  LPVOID v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp+18h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(&CLSID_ShellServiceHost, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v10 = 0LL;
    v4 = ppv;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v5 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           &SID_ProcessLifetimeManagerControl,
           &GUID_48f4e2d1_eeba_461e_8f8f_6353da1a3aca,
           &v10);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v7 = (_QWORD *)((char *)this + 480);
      if ( *((_QWORD *)this + 63) >= 8uLL )
        v7 = (_QWORD *)*v7;
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, unsigned __int64, char *))(*(_QWORD *)v10 + 24LL))(
             v10,
             v7,
             15LL,
             ((unsigned __int64)this + 160) & -(__int64)(this != 0LL),
             (char *)this + 264);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v3 = 0;
        goto LABEL_11;
      }
      v6 = 1603LL;
    }
    else
    {
      v6 = 1598LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x63B,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v3;
}
