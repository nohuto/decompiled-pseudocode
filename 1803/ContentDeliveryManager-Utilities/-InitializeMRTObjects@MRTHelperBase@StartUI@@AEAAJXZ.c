/*
 * XREFs of ?InitializeMRTObjects@MRTHelperBase@StartUI@@AEAAJXZ @ 0x180095D68
 * Callers:
 *     ?Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800960E8 (-Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032D4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall StartUI::MRTHelperBase::InitializeMRTObjects(
        StartUI::MRTHelperBase *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v5; // rsi
  __int64 v7; // rcx
  HRESULT Instance; // edi
  __int64 v9; // rdx
  __int64 result; // rax
  HRESULT v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  _QWORD *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // ebx
  PWSTR ppszPathOut[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (__int64 *)((char *)this + 8);
  if ( !*((_QWORD *)this + 1) )
  {
    if ( !*((_BYTE *)this + 37) && !*((_BYTE *)this + 38) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5B,
        (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelper.h",
        a4);
      JUMPOUT(0x1800960E6LL);
    }
    v7 = *(_QWORD *)this;
    if ( *(_QWORD *)this )
    {
      *(_QWORD *)this = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    Instance = CoCreateInstance(
                 &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
                 0LL,
                 1u,
                 &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
                 (LPVOID *)this);
    if ( Instance < 0 )
    {
      v9 = 93LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelper.h",
        (const char *)(unsigned int)Instance);
      return (unsigned int)Instance;
    }
    if ( *((_BYTE *)this + 37) )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 40LL))(
                   *(_QWORD *)this,
                   *((_QWORD *)this + 5));
      result = 2147942405LL;
      if ( Instance == -2147024891 )
        return result;
      if ( Instance < 0 )
      {
        v9 = 98LL;
        goto LABEL_11;
      }
      goto LABEL_25;
    }
    ppszPathOut[0] = 0LL;
    ppszPathOut[1] = (PWSTR)-1LL;
    ppszPathOut[2] = (PWSTR)-1LL;
    v11 = PathAllocCombine(*((PCWSTR *)this + 8), L"resources.pri", 0, ppszPathOut);
    Instance = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, PWSTR))(**(_QWORD **)this + 48LL))(*(_QWORD *)this, ppszPathOut[0]);
      Instance = v11;
      if ( v11 >= 0 )
      {
        if ( ppszPathOut[0] )
          LocalFree(ppszPathOut[0]);
LABEL_25:
        v13 = *(_QWORD *)this;
        v14 = (_QWORD *)((char *)this + 16);
        v15 = *((_QWORD *)this + 2);
        if ( v15 )
        {
          *v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v13 + 72LL))(
                     v13,
                     &GUID_e3c22b30_8502_4b2f_9133_559674587e51,
                     (char *)this + 16);
        if ( Instance < 0 )
        {
          v9 = 106LL;
          goto LABEL_11;
        }
        v16 = *(_QWORD *)this;
        v17 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v16 + 56LL))(
                     v16,
                     &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd,
                     v5);
        if ( Instance < 0 )
        {
          v9 = 107LL;
          goto LABEL_11;
        }
        if ( *((_WORD *)this + 17) )
        {
          v18 = *v14;
          if ( *((_BYTE *)this + 35) )
          {
            Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v18 + 112LL))(
                         *v14,
                         *((unsigned __int16 *)this + 16));
            if ( Instance < 0 )
            {
              v9 = 113LL;
              goto LABEL_11;
            }
          }
          else
          {
            Instance = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 120LL))(*v14);
            if ( Instance < 0 )
            {
              v9 = 117LL;
              goto LABEL_11;
            }
          }
        }
        if ( *((_BYTE *)this + 36) )
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v14 + 128LL))(*v14, *((unsigned int *)this + 7));
          v20 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7B,
              (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelper.h",
              (const char *)(unsigned int)v19);
            return v20;
          }
        }
        return 0LL;
      }
      v12 = 104LL;
    }
    else
    {
      v12 = 103LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelper.h",
      (const char *)(unsigned int)v11);
    if ( ppszPathOut[0] )
      LocalFree(ppszPathOut[0]);
    return (unsigned int)Instance;
  }
  return 0LL;
}
