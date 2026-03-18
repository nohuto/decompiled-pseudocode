/*
 * XREFs of ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C0006100
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0006928 (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00111F8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CFlipToken::GetEarlyTokenSync(CFlipToken *this)
{
  __int64 v1; // rsi
  bool v2; // bl
  unsigned __int64 v3; // rbp
  _BYTE v5[116]; // [rsp+20h] [rbp-88h] BYREF
  int v6; // [rsp+94h] [rbp-14h]

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v1 + 32)) >= 0 )
  {
    if ( (int)CCompositionSurface::GetBufferAttributes(
                (CCompositionSurface *)(v1 + 24),
                v3,
                (struct CSM_BUFFER_ATTRIBUTES *)v5) >= 0 )
      v2 = (v6 & 0x400) != 0;
    CPushLock::ReleaseLock((CPushLock *)(v1 + 32));
  }
  return v2;
}
