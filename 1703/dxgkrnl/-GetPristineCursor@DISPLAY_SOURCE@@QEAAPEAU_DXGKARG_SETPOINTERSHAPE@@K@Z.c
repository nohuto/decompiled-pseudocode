/*
 * XREFs of ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C0171AB0
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXIIE@Z @ 0x1C00F8758 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetPristineCursor(DISPLAY_SOURCE *this, unsigned int a2)
{
  SIZE_T v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  void *v9; // rcx
  PVOID v10; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 4256LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 194) < (unsigned int)v3 )
  {
    v9 = (void *)*((_QWORD *)this + 95);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    *((_DWORD *)this + 194) = 0;
    v10 = operator new(v3, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 95) = v10;
    if ( v10 )
      *((_DWORD *)this + 194) = v3;
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 736);
}
