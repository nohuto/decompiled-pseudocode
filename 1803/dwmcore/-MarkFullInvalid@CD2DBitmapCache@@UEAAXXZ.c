/*
 * XREFs of ?MarkFullInvalid@CD2DBitmapCache@@UEAAXXZ @ 0x180077970
 * Callers:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800494C0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapCache::MarkFullInvalid(CD2DBitmapCache *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 40LL))(v3 + 16);
  if ( *((_DWORD *)this + 16) )
  {
    do
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v2) + 264LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 16) );
  }
}
