/*
 * XREFs of ?SetInFocusAppView@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K@Z @ 0x180019F00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x180019990 (-GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA-AV-.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::SetInFocusAppView(
        RTL_SRWLOCK *this,
        HWND a2)
{
  RTL_SRWLOCK *v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  char *(__fastcall *v6)(__int64, char *, HWND); // rax
  const char *v7; // r9
  char *AppViewTitle; // r14
  char *v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // rax
  void *v16[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v4 = this + 9;
    AcquireSRWLockExclusive(this + 9);
    this[10].Ptr = a2;
    v5 = this - 3;
    v6 = (char *(__fastcall *)(__int64, char *, HWND))*((_QWORD *)this[-3].Ptr + 9);
    if ( v6 == Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle )
      AppViewTitle = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
                       (__int64)v5,
                       (char *)v16,
                       a2);
    else
      AppViewTitle = v6((__int64)v5, (char *)v16, a2);
    v9 = (char *)&this[11];
    if ( v9 == AppViewTitle )
    {
LABEL_10:
      v13 = v17;
      if ( v17 < 8 )
      {
LABEL_11:
        if ( v4 )
          ReleaseSRWLockExclusive(v4);
        return 0LL;
      }
LABEL_20:
      std::_Deallocate(v16[0], v13 + 1, 2uLL);
      goto LABEL_11;
    }
    v10 = *((_QWORD *)v9 + 3);
    if ( v10 < 8 )
    {
LABEL_9:
      *((_QWORD *)v9 + 2) = 0LL;
      *((_QWORD *)v9 + 3) = 7LL;
      *(_WORD *)v9 = 0;
      *(_OWORD *)v9 = *(_OWORD *)AppViewTitle;
      *((_OWORD *)v9 + 1) = *((_OWORD *)AppViewTitle + 1);
      *((_QWORD *)AppViewTitle + 2) = 0LL;
      *((_QWORD *)AppViewTitle + 3) = 7LL;
      *(_WORD *)AppViewTitle = 0;
      goto LABEL_10;
    }
    v11 = *(_QWORD *)v9;
    v12 = v10 + 1;
    if ( v12 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( 2 * v12 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v11);
        goto LABEL_9;
      }
      if ( (v11 & 0x1F) == 0 )
      {
        v15 = *(_QWORD *)(v11 - 8);
        if ( v15 < v11 )
        {
          v11 = v11 - v15 - 8;
          if ( v11 <= 0x1F )
          {
            v11 = v15;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v11);
    goto LABEL_20;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4B,
                           (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
                           v7);
  }
  return result;
}
