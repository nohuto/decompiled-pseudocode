/*
 * XREFs of ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x1800A3788
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180096F58 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800A427C (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180030B6C (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x1800A49D8 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::CreateBrush(
        CDesktopThumbnailCVI *this,
        struct CCachedVisualImageBrushResource **a2,
        struct CResource **a3,
        struct CResource **a4,
        const struct tagRECT *a5)
{
  CBaseObject *v5; // rbx
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r10d
  int v16; // r11d
  int v17; // r8d
  float v18; // xmm2_4
  int v19; // r9d
  float v20; // xmm3_4
  int v21; // eax
  int v22; // eax
  volatile signed __int32 *v23; // rdi
  __int64 v24; // rax
  CBaseObject *v26; // [rsp+90h] [rbp-31h] BYREF
  CBaseObject *v27; // [rsp+98h] [rbp-29h] BYREF
  int v28[4]; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  v26 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  if ( !a4 )
  {
LABEL_5:
    v12 = CDesktopThumbnailCVI::_EnsureResources(this);
    v11 = v12;
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v26);
      v12 = CCachedVisualImageBrushResource::Create(v14, *((_QWORD *)this + 2), (__int64 *)&v26);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v15 = 0;
        v29 = _xmm;
        if ( a4 )
        {
          v15 = *((_DWORD *)v5 + 6);
          *(_OWORD *)v28 = 0LL;
          v16 = 0;
        }
        else
        {
          v17 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
          v16 = 1;
          if ( (float)v17 == 0.0 )
            v18 = 0.0;
          else
            v18 = (float)((a5->left - *((_DWORD *)this + 10)) / v17);
          v19 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
          *(float *)v28 = v18;
          if ( (float)v19 == 0.0 )
            v20 = 0.0;
          else
            v20 = (float)((a5->top - *((_DWORD *)this + 11)) / v19);
          *(float *)&v28[1] = v20;
          if ( (float)v17 == 0.0 )
          {
            v28[2] = 0;
          }
          else
          {
            v21 = 0;
            if ( a5->right - a5->left >= 0 )
              v21 = a5->right - a5->left;
            *(float *)&v28[2] = (float)(v21 / v17) + v18;
          }
          if ( (float)v19 == 0.0 )
          {
            v28[3] = 0;
          }
          else
          {
            v22 = 0;
            if ( a5->bottom - a5->top >= 0 )
              v22 = a5->bottom - a5->top;
            *(float *)&v28[3] = (float)(v22 / v19) + v20;
          }
        }
        v23 = (volatile signed __int32 *)v26;
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v26 + 2) + 1208LL))(
                *((_QWORD *)v26 + 2),
                *((unsigned int *)v26 + 6),
                *((_QWORD *)v26 + 2),
                &v29,
                v28,
                0,
                0,
                0,
                1,
                v16,
                0,
                v15,
                1,
                0,
                0,
                0,
                *(_DWORD *)(*((_QWORD *)this + 4) + 24LL));
        v11 = v12;
        if ( v12 >= 0 )
        {
          if ( a4 )
          {
            *a4 = v5;
            if ( v5 )
            {
              _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
              v23 = (volatile signed __int32 *)v26;
            }
          }
          *a2 = (struct CCachedVisualImageBrushResource *)v23;
          _InterlockedIncrement(v23 + 2);
          if ( a3 )
          {
            *a3 = (struct CResource *)*((_QWORD *)this + 4);
            v24 = *((_QWORD *)this + 4);
            if ( v24 )
              _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
          }
          v11 = 0;
          goto LABEL_37;
        }
        v13 = 700LL;
      }
      else
      {
        v13 = 654LL;
      }
    }
    else
    {
      v13 = 651LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_38;
  }
  v10 = CResource::Create(0x1Bu, *((_QWORD *)this + 2), &v27);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v5 = v27;
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x288,
    (__int64)"windows\\dwm\\udwm\\desktopthumbnail.cpp",
    (const char *)(unsigned int)v10);
LABEL_37:
  v5 = v27;
LABEL_38:
  if ( v5 )
    CBaseObject::Release(v5);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v26);
  return v11;
}
