/*
 * XREFs of ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x18011B914
 * Callers:
 *     ?Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z @ 0x180147C80 (-Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18011C390 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::DDAExcludeVisualSetExclude(CComposition *this, char a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rdx

  v3 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 100LL) && *((_DWORD *)this + 246) )
  {
    v6 = (_QWORD *)((char *)this + 960);
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(*v6 + 8 * v3) + 8LL);
      if ( v7 )
      {
        *(_BYTE *)(v7 + 93) &= ~0x20u;
        *(_BYTE *)(v7 + 93) |= 32 * a2;
        v3 = (unsigned int)(v3 + 1);
      }
      else
      {
        DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v6, (unsigned int)v3, a3);
      }
    }
    while ( (unsigned int)v3 < *((_DWORD *)this + 246) );
  }
}
