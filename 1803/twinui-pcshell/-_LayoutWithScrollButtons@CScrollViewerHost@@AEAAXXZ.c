/*
 * XREFs of ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x180291420
 * Callers:
 *     ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x180291350 (-UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ.c)
 *     ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x1802916E0 (-v_LayoutChildren@CScrollViewerHost@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x1802913A8 (-_GetIdealChildLocation@CScrollViewerHost@@AEAA-AUCRect@Geometry@@XZ.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802A1DB0 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

void __fastcall CScrollViewerHost::_LayoutWithScrollButtons(CScrollViewerHost *this)
{
  __int64 v2; // rcx
  LONG v3; // eax
  int v4; // r11d
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // r11d
  int v9; // eax
  int left; // eax
  int v11; // edx
  LONG v12; // edx
  LONG right; // eax
  LONG v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-38h] BYREF
  int v22; // [rsp+38h] [rbp-28h] BYREF
  int v23; // [rsp+40h] [rbp-20h]
  int v24; // [rsp+44h] [rbp-1Ch]
  _DWORD v25[3]; // [rsp+48h] [rbp-18h] BYREF
  int v26; // [rsp+54h] [rbp-Ch]

  v2 = *((_QWORD *)this + 57);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 136LL))(v2);
    if ( (*((_BYTE *)this + 392) & 2) != 0 )
    {
      v3 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
      rc.right = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
      rc.bottom = v3;
      *(_QWORD *)&rc.left = 0LL;
      CScrollViewerHost::_GetIdealChildLocation((__int64)this, &v22);
      v5 = *((_DWORD *)this + 66);
      v6 = v22;
      v7 = v5 + *((_DWORD *)this + 61);
      v20 = 0LL;
      if ( v22 <= v7 )
        v6 = v7;
      v8 = v4 - v5 - *((_DWORD *)this + 62);
      v22 = v6;
      v9 = v23;
      if ( v23 >= v8 )
        v9 = v8;
      v23 = v9;
      Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>((char *)this + 448, &v20);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 104LL))(v20, &v22);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 56) + 88LL))(*((_QWORD *)this + 56), v25);
      left = rc.left;
      v11 = *((_DWORD *)this + 66);
      if ( rc.left <= v25[0] - v11 - *((_DWORD *)this + 61) )
        left = v25[0] - v11 - *((_DWORD *)this + 61);
      v12 = v25[2] + *((_DWORD *)this + 62) + v11;
      rc.left = left;
      right = rc.right;
      if ( rc.right >= v12 )
        right = v12;
      rc.right = right;
    }
    else
    {
      v14 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
      rc.bottom = *((_DWORD *)this + 17) - *((_DWORD *)this + 64) - *((_DWORD *)this + 15);
      rc.top = rc.bottom - *((_DWORD *)this + 67);
      v15 = *((_DWORD *)this + 66);
      rc.right = v14;
      rc.left = 0;
      InflateRect(&rc, (v14 - 2 * v15 - *((_DWORD *)this + 65)) / -2, 0);
      CScrollViewerHost::_GetIdealChildLocation((__int64)this, &v22);
      v16 = v24;
      v17 = rc.top - *((_DWORD *)this + 63);
      v20 = 0LL;
      if ( v24 >= v17 )
        v16 = v17;
      v24 = v16;
      Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>((char *)this + 448, &v20);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 104LL))(v20, &v22);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 56) + 88LL))(*((_QWORD *)this + 56), v25);
      v18 = *((_DWORD *)this + 63);
      if ( rc.top - v26 > v18 )
      {
        v19 = v26 + v18 - rc.top;
        rc.bottom += v19;
        rc.top += v19;
      }
    }
    (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 57) + 104LL))(*((_QWORD *)this + 57), &rc);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
}
