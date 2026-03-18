/*
 * XREFs of ?InsertCompletedToken@CCompositionSurface@@MEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C004C5E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C000DF40 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateCloned@CFlipToken@@SAJ_K0PEAUCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C004B7A0 (-CreateCloned@CFlipToken@@SAJ_K0PEAUCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEA.c)
 *     ??$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z @ 0x1C004CDD8 (--$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::InsertCompletedToken(
        CCompositionSurface *this,
        __int64 a2,
        unsigned __int64 a3,
        struct tagCloneableFlipTokenData *a4)
{
  int SessionTokenManager; // edi
  __int64 v9; // rbx
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  struct CFlipToken *v12; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  SessionTokenManager = DxgkGetSessionTokenManager(&v11);
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = CFlipToken::CreateCloned(a2, a3, (CCompositionSurface *)((char *)this - 32), a4, &v12);
    if ( SessionTokenManager >= 0 )
    {
      v9 = v11;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, struct CFlipToken *))(*(_QWORD *)v9 + 168LL))(v9, v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
    }
  }
  ReleaseInterface<IAdapter>(&v11);
  return (unsigned int)SessionTokenManager;
}
