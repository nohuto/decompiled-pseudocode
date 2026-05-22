/*
 * XREFs of ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180084FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800802D0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPostProcessor@@@Z @ 0x180083D34 (-MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPost.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800857B8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 */

__int64 __fastcall MPCInputRouter::UpdateFocusedInputTarget(MPCInputRouter *this, struct IInputTarget *a2)
{
  struct IMPCInputPostProcessor *v2; // rbp
  _DWORD *v5; // rcx
  char v6; // bl
  ISMTracing *v7; // rcx
  int updated; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct IMPCInputPostProcessor *)*((_QWORD *)this + 94);
  v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v5 && *v5 )
  {
    v6 = *((_BYTE *)this + 800);
    ISMTracing::Instance();
    ISMTracing::MPCInputRouter_UpdateFocusedInputTarget_(v7, a2, v6 != 0, v2);
  }
  if ( *((_BYTE *)this + 800) )
  {
    updated = MPCInputRouter::UpdateFocusedInputTarget3D(this, a2);
    if ( updated < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x152,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)updated);
      __debugbreak();
    }
  }
  else
  {
    v9 = DWMInputRouter::UpdateFocusedInputTarget(this, a2);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x18008508ELL);
    }
  }
  return 0LL;
}
