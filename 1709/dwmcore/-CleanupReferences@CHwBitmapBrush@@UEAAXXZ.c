/*
 * XREFs of ?CleanupReferences@CHwBitmapBrush@@UEAAXXZ @ 0x180086240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801AA640 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 */

void __fastcall CHwBitmapBrush::CleanupReferences(CHwBitmapBrush *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 88LL))(v2, 0LL);
  if ( *((_QWORD *)this + 4) )
  {
    v3 = *((_QWORD *)this + 1);
    v5 = 0LL;
    if ( (int)CD2DContext::GetCachedEffectNoRef(v3, 0LL, &v5) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v5 + 112LL))(v5, 0LL, 0LL, 1LL);
    if ( (int)CD2DContext::GetCachedEffectNoRef(*((_QWORD *)this + 1), 3LL, &v5) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v5 + 112LL))(v5, 0LL, 0LL, 1LL);
    v4 = *((_QWORD *)this + 4);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
}
