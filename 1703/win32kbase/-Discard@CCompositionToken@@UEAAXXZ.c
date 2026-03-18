/*
 * XREFs of ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0011AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C0011A4C (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C0012A44 (-Release@CRegion@@QEBAJXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall CCompositionToken::Discard(CCompositionToken *this)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  CRegion *v4; // rcx
  void *v5; // rcx

  if ( *((int *)this + 6) < 3 )
    CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = 0; i < *((_DWORD *)this + 18); ++i )
    {
      v3 = 32LL * i;
      v4 = *(CRegion **)(*((_QWORD *)this + 8) + v3 + 24);
      if ( v4 )
        CRegion::Release(v4);
      v5 = *(void **)(*((_QWORD *)this + 8) + v3 + 8);
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    Win32FreePool(*((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 6) = 6;
}
