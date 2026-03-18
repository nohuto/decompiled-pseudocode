/*
 * XREFs of ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180143720
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180141A60 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180142B38 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$DynArray@PEAVOverlayPlaneInfo.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18006E174 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089F54 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18014349C (-IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180144750 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
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
  char v11; // r8
  char v12; // al
  int v13; // ecx
  char v14; // r8
  unsigned int ColorChannelDepth; // ebx
  __int64 v16; // rcx
  int *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  int *v20; // rax
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  _BYTE v25[16]; // [rsp+20h] [rbp-28h] BYREF

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
    v10 = v11 == 0;
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
  if ( *((_BYTE *)this + 176) )
  {
    if ( !*((_BYTE *)a2 + 176) )
      return 1;
  }
  else if ( *((_BYTE *)a2 + 176) )
  {
    return 0;
  }
  if ( !v8 )
    goto LABEL_31;
  IsDXGIColorSpaceStudio(*((_DWORD *)this + 29));
  v12 = IsDXGIColorSpaceStudio(*((_DWORD *)a2 + 29));
  if ( v14 )
  {
    if ( !v12 )
      return 1;
  }
  else if ( v12 )
  {
    return 0;
  }
  if ( *((_DWORD *)this + 29) )
  {
    if ( !v13 )
      return 1;
  }
  else if ( v13 )
  {
    return 0;
  }
  ColorChannelDepth = 0;
  v16 = *(_QWORD *)(*((_QWORD *)this + 3) + 120LL);
  if ( v16 )
  {
    v17 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v16 + 144) + 24LL))(v16 + 144, v25);
    ColorChannelDepth = GetColorChannelDepth(*v17);
  }
  v18 = 0;
  v19 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 120LL);
  if ( v19 )
  {
    v20 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v19 + 144) + 24LL))(v19 + 144, v25);
    v18 = GetColorChannelDepth(*v20);
  }
  if ( ColorChannelDepth > v18 )
    return 1;
  if ( ColorChannelDepth >= v18 )
  {
LABEL_31:
    v21 = (*((_DWORD *)this + 21) - *((_DWORD *)this + 19)) * (*((_DWORD *)this + 22) - *((_DWORD *)this + 20));
    v22 = (*((_DWORD *)a2 + 21) - *((_DWORD *)a2 + 19)) * (*((_DWORD *)a2 + 22) - *((_DWORD *)a2 + 20));
    if ( v21 > v22 )
      return 1;
    if ( v21 >= v22 )
    {
      v23 = (*((_DWORD *)this + 13) - *((_DWORD *)this + 11)) * (*((_DWORD *)this + 14) - *((_DWORD *)this + 12));
      v24 = (*((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 11)) * (*((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12));
      if ( v23 > v24 || v23 >= v24 && *((_BYTE *)this + 192) && !*((_BYTE *)a2 + 192) )
        return 1;
    }
  }
  return 0;
}
