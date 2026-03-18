/*
 * XREFs of ?CreateUnBindToken@CToken@@SAJPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C00182AC
 * Callers:
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAUCompositionSurfaceObject@@@Z @ 0x1C0017610 (-AddUnBindToken@CTokenManager@@UEAAJPEAUCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C0018420 (--0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CToken::CreateUnBindToken(struct CompositionSurfaceObject *a1, struct CToken **a2)
{
  CToken *v4; // rax
  struct CToken *v5; // rbx
  int v6; // edi

  *a2 = 0LL;
  v4 = (CToken *)operator new[](0x58uLL, 0x6F744D54u, PagedPool);
  if ( v4 )
    v5 = CToken::CToken(v4, 0LL, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct CToken *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 2LL);
    if ( v6 < 0 )
      (**(void (__fastcall ***)(struct CToken *, __int64))v5)(v5, 1LL);
    else
      *a2 = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
