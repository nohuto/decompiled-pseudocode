/*
 * XREFs of ?GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180163D90
 * Callers:
 *     <none>
 * Callees:
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800B0CC0 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800B1154 (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 */

__int64 __fastcall CFlipChain::GetBitmapSource(
        CFlipChain *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  __int64 v6; // r9
  CFlipChain *v7; // rcx
  CFlipChain *v9; // [rsp+30h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 3) + 392LL);
  *((_QWORD *)this + 33) = v6;
  if ( v6 )
  {
    if ( *((_DWORD *)this + 38) )
    {
      CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard(
        (CFlipChain::CSyncSharedDataGuard *)&v9,
        (CFlipChain *)((char *)this - 8));
      v7 = v9;
      *((_QWORD *)this + 33) = 0LL;
      if ( v7 )
        CFlipChain::WriteSharedDataToDwm(v7);
    }
  }
  return CBitmapResource::GetBitmapSource(this, a2, a3);
}
