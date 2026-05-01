/*
 * XREFs of ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1802ADAD8
 * Callers:
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1802AD9BC (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800F6188 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ @ 0x1802ACFB4 (-_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ.c)
 *     ?s_GetLayoutBufferRect@CAppTransitionManager@@CA?AUCRect@Geometry@@PEAUIAppLayout@@@Z @ 0x1802AE218 (-s_GetLayoutBufferRect@CAppTransitionManager@@CA-AUCRect@Geometry@@PEAUIAppLayout@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_TagBuffer(CAppTransitionManager *this, struct IAppLayoutOperation *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // esi
  int v9; // eax
  __int64 v10; // rdx
  HWND v11; // rcx
  char v13; // [rsp+40h] [rbp-9h]
  __int64 v14; // [rsp+48h] [rbp-1h] BYREF
  __int64 v15; // [rsp+50h] [rbp+7h] BYREF
  int v16; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v17; // [rsp+60h] [rbp+17h] BYREF
  __int128 v18; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v15 = 0LL;
  v13 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v4 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v6 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v14);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x293,
        (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      goto LABEL_23;
    }
    CAppTransitionManager::s_GetLayoutBufferRect(&v17, v15);
    CAppTransitionManager::s_GetLayoutBufferRect(&v18, v14);
    v7 = *((_QWORD *)this + 26);
    if ( v7 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 24LL))(v7, &v16) >= 0 && v16 )
      v17 = v18;
    if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&v17) )
    {
      v8 = 0x1000000;
      if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&v18) )
        v8 = 25264128;
      v9 = CAppTransitionManager::_EnsureWindowForBufferTag(this);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 701LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
          (const char *)(unsigned int)v9);
LABEL_19:
        if ( !v13 )
        {
          v11 = (HWND)*((_QWORD *)this + 24);
          if ( v11 )
          {
            DestroyWindow(v11);
            *((_QWORD *)this + 24) = 0LL;
          }
        }
        goto LABEL_22;
      }
      v9 = DwmpTransitionWindowWithRects(*((_QWORD *)this + 24), v8 | 0x44u, &v17, &v17);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 710LL;
        goto LABEL_16;
      }
      v13 = 1;
    }
    v5 = 0;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x290,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v5;
}
