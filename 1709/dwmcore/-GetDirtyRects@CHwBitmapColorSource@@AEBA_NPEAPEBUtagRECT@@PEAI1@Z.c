/*
 * XREFs of ?GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1801B5AE0
 * Callers:
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1801B4580 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801B56F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwBitmapColorSource::GetDirtyRects(
        CHwBitmapColorSource *this,
        const struct tagRECT **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  char v4; // r10
  __int64 v5; // rcx

  v4 = 0;
  *a4 = *((_DWORD *)this + 44);
  v5 = *((_QWORD *)this + 27);
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, const struct tagRECT **, unsigned int *))(*(_QWORD *)v5 + 48LL))(
             v5,
             a2,
             a3);
  return v4;
}
