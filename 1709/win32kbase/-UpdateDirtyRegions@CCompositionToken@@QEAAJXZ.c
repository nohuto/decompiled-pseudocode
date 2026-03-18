/*
 * XREFs of ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C002541C
 * Callers:
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C00254C0 (-Discard@CCompositionToken@@UEAAXXZ.c)
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C0025560 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0038840 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00388B0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBVCRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C00389D0 (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBVCRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall CCompositionToken::UpdateDirtyRegions(CCompositionToken *this)
{
  int v1; // ebx
  unsigned int i; // edi
  _QWORD *v4; // rax
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  int updated; // ebp

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    v4 = (_QWORD *)(*((_QWORD *)this + 9) + 32LL * i);
    v5 = v4[1];
    v6 = v4[3];
    v7 = v4[2];
    updated = CPushLock::AcquireLockExclusive((CPushLock *)(v5 + 32));
    if ( updated >= 0 )
    {
      updated = CCompositionSurface::UpdateBufferDirtyRegion(v5 + 24, v7, v6);
      CPushLock::ReleaseLock((CPushLock *)(v5 + 32));
    }
    if ( v1 >= 0 && updated < 0 )
      v1 = updated;
  }
  return (unsigned int)v1;
}
