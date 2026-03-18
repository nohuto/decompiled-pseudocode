/*
 * XREFs of ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x18014A430
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18013F0AC (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::MagnifierSetExclude(CComposition *this, char a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rcx

  v2 = 0LL;
  if ( *((_DWORD *)this + 244) )
  {
    v5 = (_QWORD *)((char *)this + 952);
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*v5 + 8 * v2) + 8LL);
      if ( v6 )
      {
        *(_BYTE *)(v6 + 94) &= ~2u;
        *(_BYTE *)(v6 + 94) |= 2 * a2;
        v2 = (unsigned int)(v2 + 1);
      }
      else
      {
        DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((__int64)v5, v2);
      }
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 244) );
  }
}
