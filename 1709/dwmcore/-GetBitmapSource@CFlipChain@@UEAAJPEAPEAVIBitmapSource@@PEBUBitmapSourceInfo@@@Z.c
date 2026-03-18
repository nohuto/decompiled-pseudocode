/*
 * XREFs of ?GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801653C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x18016494C (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1801667DC (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 */

__int64 __fastcall CFlipChain::GetBitmapSource(
        CFlipChain *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  __int64 v5; // r8
  CFlipChain *v6; // rcx
  struct IBitmapSource *v7; // rcx
  CFlipChain *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 352LL);
  *((_QWORD *)this + 34) = v5;
  if ( v5 )
  {
    if ( *((_DWORD *)this + 40) )
    {
      CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard(
        (CFlipChain::CSyncSharedDataGuard *)&v9,
        (CFlipChain *)((char *)this - 8));
      v6 = v9;
      *((_QWORD *)this + 34) = 0LL;
      if ( v6 )
        CFlipChain::WriteSharedDataToDwm(v6);
    }
  }
  v7 = (struct IBitmapSource *)*((_QWORD *)this + 9);
  *a2 = v7;
  if ( v7 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v7 + 8LL))(v7);
  return 0LL;
}
