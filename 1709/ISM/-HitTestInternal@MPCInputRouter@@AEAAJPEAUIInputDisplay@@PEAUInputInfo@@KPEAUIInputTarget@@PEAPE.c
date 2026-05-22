/*
 * XREFs of ?HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800A8F3C
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800A8EB0 (-HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18001A450 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800A92A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::HitTestInternal(
        MPCInputRouter *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        const char *a4,
        struct IInputTarget *a5,
        struct IInputTarget **a6)
{
  int v6; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0;
  if ( !a6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x105,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      a4);
    __debugbreak();
  }
  if ( *((_BYTE *)a3 + 676) )
  {
    MPCInputRouter::HitTest3D(this, a3, a5, a6);
  }
  else
  {
    *((_DWORD *)a3 + 168) = *((_DWORD *)this + 202);
    v6 = DWMInputRouter::HitTest(this, a2, a3, (unsigned int)a4, a5, a6);
    MPCHolographicInputManager::GetInstance();
    if ( *(_BYTE *)(v9 + 3129) )
    {
      if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 290, v6);
    }
    else if ( !*a6 || v6 < 0 )
    {
      v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))this + 92))(
              *((_QWORD *)this + 92),
              &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
              a6);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x11E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v10);
        JUMPOUT(0x1800A9045LL);
      }
    }
  }
  return (unsigned int)v6;
}
