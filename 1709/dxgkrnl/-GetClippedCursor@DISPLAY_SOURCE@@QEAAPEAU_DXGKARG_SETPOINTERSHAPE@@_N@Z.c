/*
 * XREFs of ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00AF3E0
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00B497C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetClippedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  void *v6; // rcx
  SIZE_T v8; // rax
  __int64 v9; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 4875LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*((_QWORD *)this + 106) && a2 )
  {
    v8 = 4LL * (unsigned int)(*(_DWORD *)(v5 + 1656) * *(_DWORD *)(v5 + 1660));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v5 + 1656) * *(_DWORD *)(v5 + 1660)), 4uLL) )
      v8 = -1LL;
    *((_QWORD *)this + 106) = operator new(v8, 0x4B677844u, PagedPool);
  }
  v6 = (void *)*((_QWORD *)this + 106);
  if ( v6 )
    memset(v6, 0, 4 * *(unsigned int *)(v5 + 1656) * (unsigned __int64)*(unsigned int *)(v5 + 1660));
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824);
}
