/*
 * XREFs of ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAVCResource@@@Z @ 0x1800422B0
 * Callers:
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180043580 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180078DD4 (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CWindowList::SetRenderTargetForDesktops(CWindowList *this, struct CResource *a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rdi
  CBaseObject *v6; // rcx
  __int64 v7; // rdi
  CBaseObject *v8; // rcx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  while ( 1 )
  {
    v4 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
    if ( !v4 )
      break;
    v5 = v4[2];
    v6 = *(CBaseObject **)(v5 + 24);
    if ( v6 )
      CBaseObject::Release(v6);
    *(_QWORD *)(v5 + 24) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    v7 = *(_QWORD *)(v5 + 56);
    v8 = *(CBaseObject **)(v7 + 24);
    if ( v8 )
      CBaseObject::Release(v8);
    *(_QWORD *)(v7 + 24) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
}
