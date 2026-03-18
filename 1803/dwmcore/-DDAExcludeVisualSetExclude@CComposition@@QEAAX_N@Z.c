/*
 * XREFs of ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x18013E538
 * Callers:
 *     ?Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z @ 0x1801700D0 (-Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18013F0AC (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::DDAExcludeVisualSetExclude(CComposition *this, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rdx

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 100LL) && *((_DWORD *)this + 252) )
  {
    v7 = (_QWORD *)((char *)this + 984);
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)(*v7 + 8 * v4) + 8LL);
      if ( v8 )
      {
        *(_BYTE *)(v8 + 94) &= ~2u;
        *(_BYTE *)(v8 + 94) |= 2 * a2;
        v4 = (unsigned int)(v4 + 1);
      }
      else
      {
        DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v7, (unsigned int)v4, a3, a4);
      }
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 252) );
  }
}
