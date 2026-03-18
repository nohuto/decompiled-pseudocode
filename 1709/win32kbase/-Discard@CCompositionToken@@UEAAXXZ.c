/*
 * XREFs of ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C00254C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C002541C (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C003A5C4 (-Release@CRegion@@QEBAJXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CCompositionToken::Discard(CCompositionToken *this, __int64 a2, __int64 a3)
{
  unsigned int i; // edi
  __int64 v5; // rsi
  CRegion *v6; // rcx
  void *v7; // rcx

  if ( *((int *)this + 6) < 3 )
    CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = 0; i < *((_DWORD *)this + 18); ++i )
    {
      v5 = 32LL * i;
      v6 = *(CRegion **)(*((_QWORD *)this + 8) + v5 + 24);
      if ( v6 )
        CRegion::Release(v6);
      v7 = *(void **)(*((_QWORD *)this + 8) + v5 + 8);
      if ( v7 )
        ObfDereferenceObject(v7);
    }
    Win32FreePool(*((_QWORD *)this + 8), a2, a3);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 6) = 6;
}
