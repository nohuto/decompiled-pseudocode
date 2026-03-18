/*
 * XREFs of ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C00AF530
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00B497C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetPristineCursor(DISPLAY_SOURCE *this, unsigned int a2)
{
  SIZE_T v3; // rdi
  __int64 v4; // rcx
  void *v6; // rcx
  PVOID v7; // rax
  __int64 v8; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v8 + 24) = 4818LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 194) < (unsigned int)v3 )
  {
    v6 = (void *)*((_QWORD *)this + 95);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    *((_DWORD *)this + 194) = 0;
    v7 = operator new(v3, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 95) = v7;
    if ( v7 )
      *((_DWORD *)this + 194) = v3;
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 736);
}
