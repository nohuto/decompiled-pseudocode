/*
 * XREFs of ?HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x180084DB4
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x180084D50 (-HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007E750 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x180085090 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::HitTestInternal(
        MPCInputRouter *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        const char *a4,
        struct IInputTarget *a5,
        struct IInputTarget **a6)
{
  int v6; // edi
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0;
  if ( !a6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x103,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      a4);
    __debugbreak();
  }
  if ( *((_BYTE *)a3 + 500) )
  {
    MPCInputRouter::HitTest3D(this, a3, a5, a6);
  }
  else
  {
    v6 = DWMInputRouter::HitTest(this, a2, a3, (unsigned int)a4, a5, a6);
    MPCHolographicInputManager::GetInstance();
    if ( !*(_BYTE *)(v9 + 2009) && (!*a6 || v6 < 0) )
    {
      v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))this + 91))(
              *((_QWORD *)this + 91),
              &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
              a6);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x119,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v10);
        JUMPOUT(0x180084E81LL);
      }
    }
  }
  return (unsigned int)v6;
}
