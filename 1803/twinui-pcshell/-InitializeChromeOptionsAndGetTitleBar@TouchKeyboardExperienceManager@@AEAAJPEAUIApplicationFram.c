/*
 * XREFs of ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x18023E4A8
 * Callers:
 *     _lambda_c3020acaf10c7144233ee4f2e713fc58_::operator() @ 0x1800A1BF0 (_lambda_c3020acaf10c7144233ee4f2e713fc58_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        struct IApplicationFrameTitleBar **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rbx
  struct IApplicationFrameTitleBar *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  TouchKeyboardExperienceManager *v13; // [rsp+40h] [rbp+10h] BYREF
  __int64 v14; // [rsp+48h] [rbp+18h] BYREF

  v13 = this;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v5 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 112LL))(v14, 255LL, 24LL);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = v14;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      v7 = (*(__int64 (__fastcall **)(__int64, TouchKeyboardExperienceManager **))(*(_QWORD *)v9 + 144LL))(v9, &v13);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64, __int64))(*(_QWORD *)v13 + 64LL))(
               v13,
               1LL,
               1LL);
        v6 = v7;
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64, _QWORD))(*(_QWORD *)v13 + 104LL))(
                 v13,
                 255LL,
                 0LL);
          v6 = v7;
          if ( v7 >= 0 )
          {
            v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, _QWORD))(*(_QWORD *)v13 + 72LL))(v13, 0LL);
            v6 = v7;
            if ( v7 >= 0 )
            {
              v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64))(*(_QWORD *)v13 + 120LL))(
                     v13,
                     1LL);
              v6 = v7;
              if ( v7 >= 0 )
              {
                v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, _QWORD))(*(_QWORD *)v13 + 32LL))(
                       v13,
                       0LL);
                v6 = v7;
                if ( v7 >= 0 )
                {
                  v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, const WCHAR *))(*(_QWORD *)v13 + 24LL))(
                         v13,
                         &word_18035ABCC);
                  v6 = v7;
                  if ( v7 >= 0 )
                  {
                    v10 = v13;
                    v13 = 0LL;
                    *a3 = v10;
                    v6 = 0;
                    goto LABEL_21;
                  }
                  v8 = 1922LL;
                }
                else
                {
                  v8 = 1921LL;
                }
              }
              else
              {
                v8 = 1920LL;
              }
            }
            else
            {
              v8 = 1917LL;
            }
          }
          else
          {
            v8 = 1914LL;
          }
        }
        else
        {
          v8 = 1913LL;
        }
      }
      else
      {
        v8 = 1912LL;
      }
    }
    else
    {
      v8 = 1911LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x774,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v6;
}
