/*
 * XREFs of ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x18004DEB4
 * Callers:
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MPCHolographicInputManager::IsProviderPrimary(
        MPCHolographicInputManager *this,
        const struct IMPCInputProviderBase *a2)
{
  const struct IMPCInputProviderBase **v2; // rdi
  const struct IMPCInputProviderBase **v4; // rsi
  const struct IMPCInputProviderBase *v5; // rbx

  v2 = (const struct IMPCInputProviderBase **)*((_QWORD *)this + 278);
  v4 = (const struct IMPCInputProviderBase **)*((_QWORD *)this + 279);
  while ( 1 )
  {
    if ( v2 == v4 )
      return 0;
    v5 = *v2;
    if ( *v2 )
      (*(void (__fastcall **)(const struct IMPCInputProviderBase *))(*(_QWORD *)v5 + 8LL))(*v2);
    if ( v5 == a2 )
      break;
    if ( v5 )
      (*(void (__fastcall **)(const struct IMPCInputProviderBase *))(*(_QWORD *)v5 + 16LL))(v5);
    ++v2;
  }
  if ( v5 )
    (*(void (__fastcall **)(const struct IMPCInputProviderBase *))(*(_QWORD *)v5 + 16LL))(v5);
  return 1;
}
