/*
 * XREFs of ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x18017873C
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18001B620 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18011C390 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CVisualGroup::SetExcludeSubtree(CVisualGroup *this, char a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 20) )
  {
    v5 = *((_QWORD *)this + 7);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8 * v2) + 8LL);
    if ( v6 )
    {
      *(_BYTE *)(v6 + 93) &= ~0x20u;
      *(_BYTE *)(v6 + 93) |= 32 * a2;
      v2 = (unsigned int)(v2 + 1);
    }
    else
    {
      CWeakReferenceBase::Release(*(CWeakReferenceBase **)(v5 + 8 * v2));
      DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((__int64)this + 56, v2);
    }
  }
  v7 = 0LL;
  while ( (unsigned int)v7 < *((_DWORD *)this + 28) )
  {
    v8 = *((_QWORD *)this + 11);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8 * v7) + 8LL);
    if ( v9 )
    {
      *(_BYTE *)(v9 + 93) &= ~0x20u;
      *(_BYTE *)(v9 + 93) |= 32 * a2;
      v7 = (unsigned int)(v7 + 1);
    }
    else
    {
      CWeakReferenceBase::Release(*(CWeakReferenceBase **)(v8 + 8 * v7));
      DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((__int64)this + 88, v7);
    }
  }
}
