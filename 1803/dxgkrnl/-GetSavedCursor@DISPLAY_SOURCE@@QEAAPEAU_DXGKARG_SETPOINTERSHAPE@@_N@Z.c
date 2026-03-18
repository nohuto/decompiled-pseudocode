/*
 * XREFs of ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00E26D8
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetSavedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // rcx
  SIZE_T v6; // rax
  __int64 v7; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = 4856LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_QWORD *)this + 101) && a2 )
  {
    v6 = 4LL
       * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 1792LL)
                      * *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 1796LL));
    if ( !is_mul_ok(
            (unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 1792LL)
                         * *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 1796LL)),
            4uLL) )
      v6 = -1LL;
    *((_QWORD *)this + 101) = operator new[](v6, 0x4B677844u, PagedPool);
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 784);
}
