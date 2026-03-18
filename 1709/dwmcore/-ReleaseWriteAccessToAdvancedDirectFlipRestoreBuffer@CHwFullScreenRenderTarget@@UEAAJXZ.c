/*
 * XREFs of ?ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x1801B8A50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer(
        CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  signed int v3; // eax

  v1 = *((_QWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 144LL))(v1);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x143u);
  }
  return v2;
}
