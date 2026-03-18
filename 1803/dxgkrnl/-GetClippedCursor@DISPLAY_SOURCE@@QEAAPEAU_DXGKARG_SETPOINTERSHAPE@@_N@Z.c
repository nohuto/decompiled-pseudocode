/*
 * XREFs of ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00E2618
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetClippedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rbx
  SIZE_T v8; // rax
  PVOID v9; // rax
  __int64 v10; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v10 + 24) = 4881LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v5 = (void *)*((_QWORD *)this + 106);
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( v5 )
    goto LABEL_4;
  if ( a2 )
  {
    v8 = 4LL * (unsigned int)(*(_DWORD *)(v6 + 1792) * *(_DWORD *)(v6 + 1796));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v6 + 1792) * *(_DWORD *)(v6 + 1796)), 4uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 106) = v9;
    v5 = v9;
    if ( v9 )
LABEL_4:
      memset(v5, 0, 4 * *(unsigned int *)(v6 + 1792) * (unsigned __int64)*(unsigned int *)(v6 + 1796));
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824);
}
