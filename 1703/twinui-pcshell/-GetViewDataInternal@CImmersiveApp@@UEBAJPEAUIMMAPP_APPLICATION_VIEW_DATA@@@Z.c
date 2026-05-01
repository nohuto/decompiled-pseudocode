/*
 * XREFs of ?GetViewDataInternal@CImmersiveApp@@UEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x180053880
 * Callers:
 *     <none>
 * Callees:
 *     ?InitAppViewData@ImmersiveApplicationLayout@@YAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18017F518 (-InitAppViewData@ImmersiveApplicationLayout@@YAXPEAUAPPLICATION_VIEW_DATA@@@Z.c)
 */

__int64 __fastcall CImmersiveApp::GetViewDataInternal(CImmersiveApp *this, struct IMMAPP_APPLICATION_VIEW_DATA *a2)
{
  struct APPLICATION_VIEW_DATA *v4; // rdx
  struct APPLICATION_VIEW_DATA *v5; // rdx
  unsigned int v6; // r9d
  struct APPLICATION_VIEW_DATA *v7; // rdx
  __int64 v8; // xmm0_8
  __int128 v9; // xmm1

  ImmersiveApplicationLayout::InitAppViewData(a2, a2);
  ImmersiveApplicationLayout::InitAppViewData((struct IMMAPP_APPLICATION_VIEW_DATA *)((char *)a2 + 36), v4);
  v6 = *((_BYTE *)this + 560) != 0 ? 0x8007139F : 0;
  if ( !*((_BYTE *)this + 560) )
  {
    ImmersiveApplicationLayout::InitAppViewData(a2, v5);
    ImmersiveApplicationLayout::InitAppViewData((struct IMMAPP_APPLICATION_VIEW_DATA *)((char *)a2 + 36), v7);
    if ( *((_DWORD *)this + 42) == -1 || *((_DWORD *)this + 51) == -1 )
    {
      return (unsigned int)-2147023728;
    }
    else
    {
      v6 = 0;
      *(_OWORD *)a2 = *(_OWORD *)((char *)this + 168);
      *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 184);
      *((_DWORD *)a2 + 8) = *((_DWORD *)this + 50);
      v8 = *(_QWORD *)((char *)this + 236);
      v9 = *(_OWORD *)((char *)this + 220);
      *(_OWORD *)((char *)a2 + 36) = *(_OWORD *)((char *)this + 204);
      *(_OWORD *)((char *)a2 + 52) = v9;
      *((_DWORD *)a2 + 17) = v8;
    }
  }
  return v6;
}
