/*
 * XREFs of ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x18013F530
 * Callers:
 *     ?Render@CHwndRenderTargetDDA@@UEAAJ_NPEA_N@Z @ 0x180155F80 (-Render@CHwndRenderTargetDDA@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18013312C (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::DDAExcludeVisualSetExclude(CComposition *this, char a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rcx

  v2 = 0LL;
  if ( *((_DWORD *)this + 254) )
  {
    v5 = (_QWORD *)((char *)this + 992);
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*v5 + 8 * v2) + 8LL);
      if ( v6 )
      {
        *(_BYTE *)(v6 + 90) &= ~0x20u;
        *(_BYTE *)(v6 + 90) |= 32 * a2;
        v2 = (unsigned int)(v2 + 1);
      }
      else
      {
        DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((__int64)v5, v2);
      }
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 254) );
  }
}
