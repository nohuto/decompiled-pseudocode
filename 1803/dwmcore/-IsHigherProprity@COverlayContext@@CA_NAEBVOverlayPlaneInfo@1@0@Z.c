/*
 * XREFs of ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180166CA8
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C8CB8 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180165F40 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$DynArray@PEAVOverlayPlaneInfo.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180071BBC (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B696C (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801668D4 (-IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180167810 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall COverlayContext::IsHigherProprity(
        const struct COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // bl
  char v5; // al
  char v7; // al
  char v8; // r9
  char v9; // dl
  bool v10; // zf
  char v11; // al
  char v12; // r8
  char v13; // al
  int v14; // ecx
  char v15; // r8
  unsigned int ColorChannelDepth; // ebx
  __int64 v17; // rcx
  int *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rcx
  int *v21; // rax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  _BYTE v26[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 112LL))(*((_QWORD *)this + 2));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 112LL))(*((_QWORD *)a2 + 2));
  if ( v4 )
  {
    if ( !v5 )
      return 1;
  }
  else if ( v5 )
  {
    return 0;
  }
  if ( COverlayContext::s_bXbox )
  {
    IsDXGIColorSpaceRec2020(*((_DWORD *)this + 29));
    v7 = IsDXGIColorSpaceRec2020(*((_DWORD *)a2 + 29));
    v10 = v12 == 0;
  }
  else
  {
    COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(this);
    v7 = COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(a2);
    v10 = v9 == 0;
  }
  if ( v10 )
  {
    if ( v7 )
      return 0;
  }
  else if ( !v7 )
  {
    return 1;
  }
  v11 = *((_BYTE *)a2 + 176);
  if ( *((_BYTE *)this + 176) )
  {
    if ( !v11 )
      return 1;
  }
  else if ( v11 )
  {
    return 0;
  }
  if ( !v8 )
    goto LABEL_31;
  IsDXGIColorSpaceStudio(*((_DWORD *)this + 29));
  v13 = IsDXGIColorSpaceStudio(*((_DWORD *)a2 + 29));
  if ( v15 )
  {
    if ( !v13 )
      return 1;
  }
  else if ( v13 )
  {
    return 0;
  }
  if ( *((_DWORD *)this + 29) )
  {
    if ( !v14 )
      return 1;
  }
  else if ( v14 )
  {
    return 0;
  }
  ColorChannelDepth = 0;
  v17 = *(_QWORD *)(*((_QWORD *)this + 3) + 120LL);
  if ( v17 )
  {
    v18 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v17 + 144) + 24LL))(v17 + 144, v26);
    ColorChannelDepth = GetColorChannelDepth(*v18);
  }
  v19 = 0;
  v20 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 120LL);
  if ( v20 )
  {
    v21 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v20 + 144) + 24LL))(v20 + 144, v26);
    v19 = GetColorChannelDepth(*v21);
  }
  if ( ColorChannelDepth > v19 )
    return 1;
  if ( ColorChannelDepth >= v19 )
  {
LABEL_31:
    v22 = (*((_DWORD *)this + 21) - *((_DWORD *)this + 19)) * (*((_DWORD *)this + 22) - *((_DWORD *)this + 20));
    v23 = (*((_DWORD *)a2 + 21) - *((_DWORD *)a2 + 19)) * (*((_DWORD *)a2 + 22) - *((_DWORD *)a2 + 20));
    if ( v22 > v23 )
      return 1;
    if ( v22 >= v23 )
    {
      v24 = (*((_DWORD *)this + 13) - *((_DWORD *)this + 11)) * (*((_DWORD *)this + 14) - *((_DWORD *)this + 12));
      v25 = (*((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 11)) * (*((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12));
      if ( v24 > v25 || v24 >= v25 && *((_BYTE *)this + 192) && !*((_BYTE *)a2 + 192) )
        return 1;
    }
  }
  return 0;
}
