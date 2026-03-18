/*
 * XREFs of ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0005FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0005D98 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?UpdateStats@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C00067C8 (-UpdateStats@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00112A0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CFlipToken::Retire(CFlipToken *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  __int128 v2; // xmm0
  __int128 v4; // xmm1
  int v5; // eax
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_OWORD *)a2;
  v4 = *((_OWORD *)a2 + 1);
  *((_DWORD *)this + 6) = 5;
  v8[0] = v2;
  v8[1] = v4;
  CFlipToken::TraceStateChanged(this);
  v5 = *((_DWORD *)this + 24);
  v6 = *((_QWORD *)this + 5);
  v7 = *((_QWORD *)this + 4);
  LODWORD(v8[0]) = v5;
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v7 + 32)) >= 0 )
  {
    CCompositionSurface::UpdateStats((CCompositionSurface *)(v7 + 24), v6, (const struct DXGI_FRAME_STATISTICS *)v8);
    CPushLock::ReleaseLock((CPushLock *)(v7 + 32));
  }
}
